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
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	struct<123> Local_94 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_217 = 16;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
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
	var uLocal_252 = 0;
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
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
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
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 16;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
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
	struct<6> Local_568 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_574 = 0;
	var uLocal_575 = 16;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
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
	struct<5> Local_740[2];
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	bool bLocal_757 = 0;
	bool bLocal_758 = 0;
	bool bLocal_759 = 0;
	bool bLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
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
	iLocal_92 = 20;
	iLocal_93 = 33;
	bLocal_757 = true;
	bLocal_758 = true;
	bLocal_759 = true;
	bLocal_760 = true;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_746(ScriptParam_0);
	}
	while (true)
	{
		func_745();
		if (func_737())
		{
			func_391(1);
		}
		if (func_388(0))
		{
			Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 3;
		}
		if (func_387(NETWORK::PARTICIPANT_ID_TO_INT()) > -1)
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		switch (func_386(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 10))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						GAMEPLAY::SET_BIT(&uLocal_751, 10);
					}
				}
				UI::REQUEST_ADDITIONAL_TEXT("FMINT", 0);
				if (func_385() && UI::HAS_THIS_ADDITIONAL_TEXT_LOADED("FMINT", 0))
				{
					if (func_384() > 0)
					{
						func_383(&uLocal_403, 1, 0, "Lamar", 0, 1);
						func_382(0);
						func_381(4, 1);
						func_381(1, 1);
						func_381(0, 1);
						func_381(2, 1);
						func_381(3, 0);
						func_379(iLocal_93, 1);
						Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 2;
						if (bLocal_759)
						{
							Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = -2;
						}
						else
						{
							Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = -1;
						}
					}
				}
				if (func_384() == 4)
				{
					Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 4;
				}
				if (func_384() == 6 && Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] < 4)
				{
					Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 6;
				}
				break;
			
			case 2:
				func_358();
				func_20();
				if (func_384() == 4)
				{
					Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 4;
				}
				if (func_384() == 6 && Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] < 4)
				{
					Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 5;
				}
				break;
			
			case 4:
				Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 5;
				break;
			
			case 5:
				func_18(&(Local_568.f_5));
				if (func_17(&(Local_568.f_5)))
				{
					Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_10(iLocal_92);
				Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 6;
			
			case 6:
				func_391(0);
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_384())
			{
				case 0:
					Local_568 = 2;
					break;
				
				case 2:
					func_9();
					func_8();
					func_2();
					if (func_1())
					{
						Local_568 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (!bLocal_757)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_568.f_1, 1))
		{
			return 1;
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_568.f_1, 2))
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	func_3();
}

void func_3()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_568.f_1, 3))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 0))
			{
				GAMEPLAY::SET_BIT(&(Local_568.f_1), 3);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_568.f_1, 4))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
			{
				GAMEPLAY::SET_BIT(&(Local_568.f_1), 4);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_568.f_1, 5))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 3))
			{
				GAMEPLAY::SET_BIT(&(Local_568.f_1), 5);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_568.f_1, 6))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 4))
			{
				GAMEPLAY::SET_BIT(&(Local_568.f_1), 6);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_568.f_1, 7))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 5))
			{
				GAMEPLAY::SET_BIT(&(Local_568.f_1), 7);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_568.f_1, 8))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 6))
			{
				GAMEPLAY::SET_BIT(&(Local_568.f_1), 8);
			}
		}
		switch (Local_568.f_2)
		{
			case 0:
				if (GAMEPLAY::IS_BIT_SET(Local_568.f_1, 3))
				{
					if (func_4(&(Local_568.f_3), &(Local_568.f_4), -1031.788f, -2731.816f, 19.0546f, 240.4822f, &uLocal_575))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_568.f_3), 1, 0, 0);
						Local_568.f_2 = 2;
					}
				}
				break;
			
			case 2:
				if (GAMEPLAY::IS_BIT_SET(Local_568.f_1, 4))
				{
					Local_568.f_2 = 1;
				}
				break;
			
			case 1:
				if (GAMEPLAY::IS_BIT_SET(Local_568.f_1, 5))
				{
					Local_568.f_2 = 3;
				}
				break;
			
			case 3:
				if (GAMEPLAY::IS_BIT_SET(Local_568.f_1, 6))
				{
					Local_568.f_2 = 4;
				}
				break;
			
			case 4:
				if (GAMEPLAY::IS_BIT_SET(Local_568.f_1, 7))
				{
					Local_568.f_2 = 5;
				}
				break;
			
			case 5:
				if (GAMEPLAY::IS_BIT_SET(Local_568.f_1, 8))
				{
					Local_568.f_2 = 6;
				}
				break;
			}
	}
}

int func_4(var uParam0, var uParam1, vector3 vParam2, float fParam5, var uParam6)
{
	if (func_7(Global_2524719.f_785) && func_7(Global_2524719.f_786))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (func_6(uParam0, Global_2524719.f_785, vParam2, fParam5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(NETWORK::NET_TO_VEH(*uParam0), 1);
			}
		}
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam1))
		{
			if (func_5(uParam1, *uParam0, 25, Global_2524719.f_786, -1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(*uParam1), 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2524719.f_785);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2524719.f_786);
				ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(*uParam0), 0);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(*uParam1), 1);
				func_383(uParam6, 8, NETWORK::NET_TO_PED(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_5(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_PED(*uParam0), iParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
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

int func_6(var uParam0, int iParam1, vector3 vParam2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	var uVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		GAMEPLAY::CLEAR_AREA_OF_VEHICLES(vParam2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	uVar1 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, uParam5, iParam7, iParam6, iParam14);
	if (ENTITY::DOES_ENTITY_EXIST(uVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(uVar1);
		Global_2524719.f_6178 = uVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(uVar1, 1);
			}
			ENTITY::_SET_ENTITY_SOMETHING(uVar1, iParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(uVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
				}
				if (bParam13)
				{
					NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER::PLAYER_ID(), 1);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(uVar1, iParam9);
			unk_0xB2E0C0D6922D31F2(uVar1, 1);
			if (bParam12)
			{
				unk_0xFC40CBF7B90CA77C(uVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(uVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_7(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_8()
{
}

void func_9()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (bLocal_757)
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_568.f_1, 2))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_740[iVar0 /*5*/].f_3, 2))
					{
						GAMEPLAY::SET_BIT(&(Local_568.f_1), 2);
					}
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(Local_568.f_1, 1))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_740[iVar0 /*5*/].f_3, 1))
				{
					GAMEPLAY::SET_BIT(&(Local_568.f_1), 1);
				}
			}
		}
		iVar0++;
	}
}

void func_10(int iParam0)
{
	if (!func_13(PLAYER::PLAYER_ID(), 1))
	{
		return;
	}
	if (!func_11(PLAYER::PLAYER_ID()) == iParam0)
	{
		return;
	}
}

int func_11(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2423801[iParam0 /*413*/].f_1;
	}
	return 0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
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

bool func_13(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_11(iParam0) != 0;
	}
	return func_14(iParam0, bParam1);
}

int func_14(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_15(iParam0))
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

bool func_15(int iParam0)
{
	return func_16(iParam0);
}

var func_16(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

int func_17(var uParam0)
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

void func_18(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_19(uParam0, 0, 0);
		}
	}
}

void func_19(var uParam0, bool bParam1, bool bParam2)
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

void func_20()
{
	switch (func_387(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		case -2:
			func_189();
			break;
		
		case -1:
			func_188();
			break;
		
		case 0:
			func_29();
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			func_21();
			break;
	}
}

void func_21()
{
	switch (iLocal_756)
	{
		case 0:
			if (!func_22(iLocal_93))
			{
				GAMEPLAY::SET_BIT(&(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 2);
				Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 99;
			}
			break;
	}
}

bool func_22(int iParam0)
{
	return func_23(iParam0, 5, 1);
}

int func_23(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_93284.f_1336[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_28() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_24(func_27(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_106070.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_24(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2535519[iParam0 /*3*/][func_25(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
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

int func_26()
{
	return Global_1312736;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 8488;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		default:
			break;
	}
	return 9954;
}

int func_28()
{
	return Global_25459;
}

void func_29()
{
	int iVar0;
	
	if (func_187())
	{
		if (func_12(PLAYER::PLAYER_ID(), 1, 1))
		{
			func_186(0);
		}
	}
	if (!func_185(&uLocal_393))
	{
		func_19(&uLocal_393, 0, 0);
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 21))
	{
		GAMEPLAY::SET_BIT(&uLocal_751, 21);
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 3))
	{
		if (!func_185(&uLocal_391))
		{
			func_19(&uLocal_391, 0, 0);
		}
		else if (GAMEPLAY::IS_BIT_SET(uLocal_751, 21))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (func_184(&uLocal_391, 3000, 0))
					{
						GAMEPLAY::SET_BIT(&uLocal_751, 3);
					}
				}
			}
		}
		if (func_184(&uLocal_391, 40000, 0))
		{
			GAMEPLAY::SET_BIT(&uLocal_751, 3);
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 16))
	{
		if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (!UI::IS_PAUSE_MENU_ACTIVE())
			{
				GAMEPLAY::SET_BIT(&uLocal_751, 16);
				func_183(&uLocal_391);
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
	{
		if (!func_185(&uLocal_397))
		{
			func_19(&uLocal_397, 0, 0);
		}
		else if (!GAMEPLAY::IS_BIT_SET(uLocal_752, 1))
		{
			if (func_184(&uLocal_397, 10000, 0))
			{
				GAMEPLAY::SET_BIT(&uLocal_752, 1);
				func_183(&uLocal_397);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(uLocal_751, 19))
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 18))
			{
				if (!func_181() || func_184(&uLocal_391, 5000, 0))
				{
					func_180(0);
					GAMEPLAY::SET_BIT(&uLocal_751, 18);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 0);
					}
				}
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_751, 18))
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 2))
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				iVar0 = 0;
				GAMEPLAY::SET_BIT(&iVar0, 3);
				GAMEPLAY::SET_BIT(&iVar0, 4);
				GAMEPLAY::SET_BIT(&iVar0, 5);
				if (func_91(&uLocal_403, 19, "FM_1AU", "FM_ICALL", iVar0, 0))
				{
					func_90(1);
					GAMEPLAY::SET_BIT(&uLocal_751, 2);
					if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 20))
					{
						func_81(19, 3, 1);
						GAMEPLAY::SET_BIT(&uLocal_751, 20);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						AI::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
					}
				}
			}
		}
		else if (!func_80(0))
		{
			if (!func_79())
			{
				if (!func_77())
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 12))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							AI::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 0, 1);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 1);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 1);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 1);
						}
						GAMEPLAY::SET_BIT(&uLocal_751, 12);
						func_19(&uLocal_395, 0, 0);
						func_19(&uLocal_399, 0, 0);
					}
				}
			}
		}
		if (GAMEPLAY::IS_BIT_SET(uLocal_751, 12))
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 17))
			{
				if (!UI::IS_PAUSE_MENU_ACTIVE())
				{
					func_73();
					GAMEPLAY::SET_BIT(&uLocal_751, 17);
					func_183(&uLocal_391);
				}
			}
			else if (!func_181())
			{
				if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 23))
				{
					if (func_184(&uLocal_399, 4500, 0))
					{
						GAMEPLAY::SET_BIT(&uLocal_751, 23);
						GAMEPLAY::SET_BIT(&(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 3);
					}
				}
				if (func_184(&uLocal_395, 15000, 0))
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 22))
					{
						GAMEPLAY::SET_BIT(&uLocal_751, 22);
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (GAMEPLAY::IS_BIT_SET(uLocal_751, 14))
					{
						GAMEPLAY::CLEAR_BIT(&uLocal_751, 14);
					}
					if (!func_22(iLocal_93))
					{
						if (GAMEPLAY::IS_BIT_SET(uLocal_751, 13))
						{
							GAMEPLAY::CLEAR_BIT(&uLocal_751, 13);
						}
						if (GAMEPLAY::IS_BIT_SET(uLocal_751, 25) || (!GAMEPLAY::IS_BIT_SET(uLocal_751, 25) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)))
						{
							if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 0))
							{
								if (GAMEPLAY::IS_BIT_SET(uLocal_751, 15))
								{
									GAMEPLAY::CLEAR_BIT(&uLocal_751, 15);
								}
								if (UI::DOES_BLIP_EXIST(Global_93284.f_223[iLocal_93]))
								{
									func_67("GET_AMMU", 0);
									GAMEPLAY::SET_BIT(&uLocal_751, 0);
									GAMEPLAY::SET_BIT(&uLocal_751, 25);
									if (UI::DOES_BLIP_EXIST(Global_93284.f_223[iLocal_93]))
									{
										if (!GAMEPLAY::IS_BIT_SET(Global_2524719.f_784, 2))
										{
											UI::SET_BLIP_ROUTE(Global_93284.f_223[iLocal_93], 1);
										}
										func_379(iLocal_93, 1);
									}
								}
							}
							else if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_784, 2))
							{
								if (UI::DOES_BLIP_EXIST(Global_93284.f_223[iLocal_93]))
								{
									if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 15))
									{
										UI::SET_BLIP_ROUTE(Global_93284.f_223[iLocal_93], 0);
										GAMEPLAY::SET_BIT(&uLocal_751, 15);
									}
								}
							}
							else if (UI::DOES_BLIP_EXIST(Global_93284.f_223[iLocal_93]))
							{
								if (GAMEPLAY::IS_BIT_SET(uLocal_751, 15))
								{
									UI::SET_BLIP_ROUTE(Global_93284.f_223[iLocal_93], 1);
									GAMEPLAY::CLEAR_BIT(&uLocal_751, 15);
								}
							}
						}
					}
					else
					{
						if (GAMEPLAY::IS_BIT_SET(uLocal_751, 0))
						{
							GAMEPLAY::CLEAR_BIT(&uLocal_751, 0);
						}
						if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 13))
						{
							func_67("GET_GUN", 0);
							func_66(1);
							GAMEPLAY::SET_BIT(&uLocal_751, 13);
						}
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 14))
				{
					UI::CLEAR_HELP(1);
					if (GAMEPLAY::IS_BIT_SET(uLocal_751, 0))
					{
						GAMEPLAY::CLEAR_BIT(&uLocal_751, 0);
					}
					if (GAMEPLAY::IS_BIT_SET(uLocal_751, 13))
					{
						GAMEPLAY::CLEAR_BIT(&uLocal_751, 13);
					}
					if (UI::DOES_BLIP_EXIST(Global_93284.f_223[iLocal_93]))
					{
						UI::SET_BLIP_ROUTE(Global_93284.f_223[iLocal_93], 0);
						UI::SET_BLIP_FLASHES(Global_93284.f_223[iLocal_93], 0);
						func_379(iLocal_93, 0);
					}
					func_67("LOSE_COP", 0);
					GAMEPLAY::SET_BIT(&uLocal_751, 14);
				}
			}
		}
	}
	else if (func_184(&uLocal_393, 300000, 0))
	{
		GAMEPLAY::SET_BIT(&uLocal_751, 18);
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 0))
	{
		if (((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 0)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_appistol"), 0)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_microsmg"), 0))
		{
			if (func_64())
			{
				func_59(1);
				GAMEPLAY::SET_BIT(&(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 0);
				if (func_22(iLocal_93))
				{
				}
			}
		}
		else
		{
			func_42(400);
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 1))
	{
		if (!func_40())
		{
			GAMEPLAY::SET_BIT(&(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 1);
			func_33();
			func_32("FM_IHELP_AMMU", -1);
			if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 31))
			{
				func_30(119, 1, -1, 1);
				func_30(115, 1, -1, 1);
				GAMEPLAY::SET_BIT(&uLocal_751, 31);
			}
			func_183(&uLocal_391);
			if (bLocal_757)
			{
				if (bLocal_758)
				{
					Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 3;
				}
				else
				{
					Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 1;
				}
			}
			else
			{
				Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 99;
			}
		}
	}
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_31())
	{
		iVar0 = Global_2566070[iParam0 /*3*/][func_25(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_31()
{
	return 1;
	return 0;
}

void func_32(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_33()
{
	if (!func_39())
	{
		return;
	}
	if (!GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312576.f_9)
	{
		return;
	}
	func_34();
}

void func_34()
{
	func_36();
	func_35(0);
}

void func_35(bool bParam0)
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

void func_36()
{
	if (!func_38())
	{
	}
	if (func_39())
	{
		UI::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312576.f_12));
		func_37();
		UI::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_37()
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

int func_38()
{
	if (!func_39())
	{
		return 0;
	}
	UI::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312576.f_12));
	func_37();
	return UI::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_39()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_40()
{
	return ((((((((((func_41(28) || func_41(29)) || func_41(30)) || func_41(31)) || func_41(32)) || func_41(33)) || func_41(34)) || func_41(35)) || func_41(36)) || func_41(37)) || func_41(38));
}

int func_41(int iParam0)
{
	return func_23(iParam0, 6, 1);
}

void func_42(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = func_56(PLAYER::PLAYER_ID());
		if (iVar0 < iParam0)
		{
			if (func_55())
			{
				func_43(1734805203, (iParam0 - iVar0), &uVar1, 0, 0, 0);
			}
			else
			{
				NETWORKCASH::NETWORK_EARN_FROM_HOLDUPS((iParam0 - iVar0));
			}
		}
	}
}

void func_43(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_55())
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
				func_44(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_44(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -597978445:
			if (iParam1 > 0)
			{
				func_44(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
			func_44(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_44(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_55())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_26()) || unk_0x64BE694244417BDA())
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
			*uParam0 = func_51(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_50(1, iParam4);
			Global_4263477 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_45(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_45(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_46(iParam0);
	}
}

void func_46(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_55())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_49(iParam0))
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
		func_47(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_47(var uParam0)
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
	func_48(&(uParam0->f_13));
	func_48(&(uParam0->f_13.f_13));
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

void func_48(var uParam0)
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

int func_49(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

void func_50(int iParam0, var uParam1)
{
	Global_2460521 = uParam1;
	Global_2460520 = iParam0;
}

int func_51(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61.f_2 == 0)
		{
			if (!func_55())
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
				func_52(Global_4262927[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_52(struct<62> Param0, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, int iParam80)
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
	iVar35 = func_54(vVar0.y);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_53();
		unk_0xA40CC53DF8E50837(1, &vVar0, 35, iVar35);
	}
}

void func_53()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_54(var uParam0)
{
	var uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, uParam0);
	return uVar0;
}

int func_55()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

var func_56(int iParam0)
{
	var uVar0;
	
	uVar0 = func_57(iParam0);
	return uVar0;
}

int func_57(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return unk_0xCCADB536D2A7894D(-1);
		}
		else if (func_58(iParam0))
		{
			return Global_1589747[iParam0 /*790*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_58(int iParam0)
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

void func_59(bool bParam0)
{
	func_60(28, bParam0);
	func_60(29, bParam0);
	func_60(30, bParam0);
	func_60(31, bParam0);
	func_60(32, bParam0);
	func_60(33, bParam0);
	func_60(34, bParam0);
	func_60(35, bParam0);
	func_60(36, bParam0);
	func_60(37, bParam0);
	func_60(38, bParam0);
}

void func_60(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_23(iParam0, 14, 1))
		{
			func_63(iParam0, 14, 1);
		}
	}
	else if (func_23(iParam0, 14, 1))
	{
		func_61(iParam0, 14, 1);
	}
}

void func_61(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_93284.f_1336[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_28() == 0)
		{
			uVar0 = func_24(func_27(iParam0), -1, 0);
			GAMEPLAY::CLEAR_BIT(&uVar0, iParam1);
			func_62(func_27(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

void func_62(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_25(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_63(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_93284.f_1336[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_28() == 0)
		{
			uVar0 = func_24(func_27(iParam0), -1, 0);
			GAMEPLAY::SET_BIT(&uVar0, iParam1);
			func_62(func_27(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

bool func_64()
{
	return ((((((((((func_65(28) || func_65(29)) || func_65(30)) || func_65(31)) || func_65(32)) || func_65(33)) || func_65(34)) || func_65(35)) || func_65(36)) || func_65(37)) || func_65(38));
}

int func_65(int iParam0)
{
	return func_23(iParam0, 3, 0);
}

void func_66(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1645894, 19))
		{
			GAMEPLAY::SET_BIT(&Global_1645894, 19);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1645894, 19))
	{
		GAMEPLAY::CLEAR_BIT(&Global_1645894, 19);
	}
}

void func_67(char* sParam0, bool bParam1)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (UI::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_71(sParam0))
	{
		return;
	}
	func_34();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312576.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_70();
	func_69(bParam1);
	func_68();
}

void func_68()
{
	GAMEPLAY::SET_BIT(&(Global_1312576.f_59), 1);
}

void func_69(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1312576.f_59), 0);
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_1312576.f_59), 0);
}

void func_70()
{
	Global_1312576.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312576.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_71(var uParam0)
{
	if (!func_39())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_72(uParam0);
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(uParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_12));
}

bool func_72(var uParam0)
{
	if (!func_39())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(uParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_16));
}

void func_73()
{
	struct<13> Var0;
	bool bVar13;
	bool bVar14;
	
	Var0 = { func_76(PLAYER::PLAYER_ID()) };
	bVar13 = NETWORK::_0x67A5589628E0CFF6();
	bVar14 = func_75(&Var0);
	if (!bVar13 && !bVar14)
	{
		func_74("HLP_TAXI3", 9000);
	}
	else if (bVar13 && !bVar14)
	{
		func_74("HLP_SOC2", 9000);
	}
	else if (bVar13 && bVar14)
	{
		func_74("HLP_SOC1", 9000);
	}
}

void func_74(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam1);
}

int func_75(var uParam0)
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

struct<13> func_76(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

bool func_77()
{
	return func_78();
}

bool func_78()
{
	return Global_1361724.f_40 == 3;
}

int func_79()
{
	if (Global_15822 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0)
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

void func_81(int iParam0, int iParam1, bool bParam2)
{
	Global_3069 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 145)
	{
		func_83();
		if (iParam1 == 4)
		{
			Global_106070.f_28022[iParam0 /*29*/].f_12[0] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_12[1] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_12[2] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_24[0] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_24[1] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_106070.f_28022[iParam0 /*29*/].f_12[iParam1] == 1 && Global_106070.f_28022[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_106070.f_28022[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_71205)
			{
				if (iParam1 != 4)
				{
					if (Global_14513 != iParam1)
					{
						Global_3042[iParam1 /*4*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
						Global_3059[iParam1] = 1;
						Global_3064[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14513)
					{
					}
					else
					{
						Global_2993[1 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
						Global_2993[1 /*6*/].f_5 = iParam1;
						func_82();
					}
				}
				else
				{
					Global_2993[1 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
					Global_2993[1 /*6*/].f_5 = iParam1;
					func_82();
				}
			}
			else
			{
				Global_2993[1 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
				Global_2993[1 /*6*/].f_5 = iParam1;
				func_82();
			}
		}
	}
}

void func_82()
{
	char cVar0[64];
	char cVar16[64];
	var uVar32;
	
	StringCopy(&cVar0, UI::_GET_LABEL_TEXT(&(Global_106070.f_28022[Global_3069 /*29*/].f_7)), 64);
	if (Global_3088 == 0)
	{
		UI::_SET_NOTIFICATION_TEXT_ENTRY("");
		StringCopy(&cVar16, UI::_GET_LABEL_TEXT(&(Global_2993[1 /*6*/])), 64);
		uVar32 = UI::_GET_LABEL_TEXT("CELL_253");
		UI::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 3, uVar32, &cVar16);
	}
	else
	{
		UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_255");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2993[1 /*6*/]));
		UI::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 3, "", 0);
	}
	GAMEPLAY::CLEAR_BIT(&Global_2383, 0);
}

void func_83()
{
	if (func_89(14))
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
		Global_14513 = func_84();
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

var func_84()
{
	func_85();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_85()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_88(Global_106070.f_2355.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_87(PLAYER::PLAYER_PED_ID());
			if (func_86(iVar0) && (!func_89(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_86(Global_106070.f_2355.f_539.f_4301))
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

bool func_86(int iParam0)
{
	return iParam0 < 3;
}

int func_87(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_88(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_88(int iParam0)
{
	if (func_86(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_89(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_90(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&Global_2384, 17);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2384, 17);
	}
}

int func_91(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_178())
	{
		return 0;
	}
	if (func_177())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_92(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_92(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, int iParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (UI::_GET_LENGTH_OF_STRING(sParam2) > 7)
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (UI::_GET_LENGTH_OF_STRING(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_176(sParam2, sParam3);
	iVar2 = 0;
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam7))
	{
		iVar2 = GAMEPLAY::GET_HASH_KEY(iParam7);
	}
	if (func_175(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_171(uParam6))
	{
		return 0;
	}
	if (func_168(iVar0, iVar1, iVar2))
	{
		if (func_167())
		{
			return 0;
		}
		func_166();
		return func_99(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, iParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_98(iParam4))
	{
		return 0;
	}
	func_93(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_93(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1361724.f_40.f_1 = iParam0;
	Global_1361724.f_40.f_2 = iParam1;
	Global_1361724.f_40.f_3 = iParam2;
	StringCopy(&(Global_1361724.f_40.f_4), sParam3, 16);
	Global_1361724.f_40.f_8 = iParam4;
	Global_1361724.f_40.f_9 = iParam5;
	Global_1361724.f_40.f_14 = uParam6;
	func_94(iParam4);
	func_166();
	Global_1361724.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_94(int iParam0)
{
	if (func_97(iParam0))
	{
		func_96();
		return;
	}
	func_95();
}

void func_95()
{
	Global_1361724.f_40.f_10 = 0;
}

void func_96()
{
	Global_1361724.f_40.f_10 = 1;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_98(int iParam0)
{
	return iParam0 > Global_1361724.f_40.f_8;
}

int func_99(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_165();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_162(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_159(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_162(uParam0, sParam3, sParam4);
		}
		return func_142(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_141(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_131(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_130(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_100(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_100(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_129();
	bVar0 = true;
	if (func_102(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_101(120000);
		return 1;
	}
	return 0;
}

void func_101(int iParam0)
{
	Global_1361724.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1361724.f_40.f_12 = 1;
}

int func_102(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_128();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_122(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1361724.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_121(uParam5, bParam6, &iVar3);
	uVar5 = func_119(iParam7, &iVar3);
	iVar6 = 0;
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (GAMEPLAY::IS_BIT_SET(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_118(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_106(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(uParam4, 0))
	{
		func_105();
	}
	func_129();
	func_104();
	func_103();
	return 1;
}

void func_103()
{
	Global_1361724.f_57 = 0;
	Global_1361724.f_57.f_1 = 0;
}

void func_104()
{
	Global_1361724.f_40 = 3;
}

void func_105()
{
	GAMEPLAY::SET_BIT(&Global_2383, 8);
}

int func_106(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_107(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3090 = iParam6;
			GAMEPLAY::SET_BIT(&Global_4268330, 0);
		}
		return 1;
	}
	return 0;
}

int func_107(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_83();
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
		if (Global_4268315 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_117() == 0)
	{
		func_115();
		return 0;
	}
	func_114(Global_4268314);
	StringCopy(&(Global_4267065[Global_4268314 /*104*/]), sParam1, 64);
	Global_4267065[Global_4268314 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4267065[Global_4268314 /*104*/].f_24 = iParam2;
	}
	Global_4267065[Global_4268314 /*104*/].f_25 = iParam7;
	Global_4267065[Global_4268314 /*104*/].f_26 = uParam8;
	Global_4267065[Global_4268314 /*104*/].f_29 = uParam9;
	Global_4267065[Global_4268314 /*104*/].f_30 = uParam12;
	Global_4267065[Global_4268314 /*104*/].f_31 = uParam11;
	Global_4267065[Global_4268314 /*104*/].f_28 = 0;
	Global_4267065[Global_4268314 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_33), sParam4, 64);
	Global_4267065[Global_4268314 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_50), sParam5, 64);
	Global_4267065[Global_4268314 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_83), sParam15, 64);
	func_83();
	switch (iParam16)
	{
		case 3:
			Global_4267065[Global_4268314 /*104*/].f_99[Global_14513] = 1;
			break;
		
		case 0:
			Global_4267065[Global_4268314 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4267065[Global_4268314 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4267065[Global_4268314 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14513)
		{
			case 0:
				func_113(0);
				break;
			
			case 1:
				func_113(1);
				break;
			
			case 2:
				func_113(2);
				break;
			
			case 3:
				func_113(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4268315 = 1;
				break;
			
			case 0:
				Global_4268315 = 1;
				break;
			
			case 2:
				Global_4268315 = 1;
				break;
			
			case 1:
				Global_4268315 = 1;
				break;
			}
	}
	Global_16891[Global_4268314] = 0;
	if (bParam10)
	{
		func_83();
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
			if (!func_112())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14502, 1);
			}
		}
	}
	if (!Global_14682)
	{
		if (Global_14513.f_1 == 6)
		{
			func_111(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_108(1);
			func_111(Global_14494, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14493), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_108(int iParam0)
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
		if (func_89(14))
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
								func_110(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458186)
							{
								if (iVar1 == 14)
								{
									func_109(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_109(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16890), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_109(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_109(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(uVar6), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_109(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_110(&(Global_2390[iVar1 /*15*/]));
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
								func_110(&(Global_2390[iVar1 /*15*/]));
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
								func_110(&(Global_2390[iVar1 /*15*/]));
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
								func_110(&(Global_2390[iVar1 /*15*/]));
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
								func_110(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_2390[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1624079.f_1;
								func_109(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_109(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_109(var uParam0, char* sParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_110(uParam7);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_110(iParam8);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_110(iParam9);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_110(iParam10);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_110(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_110(var uParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_111(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_112()
{
	return Global_1312857;
}

void func_113(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_106070.f_14023[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_114(int iParam0)
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
	Global_4267065[iParam0 /*104*/].f_18 = uVar0;
	Global_4267065[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_4267065[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_4267065[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_4267065[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4267065[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_115()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4268314 = 11;
	Global_4267065[Global_4268314 /*104*/].f_18 = -1;
	Global_4267065[Global_4268314 /*104*/].f_18.f_1 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_2 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_3 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_116(Global_4267065[iVar2 /*104*/].f_18, Global_4267065[Global_4268314 /*104*/].f_18))
		{
			Global_4268314 = iVar2;
		}
		iVar2++;
	}
	Global_4267065[Global_4268314 /*104*/].f_24 = 1;
}

int func_116(struct<6> Param0, struct<6> Param6)
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

int func_117()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4267065[iVar2 /*104*/].f_24 == 0)
		{
			Global_4268314 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4268314 = 11;
	Global_4267065[Global_4268314 /*104*/].f_18 = -1;
	Global_4267065[Global_4268314 /*104*/].f_18.f_1 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_2 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_3 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4267065[iVar2 /*104*/].f_24 == 0 || Global_4267065[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_116(Global_4267065[iVar2 /*104*/].f_18, Global_4267065[Global_4268314 /*104*/].f_18))
			{
				Global_4268314 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4268314 == 11)
	{
		return 0;
	}
	Global_4267065[Global_4268314 /*104*/].f_99[0] = 0;
	Global_4267065[Global_4268314 /*104*/].f_99[1] = 0;
	Global_4267065[Global_4268314 /*104*/].f_99[2] = 0;
	return 1;
}

int func_118(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_107(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3090 = iParam10;
			GAMEPLAY::SET_BIT(&Global_4268330, 0);
		}
		return 1;
	}
	return 0;
}

int func_119(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_120(2, iParam1);
	return iParam0;
}

void func_120(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

var func_121(var uParam0, bool bParam1, int iParam2)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return sLocal_18;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_120(1, iParam2);
	if (bParam1)
	{
		return uParam0;
	}
	return UI::_GET_LABEL_TEXT(uParam0);
}

int func_122(int iParam0)
{
	int iVar0;
	
	iVar0 = func_125(iParam0);
	if (iVar0 == -1)
	{
		func_123(iParam0, 1);
		return 0;
	}
	Global_1379953[iVar0 /*5*/].f_4 = 1;
	return Global_1379953[iVar0 /*5*/].f_2;
}

void func_123(int iParam0, bool bParam1)
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_125(iParam0) != -1)
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
	if (func_124(iParam0))
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

int func_124(int iParam0)
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

int func_125(int iParam0)
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
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
			func_126(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_126(int iParam0)
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
	func_127(&(Global_1379953[iVar32 /*5*/]));
	Global_1380114 = (Global_1380114 - 1);
}

void func_127(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_128();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_128()
{
	return -1;
}

void func_129()
{
	Global_1361724.f_40.f_9 = 4;
}

int func_130(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_129();
	bVar0 = false;
	return func_102(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_131(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_132(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_132(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_128();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_122(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1361724.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16883 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_121(uParam5, bParam6, &iVar3);
	uVar5 = func_119(iParam7, &iVar3);
	iVar6 = 0;
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (GAMEPLAY::IS_BIT_SET(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_140(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_134(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(uParam4, 0))
	{
		func_105();
	}
	func_133();
	func_104();
	func_103();
	return 1;
}

void func_133()
{
	Global_1361724.f_40.f_9 = 3;
}

int func_134(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_135(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_135(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_83();
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
	if (func_139() == 0)
	{
		func_137();
		return 0;
	}
	func_136(Global_16889);
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
		func_113(0);
		func_113(2);
		func_113(1);
	}
	else
	{
		func_83();
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
					func_113(0);
					Global_3089 = 0;
					break;
				
				case 1:
					func_113(1);
					Global_3089 = 1;
					break;
				
				case 2:
					func_113(2);
					Global_3089 = 2;
					break;
				
				case 3:
					func_113(3);
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
		func_83();
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
			if (!func_112())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14502, 1);
			}
		}
	}
	if (!Global_14682)
	{
		if (Global_14513.f_1 == 6)
		{
			func_111(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_108(1);
			func_111(Global_14494, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14493), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_136(int iParam0)
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

void func_137()
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
		if (!func_138(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
		{
			Global_16889 = iVar2;
		}
		iVar2++;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_24 = 1;
}

int func_138(struct<6> Param0, struct<6> Param6)
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

int func_139()
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
			if (!func_138(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
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

int func_140(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	GAMEPLAY::CLEAR_BIT(&Global_2383, 10);
	iVar0 = 3;
	if (func_135(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3090 = iParam10;
			Global_2993[3 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
			Global_3070 = iParam0;
			StringCopy(&Global_3071, sParam5, 64);
			GAMEPLAY::SET_BIT(&Global_2383, 1);
			GAMEPLAY::SET_BIT(&Global_2383, 7);
		}
		return 1;
	}
	return 0;
}

int func_141(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_133();
	bVar0 = true;
	if (func_132(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_101(120000);
		return 1;
	}
	return 0;
}

int func_142(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (GAMEPLAY::IS_BIT_SET(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (GAMEPLAY::IS_BIT_SET(uParam4, 4))
	{
		bVar0 = func_158(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_148(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (GAMEPLAY::IS_BIT_SET(uParam4, 3))
		{
			func_147(1);
		}
		if (GAMEPLAY::IS_BIT_SET(uParam4, 5))
		{
			func_146(1);
		}
		func_145();
		func_104();
		func_144();
		func_143();
		return 1;
	}
	return 0;
}

void func_143()
{
	Global_2533659 = 0;
}

void func_144()
{
	Global_1361724.f_57 = 1;
	Global_1361724.f_57.f_1 = 0;
}

void func_145()
{
	Global_1361724.f_40.f_9 = 1;
}

void func_146(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2385, 0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2385, 0);
	}
}

void func_147(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2383, 20);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2383, 20);
	}
}

int func_148(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_157(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15870 = 0;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_15827 = 0;
	Global_15874 = 0;
	Global_15876 = 0;
	Global_2621441 = 0;
	return func_149(sParam3, iParam4, bParam7);
}

int func_149(char* sParam0, int iParam1, bool bParam2)
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
					func_156();
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
		if (func_155(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_154();
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
				func_83();
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
				if (func_153())
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
			if (func_152())
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
			func_151();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_150();
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
		func_156();
	}
	return 0;
}

void func_150()
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

void func_151()
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

int func_152()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_153()
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

void func_154()
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

bool func_155(int iParam0, int iParam1)
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

void func_156()
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

void func_157(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15276 = { *uParam0 };
	Global_1699 = iParam1;
	StringCopy(&Global_15892, sParam2, 24);
	Global_16811 = iParam5;
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

int func_158(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_157(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15870 = 1;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_15827 = 0;
	Global_15874 = 0;
	Global_15876 = 0;
	Global_2621441 = 0;
	return func_149(sParam3, iParam4, bParam7);
}

int func_159(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_161(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_160();
		func_145();
		func_104();
		func_144();
		func_143();
		return 1;
	}
	return 0;
}

void func_160()
{
	Global_16840 = 0;
}

bool func_161(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_157(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15870 = 0;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 1;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_15827 = 0;
	Global_15874 = 1;
	Global_15876 = 0;
	StringCopy(&Global_15970, sParam5, 24);
	Global_2621441 = 0;
	return func_149(sParam3, iParam4, bParam8);
}

int func_162(var uParam0, char* sParam1, char* sParam2)
{
	if (func_164(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_163();
		func_104();
		func_144();
		return 1;
	}
	return 0;
}

void func_163()
{
	Global_1361724.f_40.f_9 = 2;
}

bool func_164(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_157(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 0;
	return func_149(sParam2, iParam3, 0);
}

void func_165()
{
	Global_1361724.f_55 = Global_1361724.f_40.f_1;
	Global_1361724.f_55.f_1 = Global_1361724.f_40.f_10;
}

void func_166()
{
	Global_1361724.f_40 = 1;
}

bool func_167()
{
	return Global_1361724.f_40 == 1;
}

int func_168(int iParam0, int iParam1, int iParam2)
{
	if (!func_169(iParam0))
	{
		return 0;
	}
	if (Global_1361724.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1361724.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_169(int iParam0)
{
	if (!func_170())
	{
		return 0;
	}
	if (!Global_1361724.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_170()
{
	if (Global_1361724.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_171(var uParam0)
{
	if (func_174())
	{
		return 0;
	}
	if (func_78())
	{
		return 0;
	}
	if (func_80(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1654543 || func_173())
	{
		return 0;
	}
	if (!GAMEPLAY::IS_BIT_SET(uParam0, 6))
	{
		if (func_172())
		{
			return 0;
		}
	}
	return 1;
}

bool func_172()
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1378623);
}

int func_173()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_174()
{
	return func_152();
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	if (!func_78())
	{
		return 0;
	}
	return func_168(iParam0, iParam1, iParam2);
}

var func_176(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return GAMEPLAY::GET_HASH_KEY(&cVar0);
}

bool func_177()
{
	return Global_2530962.f_1;
}

int func_178()
{
	if (Global_1361912.f_2)
	{
		return 1;
	}
	return func_179();
}

bool func_179()
{
	return func_174();
}

void func_180(int iParam0)
{
	Global_2534146.f_1072 = iParam0;
}

int func_181()
{
	if (func_182("HLP_TAXI3"))
	{
		return 1;
	}
	if (func_182("HLP_SOC1"))
	{
		return 1;
	}
	if (func_182("HLP_SOC2"))
	{
		return 1;
	}
	return 0;
}

bool func_182(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_183(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_184(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
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

bool func_185(var uParam0)
{
	return uParam0->f_1;
}

void func_186(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142, 8))
		{
			GAMEPLAY::SET_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142), 8);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142, 8))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142), 8);
	}
}

bool func_187()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142, 8);
}

void func_188()
{
	CAM::DO_SCREEN_FADE_IN(800);
	if (!bLocal_759 || bLocal_760)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
	}
	if (!bLocal_760)
	{
		Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 0;
	}
	else
	{
		Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 3;
	}
}

void func_189()
{
	if (func_193(&Local_94, &(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4)))
	{
		Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = -1;
	}
	func_190(&Local_94);
}

void func_190(var uParam0)
{
	bool bVar0;
	
	bVar0 = UI::IS_PAUSE_MENU_ACTIVE();
	switch (iLocal_755)
	{
		case 0:
			if (GAMEPLAY::IS_BIT_SET(*uParam0, 18))
			{
				if (!func_185(&uLocal_761))
				{
					func_19(&uLocal_761, 0, 0);
				}
				if (!bVar0)
				{
					if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_74("HLP_XP1", 9000);
						func_183(&uLocal_761);
						func_19(&uLocal_761, 0, 0);
						iLocal_755++;
					}
				}
				else if (func_184(&uLocal_761, 5000, 0))
				{
					iLocal_755++;
					func_183(&uLocal_761);
					func_19(&uLocal_761, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!bVar0)
			{
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_74("HLP_XP2", 9000);
					func_183(&uLocal_761);
					func_19(&uLocal_761, 0, 0);
					iLocal_755++;
				}
			}
			else if (func_184(&uLocal_761, 5000, 0))
			{
				iLocal_755++;
				func_183(&uLocal_761);
				func_19(&uLocal_761, 0, 0);
			}
			break;
		
		case 2:
			if (!bVar0)
			{
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_74("HLP_RNK1", 9000);
					func_192(1);
					Global_2524719.f_1840 = 1;
					func_191(1, 0, -1);
					func_183(&uLocal_761);
					func_19(&uLocal_761, 0, 0);
					iLocal_755++;
				}
			}
			else if (func_184(&uLocal_761, 5000, 0))
			{
				iLocal_755++;
				func_183(&uLocal_761);
				func_19(&uLocal_761, 0, 0);
			}
			break;
		
		case 3:
			if (!bVar0)
			{
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_180(0);
					if (GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_DURANGO_VERSION())
					{
						func_74("HLP_CASHXBX", 9000);
					}
					else if (GAMEPLAY::IS_PS3_VERSION() || GAMEPLAY::IS_ORBIS_VERSION())
					{
						func_74("HLP_CASHPSN", 9000);
					}
					else
					{
						func_74("HLP_CASHGEN", 9000);
					}
					func_183(&uLocal_761);
					func_19(&uLocal_761, 0, 0);
					iLocal_755 = 99;
				}
			}
			else if (func_184(&uLocal_761, 5000, 0))
			{
				iLocal_755 = 99;
				func_183(&uLocal_761);
				func_19(&uLocal_761, 0, 0);
			}
			break;
		
		case 99:
			if (!GAMEPLAY::IS_BIT_SET(uLocal_752, 2))
			{
				GAMEPLAY::SET_BIT(&uLocal_752, 2);
			}
			break;
	}
}

void func_191(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1368245.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				GAMEPLAY::SET_BIT(&(Global_1368245.f_1046), iParam0);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&(Global_1368245.f_1046), iParam0);
			}
			break;
	}
}

void func_192(int iParam0)
{
	Global_2524719.f_4518 = iParam0;
}

int func_193(var uParam0, var uParam1)
{
	float fVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	bool bVar8;
	
	if (!GAMEPLAY::IS_BIT_SET(*uParam0, 13))
	{
		if (CAM::DOES_CAM_EXIST(CAM::GET_RENDERING_CAM()))
		{
			vVar5 = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
			if ((vVar5.x != 0f || vVar5.y != 0f) || vVar5.z != 0f)
			{
				STREAMING::_SET_FOCUS_AREA(vVar5, 0f, 0f, 0f);
				if (!GAMEPLAY::IS_BIT_SET(*uParam0, 14))
				{
					GAMEPLAY::SET_BIT(uParam0, 14);
				}
			}
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(*uParam0, 14))
	{
		STREAMING::CLEAR_FOCUS();
		GAMEPLAY::CLEAR_BIT(uParam0, 14);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 337, 1);
	}
	func_357(uParam0);
	STREAMING::_0xA76359FC80B2438E(1f);
	func_351(uParam0);
	func_350(PLAYER::PLAYER_ID());
	if (!GAMEPLAY::IS_BIT_SET(*uParam0, 31))
	{
		if (uParam0->f_6 > 0)
		{
			uParam0->f_32 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(234.0331f, -1005.203f, -98.4626f, "hei_dlc_garage_high_new");
			if (uParam0->f_32 != 0)
			{
				INTERIOR::_LOAD_INTERIOR(uParam0->f_32);
				GAMEPLAY::SET_BIT(uParam0, 31);
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (uParam0->f_6)
		{
			case 0:
				uParam0->f_292 = 1;
				uParam0->f_293 = 0;
				uParam0->f_295 = 0;
				uParam0->f_294 = 0;
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_intro")) > 0)
				{
					uParam0->f_295 = 1;
					uParam0->f_294 = 1;
				}
				else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("freemode")) > 0)
				{
					uParam0->f_295 = 1;
				}
				if (!Global_2524719.f_1839)
				{
					Global_2524719.f_1839 = 1;
					NETWORK::NETWORK_SET_VOICE_ACTIVE(0);
				}
				if (!func_187())
				{
					func_186(1);
				}
				if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
				if (!func_185(&(uParam0->f_15)))
				{
					func_19(&(uParam0->f_15), 0, 0);
				}
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_1655000);
				Global_1655001 = 0;
				Global_1655003 = 0;
				Global_1655002 = 0;
				Global_1655004 = 0;
				uParam0->f_19 = { 0f, 0f, 0f };
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					*uParam0 = 0;
					uParam0->f_4 = 0;
					uParam0->f_5 = 0;
					func_343(0, 0, 0, 1, 1, 1, 0);
					NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(1, 0);
					func_382(1);
					INTERIOR::_0x9E6542F0CE8E70A3(1);
					GAMEPLAY::SET_OVERRIDE_WEATHER("EXTRASUNNY");
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(19, 0, 0);
					NETWORK::_0xFC18DB55AE19E046(1);
					func_342(0);
					STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
					func_334(1, 0);
					func_314(1, 1);
					if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_intro")) < 1 || !func_313())
					{
						if (uParam0->f_292)
						{
							if (func_312() == 0)
							{
								STREAMING::PREFETCH_SRL("GTAO_INTRO_MALE");
								STREAMING::_0x20C6C7E4EB082A7F(1);
							}
						}
					}
					func_305(14, 0);
					uParam0->f_6 = 1;
					*uParam0 = 0;
					GAMEPLAY::CLEAR_BIT(uParam0, 0);
					GAMEPLAY::CLEAR_BIT(uParam0, 1);
					GAMEPLAY::CLEAR_BIT(uParam0, 2);
					GAMEPLAY::CLEAR_BIT(uParam0, 9);
					GAMEPLAY::SET_BIT(uParam0, 7);
					uParam0->f_122 = PED::ADD_SCENARIO_BLOCKING_AREA(-1012.787f, -2747.597f, 15f, -1052.03f, -2716.144f, 25f, 0, 1, 1, 1);
				}
				break;
			
			case 1:
				STREAMING::REQUEST_MODEL(joaat("frogger"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("frogger")))
				{
					if (!uParam0->f_292 || STREAMING::IS_SRL_LOADED())
					{
						if (func_302())
						{
							STREAMING::_0x4E52E752C76E7E7A(0);
							func_297(1, 1);
							GRAPHICS::_0x22A249A53034450A(0);
							UI::CLEAR_HELP(1);
							if (!func_179())
							{
								func_296();
							}
							func_192(0);
							func_295();
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Global_1312551, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
							ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 0, 0);
							PLAYER::SET_MAX_WANTED_LEVEL(0);
							if (UI::DOES_BLIP_EXIST(UI::GET_MAIN_PLAYER_BLIP_ID()))
							{
								UI::SET_BLIP_SCALE(UI::GET_MAIN_PLAYER_BLIP_ID(), 0f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
							uParam0->f_6 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (!GAMEPLAY::IS_BIT_SET(*uParam0, 4))
					{
						if (func_294() == 64 || func_294() == 65)
						{
							STREAMING::CLEAR_FOCUS();
							STREAMING::NEW_LOAD_SCENE_START(754.2219f, 1226.831f, 356.5081f, func_293(-14.367f, 0f, 157.3524f), 100f, 0);
							func_183(&(uParam0->f_17));
							func_19(&(uParam0->f_17), 0, 0);
							GAMEPLAY::SET_BIT(uParam0, 4);
						}
					}
					else if (AUDIO::PREPARE_MUSIC_EVENT("FM_INTRO_START") && (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || func_184(&(uParam0->f_17), 5000, 0)))
					{
						if (!GAMEPLAY::IS_BIT_SET(*uParam0, 24))
						{
							if (GAMEPLAY::IS_BIT_SET(*uParam0, 7))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_START");
								GAMEPLAY::SET_BIT(uParam0, 24);
								GAMEPLAY::SET_BIT(uParam0, 21);
							}
						}
						else if (AUDIO::GET_MUSIC_PLAYTIME() > 0)
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
							GRAPHICS::_0xE3E2C1B4C59DBC77(6);
							if (!CAM::DOES_CAM_EXIST(uParam0->f_7))
							{
								uParam0->f_7 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
								CAM::SET_CAM_ACTIVE(uParam0->f_7, 1);
							}
							CAM::SET_CAM_PARAMS(uParam0->f_7, 754.2219f, 1226.831f, 356.5081f, -14.367f, 0f, 157.3524f, 42.2442f, 0, 1, 1, 2);
							CAM::SET_CAM_PARAMS(uParam0->f_7, 740.7797f, 1193.923f, 351.1997f, -9.6114f, 0f, 157.8659f, 44.8314f, 6500, 0, 0, 2);
							CAM::SHAKE_CAM(uParam0->f_7, "HAND_SHAKE", 0.15f);
							CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 1, 0);
							func_292(uParam0);
							GAMEPLAY::SET_BIT(uParam0, 11);
							if (uParam0->f_292)
							{
								STREAMING::_0xBEB2D9A1D9A8F55A(9, 9, 9, 9);
								STREAMING::BEGIN_SRL();
							}
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(800);
							}
							uParam0->f_6 = 6;
						}
					}
				}
				break;
			
			case 6:
				func_291(uParam0, 6);
				func_290(uParam0);
				if (func_289(uParam0, 6, 0))
				{
					UI::CLEAR_HELP(1);
					uParam0->f_6 = 7;
				}
				break;
			
			case 7:
				if (!GAMEPLAY::IS_BIT_SET(*uParam0, 2))
				{
					UI::CLEAR_HELP(1);
					func_74("FMIC_INTRO2", -1);
					GAMEPLAY::SET_BIT(uParam0, 2);
				}
				CAM::SET_CAM_PARAMS(uParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 6000, 0, 0, 2);
				STREAMING::_0xBEB2D9A1D9A8F55A(9, 13, 9, 13);
				uParam0->f_6 = 8;
				break;
			
			case 8:
				func_291(uParam0, 8);
				if (func_290(uParam0))
				{
					func_288(uParam0);
					if (func_289(uParam0, 8, 0))
					{
						uParam0->f_6 = 9;
					}
				}
				break;
			
			case 9:
				if (!GAMEPLAY::IS_BIT_SET(*uParam0, 10))
				{
					func_287();
					GAMEPLAY::SET_BIT(uParam0, 10);
				}
				CAM::SET_CAM_PARAMS(uParam0->f_7, -4.6668f, -900.9736f, 184.887f, -1.6106f, -0.5186f, 78.3786f, 45.0069f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uParam0->f_7, -23.0087f, -896.4288f, 184.1939f, -2.8529f, -0.5186f, 81.8262f, 45.0069f, 8000, 0, 0, 2);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_48, 0))
				{
					VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(uParam0->f_48);
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_48, 1, 0);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam0->f_48);
				}
				uParam0->f_6 = 10;
				break;
			
			case 10:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_48, 0))
				{
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam0->f_48);
				}
				func_291(uParam0, 10);
				if (func_286())
				{
					if (func_285(uParam0))
					{
						if (func_288(uParam0))
						{
							if (func_289(uParam0, 10, 0))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2870.804f, 81.4979f, 13.1957f, 1, 0, 0, 1);
									ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
								}
								fVar0 = 5000f;
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_92[0], 0))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[0], 100, "FM_Intro_uber", 1);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[0], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_92[1], 0))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[1], 101, "FM_Intro_uber", 1);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[1], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_92[2], 0))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[2], 102, "FM_Intro_uber", 1);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[2], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_92[3], 0))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[3], 103, "FM_Intro_uber", 1);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[3], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_92[4], 0))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[4], 104, "FM_Intro_uber", 1);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uParam0->f_92[4], fVar0);
								}
								GAMEPLAY::SET_BIT(uParam0, 15);
								CAM::DO_SCREEN_FADE_IN(800);
								uParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			
			case 14:
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					func_284(uParam0);
					func_283(uParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 1065353216);
					CAM::STOP_CAM_SHAKING(uParam0->f_7, 1);
					CAM::DETACH_CAM(uParam0->f_7);
					CAM::DESTROY_CAM(uParam0->f_7, 0);
					AUDIO::START_AUDIO_SCENE("MP_INTRO_RACE_SCENE");
					STREAMING::_0xBEB2D9A1D9A8F55A(9, 12, 9, 12);
					func_281(uParam0, 14);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				if (!GAMEPLAY::IS_BIT_SET(*uParam0, 5))
				{
					func_74("FMIC_RACE1", -1);
					GAMEPLAY::SET_BIT(uParam0, 5);
				}
				func_291(uParam0, 14);
				if (func_289(uParam0, 14, 0))
				{
					func_280(uParam0, 23539f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 15;
				}
				break;
			
			case 15:
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					func_283(uParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 1065353216);
					func_281(uParam0, 15);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				if (!GAMEPLAY::IS_BIT_SET(uParam0->f_3, 0))
				{
					func_269(uParam0);
				}
				else if (func_268(uParam0) && func_262(uParam0))
				{
					func_260(uParam0);
				}
				func_291(uParam0, 15);
				if (func_289(uParam0, 15, 0))
				{
					func_280(uParam0, 28833.33f, 75f);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 16;
				}
				break;
			
			case 16:
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					func_259(uParam0, "race_camera_3a", "mp_intro_seq@", uParam0->f_92[4], 0f, 0f, -0.1f, 0f, 0f, 0f);
					func_281(uParam0, 16);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				if (!GAMEPLAY::IS_BIT_SET(uParam0->f_3, 0))
				{
					func_269(uParam0);
				}
				else if (func_268(uParam0) && func_262(uParam0))
				{
					func_260(uParam0);
				}
				func_291(uParam0, 16);
				if (func_289(uParam0, 16, 0))
				{
					func_280(uParam0, 29700f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 17;
				}
				break;
			
			case 17:
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					func_283(uParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					PED::SET_SYNCHRONIZED_SCENE_RATE(uParam0->f_9, 0.7f);
					func_281(uParam0, 17);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				if (!GAMEPLAY::IS_BIT_SET(*uParam0, 6))
				{
					GAMEPLAY::SET_BIT(uParam0, 6);
					func_74("FMIC_RACE2", -1);
				}
				if (!GAMEPLAY::IS_BIT_SET(uParam0->f_3, 0))
				{
					func_269(uParam0);
				}
				else if (func_268(uParam0) && func_262(uParam0))
				{
					func_260(uParam0);
				}
				func_291(uParam0, 17);
				if (func_289(uParam0, 17, 0))
				{
					func_280(uParam0, 36450f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 18;
				}
				break;
			
			case 18:
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					func_283(uParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_281(uParam0, 18);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				if (!GAMEPLAY::IS_BIT_SET(uParam0->f_3, 0))
				{
					func_269(uParam0);
				}
				else if (func_268(uParam0) && func_262(uParam0))
				{
					func_260(uParam0);
				}
				func_291(uParam0, 18);
				if (func_258() && func_289(uParam0, 18, 0))
				{
					func_280(uParam0, 43650f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 19;
				}
				break;
			
			case 19:
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[2]))
					{
						VEHICLE::DELETE_VEHICLE(&(uParam0->f_92[2]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[3]))
					{
						VEHICLE::DELETE_VEHICLE(&(uParam0->f_92[3]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[4]))
					{
						VEHICLE::DELETE_VEHICLE(&(uParam0->f_92[4]));
					}
					func_283(uParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_281(uParam0, 19);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				if (!GAMEPLAY::IS_BIT_SET(uParam0->f_3, 0))
				{
					func_269(uParam0);
				}
				else
				{
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_3, 6))
					{
						if (uParam0->f_32 != 0)
						{
							if (INTERIOR::IS_INTERIOR_READY(uParam0->f_32))
							{
								if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_91, 0))
								{
									INTERIOR::FORCE_ROOM_FOR_ENTITY(uParam0->f_91, uParam0->f_32, GAMEPLAY::GET_HASH_KEY("GtaMloRoom001"));
								}
								AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MP_GARAGE_L_RADIO", 0);
								iVar4 = 0;
								while (iVar4 < 8)
								{
									if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_49[iVar4], 0))
									{
										INTERIOR::FORCE_ROOM_FOR_ENTITY(uParam0->f_49[iVar4], uParam0->f_32, GAMEPLAY::GET_HASH_KEY("GtaMloRoom001"));
									}
									iVar4++;
								}
								GAMEPLAY::SET_BIT(&(uParam0->f_3), 6);
							}
						}
					}
					if (func_268(uParam0) && func_262(uParam0))
					{
						func_260(uParam0);
					}
				}
				func_257(uParam0);
				func_256(uParam0);
				func_291(uParam0, 19);
				if (func_289(uParam0, 19, 0) && GAMEPLAY::IS_BIT_SET(uParam0->f_3, 0))
				{
					if (GAMEPLAY::IS_BIT_SET(*uParam0, 12))
					{
						GAMEPLAY::CLEAR_BIT(uParam0, 12);
					}
					uParam0->f_6 = 22;
				}
				else if (func_289(uParam0, 19, -4968))
				{
					if (!GAMEPLAY::IS_BIT_SET(*uParam0, 12))
					{
						UI::CLEAR_HELP(1);
						GAMEPLAY::SET_BIT(uParam0, 12);
					}
				}
				else if (func_289(uParam0, 19, -5618))
				{
					if (!GAMEPLAY::IS_BIT_SET(*uParam0, 30))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("MP_intro_logo", 0, 0);
						GAMEPLAY::SET_BIT(uParam0, 30);
					}
				}
				break;
			
			case 22:
				func_257(uParam0);
				func_256(uParam0);
				if (GAMEPLAY::IS_BIT_SET(uParam0->f_3, 0))
				{
					if (!CAM::DOES_CAM_EXIST(uParam0->f_7))
					{
						uParam0->f_7 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					CAM::SET_CAM_ACTIVE(uParam0->f_7, 1);
					CAM::SET_CAM_PARAMS(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uParam0->f_7, 228.2493f, -1006.155f, -98.1976f, -2.3097f, 0.0572f, 0.7306f, 40.033f, 6000, 0, 0, 2);
					CAM::SHAKE_CAM(uParam0->f_7, "HAND_SHAKE", 0.1f);
					INTERIOR::_0x920D853F3E17F1DA(uParam0->f_32, GAMEPLAY::GET_HASH_KEY("GtaMloRoom001"));
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MP_GARAGE_L_RADIO", 0);
					GRAPHICS::_0xE3E2C1B4C59DBC77(0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_10, 0f);
					if (!PED::IS_PED_INJURED(uParam0->f_91))
					{
						PED::_0x2208438012482A1A(uParam0->f_91, 0, 0);
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_INTRO_RACE_SCENE"))
					{
						AUDIO::STOP_AUDIO_SCENE("MP_INTRO_RACE_SCENE");
					}
					STREAMING::_0xBEB2D9A1D9A8F55A(9, 13, 9, 13);
					func_255(uParam0);
					func_254();
					func_74("FMIC_GAR", -1);
					uParam0->f_6 = 23;
				}
				break;
			
			case 23:
				func_257(uParam0);
				func_256(uParam0);
				func_291(uParam0, 23);
				if (func_268(uParam0) && func_262(uParam0))
				{
					func_260(uParam0);
				}
				if (func_289(uParam0, 23, 0))
				{
					CAM::SET_CAM_PARAMS(uParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 3500, 0, 0, 2);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_10, 0f);
					if (!PED::IS_PED_INJURED(uParam0->f_91))
					{
						PED::_0x2208438012482A1A(uParam0->f_91, 0, 0);
					}
					func_252(uParam0, 0);
					func_252(uParam0, 1);
					func_252(uParam0, 5);
					func_252(uParam0, 6);
					uParam0->f_6 = 24;
				}
				break;
			
			case 24:
				func_257(uParam0);
				func_256(uParam0);
				func_291(uParam0, 24);
				if (func_268(uParam0) && func_262(uParam0))
				{
					func_260(uParam0);
				}
				if (func_289(uParam0, 24, 0))
				{
					uParam0->f_6 = 27;
				}
				break;
			
			case 27:
				func_257(uParam0);
				func_256(uParam0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1148.286f, -1639.737f, 5.106698f, 1, 0, 0, 1);
				GAMEPLAY::SET_BIT(uParam0, 13);
				CAM::SET_CAM_PARAMS(uParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 1500, 3, 3, 2);
				NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(18, 0, 0);
				func_252(uParam0, 2);
				func_252(uParam0, 7);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_251());
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_91))
				{
					PED::DELETE_PED(&(uParam0->f_91));
				}
				GAMEPLAY::SET_BIT(uParam0, 29);
				uParam0->f_6 = 28;
				break;
			
			case 28:
				func_257(uParam0);
				func_256(uParam0);
				if (!GAMEPLAY::IS_BIT_SET(*uParam0, 8))
				{
					GAMEPLAY::SET_BIT(uParam0, 8);
				}
				if (func_268(uParam0) && func_262(uParam0))
				{
					func_260(uParam0);
				}
				func_291(uParam0, 28);
				if ((AUDIO::PREPARE_MUSIC_EVENT("FM_INTRO_DRIVE_START") && GAMEPLAY::IS_BIT_SET(uParam0->f_3, 3)) && func_289(uParam0, 28, 0))
				{
					uParam0->f_6 = 29;
				}
				break;
			
			case 29:
				if (uParam0->f_295)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (func_248(uParam0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_Male_Character", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
						}
					}
				}
				else if (func_248(uParam0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35, 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_34, 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_33, 0))
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_33, 1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam0->f_33, "MP_Plane", 0, 0, 0);
				}
				func_246(uParam0);
				GAMEPLAY::LOAD_CLOUD_HAT("CONTRAILS", 0);
				STREAMING::_0xBEB2D9A1D9A8F55A(9, 9, 9, 9);
				func_74("FMIC_TENN", -1);
				CUTSCENE::START_CUTSCENE(4);
				func_238(1, 1, 1, 0, 0);
				uParam0->f_6 = 30;
				break;
			
			case 30:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (uParam0->f_32 != 0)
					{
						INTERIOR::UNPIN_INTERIOR(uParam0->f_32);
					}
					func_237(uParam0);
					if (uParam0->f_293)
					{
						uParam0->f_26 = (GAMEPLAY::GET_GAME_TIMER() - uParam0->f_13);
					}
					else
					{
						uParam0->f_26 = 52618;
						uParam0->f_27 = 52618;
					}
					uParam0->f_6 = 31;
				}
				break;
			
			case 31:
				if (uParam0->f_295)
				{
					if (func_248(uParam0))
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Female_Character", 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										AI::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
									}
								}
							}
						}
					}
					else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Male_Character", 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									AI::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LAMAR", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
					{
						if (!PED::IS_PED_INJURED(uParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_35, 0))
							{
								AI::TASK_ENTER_VEHICLE(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								PED::_0x2208438012482A1A(uParam0->f_35, 0, 0);
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Lamar_Car", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_34, 1, 1, 0);
						ENTITY::SET_ENTITY_COORDS(uParam0->f_34, -1028.406f, -2732.782f, 19.5931f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(uParam0->f_34, -106.11f);
						func_236(uParam0, 3099.997f);
						VEHICLE::SET_VEHICLE_DOORS_SHUT(uParam0->f_34, 1);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
					func_281(uParam0, 33);
					func_283(uParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 29))
				{
					if (CUTSCENE::_0x708BDD8CD795B043() || CUTSCENE::GET_CUTSCENE_TIME() > 3254)
					{
						GAMEPLAY::CLEAR_BIT(uParam0, 29);
					}
				}
				if ((func_235(uParam0) && func_234(uParam0)) && !CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (uParam0->f_293)
					{
						uParam0->f_28 = (GAMEPLAY::GET_GAME_TIMER() - uParam0->f_13);
					}
					else
					{
						uParam0->f_29 = 134784;
						if (func_248(uParam0))
						{
							uParam0->f_28 = 134784;
						}
						else
						{
							uParam0->f_28 = 134784;
						}
					}
					CAM::_0x62ECFCFDEE7885D6();
					CAM::_0x9E4CFFF989258472();
					if (GAMEPLAY::IS_BIT_SET(*uParam0, 7))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_START");
						GAMEPLAY::SET_BIT(uParam0, 21);
					}
					if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						CUTSCENE::STOP_CUTSCENE(0);
					}
					if (!GAMEPLAY::IS_BIT_SET(*uParam1, 1))
					{
						GAMEPLAY::SET_BIT(uParam1, 1);
					}
					func_233(uParam0);
					func_232(uParam0);
					func_238(0, 1, 1, 0, 0);
					GAMEPLAY::SET_BIT(uParam0, 15);
					GAMEPLAY::CLEAR_BIT(uParam0, 13);
					uParam0->f_6 = 33;
				}
				else
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (GAMEPLAY::GET_GAME_TIMER() - (uParam0->f_26 + CUTSCENE::GET_CUTSCENE_TIME()));
					}
					if (!GAMEPLAY::IS_BIT_SET(*uParam0, 22))
					{
						if (CUTSCENE::_0x583DF8E3D4AFBD98() == 1)
						{
							NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(19, 59, 0);
							GAMEPLAY::SET_BIT(uParam0, 22);
						}
					}
					if (func_230(uParam0))
					{
						if (CUTSCENE::_0x583DF8E3D4AFBD98() == 2)
						{
							if (!GAMEPLAY::IS_BIT_SET(*uParam0, 18))
							{
								GAMEPLAY::SET_BIT(uParam0, 18);
							}
							if (CUTSCENE::GET_CUTSCENE_TIME() > 23146)
							{
								if (!GAMEPLAY::IS_BIT_SET(*uParam0, 27))
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, -2.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									GAMEPLAY::SET_BIT(uParam0, 27);
								}
								if (!GAMEPLAY::IS_BIT_SET(*uParam0, 28))
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, 3.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									GAMEPLAY::SET_BIT(uParam0, 28);
								}
							}
							CAM::_0x12DED8CA53D47EA5(4950f);
							if (GAMEPLAY::IS_BIT_SET(*uParam0, 22))
							{
								NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
								GAMEPLAY::CLEAR_BIT(uParam0, 22);
							}
							if (CUTSCENE::GET_CUTSCENE_TIME() > 23254)
							{
								func_229(uParam0);
							}
						}
					}
					if (CUTSCENE::_0x583DF8E3D4AFBD98() > 2)
					{
						func_232(uParam0);
						if (!GAMEPLAY::IS_BIT_SET(*uParam0, 22))
						{
							NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
							GAMEPLAY::SET_BIT(uParam0, 22);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
						{
							VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(uParam0->f_34);
							VEHICLE::SET_VEHICLE_LIGHTS(uParam0->f_34, 2);
						}
					}
					uParam0->f_31 = CUTSCENE::GET_CUTSCENE_TIME();
				}
				break;
			
			case 33:
				if (func_248(uParam0))
				{
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 1))
					{
						if (func_289(uParam0, 33, -5450))
						{
							if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								GAMEPLAY::SET_BIT(&(uParam0->f_1), 1);
							}
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 2))
					{
						if (func_289(uParam0, 33, -5450))
						{
							if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								GAMEPLAY::SET_BIT(&(uParam0->f_1), 2);
							}
						}
					}
				}
				if (!func_248(uParam0))
				{
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 1))
					{
						if (func_289(uParam0, 33, -5450))
						{
							if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								GAMEPLAY::SET_BIT(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					AUDIO::START_AUDIO_SCENE("MP_INTRO_LAMAR_DRIVE_SCENE");
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				func_291(uParam0, 33);
				func_227(uParam0);
				if (func_289(uParam0, 33, 0))
				{
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 34;
				}
				break;
			
			case 34:
				if (!func_248(uParam0))
				{
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 2))
					{
						if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							GAMEPLAY::SET_BIT(&(uParam0->f_1), 2);
						}
					}
				}
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_34, 0))
					{
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						CAM::POINT_CAM_AT_ENTITY(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						CAM::SET_CAM_FOV(uParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(uParam0->f_7, 1);
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35, 0))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_35, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_36, 0))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_36, 1, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_11, uParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_34, "seat_dside_f"));
						if (func_248(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_12, uParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_34, "seat_pside_f"));
							AI::TASK_SYNCHRONIZED_SCENE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_11, 0.129f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_12, 0.129f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_12, uParam0->f_34, 0);
							AI::TASK_SYNCHRONIZED_SCENE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_11, 0.145f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_12, 0.145f);
						}
						PED::_0x2208438012482A1A(uParam0->f_36, 0, 0);
						PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					func_281(uParam0, 34);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				func_291(uParam0, 34);
				func_227(uParam0);
				if (func_289(uParam0, 34, 0))
				{
					func_236(uParam0, 18966.65f);
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 35;
				}
				break;
			
			case 35:
				if (func_248(uParam0))
				{
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 3))
					{
						if (func_289(uParam0, 34, 1100))
						{
							if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								GAMEPLAY::SET_BIT(&(uParam0->f_1), 3);
							}
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 4))
					{
						if (func_289(uParam0, 34, 1100))
						{
							if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								GAMEPLAY::SET_BIT(&(uParam0->f_1), 4);
							}
						}
					}
				}
				if (!func_248(uParam0))
				{
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 3))
					{
						if (func_289(uParam0, 34, 1000))
						{
							if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								GAMEPLAY::SET_BIT(&(uParam0->f_1), 3);
							}
						}
					}
				}
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					func_283(uParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35, 0))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_35, 1, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_36, 0))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_36, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_34, 0))
					{
						AI::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					func_281(uParam0, 35);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				func_291(uParam0, 35);
				func_227(uParam0);
				if (func_289(uParam0, 35, 0))
				{
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 36;
				}
				break;
			
			case 36:
				if (func_248(uParam0))
				{
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 5))
					{
						if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							GAMEPLAY::SET_BIT(&(uParam0->f_1), 5);
						}
					}
				}
				if (!func_248(uParam0))
				{
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 4))
					{
						if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							GAMEPLAY::SET_BIT(&(uParam0->f_1), 4);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 5))
					{
						if (func_289(uParam0, 36, -3750))
						{
							if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								GAMEPLAY::SET_BIT(&(uParam0->f_1), 5);
							}
						}
					}
				}
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_34, 0))
					{
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						CAM::POINT_CAM_AT_ENTITY(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						CAM::SET_CAM_FOV(uParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(uParam0->f_7, 1);
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35, 0))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_35, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_36, 0))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_36, 1, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_11, uParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_34, "seat_dside_f"));
						if (func_248(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_12, uParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_34, "seat_pside_f"));
							AI::TASK_SYNCHRONIZED_SCENE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_11, 0.363f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_12, 0.363f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_12, uParam0->f_34, 0);
							AI::TASK_SYNCHRONIZED_SCENE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_11, 0.298f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_12, 0.298f);
						}
						PED::_0x2208438012482A1A(uParam0->f_36, 0, 0);
						PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					func_281(uParam0, 36);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				func_291(uParam0, 36);
				func_227(uParam0);
				if (func_289(uParam0, 36, 0))
				{
					func_236(uParam0, 42700.96f);
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 37;
				}
				break;
			
			case 37:
				if (func_248(uParam0))
				{
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 6))
					{
						if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							GAMEPLAY::SET_BIT(&(uParam0->f_1), 6);
						}
					}
				}
				if (!func_248(uParam0))
				{
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 6))
					{
						if (func_289(uParam0, 36, 1000))
						{
							if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								GAMEPLAY::SET_BIT(&(uParam0->f_1), 6);
							}
						}
					}
				}
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					func_283(uParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35, 0))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_35, 1, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_36, 0))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_36, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_34, 0))
					{
						AI::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					func_281(uParam0, 37);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				func_291(uParam0, 37);
				func_227(uParam0);
				if (func_289(uParam0, 37, 0))
				{
					func_236(uParam0, 51033.28f);
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 38;
				}
				break;
			
			case 38:
				if (func_248(uParam0))
				{
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 7))
					{
						if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							GAMEPLAY::SET_BIT(&(uParam0->f_1), 7);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 8))
					{
						if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							GAMEPLAY::SET_BIT(&(uParam0->f_1), 8);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 9))
					{
						if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							GAMEPLAY::SET_BIT(&(uParam0->f_1), 9);
						}
					}
				}
				if (!func_248(uParam0))
				{
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 7))
					{
						if (func_289(uParam0, 37, 2500))
						{
							if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								GAMEPLAY::SET_BIT(&(uParam0->f_1), 7);
							}
						}
					}
				}
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					func_283(uParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_281(uParam0, 38);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				func_291(uParam0, 38);
				func_227(uParam0);
				if (func_289(uParam0, 38, 0))
				{
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 39;
				}
				break;
			
			case 39:
				if (!func_248(uParam0))
				{
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 8))
					{
						if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							GAMEPLAY::SET_BIT(&(uParam0->f_1), 8);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 9))
					{
						if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							GAMEPLAY::SET_BIT(&(uParam0->f_1), 9);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 31))
					{
						if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							GAMEPLAY::SET_BIT(&(uParam0->f_1), 31);
						}
					}
				}
				if (func_248(uParam0))
				{
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 31))
					{
						if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							GAMEPLAY::SET_BIT(&(uParam0->f_1), 31);
						}
					}
				}
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_34, 0))
					{
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						CAM::POINT_CAM_AT_ENTITY(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						CAM::SET_CAM_FOV(uParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(uParam0->f_7, 1);
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35, 0))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_35, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_36, 0))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_36, 1, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_11, uParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_34, "seat_dside_f"));
						if (func_248(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_12, uParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_34, "seat_pside_f"));
							AI::TASK_SYNCHRONIZED_SCENE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_11, 0.811f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_12, 0.811f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_12, uParam0->f_34, 0);
							AI::TASK_SYNCHRONIZED_SCENE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_11, 0.791f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_12, 0.791f);
						}
						PED::_0x2208438012482A1A(uParam0->f_36, 0, 0);
						PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					func_281(uParam0, 39);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				func_291(uParam0, 39);
				func_227(uParam0);
				if (func_289(uParam0, 39, 0))
				{
					func_236(uParam0, 85050f);
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 40;
				}
				break;
			
			case 40:
				if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 31))
				{
					if (func_228(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						GAMEPLAY::SET_BIT(&(uParam0->f_1), 31);
					}
				}
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					func_283(uParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					STREAMING::_0xBEB2D9A1D9A8F55A(9, 12, 9, 12);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35, 0))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_35, 1, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_36, 0))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_36, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_34, 0))
					{
						AI::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					func_281(uParam0, 40);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				func_291(uParam0, 40);
				if (func_227(uParam0) && func_289(uParam0, 40, 0))
				{
					func_236(uParam0, 116366.5f);
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 41;
				}
				break;
			
			case 41:
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
					func_283(uParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					func_281(uParam0, 41);
					GAMEPLAY::UNLOAD_CLOUD_HAT("CONTRAILS", 0);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				func_291(uParam0, 41);
				if (func_289(uParam0, 41, 0))
				{
					GRAPHICS::_0x03300B57FCAC6DDB(1);
					func_236(uParam0, 127166.5f);
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 42;
				}
				break;
			
			case 42:
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					func_226(uParam0);
					func_283(uParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_281(uParam0, 42);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				func_291(uParam0, 42);
				if (func_289(uParam0, 42, 0))
				{
					GRAPHICS::_0x03300B57FCAC6DDB(0);
					func_236(uParam0, 170800f);
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 43;
				}
				break;
			
			case 43:
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					func_283(uParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_281(uParam0, 43);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				func_291(uParam0, 43);
				if (func_289(uParam0, 43, 0))
				{
					STREAMING::_0xBEB2D9A1D9A8F55A(9, 12, 9, 12);
					func_236(uParam0, 191799.8f);
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 44;
				}
				break;
			
			case 44:
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					func_283(uParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_281(uParam0, 44);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				func_291(uParam0, 44);
				if (func_289(uParam0, 44, 0))
				{
					func_236(uParam0, 196633.1f);
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 45;
				}
				break;
			
			case 45:
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					func_283(uParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_281(uParam0, 45);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				func_291(uParam0, 45);
				if (func_289(uParam0, 45, 0))
				{
					func_236(uParam0, 201466.5f);
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 46;
				}
				break;
			
			case 46:
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					func_283(uParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_281(uParam0, 46);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				func_291(uParam0, 46);
				if (func_289(uParam0, 46, 0))
				{
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 47;
				}
				break;
			
			case 47:
				func_225(uParam0);
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_34, 0))
					{
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						CAM::POINT_CAM_AT_ENTITY(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						CAM::SET_CAM_FOV(uParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(uParam0->f_7, 1);
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35, 0))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_35, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_36, 0))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_36, 1, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_11, uParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_34, "seat_dside_f"));
						if (func_248(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_12, uParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_34, "seat_pside_f"));
							AI::TASK_SYNCHRONIZED_SCENE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_11, 0.726f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_12, 0.74f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_12, uParam0->f_34, 0);
							AI::TASK_SYNCHRONIZED_SCENE(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_11, 0.726f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_12, 0.815f);
						}
						PED::_0x2208438012482A1A(uParam0->f_36, 0, 0);
						PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					func_281(uParam0, 47);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				func_291(uParam0, 47);
				if (func_289(uParam0, 47, 0))
				{
					func_236(uParam0, 213066.4f);
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 48;
				}
				break;
			
			case 48:
				func_225(uParam0);
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					func_283(uParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35, 0))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_35, 1, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_36, 0))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_36, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_34, 0))
					{
						AI::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					func_281(uParam0, 48);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				func_291(uParam0, 48);
				if (func_289(uParam0, 48, 0))
				{
					GAMEPLAY::SET_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142), 3);
					func_224(uParam0, 10177.75f);
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 49;
				}
				break;
			
			case 49:
				func_225(uParam0);
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					func_283(uParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_281(uParam0, 49);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				func_291(uParam0, 49);
				if (AUDIO::PREPARE_MUSIC_EVENT("FM_INTRO_DRIVE_END") && func_289(uParam0, 49, 0))
				{
					func_222(uParam0, 4500f);
					GAMEPLAY::SET_BIT(uParam0, 15);
					uParam0->f_6 = 50;
				}
				break;
			
			case 50:
				func_225(uParam0);
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(250);
					}
				}
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 15))
				{
					func_283(uParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0, 1065353216);
					if (uParam0->f_292)
					{
						STREAMING::END_SRL();
						GAMEPLAY::CLEAR_BIT(uParam0, 11);
					}
					func_281(uParam0, 50);
					GAMEPLAY::CLEAR_BIT(uParam0, 15);
				}
				if (!GAMEPLAY::IS_BIT_SET(*uParam0, 20))
				{
					if (func_248(uParam0))
					{
						CUTSCENE::REQUEST_CUTSCENE("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						CUTSCENE::REQUEST_CUTSCENE("MP_INT_MCS_5_ALT1", 8);
					}
					if (uParam0->f_295)
					{
						if (CUTSCENE::_0xB56BBBCC2955D9CB())
						{
							if (func_248(uParam0))
							{
								CUTSCENE::_0x4C61C75BEE8184C2("MP_Female_Character", 0, 1);
							}
							else
							{
								CUTSCENE::_0x4C61C75BEE8184C2("MP_1", 0, 1);
							}
						}
					}
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						GAMEPLAY::SET_BIT(uParam0, 20);
					}
				}
				func_291(uParam0, 50);
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_34, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_34))
					{
						if (ENTITY::GET_ENTITY_SPEED(uParam0->f_34) < 1f)
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0->f_34);
						}
					}
				}
				if (func_289(uParam0, 50, 0) && GAMEPLAY::IS_BIT_SET(*uParam0, 20))
				{
					if (GAMEPLAY::IS_BIT_SET(*uParam0, 21))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
						GAMEPLAY::CLEAR_BIT(uParam0, 21);
					}
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0->f_34);
					uParam0->f_6 = 51;
				}
				break;
			
			case 51:
				if (uParam0->f_295)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (func_248(uParam0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_1", 0, 0, 0);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35, 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_34, 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				GAMEPLAY::SET_BIT(uParam0, 13);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				CUTSCENE::START_CUTSCENE(4);
				func_238(1, 1, 1, 0, 0);
				uParam0->f_6 = 52;
				break;
			
			case 52:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					if (uParam0->f_293)
					{
						uParam0->f_30 = (GAMEPLAY::GET_GAME_TIMER() - uParam0->f_13);
					}
					else
					{
						uParam0->f_30 = func_221(uParam0);
					}
					uParam0->f_14 = 0;
					uParam0->f_6 = 53;
				}
				break;
			
			case 53:
				if (uParam0->f_295)
				{
					if (func_248(uParam0))
					{
						if (!GAMEPLAY::IS_BIT_SET(*uParam0, 23))
						{
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Female_Character", 0))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
									vVar1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
									ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y));
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
									GAMEPLAY::SET_BIT(uParam0, 23);
								}
							}
						}
					}
					else if (!GAMEPLAY::IS_BIT_SET(*uParam0, 23))
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_1", 0))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								vVar1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y));
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
								GAMEPLAY::SET_BIT(uParam0, 23);
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LAMAR", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
					{
						if (!PED::IS_PED_INJURED(uParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_35, 0))
							{
								AI::TASK_ENTER_VEHICLE(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Lamar_Car", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
					{
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_34, 1084227584);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					func_220(1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				}
				if (!func_219(PLAYER::PLAYER_ID()))
				{
					func_218(1);
				}
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (GAMEPLAY::GET_GAME_TIMER() - (uParam0->f_30 + CUTSCENE::GET_CUTSCENE_TIME()));
					}
					switch (uParam0->f_14)
					{
						case 0:
							func_217(uParam0, 0);
							break;
						
						case 10:
							func_217(uParam0, 1);
							break;
						
						case 20:
							func_217(uParam0, 2);
							break;
						
						case 30:
							func_217(uParam0, 3);
							break;
						
						case 40:
							func_217(uParam0, 4);
							break;
						
						case 50:
							func_217(uParam0, 5);
							break;
						
						case 60:
							func_217(uParam0, 6);
							break;
						
						case 70:
							func_217(uParam0, 7);
							break;
						
						case 80:
							func_217(uParam0, 8);
							break;
						
						case 90:
							func_217(uParam0, 9);
							break;
						
						case 100:
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_36))
							{
								PED::DELETE_PED(&(uParam0->f_36));
							}
							break;
					}
					uParam0->f_14++;
				}
				else
				{
					CAM::_0x62ECFCFDEE7885D6();
					CAM::_0x9E4CFFF989258472();
					if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						CUTSCENE::STOP_CUTSCENE(0);
					}
					func_238(0, 1, 1, 0, 0);
					GAMEPLAY::CLEAR_BIT(uParam0, 13);
					uParam0->f_6 = 57;
				}
				break;
			
			case 55:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
				}
				else if (!GAMEPLAY::IS_BIT_SET(*uParam0, 17))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						GAMEPLAY::SET_BIT(uParam0, 13);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
						if (uParam0->f_292)
						{
							STREAMING::END_SRL();
							GAMEPLAY::CLEAR_BIT(uParam0, 11);
						}
						func_183(&(uParam0->f_17));
						func_19(&(uParam0->f_17), 0, 0);
						GAMEPLAY::SET_BIT(uParam0, 17);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(250);
					}
				}
				else if (func_184(&(uParam0->f_17), 10000, 0))
				{
					if (func_216(uParam0))
					{
						func_284(uParam0);
						func_232(uParam0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 1, 0);
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 61.3164f);
							}
						}
						if (!PED::IS_PED_INJURED(uParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_35, 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
								{
									AI::TASK_ENTER_VEHICLE(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						func_220(1);
						if (!func_219(PLAYER::PLAYER_ID()))
						{
							func_218(1);
						}
						func_238(0, 1, 1, 0, 0);
						NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
						if (GAMEPLAY::IS_BIT_SET(*uParam0, 21))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
							GAMEPLAY::CLEAR_BIT(uParam0, 21);
						}
						GAMEPLAY::SET_BIT(uParam0, 1);
						GAMEPLAY::SET_BIT(uParam0, 15);
						uParam0->f_6 = 57;
					}
				}
				break;
			
			case 56:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
				}
				else if (!GAMEPLAY::IS_BIT_SET(*uParam0, 17))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						GAMEPLAY::SET_BIT(uParam0, 13);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
						if (uParam0->f_292)
						{
							STREAMING::END_SRL();
							GAMEPLAY::CLEAR_BIT(uParam0, 11);
						}
						func_183(&(uParam0->f_17));
						func_19(&(uParam0->f_17), 0, 0);
						GAMEPLAY::SET_BIT(uParam0, 17);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(250);
					}
				}
				else if (func_184(&(uParam0->f_17), 10000, 0))
				{
					if (func_268(uParam0))
					{
						func_284(uParam0);
						func_232(uParam0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 1, 0);
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 61.3164f);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
								{
									AI::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
						if (!PED::IS_PED_INJURED(uParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_35, 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
								{
									AI::TASK_ENTER_VEHICLE(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						if (!func_219(PLAYER::PLAYER_ID()))
						{
						}
						func_238(0, 1, 1, 0, 0);
						if (GAMEPLAY::IS_BIT_SET(*uParam0, 21))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
							GAMEPLAY::CLEAR_BIT(uParam0, 21);
						}
						CAM::DO_SCREEN_FADE_IN(250);
						NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
						GAMEPLAY::SET_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142), 3);
						uParam0->f_13 = (GAMEPLAY::GET_GAME_TIMER() - func_213(uParam0, 48, 0));
						uParam0->f_293 = 1;
						func_224(uParam0, 10177.75f);
						GAMEPLAY::SET_BIT(uParam0, 15);
						uParam0->f_6 = 49;
					}
				}
				break;
			
			case 57:
				func_291(uParam0, 57);
				bVar8 = !uParam0->f_288;
				func_202(uParam0, bVar8, 0);
				if (uParam0->f_292)
				{
					STREAMING::END_SRL();
					GAMEPLAY::CLEAR_BIT(uParam0, 11);
				}
				if (!PED::IS_PED_INJURED(uParam0->f_35))
				{
					AI::TASK_STAND_STILL(uParam0->f_35, -1);
					PED::SET_PED_KEEP_TASK(uParam0->f_35, 1);
				}
				NETWORK::NETWORK_SET_VOICE_ACTIVE(1);
				if (!uParam0->f_288)
				{
					func_30(115, 1, -1, 1);
					return 1;
				}
				break;
			
			case 58:
				break;
			
			case 54:
				break;
			
			case 59:
				return 1;
				break;
		}
		func_201(uParam0);
		if (!uParam0->f_291)
		{
			if (uParam0->f_293)
			{
				uParam0->f_289 = SYSTEM::TO_FLOAT((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_13));
			}
			else
			{
				uParam0->f_289 = SYSTEM::TO_FLOAT(func_221(uParam0));
			}
			uParam0->f_290 = func_200(uParam0);
		}
		uParam0->f_291 = 0;
		if (uParam0->f_292 && GAMEPLAY::IS_BIT_SET(*uParam0, 11))
		{
			if (uParam0->f_293)
			{
				STREAMING::SET_SRL_TIME(uParam0->f_289);
			}
			else
			{
				STREAMING::SET_SRL_TIME(uParam0->f_290);
			}
		}
		func_197(uParam0);
		if (GAMEPLAY::IS_BIT_SET(*uParam0, 12))
		{
			if (func_258())
			{
				func_196();
			}
		}
		if (uParam0->f_6 > 0 && uParam0->f_6 <= 57)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 60);
				}
			}
			func_194(uParam0);
			UI::DISABLE_FRONTEND_THIS_FRAME();
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(3);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(13);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		}
		if (Global_2524719.f_1840)
		{
			CONTROLS::ENABLE_CONTROL_ACTION(2, 187, 1);
		}
	}
	return 0;
}

void func_194(var uParam0)
{
	var uVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(*uParam0, 9))
	{
		if (uParam0->f_6 > 0)
		{
			if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				if (!NETWORK::_0x35F0B98A8387274D())
				{
					uVar0 = PLAYER::PLAYER_ID() + 32;
					NETWORK::_0xFB680D403909DC70(1, uVar0);
					func_195(1);
					GAMEPLAY::SET_BIT(uParam0, 9);
				}
			}
			else
			{
				func_195(1);
				GAMEPLAY::SET_BIT(uParam0, 9);
			}
		}
	}
}

void func_195(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142, 18))
		{
			GAMEPLAY::SET_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142), 18);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142, 18))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142), 18);
	}
}

void func_196()
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_1315665, 255, 255, 255, 255, 0);
	if (Global_1315667 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1315665, "SET_BIG_LOGO_VISIBLE");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		Global_1315667 = 1;
	}
}

void func_197(var uParam0)
{
	vector3 vVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_58[uParam0->f_90]))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_58[uParam0->f_90], 0))
		{
		}
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_58[uParam0->f_90], 1) };
		if (vVar0.z < -50f)
		{
			func_198(uParam0, uParam0->f_90);
		}
	}
	uParam0->f_90++;
	if (uParam0->f_90 >= 15)
	{
		uParam0->f_90 = 0;
	}
}

void func_198(var uParam0, int iParam1)
{
	vector3 vVar0;
	var uVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_58[iParam1]))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_58[iParam1], 0))
		{
		}
		func_199(iParam1, &vVar0, &uVar3);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_58[iParam1], vVar0, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_58[iParam1], uVar3);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_58[iParam1], 1);
		VEHICLE::SET_VEHICLE_FIXED(uParam0->f_58[iParam1]);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_58[iParam1], 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_58[iParam1], 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_74[iParam1]))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_74[iParam1], 0))
		{
		}
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_74[iParam1], 0, 0);
	}
}

void func_199(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -285.8592f, -914.3868f, 30.08f };
			*uParam2 = 77.3101f;
			break;
		
		case 1:
			*uParam1 = { -303.4057f, -910.434f, 30.0797f };
			*uParam2 = 77.3122f;
			break;
		
		case 2:
			*uParam1 = { -328.6838f, -905.0965f, 30.0783f };
			*uParam2 = 74.4975f;
			break;
		
		case 3:
			*uParam1 = { -353.6149f, -896.1278f, 30.0707f };
			*uParam2 = 358.6274f;
			break;
		
		case 4:
			*uParam1 = { -354.2628f, -915.5025f, 30.08f };
			*uParam2 = 358.0417f;
			break;
		
		case 5:
			*uParam1 = { -354.6489f, -935.3478f, 30.08f };
			*uParam2 = 0.5678f;
			break;
		
		case 6:
			*uParam1 = { -354.4816f, -953.4573f, 30.08f };
			*uParam2 = 0.4572f;
			break;
		
		case 7:
			*uParam1 = { -343.5193f, -967.0103f, 30.08f };
			*uParam2 = 247.6961f;
			break;
		
		case 8:
			*uParam1 = { -324.7872f, -974.6605f, 30.08f };
			*uParam2 = 247.7728f;
			break;
		
		case 9:
			*uParam1 = { -301.3824f, -977.9114f, 30.08f };
			*uParam2 = 249.2065f;
			break;
		
		case 10:
			*uParam1 = { -342.4198f, -1019.456f, 29.3849f };
			*uParam2 = 250.0953f;
			break;
		
		case 11:
			*uParam1 = { -317.1607f, -1025.859f, 29.3849f };
			*uParam2 = 250.7381f;
			break;
		
		case 12:
			*uParam1 = { -302.658f, -1022.401f, 29.385f };
			*uParam2 = 244.0013f;
			break;
		
		case 13:
			*uParam1 = { -283.3195f, -1029.469f, 29.385f };
			*uParam2 = 252.7933f;
			break;
		
		case 14:
			*uParam1 = { -276.4286f, -1013.534f, 29.385f };
			*uParam2 = 339.4764f;
			break;
	}
}

float func_200(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (uParam0->f_6 >= 31 && uParam0->f_6 < 33)
	{
		if (func_248(uParam0))
		{
			fVar0 = SYSTEM::TO_FLOAT((uParam0->f_27 + CUTSCENE::GET_CUTSCENE_TIME()));
			if (CUTSCENE::_0x583DF8E3D4AFBD98() > 2)
			{
				fVar1 = ((fVar0 - 134735f) / SYSTEM::TO_FLOAT(52633));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = SYSTEM::TO_FLOAT((uParam0->f_27 + CUTSCENE::GET_CUTSCENE_TIME()));
		}
		return fVar0;
	}
	return uParam0->f_289;
}

void func_201(var uParam0)
{
	if (GAMEPLAY::IS_BIT_SET(*uParam0, 29))
	{
		GRAPHICS::DRAW_SPOT_LIGHT(-1160.942f, -1657.686f, 5.129621f, 0.8912546f, -0.3982928f, -0.2168599f, 226, 130, 78, 3.999999f, 6.6f, 1f, 30f, 1f);
		GRAPHICS::DRAW_SPOT_LIGHT(-1157.324f, -1659.878f, 5.449264f, -0.8403507f, 0.3984679f, -0.3674699f, 226, 130, 78, 3.900002f, 8.8f, 1f, 30f, 1f);
	}
}

void func_202(var uParam0, bool bParam1, bool bParam2)
{
	if (!GAMEPLAY::IS_BIT_SET(*uParam0, 0))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(0);
		}
		INTERIOR::_0x9E6542F0CE8E70A3(0);
		if (uParam0->f_292)
		{
			STREAMING::_0x20C6C7E4EB082A7F(0);
			STREAMING::END_SRL();
			GAMEPLAY::CLEAR_BIT(uParam0, 11);
		}
		if (GAMEPLAY::IS_BIT_SET(*uParam0, 14))
		{
			STREAMING::CLEAR_FOCUS();
			GAMEPLAY::CLEAR_BIT(uParam0, 14);
		}
		func_212();
		func_233(uParam0);
		func_284(uParam0);
		func_232(uParam0);
		func_254();
		func_237(uParam0);
		func_255(uParam0);
		func_211(uParam0);
		func_226(uParam0);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		if (bParam2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_34))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam0->f_34));
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_35));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_36))
		{
			PED::DELETE_PED(&(uParam0->f_36));
		}
		if (!uParam0->f_288)
		{
			func_382(0);
		}
		func_209();
		func_203();
		func_238(0, 1, 1, 0, 0);
		CAM::SET_WIDESCREEN_BORDERS(0, -1);
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(0, 1);
			}
		}
		if (GAMEPLAY::IS_BIT_SET(*uParam0, 21))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
			GAMEPLAY::CLEAR_BIT(uParam0, 21);
		}
		NETWORK::_0xFC18DB55AE19E046(0);
		func_342(1);
		if (GAMEPLAY::IS_BIT_SET(*uParam0, 26))
		{
			func_334(1, 0);
			GAMEPLAY::CLEAR_BIT(uParam0, 26);
		}
		Global_2437022.f_3728 = 0;
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			STREAMING::_0x40AEFD1A244741F2(0);
		}
		STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
		if (bParam1)
		{
		}
		func_180(0);
		func_192(1);
		Global_2524719.f_1840 = 0;
		Global_2524719.f_1839 = 0;
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_INTRO_RACE_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("MP_INTRO_RACE_SCENE");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		func_305(14, 1);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		GAMEPLAY::UNLOAD_CLOUD_HAT("CONTRAILS", 0);
		VEHICLE::REMOVE_VEHICLE_RECORDING(5, "FMINTRO");
		VEHICLE::REMOVE_VEHICLE_RECORDING(6, "FMINTRO");
		VEHICLE::REMOVE_VEHICLE_RECORDING(7, "FMINTRO");
		STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@");
		STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_female");
		STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_radio");
		STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_male");
		if (UI::DOES_BLIP_EXIST(UI::GET_MAIN_PLAYER_BLIP_ID()))
		{
			UI::SET_BLIP_SCALE(UI::GET_MAIN_PLAYER_BLIP_ID(), 0.7f);
		}
		UI::SET_RADAR_ZOOM(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
			NETWORK::NETWORK_SET_VOICE_ACTIVE(1);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		GAMEPLAY::SET_BIT(uParam0, 0);
	}
}

void func_203()
{
	func_204(0);
}

void func_204(bool bParam0)
{
	if (bParam0)
	{
		func_208();
		if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
		{
			GAMEPLAY::SET_BIT(&Global_2384, 16);
		}
		Global_14513.f_1 = 1;
		if (func_80(0))
		{
			func_205(0);
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

void func_205(int iParam0)
{
	if (func_207())
	{
		return;
	}
	if (Global_14681)
	{
		func_206(0, 0);
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
	if (!func_152())
	{
		Global_14513.f_1 = 3;
	}
}

void func_206(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_80(0))
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

bool func_207()
{
	return GAMEPLAY::IS_BIT_SET(Global_1678593, 19);
}

void func_208()
{
	if (Global_14513.f_1 == 9 || Global_14513.f_1 == 10)
	{
		Global_15875 = 0;
		Global_15871 = 1;
	}
}

void func_209()
{
	if (!Global_1312568)
	{
		return;
	}
	func_210();
}

void func_210()
{
	Global_1312568 = 0;
	StringCopy(&(Global_1312568.f_1), "", 24);
	Global_1312568.f_7 = 0;
}

void func_211(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_217(uParam0, iVar0);
		iVar0++;
	}
}

void func_212()
{
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 1);
}

int func_213(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam1 < 31)
	{
		iVar1 = 0;
		iVar2 = 6;
		iVar3 = 28;
	}
	else
	{
		if (bParam2)
		{
			iVar1 = uParam0->f_29;
		}
		else
		{
			iVar1 = uParam0->f_28;
		}
		iVar2 = 33;
		iVar3 = 57;
	}
	iVar0 = 0;
	while (iVar0 < (iVar3 - iVar2) + 1)
	{
		iVar4 = (iVar2 + iVar0);
		if (bParam2)
		{
			iVar1 = (iVar1 + func_215(iVar4));
		}
		else
		{
			iVar1 = (iVar1 + func_214(iVar4));
		}
		if (iParam1 == iVar4)
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_214(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
}

int func_215(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
}

int func_216(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	if (STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_34))
		{
			uParam0->f_34 = VEHICLE::CREATE_VEHICLE(iVar1, -198.221f, 301.8606f, 95.9455f, 148.1586f, 0, 0, 0);
			ENTITY::SET_ENTITY_ALWAYS_PRERENDER(uParam0->f_34, 1);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_34, 0);
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
			VEHICLE::SET_VEHICLE_LIGHTS(uParam0->f_34, 2);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
			{
				uParam0->f_35 = PED::CREATE_PED(26, iVar0, -195.2f, 307.1825f, 95.9455f, 143.6341f, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_35, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_34, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_35, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_35, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
				ENTITY::SET_ENTITY_PROOFS(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_34) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_35))
	{
		return 0;
	}
	return 1;
}

void func_217(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_58[iParam1]))
	{
		VEHICLE::DELETE_VEHICLE(&(uParam0->f_58[iParam1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_74[iParam1]))
	{
		PED::DELETE_PED(&(uParam0->f_74[iParam1]));
	}
}

void func_218(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_146), 22);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_146), 22);
	}
}

bool func_219(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_146, 22);
}

void func_220(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142), 4);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142), 4);
	}
}

int func_221(var uParam0)
{
	if (uParam0->f_6 < 31)
	{
		return AUDIO::GET_MUSIC_PLAYTIME();
	}
	if (uParam0->f_6 < 33)
	{
		return (uParam0->f_26 + CUTSCENE::GET_CUTSCENE_TIME());
	}
	return (uParam0->f_28 + AUDIO::GET_MUSIC_PLAYTIME());
}

void func_222(var uParam0, float fParam1)
{
	func_223(uParam0->f_34, 7, "FMINTRO", fParam1, 1);
}

void func_223(var uParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		if (bParam4)
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam0, iParam1, sParam2, 1);
		}
		else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0))
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam0, iParam1, sParam2, 1);
			VEHICLE::_0xDFFCEF48E511DB48(uParam0, 1);
		}
		else
		{
			iVar0 = VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, sParam2);
			if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(uParam0) != iVar0)
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam0, iParam1, sParam2, 1);
				VEHICLE::_0xDFFCEF48E511DB48(uParam0, 1);
			}
		}
		VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uParam0, (fParam3 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(uParam0)));
	}
}

void func_224(var uParam0, float fParam1)
{
	func_223(uParam0->f_34, 6, "FMINTRO", fParam1, 1);
}

void func_225(var uParam0)
{
	var uVar0;
	int iVar1;
	
	if (!uParam0->f_296)
	{
		uVar0 = GAMEPLAY::GET_HASH_KEY("ss1_rd1_03");
		iVar1 = uVar0;
		if (STREAMING::IS_MODEL_IN_CDIMAGE(iVar1))
		{
			func_7(iVar1);
			uParam0->f_296 = 1;
		}
	}
}

void func_226(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_37[iVar0]))
		{
			PED::DELETE_PED(&(uParam0->f_37[iVar0]));
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_mexgoon_02"));
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_a@base");
}

int func_227(var uParam0)
{
	int iVar0;
	
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_3, 5))
	{
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(joaat("g_m_y_mexgoon_02"));
		STREAMING::REQUEST_ANIM_DICT("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_a@base");
		if ((STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_mexgoon_02")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_37[iVar0]))
				{
					uParam0->f_37[iVar0] = PED::CREATE_PED(4, joaat("g_m_y_mexgoon_02"), -85.925f, -1233.407f, 27.759f, 0f, 0, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_37[iVar0], 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_37[iVar0], 1);
					switch (iVar0)
					{
						case 0:
							AI::TASK_PLAY_ANIM_ADVANCED(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85.925f, -1233.407f, 27.759f, 0f, 0f, 97.75f, 1000f, -1000f, -1, 1025, 0, 2, 0);
							break;
						
						case 1:
							AI::TASK_PLAY_ANIM_ADVANCED(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86.487f, -1232.985f, 28.759f, 0f, 0f, -110.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 2:
							AI::TASK_PLAY_ANIM_ADVANCED(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82.139f, -1203.525f, 26.574f, 0f, 0f, 90.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 3:
							AI::TASK_PLAY_ANIM_ADVANCED(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83.539f, -1203.537f, 27.549f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 4:
							AI::TASK_PLAY_ANIM_ADVANCED(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83.75f, -1197.136f, 26.471f, 0f, 0f, -174.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 5:
							ENTITY::SET_ENTITY_COORDS(uParam0->f_37[iVar0], -82.0542f, -1199.264f, 26.592f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(uParam0->f_37[iVar0], 76.8852f);
							WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_37[iVar0], 1);
							break;
						
						case 6:
							AI::TASK_PLAY_ANIM_ADVANCED(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222.397f, 27.417f, 0f, 0f, 98.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 7:
							ENTITY::SET_ENTITY_COORDS(uParam0->f_37[iVar0], -85.5161f, -1205.781f, 26.5847f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(uParam0->f_37[iVar0], 87.5786f);
							WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_37[iVar0], 1);
							break;
						
						case 8:
							AI::TASK_PLAY_ANIM_ADVANCED(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.1f, -1221.762f, 28.367f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 9:
							AI::TASK_PLAY_ANIM_ADVANCED(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.063f, -1222.918f, 28.417f, 0f, 0f, -45.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_37[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_mexgoon_02"));
		STREAMING::REMOVE_ANIM_DICT("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_a@base");
		GAMEPLAY::SET_BIT(&(uParam0->f_3), 5);
		return 1;
	}
	return 0;
}

bool func_228(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_157(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15829 = 0;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 1;
	Global_16815 = 0;
	Global_16819 = 0;
	StringCopy(&Global_16826, sParam3, 24);
	Global_2621441 = 0;
	return func_149(sParam2, iParam4, 0);
}

void func_229(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!GAMEPLAY::IS_BIT_SET(*uParam0, 25))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			switch (iVar0)
			{
				case 0:
					vVar1 = { -1403.42f, -2437.447f, 12.9496f };
					break;
				
				case 1:
					vVar1 = { -1245.758f, -2311.979f, 12.9445f };
					break;
			}
			if (!PED::IS_PED_INJURED(uParam0->f_98[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_92[iVar0], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_92[iVar0], 0);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_92[iVar0], 10f);
				AI::TASK_VEHICLE_DRIVE_TO_COORD(uParam0->f_98[iVar0], uParam0->f_92[iVar0], vVar1, 5f, 0, ENTITY::GET_ENTITY_MODEL(uParam0->f_92[iVar0]), 262144, 1f, 100f);
			}
			iVar0++;
		}
		GAMEPLAY::SET_BIT(uParam0, 25);
	}
}

int func_230(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_3, 11))
	{
		return 1;
	}
	iVar5 = joaat("shamal");
	STREAMING::REQUEST_MODEL(iVar5);
	STREAMING::REQUEST_MODEL(func_231());
	if (STREAMING::HAS_MODEL_LOADED(iVar5))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[iVar0]))
			{
				switch (iVar0)
				{
					case 0:
						vVar1 = { -1358.973f, -2361.92f, 12.9502f };
						fVar4 = 149.9339f;
						break;
					
					case 1:
						vVar1 = { -1302.004f, -2279.378f, 12.9468f };
						fVar4 = 239.9712f;
						break;
				}
				uParam0->f_92[iVar0] = VEHICLE::CREATE_VEHICLE(iVar5, vVar1, fVar4, 0, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_92[iVar0], 1084227584);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_92[iVar0], 1);
				VEHICLE::SET_VEHICLE_LIGHTS(uParam0->f_92[iVar0], 2);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (STREAMING::HAS_MODEL_LOADED(func_231()))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_98[iVar0]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[iVar0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_92[iVar0], 0))
					{
						uParam0->f_98[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_92[iVar0], 4, func_231(), -1, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_98[iVar0], 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_92[iVar0], 1, 1, 0);
					}
				}
			}
			iVar0++;
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_231());
	GAMEPLAY::SET_BIT(&(uParam0->f_3), 11);
	return 1;
}

var func_231()
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}

void func_232(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(uParam0->f_92[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_98[iVar0]))
		{
			PED::DELETE_PED(&(uParam0->f_98[iVar0]));
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_231());
}

void func_233(var uParam0)
{
	int iVar0;
	
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_3, 2))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cs_mp_jet_01_s"));
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_33))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_33));
		}
		if (uParam0->f_294)
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_120))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(uParam0->f_120, 0);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_121))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(uParam0->f_121, 0);
			}
			if (STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				STREAMING::REMOVE_PTFX_ASSET();
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_104[iVar0]))
			{
				PED::DELETE_PED(&(uParam0->f_104[iVar0]));
			}
			iVar0++;
		}
		GAMEPLAY::CLEAR_BIT(&(uParam0->f_3), 2);
	}
}

int func_234(var uParam0)
{
	if (func_248(uParam0))
	{
		STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_female");
		STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_radio");
		if (STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_1_lamar_drive_female") && STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_male");
		STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_radio");
		if (STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_1_lamar_drive_male") && STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	return 0;
}

int func_235(var uParam0)
{
	int iVar0;
	
	iVar0 = joaat("cs_lamardavis");
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_3, 10))
	{
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_36))
			{
				uParam0->f_36 = PED::CREATE_PED(26, iVar0, -976.6968f, -2679.861f, 35.6049f, 138.062f, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_36, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_36, 1);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_36, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_36, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
				ENTITY::SET_ENTITY_PROOFS(uParam0->f_36, 1, 1, 1, 1, 1, 1, 1, 0);
				func_383(&(uParam0->f_123), 1, uParam0->f_36, "Lamar", 0, 1);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_36))
		{
			return 0;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		GAMEPLAY::SET_BIT(&(uParam0->f_3), 10);
	}
	return 1;
}

void func_236(var uParam0, float fParam1)
{
	func_223(uParam0->f_34, 5, "FMINTRO", fParam1, 0);
}

void func_237(var uParam0)
{
	int iVar0;
	
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_251());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_252(uParam0, iVar0);
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_91))
	{
		PED::DELETE_PED(&(uParam0->f_91));
	}
}

void func_238(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_245(1);
		UI::_0xA8FDB297A8D25FBA();
		UI::_0xFDB423997FA30340();
		if (Global_14513.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_152())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_244(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_245(0);
		UI::_0xE1CD1E48E025E661();
		Global_56187 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_244(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_242(PLAYER::PLAYER_ID())) && !func_240(PLAYER::PLAYER_ID(), 0)) && !func_239()) && !bParam4)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_242(PLAYER::PLAYER_ID())) && !bParam4)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_71203 = 0;
	}
}

bool func_239()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18, 14);
}

bool func_240(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_241(-1, 0) == 8;
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

int func_241(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
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

int func_242(int iParam0)
{
	if (func_240(iParam0, 0))
	{
		return 1;
	}
	if (func_243())
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

bool func_243()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_244(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_245(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2383, 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2383, 13);
	}
}

void func_246(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_104[iVar0], 0))
		{
			PED::_0x4668D80430D6C299(uParam0->f_104[iVar0]);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam0->f_104[iVar0], func_247(iVar0), 0, 0, 64);
		}
		iVar0++;
	}
}

char* func_247(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_Plane_Passenger_1";
			break;
		
		case 1:
			return "MP_Plane_Passenger_2";
			break;
		
		case 2:
			return "MP_Plane_Passenger_3";
			break;
		
		case 3:
			return "MP_Plane_Passenger_4";
			break;
		
		case 4:
			return "MP_Plane_Passenger_5";
			break;
		
		case 5:
			return "MP_Plane_Passenger_6";
			break;
		
		case 6:
			return "MP_Plane_Passenger_7";
			break;
	}
	return "";
}

int func_248(var uParam0)
{
	if (uParam0->f_295)
	{
		return func_249();
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_249()
{
	return func_250(PLAYER::PLAYER_ID());
}

int func_250(var uParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_251()
{
	return joaat("s_m_y_xmech_02");
}

void func_252(var uParam0, int iParam1)
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_253(iParam1));
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[iParam1]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[iParam1], 0))
		{
		}
		VEHICLE::RELEASE_PRELOAD_MODS(uParam0->f_49[iParam1]);
		VEHICLE::DELETE_VEHICLE(&(uParam0->f_49[iParam1]));
	}
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("penumbra");
			break;
		
		case 1:
			return joaat("feltzer2");
			break;
		
		case 2:
			return joaat("coquette");
			break;
		
		case 3:
			return joaat("felon2");
			break;
		
		case 4:
			return joaat("sabregt");
			break;
		
		case 5:
			return joaat("dubsta");
			break;
		
		case 6:
			return joaat("tornado");
			break;
		
		case 7:
			return joaat("monroe");
			break;
	}
	return joaat("tailgater");
}

void func_254()
{
	Global_1315667 = 0;
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_1315665))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1315665, "SET_BIG_LOGO_VISIBLE");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_1315665);
	}
}

void func_255(var uParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[iVar1]))
		{
			uVar0 = uParam0->f_92[iVar1];
			ENTITY::DELETE_ENTITY(&uVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_98[iVar1]))
		{
			uVar0 = uParam0->f_98[iVar1];
			ENTITY::DELETE_ENTITY(&uVar0);
		}
		iVar1++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("monroe"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("feltzer2"));
	VEHICLE::REMOVE_VEHICLE_RECORDING(100, "FM_Intro_uber");
	VEHICLE::REMOVE_VEHICLE_RECORDING(101, "FM_Intro_uber");
	VEHICLE::REMOVE_VEHICLE_RECORDING(102, "FM_Intro_uber");
	VEHICLE::REMOVE_VEHICLE_RECORDING(103, "FM_Intro_uber");
	VEHICLE::REMOVE_VEHICLE_RECORDING(104, "FM_Intro_uber");
	STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@");
}

void func_256(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[2], 0))
		{
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(uParam0->f_49[2]);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[4]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[4], 0))
		{
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(uParam0->f_49[4]);
		}
	}
}

void func_257(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[2], 0))
		{
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(uParam0->f_49[2], 4, 0, 1f);
		}
	}
}

int func_258()
{
	if (DLC2::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_1315665))
	{
		Global_1315665 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("GTAV_ONLINE");
		return 0;
	}
	return 1;
}

void func_259(var uParam0, char* sParam1, char* sParam2, var uParam3, vector3 vParam4, vector3 vParam7)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam3))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam3, 0))
		{
		}
		if (!CAM::DOES_CAM_EXIST(uParam0->f_8))
		{
			uParam0->f_8 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
		}
		uParam0->f_9 = -1;
		uParam0->f_9 = PED::CREATE_SYNCHRONIZED_SCENE(vParam4, vParam7, 2);
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_9, uParam3, 0);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
		CAM::SET_CAM_ACTIVE(uParam0->f_8, 1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 1, 0);
	}
}

void func_260(var uParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_3, 3))
	{
		GAMEPLAY::PRELOAD_CLOUD_HAT("CONTRAILS");
		if (func_248(uParam0))
		{
			CUTSCENE::_REQUEST_CUTSCENE_EX("MP_INTRO_CONCAT", 103, 8);
		}
		else
		{
			CUTSCENE::_REQUEST_CUTSCENE_EX("MP_INTRO_CONCAT", 31, 8);
		}
		if (CUTSCENE::_0xB56BBBCC2955D9CB())
		{
			if (uParam0->f_295)
			{
				if (func_248(uParam0))
				{
					CUTSCENE::_0x4C61C75BEE8184C2("MP_Female_Character", 0, 1);
				}
				else
				{
					CUTSCENE::_0x4C61C75BEE8184C2("MP_Male_Character", 0, 1);
				}
			}
			func_261();
		}
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_3), 3);
		}
	}
}

void func_261()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		CUTSCENE::_0x4C61C75BEE8184C2(func_247(iVar0), 0, 1);
		iVar0++;
	}
}

int func_262(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	
	vVar1 = { -1200f, -1490f, 142.385f };
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_3, 2))
	{
		STREAMING::REQUEST_MODEL(joaat("p_cs_mp_jet_01_s"));
		STREAMING::REQUEST_MODEL(joaat("mp_m_freemode_01"));
		STREAMING::REQUEST_MODEL(joaat("mp_f_freemode_01"));
		if (uParam0->f_294)
		{
			STREAMING::REQUEST_PTFX_ASSET();
		}
		if (((STREAMING::HAS_MODEL_LOADED(joaat("p_cs_mp_jet_01_s")) && STREAMING::HAS_MODEL_LOADED(joaat("mp_m_freemode_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("mp_f_freemode_01"))) && (!uParam0->f_294 || STREAMING::HAS_PTFX_ASSET_LOADED()))
		{
			uParam0->f_33 = OBJECT::CREATE_OBJECT(joaat("p_cs_mp_jet_01_s"), vVar1, 0, 0, 0);
			ENTITY::SET_ENTITY_LOD_DIST(uParam0->f_33, 3000);
			ENTITY::_SET_ENTITY_SOMETHING(uParam0->f_33, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_33, 0, 0);
			if (uParam0->f_294)
			{
				uParam0->f_120 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_mp_intro_plane_exhaust", uParam0->f_33, -5.403f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				uParam0->f_121 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_mp_intro_plane_exhaust", uParam0->f_33, 6.629f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
			if (uParam0->f_295)
			{
				func_266(uParam0);
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_265(uParam0, iVar0))
				{
					uParam0->f_104[iVar0] = PED::CREATE_PED(26, joaat("mp_f_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				else
				{
					uParam0->f_104[iVar0] = PED::CREATE_PED(26, joaat("mp_m_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				if (func_264(uParam0, iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_112[iVar0])), 0))
					{
					}
					PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_112[iVar0])), uParam0->f_104[iVar0]);
					PED::_0x4668D80430D6C299(uParam0->f_104[iVar0]);
				}
				else
				{
					func_263(uParam0, iVar0);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cs_mp_jet_01_s"));
			GAMEPLAY::SET_BIT(&(uParam0->f_3), 2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_263(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 21, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 9, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 9, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 4, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 15, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 10, 0, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8);
			break;
		
		case 1:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 13, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 5, 4, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 10, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 10, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 11, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 13, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 10, 0, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8);
			break;
		
		case 2:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 15, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 1, 4, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 1, 7, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 2, 9, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 6, 0, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8);
			break;
		
		case 3:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 14, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 5, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 1, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 11, 5, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 3, 12, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8);
			break;
		
		case 4:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 18, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 15, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 15, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 2, 5, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 4, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 4, 0, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8);
			break;
		
		case 5:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 27, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 7, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 11, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 4, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 13, 14, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 5, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 2, 7, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8);
			break;
		
		case 6:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 16, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 15, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 5, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 2, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 3, 7, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8);
			break;
	}
}

int func_264(var uParam0, int iParam1)
{
	if ((uParam0->f_295 && uParam0->f_112[iParam1] != -1) && func_12(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_112[iParam1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_265(var uParam0, int iParam1)
{
	if (func_264(uParam0, iParam1))
	{
		return func_250(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_112[iParam1]));
	}
	else if (((iParam1 == 3 || iParam1 == 4) || iParam1 == 5) || iParam1 == 6)
	{
		return 1;
	}
	return 0;
}

void func_266(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		uParam0->f_112[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_12(iVar2, 0, 1))
		{
			if (PLAYER::PLAYER_ID() != iVar2)
			{
				if (iVar0 < 4)
				{
					uParam0->f_112[func_267(iVar0)] = iVar1;
					iVar0++;
				}
			}
		}
		iVar1++;
	}
}

int func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 1:
			return 6;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 1;
			break;
		
		case 5:
			return 3;
			break;
		
		case 6:
			return 2;
			break;
	}
	return 0;
}

int func_268(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_3, 9))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "FMINTRO");
	VEHICLE::REQUEST_VEHICLE_RECORDING(6, "FMINTRO");
	VEHICLE::REQUEST_VEHICLE_RECORDING(7, "FMINTRO");
	STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@");
	if (((((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "FMINTRO")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "FMINTRO")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "FMINTRO")) && STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@"))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_34))
		{
			GAMEPLAY::CLEAR_AREA(-1034.035f, -2730.485f, 19.0565f, 3f, 1, 0, 0, 0);
			uParam0->f_34 = VEHICLE::CREATE_VEHICLE(iVar1, -1032.322f, -2731.192f, 19.0658f, 239.2169f, 0, 0, 0);
			ENTITY::SET_ENTITY_ALWAYS_PRERENDER(uParam0->f_34, 1);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_34, 0);
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
			{
				uParam0->f_35 = PED::CREATE_PED(26, iVar0, -1031.6f, -2730.15f, 20.15f, 143.6341f, 0, 0);
				AI::TASK_ENTER_VEHICLE(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_35, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_34, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_35, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_35, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
				ENTITY::SET_ENTITY_PROOFS(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_34) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_35))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	GAMEPLAY::SET_BIT(&(uParam0->f_3), 9);
	return 1;
}

void func_269(var uParam0)
{
	int iVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_3, 0))
	{
		func_279();
		func_277();
		if (func_271(uParam0))
		{
			if (func_270(uParam0))
			{
				if (!CAM::DOES_CAM_EXIST(uParam0->f_7))
				{
					uParam0->f_7 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
				}
				CAM::SET_CAM_PARAMS(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
				iVar0 = 0;
				while (iVar0 < 8)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_253(iVar0));
					iVar0++;
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_251());
				GAMEPLAY::SET_BIT(&(uParam0->f_3), 0);
			}
		}
	}
}

int func_270(var uParam0)
{
	var uVar0;
	
	uVar0 = func_251();
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_91))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[2]))
		{
			if (STREAMING::IS_MODEL_IN_CDIMAGE(uVar0))
			{
				if (STREAMING::HAS_MODEL_LOADED(uVar0))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("MP_INTRO_SEQ@"))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_49[2], 0))
						{
							uParam0->f_10 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_10, uParam0->f_49[2], 0);
							uParam0->f_91 = PED::CREATE_PED(4, uVar0, 226.6826f, -998.5228f, -99.9999f, 63.813f, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_91, 1);
							AI::TASK_SYNCHRONIZED_SCENE(uParam0->f_91, uParam0->f_10, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 64, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_10, 1);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_91, 1);
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_91, 0, 0);
							WEAPON::REMOVE_WEAPON_FROM_PED(uParam0->f_91, joaat("gadget_parachute"));
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 0, 1, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 1, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 2, 0, 2, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 3, 0, 2, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 4, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 5, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 6, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 7, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 8, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 9, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 10, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 11, 0, 0, 0);
							PED::CLEAR_PED_PROP(uParam0->f_91, 0);
							PED::CLEAR_PED_PROP(uParam0->f_91, 1);
							PED::CLEAR_PED_PROP(uParam0->f_91, 2);
							PED::CLEAR_PED_PROP(uParam0->f_91, 3);
							PED::CLEAR_PED_PROP(uParam0->f_91, 4);
							PED::CLEAR_PED_PROP(uParam0->f_91, 5);
							PED::CLEAR_PED_PROP(uParam0->f_91, 6);
							PED::CLEAR_PED_PROP(uParam0->f_91, 7);
							PED::CLEAR_PED_PROP(uParam0->f_91, 8);
						}
					}
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_91))
	{
		return 0;
	}
	return 1;
}

int func_271(var uParam0)
{
	var uVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;
	
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_2, 31))
	{
		func_279();
		iVar5 = 0;
		while (iVar5 < 8)
		{
			func_276(iVar5, &vVar1, &uVar4);
			if (!func_275(vVar1, 0f, 0f, 0f, 0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[iVar5]))
				{
					uVar0 = func_253(iVar5);
					if (STREAMING::IS_MODEL_IN_CDIMAGE(uVar0))
					{
						if (STREAMING::HAS_MODEL_LOADED(uVar0))
						{
							uParam0->f_49[iVar5] = VEHICLE::CREATE_VEHICLE(uVar0, vVar1, uVar4, 0, 0, 0);
							ENTITY::_SET_ENTITY_SOMETHING(uParam0->f_49[iVar5], 1);
							VEHICLE::SET_VEHICLE_DIRT_LEVEL(uParam0->f_49[iVar5], 0f);
							VEHICLE::_0xAB04325045427AAE(uParam0->f_49[iVar5], 0);
							if (iVar5 == 2)
							{
								VEHICLE::SET_VEHICLE_DOOR_OPEN(uParam0->f_49[iVar5], 4, 0, 1);
								VEHICLE::SET_VEHICLE_DOOR_CONTROL(uParam0->f_49[iVar5], 4, 0, 1f);
							}
							func_274(uParam0, iVar5);
							func_273(uParam0, iVar5);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uVar0);
						}
					}
				}
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 8)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[iVar5]))
			{
				return 0;
			}
			if (!GAMEPLAY::IS_BIT_SET(uParam0->f_2, iVar5))
			{
				if (func_272(uParam0, iVar5))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_2), iVar5);
				}
				else
				{
					return 0;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[iVar5], 0))
			{
				if (!VEHICLE::_IS_VEHICLE_MOD_LOAD_DONE(uParam0->f_49[iVar5]))
				{
					return 0;
				}
			}
			iVar5++;
		}
		GAMEPLAY::SET_BIT(&(uParam0->f_2), 31);
	}
	return 1;
}

int func_272(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[iParam1], 0))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[iParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 0, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 2, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 3, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 5, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 7, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 10, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 12, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 14, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 15, 4, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 11, 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[iParam1], 0))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[iParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 12, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 15, 3, 0);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[iParam1], 22, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[iParam1], 0))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[iParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 0, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 14, 5, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 15, 3, 0);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[iParam1], 22, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[iParam1], 0))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[iParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 15, 3, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 11, 0);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[iParam1], 22, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[iParam1], 0))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[iParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 2, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 7, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 11, 3, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 12, 2, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 13, 2, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 15, 3, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 16, 4, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 5, 0);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[iParam1], 22, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 5:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[iParam1], 0))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[iParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 0, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 2, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 3, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 6, 2, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 10, 3, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 14, 7, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 15, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 5, 0);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[iParam1], 22, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 6:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[iParam1], 0))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[iParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 8, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 14, 7, 0);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 0, 0);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[iParam1], 22, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void func_273(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 0, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 2, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 3, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 5, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 7, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 10, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 1:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			break;
		
		case 2:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 0, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 0);
			break;
		
		case 3:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 4:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 2, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 7, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 5:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 0, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 2, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 3, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 6, 2);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 10, 3);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 6:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 8, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 0);
			break;
	}
}

void func_274(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 83, 134);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 134, 134);
			break;
		
		case 1:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 0, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 2:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 49, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 3:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 0, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 4:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 43, 5);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 5:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 3, 3);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 6, 156);
			break;
		
		case 6:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 35, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
	}
}

bool func_275(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_276(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 224.478f, -986.548f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 1:
			*uParam1 = { 224.305f, -991.848f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 2:
			*uParam1 = { 224.535f, -997.348f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 3:
			*uParam1 = { 232.847f, -986.818f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 4:
			*uParam1 = { 232.847f, -980.848f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 5:
			*uParam1 = { 224.535f, -980.848f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 6:
			*uParam1 = { 232.779f, -992.84f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 7:
			*uParam1 = { 232.709f, -997.348f, -99.9999f };
			*uParam2 = 118.309f;
			break;
	}
}

void func_277()
{
	STREAMING::REQUEST_MODEL(func_251());
	STREAMING::REQUEST_ANIM_DICT(func_278());
}

char* func_278()
{
	return "MP_INTRO_SEQ@";
}

void func_279()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		STREAMING::REQUEST_MODEL(func_253(iVar0));
		iVar0++;
	}
}

void func_280(var uParam0, float fParam1, float fParam2)
{
	func_223(uParam0->f_92[0], 100, "FM_Intro_uber", fParam1, 0);
	func_223(uParam0->f_92[1], 101, "FM_Intro_uber", fParam1, 0);
	func_223(uParam0->f_92[2], 102, "FM_Intro_uber", (fParam1 + fParam2), 0);
	func_223(uParam0->f_92[3], 103, "FM_Intro_uber", fParam1, 0);
	func_223(uParam0->f_92[4], 104, "FM_Intro_uber", fParam1, 0);
}

void func_281(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	switch (iParam1)
	{
		case 14:
			func_282(uParam0, 0, -2997.174f, 330.9234f, 14.2341f, -15.97f, &uVar1, 1);
			func_282(uParam0, 2, -2983.9f, 423.7414f, 14.4122f, -5.25f, &uVar1, 1);
			break;
		
		case 15:
			func_282(uParam0, 1, -2622.208f, -109.3386f, 19.2643f, 39.34f, &uVar1, 1);
			func_282(uParam0, 3, -2583.95f, -143.6469f, 20.6224f, 48.89f, &uVar1, 1);
			func_282(uParam0, 7, -2552.145f, -169.0495f, 19.8664f, 60.04f, &uVar1, 1);
			func_282(uParam0, 8, -2531.474f, -174.4581f, 19.2269f, 58.09f, &uVar1, 1);
			break;
		
		case 16:
			break;
		
		case 17:
			func_282(uParam0, 0, -2420.618f, -232.2668f, 15.3525f, 57.71f, &uVar1, 1);
			func_282(uParam0, 2, -2399.709f, -249.2471f, 14.9551f, 58.19f, &uVar1, 1);
			func_282(uParam0, 4, -2568.499f, -153.4655f, 20.4075f, 54.1f, &uVar1, 1);
			func_282(uParam0, 5, -2485.392f, -198.0737f, 17.5783f, 63.83f, &uVar1, 1);
			func_282(uParam0, 6, -2469.139f, -206.5518f, 17.0201f, 60.64f, &uVar1, 1);
			func_282(uParam0, 9, -2408.733f, -238.8328f, 15.2055f, 59.84f, &uVar1, 1);
			break;
		
		case 18:
			func_282(uParam0, 1, -2146.384f, -323.4933f, 12.0429f, 14.8813f, &uVar1, 1);
			func_282(uParam0, 3, -2075.444f, -374.131f, 11.556f, 56.66f, &uVar1, 1);
			func_282(uParam0, 7, -2160.252f, -294.0829f, 12.5163f, 163.95f, &uVar1, 1);
			func_282(uParam0, 8, -2191.429f, -335.8769f, 12.7225f, 84.71f, &uVar1, 1);
			break;
		
		case 19:
			func_282(uParam0, 0, -1833.87f, -561.7711f, 11.0989f, 48.11f, &uVar1, 1);
			func_282(uParam0, 1, -1630.587f, -685.6821f, 16.5351f, 58.23f, &uVar1, 1);
			func_282(uParam0, 2, -1668.738f, -662.7587f, 14.7925f, 60.52f, &uVar1, 1);
			func_282(uParam0, 3, -1564.946f, -738.6324f, 10.7672f, 68.32f, &uVar1, 1);
			func_282(uParam0, 4, -1706.507f, -720.8959f, 9.6281f, -132.94f, &uVar1, 1);
			func_282(uParam0, 5, -1626.756f, -769.9745f, 10.2367f, -128.8f, &uVar1, 1);
			func_282(uParam0, 6, -1782.764f, -610.5726f, 10.3008f, 52.34f, &uVar1, 1);
			func_282(uParam0, 7, -1595.258f, -733.587f, 10.8576f, 68.39f, &uVar1, 1);
			func_282(uParam0, 8, -1751.892f, -682.1017f, 9.6795f, -134.89f, &uVar1, 1);
			func_282(uParam0, 9, -1742.098f, -642.5658f, 9.8169f, 48.19f, &uVar1, 1);
			break;
		
		case 33:
			func_282(uParam0, 0, -934.4687f, -2716.038f, 12.7365f, 309.2312f, &uVar1, 0);
			func_282(uParam0, 5, -975.6617f, -2733.517f, 12.8172f, 267.4944f, &uVar1, 0);
			break;
		
		case 34:
			break;
		
		case 35:
			break;
		
		case 36:
			func_282(uParam0, 6, -850.1183f, -2615.271f, 14.1979f, 327.7461f, &uVar1, 0);
			break;
		
		case 37:
			break;
		
		case 38:
			func_282(uParam0, 0, -712.0925f, -1983.516f, 25.688f, -167.99f, &uVar1, 0);
			func_282(uParam0, 1, -533.9934f, -2004.727f, 26.9085f, 58.71f, &uVar1, 0);
			func_282(uParam0, 2, -653.3551f, -2047.782f, 27.3566f, -112.14f, &uVar1, 0);
			func_282(uParam0, 3, -663.821f, -1934.85f, 27.1417f, -121.65f, &uVar1, 0);
			func_282(uParam0, 4, -656.6017f, -2009.078f, 30.0188f, -106.53f, &uVar1, 0);
			func_282(uParam0, 5, -502.696f, -2023.068f, 26.2376f, 60.2827f, &uVar1, 0);
			func_282(uParam0, 6, -460.1447f, -2044.032f, 26.2371f, 63.9022f, &uVar1, 0);
			func_282(uParam0, 7, -624.7944f, -1960.975f, 26.29f, 237.3848f, &uVar1, 0);
			func_282(uParam0, 8, -463.0545f, -1998.255f, 36.6533f, 27.85f, &uVar1, 0);
			func_282(uParam0, 9, -473.4099f, -1950.213f, 24.7576f, 37.16f, &uVar1, 0);
			func_282(uParam0, 10, -574.5834f, -1994.9f, 26.2871f, 236.0571f, &uVar1, 0);
			func_282(uParam0, 11, -546.7894f, -2012.781f, 26.3137f, 235.9205f, &uVar1, 0);
			func_282(uParam0, 12, -584.929f, -1970.332f, 26.2437f, 55.8826f, &uVar1, 0);
			func_282(uParam0, 13, -633.4936f, -1937.682f, 26.2413f, 54.9911f, &uVar1, 0);
			func_282(uParam0, 14, -601.2188f, -1941.419f, 17.4986f, 148.6622f, &uVar1, 0);
			break;
		
		case 39:
			func_282(uParam0, 4, -499.2335f, -1906.532f, 16.3534f, 133.5751f, &uVar1, 0);
			func_282(uParam0, 9, -518.8654f, -1918.144f, 16.3355f, 134.6305f, &uVar1, 0);
			break;
		
		case 40:
			func_282(uParam0, 3, -270.2197f, -1499.752f, 29.4309f, -13.07f, &uVar1, 0);
			func_282(uParam0, 7, -313.1461f, -1559.589f, 24.2966f, 145.66f, &uVar1, 0);
			func_282(uParam0, 8, -301.9485f, -1550.052f, 25.5595f, 146.95f, &uVar1, 0);
			break;
		
		case 41:
			break;
		
		case 42:
			break;
		
		case 43:
			func_282(uParam0, 1, 246.1231f, -238.5137f, 52.9482f, 251.5966f, &uVar1, 0);
			func_282(uParam0, 2, 214.2755f, -202.6486f, 53.5033f, 70.72f, &uVar1, 0);
			func_282(uParam0, 6, 263.1977f, -115.1292f, 69.0366f, 155.02f, &uVar1, 0);
			break;
		
		case 44:
			func_282(uParam0, 0, 392.6941f, 239.868f, 102.5932f, 159.15f, &uVar1, 0);
			func_282(uParam0, 7, 375.2224f, 192.316f, 102.0397f, 160.4247f, &uVar1, 0);
			func_282(uParam0, 12, 377.4185f, 166.3668f, 102.0407f, 337.9135f, &uVar1, 0);
			break;
		
		case 45:
			func_282(uParam0, 1, 267.8363f, 181.3352f, 103.7037f, 71.7724f, &uVar1, 0);
			func_282(uParam0, 3, 216.3894f, 211.8832f, 105.2308f, -19.82f, &uVar1, 0);
			func_282(uParam0, 4, 290.3365f, 172.6194f, 103.7313f, 67.09f, &uVar1, 0);
			func_282(uParam0, 5, 283.6507f, 155.574f, 103.264f, 252.0678f, &uVar1, 0);
			func_282(uParam0, 8, 309.5128f, 156.7439f, 103.3183f, -112.52f, &uVar1, 0);
			func_282(uParam0, 9, 249.0189f, 168.3015f, 104.5421f, -112.05f, &uVar1, 0);
			func_282(uParam0, 11, 313.7221f, 144.8591f, 102.6542f, 249.0527f, &uVar1, 0);
			func_282(uParam0, 13, 171.2032f, 216.4137f, 105.2411f, 69.1778f, &uVar1, 0);
			break;
		
		case 46:
			break;
		
		case 47:
			func_282(uParam0, 2, 226.2312f, 176.6035f, 104.3217f, 252.5577f, &uVar1, 0);
			func_282(uParam0, 6, 247.4283f, 168.6965f, 103.9378f, 250.2977f, &uVar1, 0);
			func_282(uParam0, 7, 211.375f, 181.7446f, 104.561f, 250.2252f, &uVar1, 0);
			break;
		
		case 48:
			break;
		
		case 49:
			func_282(uParam0, 2, -192.4192f, 249.71f, 91.7534f, -99.42f, &uVar1, 0);
			func_282(uParam0, 3, -45.3246f, 256.5581f, 105.0516f, 272.9104f, &uVar1, 0);
			func_282(uParam0, 4, -24.1551f, 272.3286f, 106.4563f, 96.6005f, &uVar1, 0);
			func_282(uParam0, 5, 6.5526f, 270.3987f, 108.268f, 84.5591f, &uVar1, 0);
			func_282(uParam0, 6, -124.1576f, 245.0871f, 96.1105f, -89.91f, &uVar1, 0);
			func_282(uParam0, 7, -140.9613f, 262.532f, 94.5308f, 87.51f, &uVar1, 0);
			func_282(uParam0, 9, -83.4766f, 247.5941f, 99.488f, 275.7796f, &uVar1, 0);
			func_282(uParam0, 10, -215.5077f, 252.4543f, 91.0469f, 264.726f, &uVar1, 0);
			break;
		
		case 50:
			break;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!GAMEPLAY::IS_BIT_SET(uVar1, iVar0))
		{
			func_198(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_282(var uParam0, int iParam1, vector3 vParam2, float fParam5, var uParam6, bool bParam7)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_58[iParam1], 0) && !PED::IS_PED_INJURED(uParam0->f_74[iParam1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_58[iParam1], 0);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_58[iParam1], 1, 0);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_58[iParam1], vParam2, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_58[iParam1], fParam5);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_58[iParam1], 1084227584);
		VEHICLE::SET_VEHICLE_FIXED(uParam0->f_58[iParam1]);
		if (bParam7)
		{
			AI::TASK_VEHICLE_MISSION(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 35f, 786603, 5f, 5f, 1);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_58[iParam1], 30f);
		}
		else
		{
			AI::TASK_VEHICLE_MISSION(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 15f, 786603, 5f, 5f, 1);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_58[iParam1], 10f);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_74[iParam1], 1);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_58[iParam1], 1, 0);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_74[iParam1], 1, 0);
		GAMEPLAY::SET_BIT(uParam6, iParam1);
	}
}

void func_283(var uParam0, char* sParam1, char* sParam2, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10)
{
	if (!CAM::DOES_CAM_EXIST(uParam0->f_8))
	{
		uParam0->f_8 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
	}
	uParam0->f_9 = -1;
	uParam0->f_9 = PED::CREATE_SYNCHRONIZED_SCENE(vParam3, vParam6, 2);
	CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
	PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_9, fParam9);
	PED::SET_SYNCHRONIZED_SCENE_RATE(uParam0->f_9, iParam10);
	CAM::SET_CAM_ACTIVE(uParam0->f_8, 1);
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 1, 0);
}

void func_284(var uParam0)
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("frogger"));
	VEHICLE::REMOVE_VEHICLE_RECORDING(8, "FMIntro");
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_48))
	{
		VEHICLE::DELETE_VEHICLE(&(uParam0->f_48));
	}
}

int func_285(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_3, 7))
	{
		return 1;
	}
	else
	{
		func_287();
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[0]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
			{
				uParam0->f_92[0] = VEHICLE::CREATE_VEHICLE(joaat("cheetah"), -3007.912f, 370.6909f, 13.7517f, 184.1746f, 0, 0, 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_92[0], 0);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_92[0], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[1]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("entityxf")))
			{
				uParam0->f_92[1] = VEHICLE::CREATE_VEHICLE(joaat("entityxf"), -2999.383f, 404.3465f, 14.3213f, 184.1746f, 0, 0, 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_92[1], 0);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_92[1], -0.0001f, -0.002f, 0.9978f, 0.0661f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_92[1], 8);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_92[1], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[2]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("monroe")))
			{
				uParam0->f_92[2] = VEHICLE::CREATE_VEHICLE(joaat("monroe"), -2994.417f, 435.5293f, 14.278f, 184.1746f, 0, 0, 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_92[2], 0);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_92[2], 0.0072f, -0.0028f, 0.9981f, 0.0612f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_92[2], 2);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_92[2], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[3]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
			{
				uParam0->f_92[3] = VEHICLE::CREATE_VEHICLE(joaat("cheetah"), -2992.259f, 473.8287f, 14.5044f, 184.1746f, 0, 0, 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_92[3], 0);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_92[3], 0.0071f, -0.0058f, 0.9993f, 0.0375f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_92[3], 15);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_92[3], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[4]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("feltzer2")))
			{
				uParam0->f_92[4] = VEHICLE::CREATE_VEHICLE(joaat("feltzer2"), -2988.246f, 425.2664f, 14.387f, 184.1746f, 0, 0, 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_92[4], 0);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_92[4], 0.0026f, -0.0014f, 0.998f, 0.0637f);
				VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_92[4], 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_92[4], 0, 156);
				VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_92[4], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_92[4], 0))
		{
			if (!GAMEPLAY::IS_BIT_SET(uParam0->f_3, 1))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_92[4]) > 0)
				{
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_92[4], 22, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_92[4], 0);
					GAMEPLAY::SET_BIT(&(uParam0->f_3), 1);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (STREAMING::HAS_MODEL_LOADED(func_231()))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_98[iVar1]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_92[iVar1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_92[iVar1], 0))
						{
							uParam0->f_98[iVar1] = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_92[iVar1], 4, func_231(), -1, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_98[iVar1], 1);
							VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_92[iVar1], 1, 1, 0);
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("monroe"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("feltzer2"));
			GAMEPLAY::SET_BIT(&(uParam0->f_3), 7);
			return 1;
		}
	}
	return 0;
}

int func_286()
{
	func_287();
	if (STREAMING::HAS_MODEL_LOADED(func_231()))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("monroe")))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("entityxf")))
				{
					if (STREAMING::HAS_MODEL_LOADED(joaat("feltzer2")))
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(100, "FM_Intro_uber"))
						{
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "FM_Intro_uber"))
							{
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "FM_Intro_uber"))
								{
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "FM_Intro_uber"))
									{
										if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "FM_Intro_uber"))
										{
											if (STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@"))
											{
												return 1;
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
	return 0;
}

void func_287()
{
	STREAMING::REQUEST_MODEL(joaat("cheetah"));
	STREAMING::REQUEST_MODEL(joaat("monroe"));
	STREAMING::REQUEST_MODEL(joaat("entityxf"));
	STREAMING::REQUEST_MODEL(joaat("feltzer2"));
	STREAMING::REQUEST_MODEL(func_231());
	VEHICLE::REQUEST_VEHICLE_RECORDING(100, "FM_Intro_uber");
	VEHICLE::REQUEST_VEHICLE_RECORDING(101, "FM_Intro_uber");
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "FM_Intro_uber");
	VEHICLE::REQUEST_VEHICLE_RECORDING(103, "FM_Intro_uber");
	VEHICLE::REQUEST_VEHICLE_RECORDING(104, "FM_Intro_uber");
	STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@");
}

int func_288(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_3, 4))
	{
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(joaat("asterope"));
		STREAMING::REQUEST_MODEL(joaat("sentinel"));
		STREAMING::REQUEST_MODEL(func_231());
		if ((STREAMING::HAS_MODEL_LOADED(joaat("asterope")) && STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) && STREAMING::HAS_MODEL_LOADED(func_231()))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_58[iVar0]))
				{
					if (iVar0 < 7)
					{
						iVar1 = joaat("asterope");
					}
					else
					{
						iVar1 = joaat("sentinel");
					}
					func_199(iVar0, &vVar2, &uVar5);
					uParam0->f_58[iVar0] = VEHICLE::CREATE_VEHICLE(iVar1, vVar2, uVar5, 0, 0, 0);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_58[iVar0], iVar0);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_58[iVar0], 1);
					VEHICLE::SET_VEHICLE_LIGHTS(uParam0->f_58[iVar0], 2);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_58[iVar0], 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_58[iVar0]))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_74[iVar0]))
					{
						uParam0->f_74[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_58[iVar0], 4, func_231(), -1, 0, 0);
						ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_74[iVar0], 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_74[iVar0], 1);
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_58[iVar0]) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_74[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("asterope"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sentinel"));
		GAMEPLAY::SET_BIT(&(uParam0->f_3), 4);
		return 1;
	}
	return 0;
}

int func_289(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_213(uParam0, iParam1, 0);
	if (uParam0->f_293)
	{
		if ((uParam0->f_13 + iVar0) + iParam2) <= GAMEPLAY::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	else if (iVar0 + iParam2) <= func_221(uParam0)
	{
		return 1;
	}
	return 0;
}

int func_290(var uParam0)
{
	int iVar0;
	
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_3, 8))
	{
		return 1;
	}
	iVar0 = joaat("frogger");
	STREAMING::REQUEST_MODEL(iVar0);
	VEHICLE::REQUEST_VEHICLE_RECORDING(8, "FMIntro");
	if (STREAMING::HAS_MODEL_LOADED(iVar0) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "FMIntro"))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_48))
		{
			uParam0->f_48 = VEHICLE::CREATE_VEHICLE(iVar0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(8, 0f, "FMIntro"), 0f, 0, 0, 0);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam0->f_48, 8, "FMIntro", 1);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uParam0->f_48, 5000f);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(uParam0->f_48);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_48, 0, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_48))
	{
		return 0;
	}
	GAMEPLAY::SET_BIT(&(uParam0->f_3), 8);
	return 1;
}

void func_291(var uParam0, int iParam1)
{
	if (func_289(uParam0, iParam1, 0))
	{
		if (uParam0->f_293)
		{
			uParam0->f_13 = (GAMEPLAY::GET_GAME_TIMER() - func_213(uParam0, iParam1, 0));
		}
		else
		{
			uParam0->f_291 = 1;
		}
	}
}

void func_292(var uParam0)
{
	uParam0->f_13 = GAMEPLAY::GET_GAME_TIMER();
}

Vector3 func_293(vector3 vParam0)
{
	return (-SYSTEM::SIN(vParam0.z) * SYSTEM::COS(vParam0.x)), (SYSTEM::COS(vParam0.z) * SYSTEM::COS(vParam0.x)), SYSTEM::SIN(vParam0.x);
}

int func_294()
{
	return Global_1312792;
}

void func_295()
{
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 0, 0, 0);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 0, 0, 0);
}

void func_296()
{
	func_205(0);
	func_204(1);
}

void func_297(bool bParam0, int iParam1)
{
	func_301();
	func_299(1);
	UI::CLEAR_HELP(1);
	UI::CLEAR_PRINTS();
	func_238(1, 1, 1, 0, 0);
	func_298();
	func_191(12, 1, -1);
	func_192(0);
	CAM::SET_WIDESCREEN_BORDERS(1, -1);
	UI::DISPLAY_RADAR(0);
	UI::DISPLAY_HUD(0);
	func_299(1);
	func_245(1);
	Global_2437022.f_3728 = 1;
	if (bParam0)
	{
		if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(1, iParam1);
		}
	}
}

void func_298()
{
	func_192(0);
	func_191(4, 1, -1);
	func_191(6, 1, -1);
	func_191(7, 1, -1);
	func_191(3, 1, -1);
	func_191(1, 1, -1);
	func_191(2, 1, -1);
	func_191(11, 1, -1);
	func_191(13, 1, -1);
	func_191(14, 1, -1);
	func_191(16, 1, -1);
}

void func_299(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_104722)
	{
		UI::CLEAR_FLOATING_HELP(iVar0, iParam0);
		func_300(iVar0);
		iVar0++;
	}
}

void func_300(int iParam0)
{
	Global_104722[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_104722[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_104722[iParam0 /*28*/].f_4), "", 64);
	Global_104722[iParam0 /*28*/].f_23 = 0;
	Global_104722[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_104722[iParam0 /*28*/].f_27 = 0;
	Global_104722[iParam0 /*28*/].f_20 = 0;
	Global_104722[iParam0 /*28*/].f_22 = 0;
}

void func_301()
{
	Global_1312568 = 1;
	StringCopy(&(Global_1312568.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
	Global_1312568.f_7 = GAMEPLAY::GET_HASH_KEY(&(Global_1312568.f_1));
}

int func_302()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_304(0);
		GRAPHICS::_0xDE81239437E8C5A8();
		return 1;
	}
	if (func_303() == 3)
	{
		func_304(2);
		GRAPHICS::_TRANSITION_FROM_BLURRED(250f);
	}
	if (GRAPHICS::IS_PARTICLE_FX_DELAYED_BLINK() >= 250f)
	{
		GRAPHICS::_TRANSITION_FROM_BLURRED(250f);
	}
	if (GRAPHICS::_0x7B226C785A52A0A9() == 0)
	{
		GRAPHICS::_TRANSITION_FROM_BLURRED(250f);
	}
	if (GRAPHICS::IS_PARTICLE_FX_DELAYED_BLINK() <= 0f)
	{
		func_304(0);
		return 1;
	}
	return 0;
}

int func_303()
{
	return Global_1312466.f_19;
}

void func_304(int iParam0)
{
	if (Global_1312466.f_19 != iParam0)
	{
		Global_1312466.f_19 = iParam0;
	}
}

void func_305(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_309(iParam0, &iVar1);
	if (!GAMEPLAY::ARE_STRINGS_EQUAL("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				func_308(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (func_306(iParam0))
			{
				func_308(iParam0, 0);
			}
		}
		INTERIOR::DISABLE_INTERIOR(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_306(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_307(iParam0) };
	if (Var0.f_1 != -1 && GAMEPLAY::IS_BIT_SET(Global_31895[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_307(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 6)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_308(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_307(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_31895[Var0.f_1]), Var0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_31895[Var0.f_1]), Var0);
	}
}

var func_309(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_310(iParam0) };
	*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_310(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar5 = { func_311(1, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar5 = { func_311(2, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar5 = { func_311(3, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar5 = { func_311(4, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar5 = { func_311(5, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar5 = { func_311(6, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar5 = { func_311(7, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049778[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar5 = { func_311(35, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar5 = { func_311(36, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar5 = { func_311(37, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar5 = { func_311(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar5 = { func_311(39, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar5 = { func_311(40, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar5 = { func_311(41, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar5 = { func_311(42, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar5 = { func_311(43, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar5 = { func_311(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar5 = { func_311(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar5 = { func_311(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar5 = { func_311(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar5 = { func_311(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar5 = { func_311(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar5 = { func_311(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar5 = { func_311(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar5 = { func_311(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar5 = { func_311(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar5 = { func_311(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar5 = { func_311(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar5 = { func_311(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar5 = { func_311(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar5 = { func_311(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar5 = { func_311(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar5 = { func_311(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar5 = { func_311(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar5 = { func_311(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar5 = { func_311(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar5 = { func_311(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar5 = { func_311(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar5 = { func_311(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar5 = { func_311(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar5 = { func_311(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar5 = { func_311(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar5 = { func_311(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar5 = { func_311(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar5 = { func_311(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar5 = { func_311(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar5 = { func_311(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar5 = { func_311(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar5 = { func_311(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar5 = { func_311(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar5 = { func_311(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar5 = { func_311(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			vVar5 = { func_311(91, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			vVar5 = { func_311(97, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			vVar5 = { func_311(103, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			vVar5 = { func_311(104, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			vVar5 = { func_311(105, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			vVar5 = { func_311(106, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			vVar5 = { func_311(107, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			vVar5 = { func_311(108, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			vVar5 = { func_311(109, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			vVar5 = { func_311(110, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			vVar5 = { func_311(111, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			vVar5 = { func_311(112, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			vVar5 = { func_311(113, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			vVar5 = { func_311(114, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			vVar5 = { func_311(103, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			vVar5 = { func_311(106, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			vVar5 = { func_311(109, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			vVar5 = { func_311(112, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 195:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_311(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_312()
{
	return Global_2459351;
}

bool func_313()
{
	return Global_2458189;
}

void func_314(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_330(bParam0, 0);
	}
	func_328(0);
	func_315(65);
}

void func_315(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = func_294();
	if (Global_1312857)
	{
		uVar1 = func_327(iParam0);
		uVar2 = GAMEPLAY::GET_HASH_KEY(uVar1);
		func_326(&Global_2460442, 1, 0);
		unk_0xC3BFED92026A2AAD(uVar2, 1, uVar0, iParam0, 0);
	}
	if (iParam0 == 2)
	{
		func_316();
	}
	Global_1312792 = iParam0;
}

void func_316()
{
	if (Global_2458104)
	{
		if (func_318())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			func_317();
		}
	}
}

void func_317()
{
	if (Global_2458101)
	{
		if (!Global_2458100)
		{
			Global_2458100 = 1;
			Global_2458106 = GAMEPLAY::GET_GAME_TIMER();
			Global_2458105 = 1;
		}
	}
}

int func_318()
{
	if (Global_2449169.f_6346 && Global_2458101)
	{
		if (func_321())
		{
			if (func_319() && !CAM::IS_SCREEN_FADED_OUT())
			{
				if (Global_2449169.f_6366 == 122)
				{
					return 1;
				}
				if (GAMEPLAY::IS_BIT_SET(Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_68.f_2, 26))
				{
					return 1;
				}
				if (GAMEPLAY::IS_BIT_SET(Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_68.f_2, 27))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_319()
{
	if (func_320() == 0)
	{
		return 1;
	}
	return 0;
}

int func_320()
{
	return Global_1312466.f_18;
}

int func_321()
{
	if (func_324(PLAYER::PLAYER_ID()) && GAMEPLAY::IS_BIT_SET(Global_1668658.f_3315, 22))
	{
		return 0;
	}
	if (Global_1315670)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (func_323())
	{
		return 0;
	}
	if ((Global_2458102 && func_322()) || Global_2458102 == 0)
	{
		return 1;
	}
	if (Global_2458103)
	{
		if (Global_2449169.f_6366 == 122)
		{
			return 1;
		}
	}
	return 0;
}

bool func_322()
{
	return GAMEPLAY::IS_BIT_SET(Global_4456448.f_146776, 12);
}

bool func_323()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386.f_2, 11);
}

int func_324(int iParam0)
{
	if (iParam0 != func_128())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_325(Global_2423801[iParam0 /*413*/].f_309.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_325(int iParam0)
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

void func_326(var uParam0, bool bParam1, bool bParam2)
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

char* func_327(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSITION_STATE_EMPTY";
		
		case 1:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		
		case 2:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		
		case 3:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		
		case 4:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		
		case 5:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		
		case 7:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		
		case 8:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		
		case 6:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		
		case 9:
			return "TRANSITION_STATE_CANCEL_JOINING";
		
		case 15:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		
		case 10:
			return "TRANSITION_STATE_RETRY_LOADING";
		
		case 11:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		
		case 12:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		
		case 13:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		
		case 14:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		
		case 16:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		
		case 17:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		
		case 18:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		
		case 19:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		
		case 21:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		
		case 22:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		
		case 23:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		
		case 24:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		
		case 25:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		
		case 26:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		
		case 27:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		
		case 28:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		
		case 29:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		
		case 30:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		
		case 31:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		
		case 32:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		
		case 33:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		
		case 34:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		
		case 35:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		
		case 36:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		
		case 37:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		
		case 38:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		
		case 39:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		
		case 41:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		
		case 42:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		
		case 43:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		
		case 45:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		
		case 46:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		
		case 47:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		
		case 48:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		
		case 49:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		
		case 50:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		
		case 51:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		
		case 44:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		
		case 53:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		
		case 52:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		
		case 54:
			return "TRANSITION_STATE_TERMINATE_SP";
		
		case 55:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		
		case 56:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		
		case 57:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		
		case 58:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		
		case 59:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		
		case 61:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		
		case 62:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		
		case 63:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		
		case 64:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		
		case 65:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		
		case 66:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		
		default:
	}
	return "";
}

void func_328(int iParam0)
{
	var uVar0;
	
	uVar0 = func_329();
	Global_1312791 = iParam0;
}

var func_329()
{
	return Global_1312791;
}

void func_330(bool bParam0, bool bParam1)
{
	int iVar0;
	
	func_332(&Global_17148, bParam1);
	GRAPHICS::_0x22A249A53034450A(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			STREAMING::STOP_PLAYER_SWITCH();
			func_331(0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_1315639))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1315639, 0))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1315639))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1315639, 0, 0);
					}
					PED::DELETE_PED(&Global_1315639);
				}
			}
		}
	}
}

void func_331(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2460425 = 0;
	}
	Global_1312466.f_18 = iParam0;
}

void func_332(var uParam0, bool bParam1)
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (CAM::DOES_CAM_EXIST(uParam0->f_9))
	{
		if (CAM::IS_CAM_ACTIVE(uParam0->f_9))
		{
			func_333(0);
		}
		CAM::DESTROY_CAM(uParam0->f_9, 0);
	}
	if (!Global_37237)
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
		CAM::CUSTOM_MENU_COORDINATES(0f);
		CAM::_0x0225778816FDC28C(0f);
	}
	Global_2405070.f_595 = 0f;
	if (!bParam1)
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 0, 1, 0, 0);
	}
}

void func_333(int iParam0)
{
	Global_17226 = iParam0;
}

void func_334(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_339(1);
	}
	else
	{
		func_335(iParam1);
	}
}

void func_335(int iParam0)
{
	func_338();
	if (iParam0 == 0)
	{
		if (UNK::_0xEF7D17BC6C85264C())
		{
			return;
		}
	}
	if (func_337() == 0 || UI::IS_PAUSE_MENU_ACTIVE())
	{
		func_336(1);
		GRAPHICS::_TOGGLE_PAUSE_RENDER_PHASES(0);
		GRAPHICS::_TOGGLE_PAUSE_RENDER_PHASES(0);
	}
}

void func_336(int iParam0)
{
	if (Global_1312466.f_20 != iParam0)
	{
		Global_1312466.f_20 = iParam0;
	}
}

int func_337()
{
	return Global_1312466.f_20;
}

void func_338()
{
	Global_2459734 = 1;
}

void func_339(int iParam0)
{
	if (func_340())
	{
		return;
	}
	if ((func_337() == 1 || UI::IS_PAUSE_MENU_ACTIVE()) || iParam0)
	{
		func_336(0);
		GRAPHICS::_TOGGLE_PAUSE_RENDER_PHASES(1);
		GRAPHICS::_TOGGLE_PAUSE_RENDER_PHASES(1);
		GRAPHICS::_0xE1C8709406F2C41C();
	}
}

int func_340()
{
	if (func_341())
	{
		return Global_2458105;
	}
	return 0;
}

int func_341()
{
	if (Global_2458101)
	{
		return Global_2458100;
	}
	return 0;
}

void func_342(bool bParam0)
{
	if (bParam0)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
		VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(-1);
		VEHICLE::SET_GARBAGE_TRUCKS(1);
		VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(1);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
	}
	else
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
		VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
		VEHICLE::SET_GARBAGE_TRUCKS(0);
		VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(0);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
		STREAMING::SET_PED_POPULATION_BUDGET(0);
	}
}

void func_343(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	func_296();
	func_204(1);
	func_192(1);
	func_191(12, 1, -1);
	func_349();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
	if (bParam0)
	{
		NETWORK::_NETWORK_RESPAWN_PLAYER(PLAYER::PLAYER_ID(), iParam6);
	}
	if (bParam1)
	{
		iVar0 |= 8192;
	}
	if (bParam4)
	{
		iVar0 |= 4;
	}
	if (!bParam2)
	{
		iVar0 |= 16384;
	}
	if (bParam3)
	{
		iVar0 |= 32768;
	}
	func_344(PLAYER::PLAYER_ID(), 0, iVar0);
	if (bParam5)
	{
		if (PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_DUCKING(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
}

void func_344(int iParam0, bool bParam1, int iParam2)
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
		if (!func_319())
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
				else if (bVar13 || (!func_240(PLAYER::PLAYER_ID(), 0) && !func_243()))
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
				if (!func_348(uVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar25))
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
					func_347();
					func_346();
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
				if (!func_348(uVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar25))
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
					if (func_345(Global_4456448.f_152990))
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

bool func_345(int iParam0)
{
	return iParam0 == 17;
}

void func_346()
{
	vector3 vVar0;
	
	Global_2437022.f_1228 = 0;
	Global_2437022.f_1229 = 0;
	Global_2437022.f_1230 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437022.f_1235 = -1;
	Global_2437022.f_1236 = 0;
	Global_2405070.f_2674 = { vVar0 };
}

void func_347()
{
	Global_2405070.f_691 = 0;
	Global_2405070.f_2717 = 0;
	Global_2405070.f_509 = 0;
	Global_2405070.f_597 = 0;
	Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_207 = 0;
	Global_2405070.f_2672 = 0;
}

int func_348(var uParam0)
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

void func_349()
{
	Global_17228.f_5 = 1;
}

void func_350(var uParam0)
{
	PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(uParam0), 346, 1);
}

void func_351(var uParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_3, 12))
	{
		GAMEPLAY::SET_BIT(&(uParam0->f_3), 12);
	}
	else
	{
		if (uParam0->f_6 > 30)
		{
			if (!Global_1655001)
			{
				Global_1655001 = 1;
				Global_1655002 = 1;
			}
		}
		if (uParam0->f_6 > 31)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_1655000))
			{
				if (uParam0->f_5 < 23)
				{
					switch (uParam0->f_5)
					{
						case 0:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 33)
								{
									if (((unk_0x83D607D7994DEF3A() == 9 || unk_0x83D607D7994DEF3A() == 10) || unk_0x83D607D7994DEF3A() == 8) || unk_0x83D607D7994DEF3A() == 12)
									{
										func_356("artdir", 0f, 420f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_356("artdir", 0f, 450f, "left", 0.3f, 0.3f);
									}
									func_355("artdir", "Art Director", 175f, "HUD_COLOUR_FRIENDLY", 1);
									func_354("artdir", "AARON GARBUT", 210f, "|", 1);
									func_353("artdir", 0.16f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_289(uParam0, 33, -3390))
							{
								func_352("artdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 1:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (func_289(uParam0, 33, -2940))
								{
									func_356("techdir", 0f, 30f, "left", 0.3f, 0.3f);
									func_355("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_354("techdir", "ADAM FOWLER", 185f, "|", 1);
									func_353("techdir", 0.16f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_289(uParam0, 33, -450))
							{
								func_352("techdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 2:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 35)
								{
									func_356("assartdir", 0f, 100f, "left", 0.3f, 0f);
									func_355("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_354("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									func_353("assartdir", 0.16f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 35)
							{
								func_352("assartdir", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 3:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 36)
								{
									if (((unk_0x83D607D7994DEF3A() == 9 || unk_0x83D607D7994DEF3A() == 10) || unk_0x83D607D7994DEF3A() == 8) || unk_0x83D607D7994DEF3A() == 12)
									{
										func_356("asstecdir", 0f, 370f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_356("asstecdir", 0f, 400f, "right", 0.3f, 0.3f);
									}
									func_355("asstecdir", "Associate Technical Directors", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_354("asstecdir", "KLAAS SCHILSTRA|PHIL HOOKER", 150f, "|", 1);
									func_353("asstecdir", 0.16f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_289(uParam0, 36, -4740))
							{
								func_352("asstecdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 4:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (func_289(uParam0, 36, -3810))
								{
									func_356("leadprog", 30f, 20f, "right", 0.3f, 0.3f);
									func_355("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_354("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									func_353("leadprog", 0.16f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_289(uParam0, 36, -600))
							{
								func_352("leadprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 5:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 37)
								{
									if (((unk_0x83D607D7994DEF3A() == 9 || unk_0x83D607D7994DEF3A() == 10) || unk_0x83D607D7994DEF3A() == 8) || unk_0x83D607D7994DEF3A() == 12)
									{
										func_356("senprog", 0f, 200f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_356("senprog", 0f, 225f, "left", 0.3f, 0.3f);
									}
									func_355("senprog", "Senior Programmers", 20f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_354("senprog", "JOHN HYND|JOHN GURNEY|DAN CONTI|ROSS CHILDS|STEPHEN LaVALLEY", 75f, "|", 1);
									func_353("senprog", 0.16f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_289(uParam0, 37, -1350))
							{
								func_352("senprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 6:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 38)
								{
									func_356("prog", 0f, 100f, "left", 0.3f, 0.3f);
									func_355("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_354("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									func_353("prog", 0.16f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_289(uParam0, 38, -4320))
							{
								func_352("prog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 7:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (func_289(uParam0, 38, -3240))
								{
									if (((unk_0x83D607D7994DEF3A() == 9 || unk_0x83D607D7994DEF3A() == 10) || unk_0x83D607D7994DEF3A() == 8) || unk_0x83D607D7994DEF3A() == 12)
									{
										func_356("socclub", 40f, 305f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_356("socclub", 40f, 325f, "right", 0.3f, 0.3f);
									}
									func_355("socclub", "Social Club", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_354("socclub", "IAN McFARLAND|KEVIN BACA", 40f, "|", 1);
									func_353("socclub", 0.16f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_289(uParam0, 38, -870))
							{
								func_352("socclub", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 8:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 39)
								{
									func_356("audio", 0f, 10f, "right", 0.3f, 0.3f);
									func_355("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_354("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									func_353("audio", 0.16f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_289(uParam0, 39, -1620))
							{
								func_352("audio", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 9:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 40)
								{
									func_356("scrlead", 50f, 85f, "right", 0.3f, 0.3f);
									func_355("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_354("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									func_353("scrlead", 0.16f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_289(uParam0, 40, -1470))
							{
								func_352("scrlead", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 10:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 41)
								{
									func_356("script1", 0f, 10f, "left", 0.3f, 0.3f);
									func_355("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_354("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									func_353("script1", 0.16f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_289(uParam0, 41, -1200))
							{
								func_352("script1", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 11:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 42)
								{
									func_356("script2", 0f, 10f, "left", 0.3f, 0.3f);
									func_355("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_354("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									func_353("script2", 0.16f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_289(uParam0, 42, -1320))
							{
								func_352("script2", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 12:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 43)
								{
									func_356("visdes", 0f, 45f, "left", 0.2f, 0.2f);
									func_355("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_354("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_355("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_354("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									func_353("visdes", 0.05f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_289(uParam0, 43, -1320))
							{
								func_352("visdes", 0.05f);
								uParam0->f_5++;
							}
							break;
						
						case 13:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 44)
								{
									func_356("uides", 40f, 20f, "right", 0f, 0.3f);
									func_355("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_354("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									func_353("uides", 0f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_289(uParam0, 45, -1650))
							{
								func_352("uides", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 14:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 46)
								{
									func_356("concre", 0f, 20f, "left", 0f, 0.3f);
									func_355("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_354("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_354("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									func_353("concre", 0f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_289(uParam0, 46, -1950))
							{
								func_352("concre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 15:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 47)
								{
									func_356("devass", 0f, 400f, "right", 0f, 0f);
									func_355("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_354("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									func_353("devass", 0f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 47)
							{
								func_352("devass", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 16:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 48)
								{
									func_356("qasup", 20f, 0f, "right", 0.3f, 0.3f);
									func_355("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_354("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_355("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_354("qasup", "CHRIS THOMSON", 160f, "|", 1);
									func_353("qasup", 0.16f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_289(uParam0, 48, -1320))
							{
								func_352("qasup", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 17:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 49)
								{
									func_356("senta", 0f, 25f, "left", 0.3f, 0.3f);
									func_355("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_354("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									func_353("senta", 0.16f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_289(uParam0, 49, -5070))
							{
								func_352("senta", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 18:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (func_289(uParam0, 49, -3750))
								{
									func_356("asspro", 20f, 350f, "right", 0.3f, 0.3f);
									func_355("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_354("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									func_353("asspro", 0.16f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_289(uParam0, 49, -720))
							{
								func_352("asspro", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 19:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (func_248(uParam0))
								{
									if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 2468)
									{
										func_356("animdir", 0f, 95f, "left", 0.3f, 0.3f);
										func_355("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_354("animdir", "ROB NELSON", 200f, "|", 1);
										func_353("animdir", 0.16f);
										GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (uParam0->f_6 >= 50)
								{
									func_356("animdir", 50f, 90f, "right", 0.3f, 0.3f);
									func_355("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_354("animdir", "ROB NELSON", 90f, "|", 1);
									func_353("animdir", 0.16f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_248(uParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 6123)
								{
									func_352("animdir", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 1898)
							{
								func_352("animdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 20:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (func_248(uParam0))
								{
									if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::_0x708BDD8CD795B043())
									{
										func_356("producer", 65f, 55f, "right", 0f, 0f);
										func_355("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_354("producer", "ANDY DUTHIE", 20f, "|", 1);
										func_353("producer", 0f);
										GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 2452)
								{
									func_356("producer", 0f, 100f, "left", 0.3f, 0f);
									func_355("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_354("producer", "ANDY DUTHIE", 110f, "|", 1);
									func_353("producer", 0.16f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_248(uParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::_0x708BDD8CD795B043())
								{
									func_352("producer", 0f);
									uParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::_0x708BDD8CD795B043())
							{
								func_352("producer", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 21:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (func_248(uParam0))
								{
									if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 13265)
									{
										func_356("vpcre", 65f, 55f, "right", 0.3f, 0.3f);
										func_355("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_354("vpcre", "DAN HOUSER", 80f, "|", 1);
										func_353("vpcre", 0.16f);
										GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 6921)
								{
									func_356("vpcre", 65f, 80f, "right", 0.3f, 0.3f);
									func_355("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_354("vpcre", "DAN HOUSER", 80f, "|", 1);
									func_353("vpcre", 0.16f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_248(uParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 16955)
								{
									func_352("vpcre", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 10513)
							{
								func_352("vpcre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 22:
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_4, uParam0->f_5))
							{
								if (func_248(uParam0))
								{
									if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 18077)
									{
										Global_1655002 = 0;
										func_356("execpro", 0f, 375f, "left", 0.3f, 0.3f);
										func_355("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_354("execpro", "SAM HOUSER", 165f, "|", 1);
										func_353("execpro", 0.16f);
										GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 12358)
								{
									Global_1655002 = 0;
									func_356("execpro", 0f, 340f, "left", 0.3f, 0.3f);
									func_355("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_354("execpro", "SAM HOUSER", 190f, "|", 1);
									func_353("execpro", 0.16f);
									GAMEPLAY::SET_BIT(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_248(uParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 21785)
								{
									func_352("execpro", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 15333)
							{
								func_352("execpro", 0.16f);
								uParam0->f_5++;
							}
							break;
						}
				}
				if (Global_1655002)
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_1655000, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

void func_352(char* sParam0, float fParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1655000, "HIDE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_353(char* sParam0, float fParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1655000, "SHOW_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_354(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1655000, "ADD_NAMES_TO_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_355(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1655000, "ADD_ROLE_TO_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_356(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1655000, "SETUP_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam1);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam4);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_357(var uParam0)
{
	if (uParam0->f_6 >= 33 && uParam0->f_6 < 51)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_34))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_34, 0))
			{
				GRAPHICS::DRAW_LIGHT_WITH_RANGE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_34, 0f, 0.25f, 0.6f), 255, 255, 255, 1.5f, 0.5f);
			}
		}
	}
}

void func_358()
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_568.f_3))
	{
		switch (Local_568.f_2)
		{
			case 2:
				if (GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 1))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (func_377(Local_568.f_3))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 1 && AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 0)
								{
									AI::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_568.f_3), 20000, 2, 1f, 1, 0);
								}
							}
							else if (!GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_568.f_3)))
								{
									GAMEPLAY::SET_BIT(&(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 2);
									func_376(1);
								}
								else
								{
									GAMEPLAY::CLEAR_AREA_OF_VEHICLES(-1031.788f, -2731.816f, 19.0546f, 50f, 0, 0, 0, 0, 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_377(Local_568.f_3))
				{
					if (!func_375(Local_568.f_4))
					{
						if (GAMEPLAY::IS_BIT_SET(uLocal_751, 26))
						{
							if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_568.f_4), -1273030092) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_568.f_4), -1273030092) != 0)
							{
								AI::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(Local_568.f_4), NETWORK::NET_TO_VEH(Local_568.f_3), -663.8057f, -952.3882f, 20.2985f, 4, 15f, 802987, 5f, 5f, 0);
							}
						}
					}
				}
				break;
			
			case 3:
				if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 27))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						if (!func_112())
						{
							if (!UI::IS_PAUSE_MENU_ACTIVE())
							{
								CAM::DO_SCREEN_FADE_OUT(800);
							}
						}
					}
					else if (CAM::IS_SCREEN_FADED_OUT())
					{
						GAMEPLAY::SET_BIT(&uLocal_751, 27);
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 4))
				{
					if (func_365(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 1, 0, 0, 0, 1, 0, 1, 0, 0))
					{
						GAMEPLAY::CLEAR_AREA_OF_VEHICLES(-649.4202f, -954.0247f, 20.5269f, 20f, 0, 0, 0, 0, 0, 0);
						CAM::_0x62ECFCFDEE7885D6();
						CAM::_0x9E4CFFF989258472();
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						GAMEPLAY::SET_BIT(&(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 4);
					}
				}
				break;
			
			case 4:
				if (!func_375(Local_568.f_4))
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 29))
					{
						if (func_377(Local_568.f_3))
						{
							AI::TASK_VEHICLE_PARK(NETWORK::NET_TO_PED(Local_568.f_4), NETWORK::NET_TO_VEH(Local_568.f_3), -664.8411f, -952.2484f, 20.283f, 92.0219f, 0, 60f, 1);
							CAM::DO_SCREEN_FADE_IN(800);
							GAMEPLAY::SET_BIT(&uLocal_751, 29);
						}
					}
					else if (!GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 5))
					{
						if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_568.f_4), -272084098) == 7)
						{
							GAMEPLAY::SET_BIT(&(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 5);
						}
					}
				}
				break;
			
			case 5:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 1 && AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 0)
						{
							AI::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
					}
					else if (!GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 6))
					{
						GAMEPLAY::SET_BIT(&(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 6);
						GAMEPLAY::SET_BIT(&(Global_2524719.f_784), 4);
						GAMEPLAY::CLEAR_BIT(&(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 2);
						func_344(PLAYER::PLAYER_ID(), 1, 0);
						func_364();
						func_376(0);
						func_32("HLP_TAXI", -1);
						if (func_55())
						{
							func_43(-1834046564, 200, &uVar0, 0, 0, 0);
						}
						else
						{
							func_361(-200, 0);
							NETWORKCASH::NETWORK_SPENT_TAXI(200, 0, 0);
						}
					}
				}
				break;
			
			case 6:
				if (!func_375(Local_568.f_4))
				{
					if (func_377(Local_568.f_3))
					{
						if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_568.f_4), -258271821) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_568.f_4), -258271821) != 0)
						{
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_568.f_4), 1);
							AI::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_568.f_4), NETWORK::NET_TO_VEH(Local_568.f_3), 12f, 786599);
							func_360(&(Local_568.f_3));
							func_360(&(Local_568.f_4));
						}
					}
				}
				break;
		}
		if (GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 1))
		{
			PATHFIND::_0x07FB139B592FA687(-1614.173f, -3243.317f, 28.4915f, -440.9012f);
			if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 26))
			{
				GAMEPLAY::SET_BIT(&uLocal_751, 26);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 28))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
			{
				if (!func_185(&uLocal_401))
				{
					func_203();
					func_19(&uLocal_401, 0, 0);
				}
				else if (func_184(&uLocal_401, 5000, 0))
				{
					if (func_164(&uLocal_575, "MPTXIAU", "MPTXI_T1", 12, 0, 0, 1))
					{
						GAMEPLAY::SET_BIT(&uLocal_751, 28);
					}
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 30))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 5))
			{
				if (func_164(&uLocal_575, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					GAMEPLAY::SET_BIT(&uLocal_751, 30);
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 6))
		{
			func_359();
		}
		if (GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
				}
			}
		}
	}
}

void func_359()
{
	Global_2535232.f_258 = 1;
}

void func_360(var uParam0)
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
	}
}

void func_361(int iParam0, int iParam1)
{
	func_363(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_362(iParam0, 0);
	}
}

void func_362(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_363(int iParam0, int iParam1, int iParam2, float fParam3)
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
		func_362(iVar1, 0);
	}
}

void func_364()
{
	CONTROLS::ENABLE_CONTROL_ACTION(0, 22, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 36, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 32, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 34, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 35, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 33, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 31, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 30, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 44, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 141, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 140, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 263, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 264, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 143, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 24, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 257, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 263, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 264, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 143, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 262, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 261, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 37, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 25, 1);
	CONTROLS::ENABLE_CONTROL_ACTION(0, 26, 1);
}

int func_365(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, float fParam12)
{
	var uVar0;
	vector3 vVar1;
	float fVar4;
	
	Global_17228.f_6 = 1;
	if (Global_2437022.f_1228 && Global_2437022.f_1236)
	{
		func_373(0, bParam9);
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam9)
	{
		if (Global_2437022.f_1228)
		{
			func_373(0, bParam9);
		}
		return 0;
	}
	if ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam9) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return 0;
	}
	if (!func_372())
	{
		if (func_371(PLAYER::PLAYER_ID(), 1, 0) && !(func_370() || func_369()))
		{
			if (((bParam9 && func_12(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_222 == 1)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2437022.f_1228 && !bParam11)
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		if ((GAMEPLAY::ABSF((vVar1.x - vParam0.x)) < 0.2f && GAMEPLAY::ABSF((vVar1.y - vParam0.y)) < 0.2f) && GAMEPLAY::ABSF((vVar1.z - vParam0.z)) < 1.2f)
		{
			fVar4 = (fParam3 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (GAMEPLAY::ABSF(fVar4) < 1f)
			{
				Global_2437022.f_1228 = 0;
				Global_2437022.f_1229 = 0;
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				return 1;
			}
		}
	}
	if (((!vParam0.x == Global_2437022.f_1230 || !vParam0.y == Global_2437022.f_1230.f_1) || !vParam0.z == Global_2437022.f_1230.f_2) || !fParam3 == Global_2437022.f_1233)
	{
		if (Global_2437022.f_1228 == 1)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2437022.f_1234) < func_368(0))
			{
				return 0;
			}
			PLAYER::STOP_PLAYER_TELEPORT();
			Global_2437022.f_1229 = 1;
		}
		else
		{
			Global_2437022.f_1229 = 0;
		}
		Global_2437022.f_1230 = { vParam0 };
		Global_2437022.f_1233 = fParam3;
		Global_2437022.f_1228 = 0;
	}
	if (!Global_2437022.f_1228 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		bParam7 = bParam7;
		if (bParam7)
		{
		}
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_93284.f_1336[44], 16))
			{
				func_367(0);
			}
			if (!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &(Global_2405070.f_496)))
			{
				Global_2405070.f_496 = 0;
			}
		}
		if (bParam4)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(uVar0))
				{
					Global_2437022.f_1235 = 0;
				}
			}
		}
		if (Global_2437022.f_1235 > -1)
		{
			Global_2437022.f_1234 = NETWORK::GET_NETWORK_TIME();
			Global_2437022.f_1228 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						uVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uVar0))
						{
							ENTITY::SET_ENTITY_COORDS(uVar0, vParam0, 0, 1, 1, 1);
							ENTITY::SET_ENTITY_HEADING(uVar0, fParam3);
							if (fParam12 != 0f)
							{
								ENTITY::SET_ENTITY_ROTATION(uVar0, fParam12, 0f, fParam3, 2, 1);
							}
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uVar0);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, 0, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, 0, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
				func_373(bParam6, bParam9);
				return 1;
			}
			else
			{
				STREAMING::CLEAR_FOCUS();
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vParam0, fParam3, bParam4, iParam10, 0);
			}
			Global_2437022.f_1234 = NETWORK::GET_NETWORK_TIME();
			Global_2437022.f_1228 = 1;
		}
	}
	if (Global_2437022.f_1228)
	{
		Global_17228.f_6 = 1;
		Global_2437022.f_1234 = NETWORK::GET_NETWORK_TIME();
		if (Global_2437022.f_1235 > -1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			}
			if (func_366(&(Global_2437022.f_1235), vParam0, fParam3, uVar0))
			{
				func_373(bParam6, bParam9);
				return 1;
			}
		}
		else
		{
			if (bParam9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Global_2437022.f_1230) < 2f)
				{
					if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					{
						PLAYER::STOP_PLAYER_TELEPORT();
					}
					func_373(bParam6, bParam9);
					return 1;
				}
			}
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				if (fParam12 != 0f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						uVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_ROTATION(uVar0, fParam12, 0f, fParam3, 2, 1);
						Global_2437022.f_1236 = 1;
						return 0;
					}
				}
				func_373(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

int func_366(var uParam0, vector3 vParam1, float fParam4, var uParam5)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2437022.f_1237) && !ENTITY::IS_ENTITY_DEAD(Global_2437022.f_1237, 0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2437022.f_1237);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2437022.f_1237 = uParam5;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2437022.f_1237);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2437022.f_1237))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_2437022.f_1237, 0))
				{
					ENTITY::SET_ENTITY_HEADING(Global_2437022.f_1237, fParam4);
					ENTITY::SET_ENTITY_COORDS(Global_2437022.f_1237, vParam1, 0, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_367(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2405070.f_2673;
	if ((AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2405070.f_2671 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2405070.f_2670)
	{
		if (!AUDIO::IS_RADIO_RETUNING())
		{
			Global_2405070.f_2670 = iVar0;
		}
	}
}

int func_368(bool bParam0)
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

bool func_369()
{
	return ((GAMEPLAY::IS_BIT_SET(Global_4456448.f_30, 12) && GAMEPLAY::IS_BIT_SET(Global_1686219, 12)) && Global_1686218 == 8);
}

var func_370()
{
	return (GAMEPLAY::IS_BIT_SET(Global_4456448.f_30, 12) && GAMEPLAY::IS_BIT_SET(Global_1686219, 0));
}

int func_371(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2423801[iParam0 /*413*/].f_222 == 99)
	{
		if ((iParam2 && Global_2423801[iParam0 /*413*/].f_225 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2423801[iParam0 /*413*/].f_222 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_372()
{
	return Global_1312834;
}

void func_373(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	}
	if (!bParam1)
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	func_346();
	if (!GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 14))
	{
		func_374();
	}
}

void func_374()
{
	Global_2533312.f_80 = 1;
}

int func_375(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
}

void func_376(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142, 15))
		{
			GAMEPLAY::SET_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142), 15);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142, 15))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142), 15);
	}
}

int func_377(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_378(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_378(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_379(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_23(iParam0, 8, 0))
		{
			func_63(iParam0, 8, 0);
			func_380(iParam0);
		}
	}
	else if (func_23(iParam0, 8, 0))
	{
		func_61(iParam0, 8, 0);
		func_380(iParam0);
	}
}

void func_380(int iParam0)
{
	Global_93284.f_172[iParam0] = 1;
	Global_93284.f_171 = 1;
}

void func_381(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_93284.f_9[iParam0] = 1;
	}
	else
	{
		Global_93284.f_9[iParam0] = 0;
	}
}

void func_382(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_93284.f_8 = 1;
	}
	else
	{
		Global_93284.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_380(iVar0);
		iVar0++;
	}
}

void func_383(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71205)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

int func_384()
{
	return Local_568;
}

int func_385()
{
	return 1;
}

int func_386(int iParam0)
{
	return Local_740[iParam0 /*5*/];
}

int func_387(int iParam0)
{
	return Local_740[iParam0 /*5*/].f_2;
}

int func_388(bool bParam0)
{
	if (func_390())
	{
		if (bParam0)
		{
			if (!Global_1574388 && !func_389(PLAYER::PLAYER_ID(), 2))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, 1);
				func_334(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

bool func_389(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_208, iParam1);
}

bool func_390()
{
	return Global_2437022.f_2;
}

void func_391(bool bParam0)
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bLocal_757)
		{
			if (GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 2))
			{
				if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 31))
				{
					func_30(119, 1, -1, 1);
					func_30(115, 1, -1, 1);
				}
				func_702(1);
				bVar0 = true;
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 1))
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_751, 31))
			{
				func_30(119, 1, -1, 1);
				func_30(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	func_202(&Local_94, 0, bParam0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_2437022.f_3728)
		{
			func_695(0, 1);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_376(0);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_94.f_122, 0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1042.918f, -2723.14f, 17.34114f, -1087.764f, -2667.605f, 25.79593f, 25.5625f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 1);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_784), 4);
	func_90(0);
	func_59(0);
	func_694();
	func_693(iLocal_93, 0);
	func_183(&(Global_2437022.f_3978));
	Global_2437022.f_3976 = 0;
	Global_2437022.f_3975 = 0;
	Global_2437022.f_3977 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 1);
	}
	if (bVar0)
	{
		func_394(0, 0, 0, 0);
	}
	else
	{
		UI::CLEAR_HELP(1);
		func_394(0, 0, 3, 1);
	}
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_784), 0);
	func_382(0);
	func_381(4, 0);
	func_381(1, 0);
	func_381(0, 0);
	func_381(2, 0);
	func_381(3, 0);
	func_379(iLocal_93, 0);
	func_364();
	func_33();
	if (UI::DOES_BLIP_EXIST(Global_93284.f_223[iLocal_93]))
	{
		UI::SET_BLIP_ROUTE(Global_93284.f_223[iLocal_93], 0);
	}
	if (UI::DOES_BLIP_EXIST(uLocal_754))
	{
		UI::REMOVE_BLIP(&uLocal_754);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_393(0);
		func_186(0);
	}
	func_392(Local_568.f_5);
}

void func_392(struct<2> Param0)
{
	if (Param0.f_1)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Param0)) >= 1000)
		{
			NETWORK::NETWORK_SET_MISSION_FINISHED();
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_393(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142), 5);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142), 5);
	}
}

void func_394(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<6> Var8;
	struct<6> Var14;
	int iVar20;
	char* sVar21;
	struct<2> Var22;
	bool bVar24;
	int iVar25;
	
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = Global_1589747[iVar0 /*790*/];
	func_692();
	func_688();
	CONTROLS::_0xA0CEFCEA390AAB9B(0);
	func_687();
	Global_968149 = 0;
	Global_1573304 = 0;
	func_686();
	NETWORK::_0xCFEB8AF24FC1D0BB(0);
	func_685();
	Global_786547 = 0;
	Global_786547.f_1 = 0;
	Global_1574181 = 0;
	Global_2359296 = 0;
	Global_2359297 = 0;
	func_684(0);
	Global_1574170 = 0;
	Global_1574169 = 0;
	Global_1574193 = 0;
	Global_1574406 = 0;
	Global_1574412 = 0;
	Global_1573908 = 0;
	Global_1575085 = 1;
	Global_1574379 = 0;
	Global_1574182 = -1;
	func_683(0);
	GAMEPLAY::CLEAR_BIT(&(Global_2359302.f_1), 5);
	if (!func_682())
	{
		func_681();
	}
	func_680();
	func_679();
	func_678();
	func_677();
	func_676();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_675();
		func_674();
	}
	if (func_673() || !func_672())
	{
		func_671();
		func_670(1, 1, 1);
		func_669();
		func_668();
		if (iVar0 != -1)
		{
			Global_1624218[iVar0 /*38*/].f_1 = 0;
			Global_1624218[iVar0 /*38*/].f_2 = 0;
			Global_1624218[iVar0 /*38*/] = 0;
		}
	}
	func_667();
	if (((Global_4456448 != 6 && func_666(Global_4456448.f_130782) != 14) && func_666(Global_4456448.f_130782) != 15) && !func_322())
	{
		if (func_12(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
			}
		}
	}
	Global_1573325 = 0;
	if (Global_1646081.f_9 == 4)
	{
		if (func_665(PLAYER::PLAYER_ID()) || func_664(PLAYER::PLAYER_ID()))
		{
			Global_1573325 = 1;
		}
	}
	func_662();
	if (func_661())
	{
		func_660();
	}
	func_659();
	Global_4456448.f_131889 = 0;
	Global_1646041.f_4 = 0;
	if (!GAMEPLAY::IS_BIT_SET(Global_4456448.f_29, 1) && !func_658())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_14, 17))
		{
			PLAYER::_0xFF300C7649724A0B(PLAYER::PLAYER_ID(), 0);
			NETWORK::_0x267C78C60E806B9A(1);
		}
		else
		{
			PLAYER::_0xFF300C7649724A0B(PLAYER::PLAYER_ID(), 1);
			NETWORK::_0x267C78C60E806B9A(0);
		}
	}
	StringCopy(&(Global_4456448.f_130774), "", 32);
	UI::_0x25F87B30C382FCA7();
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
	if ((bParam3 && !func_657()) && !func_656())
	{
		UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1623750[iVar3] = 0;
		Global_1623717[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		GAMEPLAY::SET_BIT(&(Global_2449169.f_5769), 3);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2449169.f_5769), 3);
	}
	if (iVar0 != -1 && Global_2448386.f_558.f_10 != 0)
	{
		Global_1624218[PLAYER::PLAYER_ID() /*38*/].f_2 = Global_2448386.f_558.f_10;
	}
	if (func_390() || (iVar0 != -1 && Global_1589747[iVar0 /*790*/].f_648))
	{
		func_655();
		func_654(1, 1);
		func_670(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1624218[iVar0 /*38*/].f_1 = 0;
			Global_1624218[iVar0 /*38*/].f_2 = 0;
			Global_1624218[iVar0 /*38*/] = 0;
		}
		func_653(1);
		if (func_652())
		{
			func_651();
		}
		if (!func_15(PLAYER::PLAYER_ID()))
		{
			func_649(4);
		}
		func_669();
		func_648(0);
		func_647();
		Global_1575077 = 0;
	}
	if (!func_646())
	{
		func_645();
		if (func_644())
		{
			if (func_643())
			{
				func_655();
			}
		}
		func_653(1);
		if (!func_642())
		{
			Global_2449169.f_6105 = 0;
			Global_2449169.f_6106 = 0;
			Global_2449169.f_6104 = 0;
			Global_2449169.f_6103 = 0;
			Global_2449169.f_6264 = 0;
		}
	}
	else
	{
		func_641(PLAYER::PLAYER_ID(), 0);
	}
	func_640((Global_1646081.f_9 != 4 && !func_646()));
	func_639((Global_1646081.f_9 != 4 && !func_646()));
	if (func_642())
	{
		Global_2449169.f_6195 = 1;
	}
	else
	{
		Global_2449169.f_6195 = 0;
	}
	if (!func_646())
	{
		if (func_642())
		{
			Global_2449169.f_6196 = 1;
		}
		else
		{
			Global_2449169.f_6196 = 0;
		}
	}
	if (func_637())
	{
		if (func_636())
		{
			Global_2449169.f_6197 = 1;
		}
		else
		{
			Global_2449169.f_6197 = 0;
		}
	}
	if (!func_682())
	{
		Global_1646106.f_1345 = 0;
	}
	if (!func_646() && !func_682())
	{
		func_654(1, Global_1646081.f_9 != 4);
		func_670(1, 1, 0);
		func_635(0);
		func_634();
		Global_1575079 = 0;
		if (iVar0 != -1)
		{
			Global_1624218[iVar0 /*38*/].f_1 = 0;
			Global_1624218[iVar0 /*38*/].f_2 = 0;
			Global_1624218[iVar0 /*38*/] = 0;
		}
	}
	func_631(1, -1);
	if (func_630())
	{
		func_629();
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		unk_0x659CF2EF7F550C4F();
	}
	if ((!func_657() && !func_646()) && !func_656())
	{
		func_624();
	}
	Global_4456448.f_131885 = 0;
	func_623();
	Global_1574163 = -1;
	Global_1623797 = -1;
	Global_1623788 = -1;
	Global_1623790 = -1;
	Global_1574168 = 0;
	Global_1623789 = 0;
	Global_1574390 = 0;
	Global_1574382 = 0;
	Global_1623798 = 0;
	func_622(0);
	func_621();
	Global_1589747[iVar0 /*790*/].f_648 = 0;
	Global_1623786 = 0f;
	Global_1623787 = 0f;
	Global_1574391 = 0;
	Global_1574392 = -1;
	func_620(0);
	Global_1574380 = 0;
	Global_1573909 = 0;
	func_619();
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
	func_618(1);
	if (func_617())
	{
		func_616();
	}
	if (func_615())
	{
		if (func_613(PLAYER::PLAYER_ID()))
		{
			if (NETWORK::_0xCF61D4B4702EE9EB() < 2)
			{
				func_612();
				func_611(1);
			}
			else
			{
				func_610();
			}
			if (Global_1646081.f_9 != -1)
			{
				func_609();
			}
		}
		else if (Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 0)
		{
			if (Global_1646081.f_9 != -1)
			{
				func_609();
			}
		}
	}
	bVar4 = func_16(iVar0);
	Global_1589747[iVar0 /*790*/].f_198 = 0;
	if (bVar4 && !func_682())
	{
		func_608();
	}
	if (!bVar4)
	{
		func_607(0);
	}
	if ((func_606() != 38 && func_606() != 37) && !func_605())
	{
		Global_1573279 = { 0f, 0f, 0f };
	}
	if (func_604() && func_239())
	{
	}
	else
	{
		func_603();
	}
	func_602();
	func_611(0);
	iVar6 = 0;
	if (!bVar4)
	{
		if (Global_1646081.f_9 == 6)
		{
			iVar6 = 1;
		}
		if (!func_601())
		{
			func_600(0, iVar6);
		}
	}
	NETWORK::_0x9D7AFCBF21C51712(0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (Global_1646081.f_9)
		{
			case 1:
				if (!func_599() && func_596(0) > 0)
				{
					Global_1664208[0 /*8*/].f_5 = 1;
				}
				if (!bVar4)
				{
					func_594();
					func_593();
				}
				break;
			
			case 6:
				Global_1575077 = 0;
				if (!bVar4)
				{
					func_594();
				}
				func_593();
				Global_1646081 = 0;
				Global_1646081.f_22 = { 0f, 0f, 0f };
				Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_12 = 0;
				StringCopy(&(Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_216), "", 24);
				Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_213 = { 0f, 0f, 0f };
				func_592(0);
				break;
			
			case 2:
				func_591(0);
				if (!func_590() || (func_590() && GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_2448386.f_25))))
				{
					func_589(Global_1646081.f_16);
					func_588(Global_1646081.f_16);
				}
				iVar5 = Global_1589747[iVar0 /*790*/].f_11;
				if (iVar5 != func_128())
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
					{
						Global_2449169.f_5770 = { func_76(iVar5) };
					}
					else
					{
						iVar7 = 1;
					}
				}
				else
				{
					iVar7 = 1;
				}
				if ((iVar7 && func_590()) && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() == 1)
				{
					Global_2449169.f_5770 = { func_587() };
				}
				if (((((Global_4456448.f_40 > 1 && !func_579()) && !func_578(Global_4456448.f_130782)) && !func_577(Global_4456448.f_130782)) && Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_99.f_28 > -1) && Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_99.f_28 < 4)
				{
					func_576(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_99.f_28);
				}
				else
				{
					func_575();
				}
				break;
			
			case 3:
				func_591(0);
				iVar2 = 1;
				func_574();
				iVar5 = Global_1589747[iVar0 /*790*/].f_11;
				if (iVar5 != func_128())
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
					{
						Global_2449169.f_5770 = { func_76(iVar5) };
					}
				}
				if (((Global_4456448.f_40 > 1 && !func_579()) && !func_578(Global_4456448.f_130782)) && !func_577(Global_4456448.f_130782))
				{
					func_576(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_99.f_28);
				}
				else
				{
					func_575();
				}
				break;
			
			case 4:
				func_591(0);
				iVar2 = 1;
				if (func_573())
				{
					func_572();
				}
				else if (func_571())
				{
				}
				else
				{
					Global_2449169.f_6105 = 0;
					Global_2449169.f_6106 = 0;
					Global_2449169.f_6104 = 0;
					Global_2449169.f_6103 = 0;
				}
				if (func_665(PLAYER::PLAYER_ID()) || func_664(PLAYER::PLAYER_ID()))
				{
					Global_786435.f_34++;
				}
				else if (func_570())
				{
					Global_786481.f_34++;
					if (Global_786481.f_64 == 0)
					{
						Global_786481.f_64 = 1;
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 22))
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 15))
					{
						func_569(Global_4456448.f_131862);
					}
					else
					{
						func_568(Global_4456448.f_149505, Global_4456448.f_149506);
					}
					if (Global_1646081.f_13 > -1)
					{
						NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(Global_1646081.f_13, Global_1646081.f_14, 0);
					}
					else if (func_567() > -1)
					{
						func_565(func_567(), 0);
					}
				}
				if (func_564())
				{
					Var8 = { func_563() };
					func_562(Var8);
					if (func_561() != -1)
					{
						Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_99.f_28 = func_561();
					}
					func_560();
					func_559();
				}
				else
				{
					func_574();
				}
				if (!func_240(PLAYER::PLAYER_ID(), 0))
				{
					NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(0);
					func_556(0, 0, 1);
				}
				break;
			
			case 5:
				func_591(0);
				iVar2 = 1;
				func_574();
				break;
			
			case 8:
				if (!func_590())
				{
					func_589(Global_1646081.f_16);
				}
				break;
			
			case 9:
				func_591(0);
				iVar2 = 1;
				func_574();
				func_588(Global_4456448.f_131069);
				Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_216 = { Global_4456448.f_131069 };
				if (func_555())
				{
					func_554();
				}
				if (!func_240(PLAYER::PLAYER_ID(), 0))
				{
					NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(0);
					func_556(0, 0, 1);
				}
				break;
			
			case 10:
				func_534(10, 0f, 0f, 0f, Var14);
				func_533();
				break;
		}
	}
	else
	{
		Global_1575077 = 0;
	}
	if (iVar2 || func_664(PLAYER::PLAYER_ID()))
	{
		if ((func_532(PLAYER::PLAYER_ID()) || func_665(PLAYER::PLAYER_ID())) || func_664(PLAYER::PLAYER_ID()))
		{
			if (Global_1654981 > 0)
			{
				Global_2449169.f_1.f_2826.f_13 = Global_1654981;
				Global_2449169.f_1.f_2826 = { Global_1654981.f_1 };
			}
		}
		else
		{
			func_531();
		}
	}
	Global_2449169.f_1.f_842 = 0;
	GAMEPLAY::CLEAR_BIT(&Global_1573913, 0);
	func_530(0);
	Global_1574173 = 0;
	Global_1574375 = -1;
	Global_1623716 = 0;
	Global_1312436 = 0;
	Global_1646081.f_1 = 0;
	Global_1646081.f_2 = 0;
	if (func_529() == 0)
	{
		if (Global_1646081.f_9 == -1 && bVar4 == 0)
		{
			func_521(0);
		}
		else
		{
			Global_1646081.f_9 = -1;
		}
	}
	func_520();
	if (func_519())
	{
		func_518();
	}
	if (func_517())
	{
		func_516();
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		NETWORK::_0xA2F952104FC6DD4B(1);
	}
	if (func_529() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if (((((!func_515(Global_1589747[iVar0 /*790*/]) && !func_657()) && !bVar4) && !func_372()) && !func_646()) && !func_656())
			{
				func_514(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	func_513();
	Global_1646081.f_1 = 0;
	if (!func_615())
	{
		func_512();
	}
	if (Global_1589747[iVar0 /*790*/] != -1)
	{
		iParam2 = iParam2;
		if (func_511(Global_1589747[iVar0 /*790*/]))
		{
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				iVar20 = func_494(0);
				func_491(1212, -1);
				func_486(joaat("mpply_mgame_cheat_end"), iVar20);
				if (iVar20 > 0)
				{
					func_486(joaat("mpply_activity_ended"), 1);
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::_0x5E3AA4CA2B6FB0EE(PLAYER::PLAYER_ID());
	}
	func_484();
	if (Global_1646081 == 0)
	{
		if (!bVar4)
		{
			Global_1589747[iVar0 /*790*/].f_11 = -1;
			Global_1589747[iVar0 /*790*/].f_12 = 0;
		}
	}
	if (bVar4)
	{
		func_514(0);
		Global_1589747[iVar0 /*790*/].f_12 = 1;
		Global_1589747[iVar0 /*790*/].f_11 = func_483(PLAYER::PLAYER_ID());
		NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(0);
		func_556(0, 0, 1);
		if (func_482())
		{
			func_480();
		}
	}
	if ((Global_1589747[iVar0 /*790*/] < 10 && Global_1589747[iVar0 /*790*/] != -1) && !func_372())
	{
		if ((!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_1589747[iVar0 /*790*/].f_147)) && Global_1589747[iVar0 /*790*/] != 5) && Global_1589747[iVar0 /*790*/] != 148)
		{
			func_477(&(Global_1589747[iVar0 /*790*/].f_147));
		}
	}
	if (Global_1589747[iVar0 /*790*/] != 6)
	{
		Global_1646028 = 1;
	}
	Global_1589747[iVar0 /*790*/] = -1;
	Global_1589747[iVar0 /*790*/].f_39.f_2 = -1;
	Global_1589747[iVar0 /*790*/].f_39.f_16 = -1;
	Global_1589747[iVar0 /*790*/].f_39.f_1 = -1;
	Global_4456448 = 0;
	if (!bVar4)
	{
		func_476(0);
	}
	Global_1589747[iVar0 /*790*/].f_39.f_18 = 0;
	GAMEPLAY::CLEAR_BIT(&(Global_1589747[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*790*/].f_646), 0);
	UI::_SET_MISSION_NAME_2(0, 0);
	if (iVar1 != 6 && iVar1 != 148)
	{
		UI::_0xA8FDB297A8D25FBA();
		Global_2459367 = 0;
	}
	if (!bVar4)
	{
		StringCopy(&(Global_1589747[iVar0 /*790*/].f_147), sVar21, 24);
		StringCopy(&(Global_1589747[iVar0 /*790*/].f_153), sVar21, 24);
		func_475();
	}
	StringCopy(&(Global_1615028[iVar0 /*16*/]), sVar21, 64);
	StringCopy(&(Global_1589747[iVar0 /*790*/].f_167), sVar21, 64);
	Global_1624218[iVar0 /*38*/].f_31 = { Var22 };
	Global_1624218[iVar0 /*38*/].f_33 = { Var22 };
	Global_1574385 = 0;
	Global_1574386 = 0;
	Global_1573921 = -1;
	bVar24 = false;
	func_474();
	func_473();
	func_472();
	if (func_471())
	{
		func_470();
	}
	if (func_469() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		func_468();
		func_344(PLAYER::PLAYER_ID(), 0, 57348);
	}
	if (func_467())
	{
		func_466();
	}
	else if (func_465())
	{
		func_466();
	}
	else if (func_464())
	{
		func_466();
	}
	else if (func_463())
	{
		func_466();
	}
	else if (func_462())
	{
		func_466();
	}
	else if (func_529())
	{
		func_466();
	}
	else if (func_461() && func_460())
	{
		func_466();
	}
	else if (func_459())
	{
		func_466();
	}
	else
	{
		func_458();
		if (!Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_12 && !func_682())
		{
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				if (func_482())
				{
					func_457();
				}
				else
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_4456448.f_28, 10))
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							Global_2449169.f_2844.f_197 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
						}
					}
					func_456();
					func_669();
					func_455(6);
					func_593();
					if (bVar4)
					{
						func_648(0);
					}
				}
				func_454();
				func_453();
				func_452();
				if (Global_2449169.f_2844.f_4 == 2)
				{
					Global_2449169.f_2844.f_4 = 1;
				}
				if (func_240(PLAYER::PLAYER_ID(), 0))
				{
					func_451();
				}
				func_450();
				Global_2449169.f_2844 = 0;
			}
			else
			{
				func_449();
				func_466();
			}
		}
		else
		{
			if (!func_642() && !func_682())
			{
			}
			func_449();
			func_466();
		}
	}
	if ((((((((((!func_467() && !func_448()) && !func_460()) && !func_461()) && !func_464()) && !func_465()) && !func_447()) && !func_462()) && !func_529()) && !func_463()) && !func_446())
	{
		if (!func_445())
		{
			func_444();
			func_442();
			func_441();
			func_439(1);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			if (!NETWORK::_0x35F0B98A8387274D())
			{
				if (!func_438())
				{
					if (!bVar24)
					{
						if (func_15(PLAYER::PLAYER_ID()))
						{
							NETWORK::NETWORK_END_TUTORIAL_SESSION();
							BRAIN::_0x4D953DF78EBF8158();
						}
					}
				}
			}
		}
	}
	if (!func_372())
	{
		StringCopy(&(Global_4456448.f_130789), "", 64);
	}
	if (func_437(116, &iVar25))
	{
		func_436(iVar25);
	}
	if (func_437(123, &iVar25))
	{
		func_436(iVar25);
	}
	if (!func_682())
	{
		func_428();
	}
	else if (func_427())
	{
		func_426();
	}
	func_425();
	if (!func_646() && !func_642())
	{
		func_424();
	}
	func_418();
	func_395(bParam3);
}

void func_395(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_615())
		{
		}
		else if ((((!func_646() && !func_642()) && !func_682()) && Global_1646081.f_9 != 9) && Global_1646081.f_9 != 4)
		{
			func_565(0, 1);
		}
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	if (!func_417(PLAYER::PLAYER_ID()) && !Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_666)
	{
		func_416();
	}
	if (func_415())
	{
		func_414(1);
		func_413(1);
	}
	if ((((bParam0 && !func_412()) && !func_646()) && !Global_262145.f_4721) && !func_410())
	{
		GAMEPLAY::CLEAR_OVERRIDE_WEATHER();
	}
	GAMEPLAY::ENABLE_DISPATCH_SERVICE(5, 1);
	GAMEPLAY::ENABLE_DISPATCH_SERVICE(3, 1);
	func_402(&uVar0, -1);
	if ((func_28() == 0 && !func_112()) && !func_646())
	{
		if (func_401())
		{
			func_400();
		}
		else
		{
			func_397(28, 0);
		}
	}
	func_396(0);
}

void func_396(int iParam0)
{
	if (!Global_1654521 == iParam0)
	{
		Global_1654521 = iParam0;
	}
}

void func_397(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_399(iParam0, iParam1))
	{
		iVar0 = func_398();
		Global_2458086[iVar0] = iParam0;
	}
}

int func_398()
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

int func_399(int iParam0, var uParam1)
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

void func_400()
{
	GAMEPLAY::SET_BIT(&(Global_959568.f_8), 22);
}

bool func_401()
{
	return GAMEPLAY::IS_BIT_SET(Global_959568.f_8, 21);
}

void func_402(var uParam0, int iParam1)
{
	func_408(uParam0, iParam1);
	func_403(iParam1);
}

void func_403(int iParam0)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = func_26();
	}
	uVar0 = func_407(iParam0);
	uVar1 = GAMEPLAY::GET_PROFILE_SETTING(uVar0);
	if (func_404())
	{
		if (GAMEPLAY::IS_BIT_SET(uVar1, 1))
		{
			func_30(133, 1, -1, 1);
		}
	}
}

int func_404()
{
	if (func_406() && func_405(0))
	{
		return 1;
	}
	return 0;
}

var func_405(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_406()
{
	return func_405(func_26() + 1);
}

int func_407(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_26();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_408(var uParam0, int iParam1)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	uVar1 = func_409(iParam1);
	uVar2 = GAMEPLAY::GET_PROFILE_SETTING(uVar1);
	if (GAMEPLAY::IS_BIT_SET(uVar2, 1))
	{
		func_491(1207, iParam1);
		func_486(joaat("mpply_dm_cheat_start"), 2);
		func_486(joaat("mpply_activity_started"), 1);
		GAMEPLAY::CLEAR_BIT(&uVar2, 1);
		bVar0 = true;
	}
	if (GAMEPLAY::IS_BIT_SET(uVar2, 2))
	{
		func_491(1209, iParam1);
		func_486(joaat("mpply_race_cheat_start"), 2);
		func_486(joaat("mpply_activity_started"), 1);
		GAMEPLAY::CLEAR_BIT(&uVar2, 2);
		bVar0 = true;
	}
	if (GAMEPLAY::IS_BIT_SET(uVar2, 3))
	{
		func_491(1118, iParam1);
		func_486(joaat("mpply_mc_cheat_start"), 2);
		func_486(joaat("mpply_activity_started"), 1);
		GAMEPLAY::CLEAR_BIT(&uVar2, 3);
		bVar0 = true;
	}
	if (GAMEPLAY::IS_BIT_SET(uVar2, 4))
	{
		func_491(1211, iParam1);
		func_486(joaat("mpply_mgame_cheat_start"), 2);
		func_486(joaat("mpply_activity_started"), 1);
		GAMEPLAY::CLEAR_BIT(&uVar2, 4);
		bVar0 = true;
	}
	if (GAMEPLAY::IS_BIT_SET(uVar2, 5))
	{
		func_491(1923, iParam1);
		func_486(joaat("mpply_cap_cheat_start"), 2);
		func_486(joaat("mpply_activity_started"), 1);
		GAMEPLAY::CLEAR_BIT(&uVar2, 5);
		bVar0 = true;
	}
	if (GAMEPLAY::IS_BIT_SET(uVar2, 6))
	{
		func_491(1925, iParam1);
		func_486(joaat("mpply_sur_cheat_start"), 2);
		func_486(joaat("mpply_activity_started"), 1);
		GAMEPLAY::CLEAR_BIT(&uVar2, 6);
		bVar0 = true;
	}
	if (GAMEPLAY::IS_BIT_SET(uVar2, 7))
	{
		func_491(1927, iParam1);
		func_486(joaat("mpply_lts_cheat_start"), 2);
		func_486(joaat("mpply_activity_started"), 1);
		GAMEPLAY::CLEAR_BIT(&uVar2, 7);
		bVar0 = true;
	}
	if (GAMEPLAY::IS_BIT_SET(uVar2, 8))
	{
		func_491(1929, iParam1);
		func_486(joaat("mpply_para_cheat_start"), 2);
		func_486(joaat("mpply_activity_started"), 1);
		GAMEPLAY::CLEAR_BIT(&uVar2, 8);
		bVar0 = true;
	}
	if (GAMEPLAY::IS_BIT_SET(uVar2, 9))
	{
		func_491(8148, iParam1);
		func_486(462337694, 2);
		func_486(joaat("mpply_activity_started"), 1);
		GAMEPLAY::CLEAR_BIT(&uVar2, 9);
		bVar0 = true;
	}
	if (GAMEPLAY::IS_BIT_SET(uVar2, 26))
	{
		func_491(1931, iParam1);
		func_486(joaat("mpply_fmevn_cheat_start"), 2);
		func_486(joaat("mpply_activity_started"), 1);
		GAMEPLAY::CLEAR_BIT(&uVar2, 26);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		STATS::_0x723C1CE13FBFDB67(uVar2, iParam1);
	}
}

int func_409(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_26();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

int func_410()
{
	if (func_665(PLAYER::PLAYER_ID()) || func_664(PLAYER::PLAYER_ID()))
	{
		if (func_411() || func_642())
		{
			return 1;
		}
	}
	return 0;
}

var func_411()
{
	return GAMEPLAY::IS_BIT_SET(Global_1312760, 4);
}

bool func_412()
{
	return Global_1574388;
}

void func_413(int iParam0)
{
	Global_2449169.f_6263 = iParam0;
}

void func_414(int iParam0)
{
	Global_2449169.f_6102 = iParam0;
}

int func_415()
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

void func_416()
{
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PED::SET_CREATE_RANDOM_COPS(1);
}

int func_417(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/] != -1;
	}
	return 0;
}

void func_418()
{
	if (Global_1686209)
	{
		if (func_322())
		{
			if (func_423(Global_4456448.f_152990))
			{
				switch (Global_4456448.f_146778)
				{
					case 1:
						ENTITY::REMOVE_MODEL_HIDE(2947.73f, -3860.622f, 142.6144f, 5f, 919242286, 0);
						break;
				}
			}
			else if (func_422(Global_4456448.f_152990))
			{
				switch (Global_4456448.f_146778)
				{
					case 3:
						ENTITY::REMOVE_MODEL_HIDE(2943.765f, -3859.625f, 151.1007f, 5f, -452304978, 0);
						break;
				}
			}
			else if (func_421(Global_4456448.f_152990))
			{
				switch (Global_4456448.f_146778)
				{
					case 3:
						ENTITY::REMOVE_MODEL_HIDE(2948.968f, -3854.075f, 150.7258f, 5f, -5803006, 0);
						break;
				}
			}
			else if (func_420(Global_4456448.f_152990))
			{
				switch (Global_4456448.f_146778)
				{
					case 3:
						ENTITY::REMOVE_MODEL_HIDE(2944.726f, -3846.384f, 140f, 5f, 1200462304, 0);
						ENTITY::REMOVE_MODEL_HIDE(2948.589f, -3859.259f, 145.6578f, 5f, 279585983, 0);
						ENTITY::REMOVE_MODEL_HIDE(2950.465f, -3861.078f, 149.8605f, 5f, 1129835971, 0);
						break;
				}
			}
			else if (func_419(Global_4456448.f_152990))
			{
				switch (Global_4456448.f_146778)
				{
					case 3:
						ENTITY::REMOVE_MODEL_HIDE(2943.765f, -3859.625f, 151.1007f, 5f, -452304978, 0);
						break;
					}
				}
		}
		Global_1686209 = 0;
	}
}

bool func_419(int iParam0)
{
	return iParam0 == 76;
}

bool func_420(int iParam0)
{
	return iParam0 == 77;
}

bool func_421(int iParam0)
{
	return iParam0 == 83;
}

bool func_422(int iParam0)
{
	return iParam0 == 74;
}

bool func_423(int iParam0)
{
	return iParam0 == 78;
}

void func_424()
{
	Global_2448386.f_36.f_40 = 0;
}

void func_425()
{
	Global_1646081.f_6 = 0;
}

void func_426()
{
	GAMEPLAY::SET_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_99.f_32), 5);
}

bool func_427()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386.f_3, 8);
}

void func_428()
{
	vector3 vVar0;
	struct<2> Var3;
	int iVar5;
	
	if (!func_434(func_435(), vVar0))
	{
		Var3 = 988491873;
		Var3.f_1 = PLAYER::PLAYER_ID();
		iVar5 = func_433(1, 1);
		if (!iVar5 == 0)
		{
			func_430();
			func_429(0);
			unk_0xA40CC53DF8E50837(1, &Var3, 2, iVar5);
		}
	}
}

void func_429(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_2437022.f_3723 = NETWORK::GET_NETWORK_TIME();
	}
	Global_2437022.f_3607 = iParam0;
}

void func_430()
{
	func_432();
	func_431();
}

void func_431()
{
	struct<72> Var0;
	
	if (func_58(PLAYER::PLAYER_ID()))
	{
		Var0.f_6 = 32;
		Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_122 = { Var0 };
	}
}

void func_432()
{
	struct<113> Var0;
	
	Var0.f_4 = -1;
	Var0.f_7 = 32;
	Var0.f_79 = { Global_2437022.f_3607.f_79 };
	Var0.f_95 = { Global_2437022.f_3607.f_95 };
	Global_2437022.f_3607 = { Var0 };
}

var func_433(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_240(iVar2, 0))
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_434(vector3 vParam0, vector3 vParam3)
{
	if ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z)
	{
		return 1;
	}
	return 0;
}

Vector3 func_435()
{
	return Global_2423049[PLAYER::PLAYER_ID() /*10*/];
}

void func_436(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return;
	}
	if (((Global_2497392[iParam0 /*5*/].f_1 == -1 || Global_2497392[iParam0 /*5*/].f_2 == -1) || Global_2497392[iParam0 /*5*/].f_3 == -1) || Global_2497392[iParam0 /*5*/].f_4 == -1)
	{
		return;
	}
	UI::_SET_HUD_COLOUR(Global_2497392[iParam0 /*5*/], Global_2497392[iParam0 /*5*/].f_1, Global_2497392[iParam0 /*5*/].f_2, Global_2497392[iParam0 /*5*/].f_3, Global_2497392[iParam0 /*5*/].f_4);
	Global_2497392[iParam0 /*5*/] = -1;
	Global_2497392[iParam0 /*5*/].f_1 = -1;
	Global_2497392[iParam0 /*5*/].f_2 = -1;
	Global_2497392[iParam0 /*5*/].f_3 = -1;
	Global_2497392[iParam0 /*5*/].f_4 = -1;
}

int func_437(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2497392[iVar0 /*5*/] == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_438()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142, 18);
}

void func_439(bool bParam0)
{
	struct<57> Var0;
	int iVar57;
	
	Global_2449169.f_1.f_2798 = 0;
	Global_2449169.f_1.f_2799 = 0;
	Global_2449169.f_1.f_2822 = 0;
	Global_2449169.f_1.f_2805 = 0;
	Global_2449169.f_1.f_2806 = 0;
	Global_2449169.f_1.f_2809 = 0;
	Global_2449169.f_1.f_2810 = 0;
	Global_2449169.f_1.f_2808 = -1;
	Global_2449169.f_1.f_2811 = -1;
	Global_2449169.f_1.f_2813 = 0;
	Global_2449169.f_1.f_2814 = 0;
	Global_2449169.f_1.f_2815 = 0;
	Global_2449169.f_1.f_2816 = 0;
	Global_2449169.f_1.f_2817 = 0;
	Global_2449169.f_1.f_2818 = 0;
	Global_2449169.f_1.f_2819 = 0;
	Global_2449169.f_1.f_2823 = -1;
	if (bParam0)
	{
		Global_2449169.f_1.f_2820 = -1;
		Global_2449169.f_1.f_2821 = -1;
	}
	Global_2449169.f_1.f_2842 = 0;
	func_440();
	Var0.f_33 = 2;
	Var0.f_36 = 7;
	iVar57 = 0;
	while (iVar57 <= 31)
	{
		Global_2449169.f_1.f_845[iVar57 /*57*/] = { Var0 };
		iVar57++;
	}
	Global_2445084.f_33 = -1;
	Global_2445084.f_34 = -1;
}

void func_440()
{
	Global_2445084.f_32 = 0;
}

void func_441()
{
	Global_2448386.f_580 = 0;
}

void func_442()
{
	Global_2448386.f_581 = 0;
	func_443();
}

void func_443()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 >= 0)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1589747[iVar0 /*790*/].f_99.f_32), 6);
	}
}

void func_444()
{
	Global_2448386 = 0;
	Global_2448386.f_2 = 0;
	Global_2448386.f_3 = 0;
}

bool func_445()
{
	return Global_2448386.f_580;
}

bool func_446()
{
	return Global_1654972;
}

bool func_447()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 1);
}

bool func_448()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 16);
}

void func_449()
{
	GAMEPLAY::CLEAR_BIT(&Global_2448386, 21);
}

void func_450()
{
	Global_2449169.f_2844.f_34 = 1;
}

void func_451()
{
	Global_2449169.f_1.f_2825 = 1;
}

void func_452()
{
	Global_2448386.f_715 = 1;
}

void func_453()
{
	Global_2449169.f_1.f_2824 = 1;
}

void func_454()
{
	GAMEPLAY::SET_BIT(&Global_2448386, 21);
}

void func_455(int iParam0)
{
	Global_2449169.f_1.f_837 = iParam0;
	Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_212 = iParam0;
}

void func_456()
{
	struct<38> Var0;
	
	Var0 = 31;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_2445122 = { Var0 };
}

void func_457()
{
	Global_2449169.f_2844.f_1 = 1;
}

void func_458()
{
	Global_2449169.f_2844.f_1 = 0;
}

bool func_459()
{
	return Global_2448386.f_605;
}

bool func_460()
{
	return Global_2448386.f_595;
}

bool func_461()
{
	return Global_2448386.f_582;
}

bool func_462()
{
	return Global_2448386.f_591;
}

bool func_463()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386.f_2, 15);
}

bool func_464()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 20);
}

bool func_465()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 2);
}

void func_466()
{
	Global_2449169.f_2844.f_34 = 0;
}

bool func_467()
{
	return GAMEPLAY::IS_BIT_SET(Global_959568.f_8, 8);
}

void func_468()
{
	Global_2448386.f_610 = 0;
}

var func_469()
{
	return Global_2448386.f_610;
}

void func_470()
{
	Global_2448386.f_641 = 0;
}

bool func_471()
{
	return Global_2448386.f_641;
}

void func_472()
{
	Global_2449169.f_1.f_838 = 0;
	Global_2449169.f_1.f_839 = 0;
	Global_2449169.f_1.f_841 = 0;
}

void func_473()
{
	GAMEPLAY::CLEAR_BIT(&Global_2448386, 4);
}

void func_474()
{
	GAMEPLAY::CLEAR_BIT(&Global_2448386, 28);
}

void func_475()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	GAMEPLAY::CLEAR_BIT(&(Global_1589747[iVar0 /*790*/].f_13.f_1), 4);
	GAMEPLAY::CLEAR_BIT(&(Global_1589747[iVar0 /*790*/].f_13.f_1), 5);
	GAMEPLAY::CLEAR_BIT(&(Global_1589747[iVar0 /*790*/].f_13.f_1), 7);
	GAMEPLAY::CLEAR_BIT(&(Global_1589747[iVar0 /*790*/].f_13.f_1), 8);
	GAMEPLAY::CLEAR_BIT(&(Global_1589747[iVar0 /*790*/].f_13.f_1), 9);
	GAMEPLAY::CLEAR_BIT(&(Global_1589747[iVar0 /*790*/].f_13.f_1), 10);
	GAMEPLAY::CLEAR_BIT(&(Global_1589747[iVar0 /*790*/].f_13.f_1), 11);
	GAMEPLAY::CLEAR_BIT(&(Global_1589747[iVar0 /*790*/].f_13.f_1), 12);
	GAMEPLAY::CLEAR_BIT(&(Global_1589747[iVar0 /*790*/].f_13.f_1), 13);
}

void func_476(int iParam0)
{
	NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(iParam0);
}

void func_477(var uParam0)
{
	var uVar0;
	
	if ((!func_479() && func_478(120, -1)) && !func_372())
	{
		NETWORK::NETWORK_HANDLE_FROM_MEMBER_ID(uParam0, &uVar0, 13);
		if (NETWORK::NETWORK_IS_HANDLE_VALID(&uVar0, 13))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&uVar0))
			{
			}
		}
	}
}

int func_478(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2566070[iParam0 /*3*/][func_25(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_479()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if ((Global_1589747[iVar0 /*790*/].f_39.f_2 == 63 || Global_1589747[iVar0 /*790*/].f_39.f_2 == 62) || Global_1589747[iVar0 /*790*/].f_39.f_2 == 61)
	{
		return 1;
	}
	return 0;
}

void func_480()
{
	GAMEPLAY::SET_BIT(&(Global_959568.f_8), 8);
	func_481();
}

void func_481()
{
	Global_2448386.f_769 = 1;
}

bool func_482()
{
	return Global_2449169.f_2844.f_2;
}

var func_483(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_99.f_2;
}

void func_484()
{
	if (func_485())
	{
		UI::CLEAR_HELP(1);
	}
}

bool func_485()
{
	return func_182("FM_RETRY_INV");
}

void func_486(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_490(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_489(iParam0))
	{
		func_488(iParam0, iVar0);
	}
	else
	{
		func_487(iParam0, iVar0);
	}
}

void func_487(int iParam0, int iParam1)
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

void func_488(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_489(int iParam0)
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

int func_490(var uParam0)
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

void func_491(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_25(iParam1), 0);
	iVar0++;
	if (!func_493(iParam0))
	{
		func_62(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_492(iParam0, iVar0, iParam1, 1);
	}
}

void func_492(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2535519[iParam0 /*3*/][func_25(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1378885[func_25(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1378891[func_25(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1378897[func_25(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1378903[func_25(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1378861[func_25(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1378867[func_25(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1378873[func_25(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1378879[func_25(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1378837[func_25(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1378843[func_25(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1378849[func_25(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1378855[func_25(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1378909[func_25(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1378915[func_25(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1378921[func_25(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1378927[func_25(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1378933[func_25(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1378939[func_25(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1378945[func_25(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1378951[func_25(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2568104[0 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2568104[1 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2568104[2 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2568104[3 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_2568229[func_25(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1378957[func_25(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1378963[func_25(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1378969[func_25(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1378975[func_25(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2568165[0 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2568165[1 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2568165[2 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2568165[3 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2568165[4 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2568232[0 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2568232[1 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2568232[2 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2568232[3 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2568232[4 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2568248[0 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2568248[1 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2568248[2 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2568248[3 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2568248[4 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2568165[5 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2568104[4 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2568264[func_25(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2568273[func_25(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2568267[func_25(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2568276[func_25(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2568270[func_25(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2568279[func_25(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2568282[func_25(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2568165[6 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2568104[5 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2568165[7 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2568104[6 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2568165[8 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2568104[7 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2568165[9 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2568104[8 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2568165[10 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2568104[9 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2568165[11 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2568104[10 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2568165[12 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2568104[11 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2568165[13 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2568104[12 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2568165[14 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2568104[13 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2568165[15 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2568104[14 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2568165[16 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2568104[15 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2568165[17 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2568104[16 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2568104[17 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2568104[18 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2568104[19 /*3*/][func_25(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_493(int iParam0)
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

int func_494(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2459247 == 0)
	{
		return 0;
	}
	if (func_510())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_509() || func_505()))
		{
			Global_2458195 = 1;
		}
	}
	Global_2459247 = 0;
	if (Global_1315684)
	{
		iVar0 = 1;
	}
	if (Global_2458195)
	{
		iVar0 = 1;
	}
	if (Global_2458194)
	{
		iVar0 = 1;
	}
	if (func_504(Global_105098.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2458120)
	{
		iVar0 = 1;
	}
	if (func_503(512))
	{
		iVar0 = 1;
	}
	if (func_502(128))
	{
		iVar0 = 1;
	}
	if (Global_1315708 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_372())
	{
		iVar0 = 0;
	}
	if (Global_2458686)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_500())
		{
			if (Global_4456448.f_131887 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_240(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_499())
	{
		iVar0 = 0;
	}
	if ((Global_2458195 || Global_2458194) || Global_1315684)
	{
		if (func_505())
		{
			iVar0 = 0;
		}
	}
	Global_2458686 = 0;
	Global_2458194 = 0;
	Global_2458195 = 0;
	Global_1315684 = 0;
	Global_2458120 = 0;
	func_497(&(Global_105098.f_1), 32);
	func_496(512);
	func_495(128);
	return iVar0;
}

void func_495(int iParam0)
{
	Global_105155 = (Global_105155 - (Global_105155 && iParam0));
}

void func_496(int iParam0)
{
	Global_105156 = (Global_105156 - (Global_105156 && iParam0));
}

void func_497(var uParam0, int iParam1)
{
	func_498(uParam0, iParam1);
}

void func_498(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_499()
{
	if (((Global_1574410 || Global_1574381) || func_240(PLAYER::PLAYER_ID(), 0)) || func_239())
	{
		return 1;
	}
	return 0;
}

int func_500()
{
	switch (func_501())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_501()
{
	return Global_2449169.f_1.f_2820;
}

bool func_502(int iParam0)
{
	return (Global_105155 && iParam0) != 0;
}

bool func_503(int iParam0)
{
	return (Global_105156 && iParam0) != 0;
}

bool func_504(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_505()
{
	if (func_508(Global_2460362))
	{
		return 0;
	}
	if (func_506(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	return 0;
}

int func_506(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/] == iParam1)
	{
		return func_507(iParam0);
	}
	return 0;
}

int func_507(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1625435[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

int func_508(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11276)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_11278)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_11275)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_11279)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_11280)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_11281)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_11277)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_11282)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_11283)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_11284)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_11285)
			{
				return 1;
			}
			break;
		
		case 236:
			break;
	}
	return 0;
}

int func_509()
{
	if (func_508(Global_2460362))
	{
		return 0;
	}
	if (func_507(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_510()
{
	return GAMEPLAY::IS_BIT_SET(Global_1312423, 0);
}

int func_511(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

void func_512()
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MissionType"))
	{
		DECORATOR::DECOR_REMOVE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MissionType");
	}
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MatchId"))
	{
		DECORATOR::DECOR_REMOVE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MatchId");
	}
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "TeamId"))
	{
		DECORATOR::DECOR_REMOVE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "TeamId");
	}
}

void func_513()
{
	Global_2448386.f_586 = 0;
	NETWORK::NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE();
}

void func_514(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_35)
		{
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_35 = 1;
		}
	}
	else if (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_35)
	{
		Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_35 = 0;
	}
}

int func_515(int iParam0)
{
	if (iParam0 == 4 || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_516()
{
	Global_2448386.f_729 = 0;
}

bool func_517()
{
	return Global_2448386.f_729;
}

void func_518()
{
	Global_2448386.f_733 = 0;
}

bool func_519()
{
	return Global_2448386.f_733;
}

void func_520()
{
	GAMEPLAY::CLEAR_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_99.f_32), 1);
}

int func_521(int iParam0)
{
	var uVar0;
	
	if (func_239())
	{
		return 1;
	}
	if (func_526())
	{
		return 1;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_4456448.f_131069)))
	{
		return 1;
	}
	if (func_525())
	{
		return 1;
	}
	func_524();
	DATAFILE::DATAFILE_CREATE();
	uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	if (iParam0 == 0)
	{
		Global_1646041++;
		DATAFILE::_OBJECT_VALUE_ADD_INTEGER(uVar0, "quit", Global_1646041);
		DATAFILE::_OBJECT_VALUE_ADD_INTEGER(uVar0, "quitd", 1);
		DATAFILE::_OBJECT_VALUE_ADD_INTEGER(uVar0, "ply", Global_1646041.f_2);
		DATAFILE::_OBJECT_VALUE_ADD_INTEGER(uVar0, "lp", NETWORK::_GET_POSIX_TIME());
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		Global_1646066.f_1++;
		DATAFILE::_OBJECT_VALUE_ADD_INTEGER(uVar0, "quit", Global_1646066.f_1);
		DATAFILE::_OBJECT_VALUE_ADD_INTEGER(uVar0, "quitd", 1);
		DATAFILE::_OBJECT_VALUE_ADD_INTEGER(uVar0, "ply", Global_1646066.f_4);
		DATAFILE::_OBJECT_VALUE_ADD_INTEGER(uVar0, "lp", NETWORK::_GET_POSIX_TIME());
	}
	if (iParam0 == 0)
	{
		if (DATAFILE::_0x692D808C34A82143(&(Global_4456448.f_131069), 0f, func_523(iParam0)))
		{
		}
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		if (DATAFILE::_0x692D808C34A82143(&(Global_959568.f_42), 0f, func_523(iParam0)))
		{
		}
	}
	func_522();
	func_524();
	NETWORK::_0xB746D20B17F2A229();
	return 1;
}

void func_522()
{
	Global_1646041 = 0;
	Global_1646041.f_2 = 0;
	Global_1646041.f_8 = 0;
	Global_1646041.f_3 = 0;
	Global_1646041.f_6 = 0;
}

char* func_523(int iParam0)
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

void func_524()
{
	if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
	{
		DATAFILE::DATAFILE_DELETE();
	}
}

int func_525()
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

int func_526()
{
	if (!func_527())
	{
		return 1;
	}
	return 0;
}

int func_527()
{
	if (func_528())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_528()
{
	return Global_2458691;
}

bool func_529()
{
	return Global_2448386.f_623;
}

void func_530(bool bParam0)
{
	if (bParam0)
	{
		Global_1312450 = 1;
	}
	else
	{
		Global_1312450 = 0;
	}
}

void func_531()
{
	Global_2449169.f_1.f_2826.f_13 = 0;
	Global_2449169.f_1.f_2826 = 0;
	Global_2449169.f_1.f_2826.f_1 = 0;
	Global_2449169.f_1.f_2826.f_2 = 0;
	Global_2449169.f_1.f_2826.f_3 = 0;
	Global_2449169.f_1.f_2826.f_4 = 0;
	Global_2449169.f_1.f_2826.f_5 = 0;
	Global_2449169.f_1.f_2826.f_6 = 0;
	Global_2449169.f_1.f_2826.f_7 = 0;
	Global_2449169.f_1.f_2826.f_8 = 0;
	Global_2449169.f_1.f_2826.f_9 = 0;
	Global_2449169.f_1.f_2826.f_10 = 0;
	Global_2449169.f_1.f_2826.f_11 = 0;
	Global_2449169.f_1.f_2826.f_12 = 0;
}

bool func_532(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 1;
}

void func_533()
{
	Global_2448386.f_605 = 1;
}

void func_534(int iParam0, vector3 vParam1, struct<6> Param4)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	func_553();
	func_552();
	func_551();
	func_550();
	func_549();
	func_669();
	Global_1646081.f_9 = iParam0;
	switch (Global_1646081.f_9)
	{
		case 1:
			Global_1646081 = 0;
			Global_1646081.f_22 = { 0f, 0f, 0f };
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_12 = 0;
			func_546();
			break;
		
		case 2:
			Global_1646081 = 1;
			Global_1646081.f_22 = { vParam1 };
			Global_1646081.f_16 = { Param4 };
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_12 = 0;
			break;
		
		case 3:
			if (Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 0 || Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 1)
			{
				func_545(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_99.f_28);
			}
			func_544();
			Global_1646081 = 1;
			Global_1646081.f_22 = { vParam1 };
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_12 = 0;
			break;
		
		case 4:
			func_543();
			func_544();
			Global_1646081 = 1;
			if (func_664(PLAYER::PLAYER_ID()) || func_665(PLAYER::PLAYER_ID()))
			{
				func_542(1);
			}
			if ((func_541() || func_573()) && func_564())
			{
				Global_1646081.f_16 = { func_563() };
				Param4 = { Global_1646081.f_16 };
				Global_1646081.f_22 = { func_540() };
			}
			else if (func_541() || func_573())
			{
				if (func_539())
				{
					Global_1646081.f_22 = { func_538() };
				}
				else
				{
					Global_1646081.f_22 = { vParam1 };
				}
			}
			else
			{
				Global_1646081.f_22 = { vParam1 };
			}
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_12 = 1;
			break;
		
		case 5:
			func_543();
			func_537();
			func_544();
			if (func_664(PLAYER::PLAYER_ID()) || func_665(PLAYER::PLAYER_ID()))
			{
				func_542(1);
			}
			Global_1646081 = 1;
			Global_1646081.f_22 = { vParam1 };
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_12 = 1;
			break;
		
		case 8:
			Global_1646081 = 0;
			Global_1646081.f_22 = { vParam1 };
			Global_1646081.f_16 = { Param4 };
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_12 = 0;
			break;
		
		case 9:
			func_544();
			Global_1646081 = 1;
			Global_1646081.f_22 = { vParam1 };
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_12 = 1;
			break;
		
		case 10:
			Global_1646081 = 0;
			Global_1646081.f_22 = { 0f, 0f, 0f };
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_12 = 0;
			break;
	}
	func_536();
	func_535();
	func_455(Global_1646081.f_9);
	Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_213 = { Global_1646081.f_22 };
	Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_216 = { Param4 };
}

void func_535()
{
	GAMEPLAY::CLEAR_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18), 23);
}

void func_536()
{
	GAMEPLAY::CLEAR_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18), 12);
}

void func_537()
{
	Global_1646081.f_4 = 1;
}

Vector3 func_538()
{
	return Global_2448386.f_36.f_492;
}

int func_539()
{
	if ((Global_2448386.f_36.f_492 != 0f || Global_2448386.f_36.f_492.f_1 != 0f) || Global_2448386.f_36.f_492.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_540()
{
	return Global_2448386.f_36.f_495;
}

var func_541()
{
	return Global_2448386.f_36.f_50;
}

void func_542(int iParam0)
{
	Global_2449169.f_6101 = iParam0;
}

void func_543()
{
	Global_1646081.f_3 = 1;
}

void func_544()
{
	Global_1646081.f_7 = 1;
}

void func_545(var uParam0)
{
	Global_1646081.f_10 = uParam0;
}

int func_546()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_2449169.f_6352), 13))
	{
		return 0;
	}
	iVar2 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != iVar2)
		{
			Var3 = { func_76(iVar0) };
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var3, &(Global_2449169.f_6352)) && func_548(iVar0))
			{
				func_547();
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_547()
{
	GAMEPLAY::SET_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18), 9);
}

var func_548(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_39.f_18, 9);
}

void func_549()
{
	Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_5 = 0;
}

void func_550()
{
	Global_1646081.f_10 = -1;
}

void func_551()
{
	Global_1646081.f_4 = 0;
}

void func_552()
{
	Global_1646081.f_3 = 0;
}

void func_553()
{
	Global_2449169.f_2844.f_2 = 1;
}

void func_554()
{
	Global_2448386.f_558.f_14 = 0;
}

bool func_555()
{
	return Global_2448386.f_558.f_14;
}

void func_556(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_558();
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_240(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		UI::KEY_HUD_COLOUR(iParam0, iParam1);
		func_557(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_557(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_558()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 2);
			GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

void func_559()
{
	Global_2448386.f_36.f_48 = 0;
}

void func_560()
{
	Global_2448386.f_36.f_42 = -1;
}

int func_561()
{
	return Global_2448386.f_36.f_42;
}

void func_562(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		return;
	}
	if (!Global_2398871)
	{
		return;
	}
	if (!GAMEPLAY::ARE_STRINGS_EQUAL(&uParam0, &(Global_2398871.f_1)))
	{
		return;
	}
	Global_2398937 = 1;
}

struct<6> func_563()
{
	return Global_2448386.f_36.f_12;
}

bool func_564()
{
	return Global_2448386.f_36.f_52;
}

void func_565(int iParam0, bool bParam1)
{
	if (func_658())
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (NETWORK::NETWORK_IS_CLOCK_TIME_OVERRIDDEN())
				{
					NETWORK::NETWORK_CLEAR_CLOCK_TIME_OVERRIDE();
				}
			}
			break;
		
		case 1:
			NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(6, 0, 0);
			break;
		
		case 2:
			NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(12, 0, 0);
			break;
		
		case 3:
			if (func_566(Global_4456448.f_152990))
			{
				NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(20, 50, 0);
			}
			else
			{
				NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
			}
			break;
		
		case 4:
			NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
			break;
		
		default:
			break;
	}
}

bool func_566(int iParam0)
{
	return iParam0 == 10;
}

int func_567()
{
	return Global_1646081.f_12;
}

void func_568(var uParam0, var uParam1)
{
	Global_1646081.f_13 = uParam0;
	Global_1646081.f_14 = uParam1;
}

void func_569(var uParam0)
{
	Global_1646081.f_12 = uParam0;
}

bool func_570()
{
	return Global_2448386.f_16;
}

bool func_571()
{
	return Global_2448386.f_14;
}

void func_572()
{
	Global_2448386.f_36.f_49 = 1;
}

bool func_573()
{
	return Global_2448386.f_36.f_48;
}

void func_574()
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_2391056.f_4.f_3)))
	{
		return;
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_2398169.f_3)))
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2398169.f_3), &(Global_2391056.f_4.f_3)))
		{
			Global_1311838 = 0;
		}
		else
		{
			Global_1311838 = 1;
		}
	}
	Global_1311839 = 0;
	Global_1311839.f_1 = { Global_2391056.f_4.f_3 };
}

void func_575()
{
	Global_1646081.f_5 = 0;
	Global_1646081.f_11 = -1;
}

void func_576(var uParam0)
{
	Global_1646081.f_5 = 1;
	Global_1646081.f_11 = uParam0;
}

int func_577(int iParam0)
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

int func_578(int iParam0)
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

int func_579()
{
	if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_18, 0))
	{
		return 1;
	}
	return ((((((func_586(Global_4456448.f_130782, 1) || func_585(Global_4456448.f_130782)) || func_584(Global_4456448.f_130782)) || func_583(Global_4456448.f_130782)) || func_582(Global_4456448.f_152990)) || func_581(Global_4456448.f_152990)) || func_580(Global_4456448.f_152990));
}

bool func_580(int iParam0)
{
	return iParam0 == 65;
}

bool func_581(int iParam0)
{
	return iParam0 == 48;
}

bool func_582(int iParam0)
{
	return iParam0 == 8;
}

int func_583(int iParam0)
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

int func_584(int iParam0)
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

int func_585(int iParam0)
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

int func_586(int iParam0, bool bParam1)
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

struct<13> func_587()
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

void func_588(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	var uVar0;
	
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		return;
	}
	if (!Global_2391045)
	{
		return;
	}
	uVar0 = GAMEPLAY::GET_HASH_KEY(&uParam0);
	Global_2391047 = uVar0;
	Global_2391048 = (GAMEPLAY::GET_GAME_TIMER() + 60000);
}

void func_589(struct<6> Param0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Param0))
	{
		return;
	}
	Global_1311839 = 1;
	Global_1311839.f_1 = { Param0 };
}

bool func_590()
{
	return Global_2448386.f_11;
}

void func_591(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(iParam0);
		NETWORK::NETWORK_SET_TEAM_ONLY_CHAT(0);
	}
}

void func_592(int iParam0)
{
	if (Global_2504041 != iParam0)
	{
		Global_2504041 = iParam0;
	}
}

void func_593()
{
	Global_968393 = -1;
}

void func_594()
{
	func_595(-1f);
}

void func_595(float fParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(fParam0);
		NETWORK::NETWORK_SET_TEAM_ONLY_CHAT(0);
	}
}

int func_596(int iParam0)
{
	int iVar0;
	
	if (Global_1664208[iParam0 /*8*/] == -1)
	{
		iVar0 = func_24(func_598(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_597(iParam0, 0);
			iVar0 = 0;
		}
		Global_1664208[iParam0 /*8*/] = iVar0;
	}
	return Global_1664208[iParam0 /*8*/];
}

void func_597(int iParam0, int iParam1)
{
	Global_1664208[iParam0 /*8*/] = iParam1;
	func_62(func_598(iParam0), iParam1, -1, 1, 0);
}

int func_598(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8489;
		
		default:
	}
	return 8489;
}

bool func_599()
{
	return Global_4456448.f_1 == 0;
}

void func_600(int iParam0, int iParam1)
{
	NETWORK::NETWORK_BLOCK_INVITES(iParam0);
	NETWORK::_NETWORK_BLOCK_INVITES_2(iParam0);
	if (NETWORK::NETWORK_IS_HOST())
	{
		NETWORK::NETWORK_SESSION_BLOCK_JOIN_REQUESTS(iParam1);
	}
}

bool func_601()
{
	return Global_2448386.f_632;
}

void func_602()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2359302, 24))
	{
		GAMEPLAY::CLEAR_BIT(&Global_2359302, 24);
	}
}

void func_603()
{
	GAMEPLAY::CLEAR_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18), 14);
}

var func_604()
{
	return Global_2504041;
}

bool func_605()
{
	return Global_2448386.f_720;
}

int func_606()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_196;
}

void func_607(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574174 == 0)
		{
			Global_1574174 = 1;
		}
	}
	else if (Global_1574174 == 1)
	{
		Global_1574174 = 0;
	}
}

void func_608()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_2449169.f_1.f_845[iVar0 /*57*/].f_44 = 0;
		Global_2449169.f_1.f_845[iVar0 /*57*/].f_33[0] = 0;
		iVar0++;
	}
}

int func_609()
{
	var uVar0;
	
	if (func_239())
	{
		return 1;
	}
	if (func_526())
	{
		return 1;
	}
	if (func_525())
	{
		return 1;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_4456448.f_131069)))
	{
		return 1;
	}
	func_524();
	DATAFILE::DATAFILE_CREATE();
	uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	Global_1646041.f_2++;
	if (Global_1646041.f_2 < 1)
	{
		Global_1646041.f_2 = 1;
	}
	DATAFILE::_OBJECT_VALUE_ADD_INTEGER(uVar0, "quit", Global_1646041);
	DATAFILE::_OBJECT_VALUE_ADD_INTEGER(uVar0, "ply", Global_1646041.f_2);
	DATAFILE::_OBJECT_VALUE_ADD_INTEGER(uVar0, "plyd", 1);
	DATAFILE::_OBJECT_VALUE_ADD_INTEGER(uVar0, "lp", NETWORK::_GET_POSIX_TIME());
	if (DATAFILE::_0x692D808C34A82143(&(Global_4456448.f_131069), -1f, func_523(0)))
	{
	}
	func_522();
	func_524();
	NETWORK::_0xB746D20B17F2A229();
	return 1;
}

void func_610()
{
	Global_2448386.f_732 = 1;
}

void func_611(bool bParam0)
{
	if (bParam0)
	{
		UI::_0x56C8B608CFD49854();
	}
	else
	{
		UI::_0xADED7F5748ACAFE6();
	}
}

void func_612()
{
	Global_2448386.f_731 = 1;
}

int func_613(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_614(iParam0))
			{
				if (Global_1589747[iParam0 /*790*/] == 2 || Global_1589747[iParam0 /*790*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_614(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_196 != 0;
}

bool func_615()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142, 2);
}

void func_616()
{
	Global_2448386.f_731 = 0;
}

bool func_617()
{
	return Global_2448386.f_731;
}

void func_618(int iParam0)
{
	AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", iParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", iParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", iParam0);
}

void func_619()
{
	Global_1646081.f_12 = -1;
	Global_1646081.f_13 = -1;
	Global_1646081.f_14 = -1;
}

void func_620(int iParam0)
{
	Global_968394 = iParam0;
}

void func_621()
{
	Global_1623792 = 0;
	Global_1574378 = 4;
}

void func_622(bool bParam0)
{
	if (bParam0)
	{
		Global_1574391 = 1;
	}
	else
	{
		Global_1574391 = 0;
	}
}

void func_623()
{
	Global_1623793 = -1;
	Global_1623799 = 0;
	Global_1623794 = -1;
}

void func_624()
{
	Global_2524719.f_276 = 0;
	func_628(3782, 0, -1, 1);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_626())
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
			func_625();
		}
	}
}

void func_625()
{
	Global_71178 = 0;
	Global_71179 = -1;
	Global_71180 = -1;
	Global_71181 = -1;
	Global_71182 = -1;
	Global_71183 = -1;
}

bool func_626()
{
	return func_627(PLAYER::PLAYER_PED_ID());
}

int func_627(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(uParam0, 5);
	iVar1 = -1;
	switch (ENTITY::GET_ENTITY_MODEL(uParam0))
	{
		case joaat("mp_m_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = DLC1::GET_HASH_NAME_FOR_COMPONENT(uParam0, 5, iVar0, PED::GET_PED_TEXTURE_VARIATION(uParam0, 5));
			if (DLC1::_IS_TAG_RESTRICTED(iVar1, 1532858877, 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = DLC1::GET_HASH_NAME_FOR_COMPONENT(uParam0, 5, iVar0, PED::GET_PED_TEXTURE_VARIATION(uParam0, 5));
			if (DLC1::_IS_TAG_RESTRICTED(iVar1, 1532858877, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_628(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_26();
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

void func_629()
{
	Global_2448386.f_732 = 0;
}

bool func_630()
{
	return Global_2448386.f_732;
}

void func_631(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_633(&iVar0, 0, iParam1))
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
		func_632(&(Global_17367.f_5658[iVar0 /*10*/]));
		Global_17367.f_5719[iVar0] = 0;
	}
	else
	{
		Global_17367.f_5719[iVar0] = 0;
	}
}

void func_632(var uParam0)
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

int func_633(var uParam0, bool bParam1, int iParam2)
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

void func_634()
{
}

void func_635(int iParam0)
{
	struct<42> Var0;
	int iVar42;
	var uVar43;
	
	Var0 = -1;
	Var0.f_22 = -1082130432;
	Var0.f_23 = 3;
	Var0.f_39 = -1;
	Var0.f_41 = -1;
	if (Global_2448386.f_558.f_9 == 0)
	{
		Global_1646106.f_1345 = 0;
	}
	iVar42 = 0;
	while (iVar42 <= 31)
	{
		uVar43 = Global_1646106[iVar42 /*42*/].f_3;
		Global_1646106[iVar42 /*42*/] = { Var0 };
		if (func_682())
		{
			Global_1646106[iVar42 /*42*/].f_3 = uVar43;
		}
		Global_1646106[iVar42 /*42*/].f_1 = func_128();
		Global_1646106[iVar42 /*42*/] = -1;
		Global_1646106[iVar42 /*42*/].f_2 = -1;
		iVar42++;
	}
	if ((!func_682() && !func_646()) && iParam0)
	{
		Global_1646106.f_1347 = 0;
		Global_1646106.f_1348 = 0;
	}
}

int func_636()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1646106[iVar0 /*42*/].f_1 != func_128())
		{
			if (Global_1646106[iVar0 /*42*/].f_11 > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_637()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_570();
	}
	return func_638(Global_4456448.f_130782);
}

int func_638(int iParam0)
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

void func_639(bool bParam0)
{
	Global_786481.f_3 = 0;
	Global_786481.f_4 = 0;
	Global_786481.f_6 = 0;
	Global_786481.f_7 = 0;
	Global_786481.f_8 = 0;
	Global_786481.f_9 = 0;
	Global_786481.f_10 = 0;
	Global_786481.f_11 = 0;
	Global_786481.f_12 = 0;
	Global_786481.f_13 = 0;
	Global_786481.f_14 = 0;
	Global_786481.f_15 = 0;
	Global_786481.f_16 = 0;
	Global_786481.f_17 = 0;
	Global_786481.f_18 = 0;
	Global_786481.f_20 = 0;
	if (((!func_642() && !func_573()) && Global_1646081.f_9 != 4) && !func_646())
	{
		Global_786481.f_43 = 0;
		Global_786481.f_44 = 0;
	}
	Global_786481.f_22 = 0;
	Global_786481.f_24 = 0;
	Global_786481.f_25 = 0;
	Global_786481.f_28 = 0;
	Global_786481.f_29 = 0;
	Global_786481.f_30 = 0;
	Global_786481.f_31 = 0;
	Global_786481.f_32 = 0;
	Global_786481.f_33 = 0;
	Global_786481.f_36 = 0;
	Global_786481.f_37 = 0;
	Global_786481.f_38 = 0;
	Global_786481.f_39 = 0;
	Global_786481.f_40 = 0;
	Global_786481.f_41 = 0;
	Global_786481.f_42 = 0;
	Global_786481.f_35 = 0;
	Global_786481.f_63 = 0;
	if (bParam0)
	{
		Global_786481 = 0;
		Global_786481.f_1 = 0;
		if ((!func_642() && !func_573()) && Global_1646081.f_9 != 4)
		{
			Global_786481.f_2 = 0;
			Global_786481.f_21 = 0;
		}
		Global_786481.f_5 = 0;
		Global_786481.f_19 = 0;
		Global_786481.f_23 = 0;
		Global_786481.f_26 = 0;
		Global_786481.f_46 = 0;
		Global_786481.f_47 = 0;
		Global_786481.f_48 = 0;
		Global_786481.f_50 = 0;
		Global_786481.f_51 = 0;
		Global_786481.f_52 = 0;
		Global_786481.f_53 = 0;
		Global_786481.f_54 = 0;
		Global_786481.f_55 = 0;
	}
}

void func_640(bool bParam0)
{
	Global_786435.f_3 = 0;
	Global_786435.f_4 = 0;
	Global_786435.f_6 = 0;
	Global_786435.f_7 = 0;
	Global_786435.f_8 = 0;
	Global_786435.f_9 = 0;
	Global_786435.f_10 = 0;
	Global_786435.f_11 = 0;
	Global_786435.f_12 = 0;
	Global_786435.f_13 = 0;
	Global_786435.f_14 = 0;
	Global_786435.f_15 = 0;
	Global_786435.f_16 = 0;
	Global_786435.f_17 = 0;
	Global_786435.f_18 = 0;
	Global_786435.f_20 = 0;
	Global_786435.f_21 = 0;
	Global_786435.f_22 = 0;
	Global_786435.f_24 = 0;
	Global_786435.f_25 = 0;
	Global_786435.f_28 = 0;
	Global_786435.f_29 = 0;
	Global_786435.f_30 = 0;
	Global_786435.f_31 = 0;
	Global_786435.f_32 = 0;
	Global_786435.f_33 = 0;
	Global_786435.f_36 = 0;
	Global_786435.f_37 = 0;
	Global_786435.f_38 = 0;
	Global_786435.f_39 = 0;
	Global_786435.f_40 = 0;
	Global_786435.f_41 = 0;
	Global_786435.f_42 = 0;
	Global_786435.f_35 = 0;
	if (bParam0)
	{
		Global_786435 = 0;
		Global_786435.f_1 = 0;
		Global_786435.f_2 = 0;
		Global_786435.f_5 = 0;
		Global_786435.f_19 = 0;
		Global_786435.f_23 = 0;
		Global_786435.f_26 = 0;
	}
}

void func_641(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(uParam0), "MPBitset"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(uParam0), "MPBitset");
	}
	GAMEPLAY::CLEAR_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(uParam0), "MPBitset", iVar0);
}

bool func_642()
{
	return Global_1646081.f_3;
}

bool func_643()
{
	return Global_2456479.f_7;
}

bool func_644()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386.f_36.f_4, 8);
}

void func_645()
{
	Global_2448386.f_36.f_50 = 0;
}

bool func_646()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386.f_36.f_4, 0);
}

void func_647()
{
	GAMEPLAY::CLEAR_BIT(&(Global_959568.f_8), 8);
}

void func_648(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_13.f_1), 0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_13.f_1), 0);
	}
}

void func_649(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (((Global_2449169.f_3447 != 0 && Global_2449169.f_3447.f_1 != 0) && Global_2449169.f_3447.f_2 != 0) && Global_2449169.f_3447.f_3 != 0)
		{
			STATS::_0xC5BE134EC7BA96A0(Global_2449169.f_3447, Global_2449169.f_3447.f_1, Global_2449169.f_3447.f_2, Global_2449169.f_3447.f_3, iParam0);
		}
	}
	func_650();
}

void func_650()
{
	Global_2449169.f_3447 = 0;
	Global_2449169.f_3447.f_1 = 0;
	Global_2449169.f_3447.f_2 = 0;
	Global_2449169.f_3447.f_3 = 0;
}

void func_651()
{
	Global_2449169.f_1.f_2801 = 1;
}

bool func_652()
{
	return GAMEPLAY::IS_BIT_SET(Global_2449169.f_1.f_2809, 12);
}

void func_653(int iParam0)
{
	if (!func_646() || iParam0)
	{
		Global_1575076 = 0;
		Global_1575075 = 0;
	}
}

void func_654(bool bParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar6;
	
	Global_2448386.f_36 = -1;
	Global_2448386.f_36.f_56 = -1;
	Global_2448386.f_36.f_2 = -1;
	Global_2448386.f_36.f_5 = 0;
	Global_2448386.f_36.f_3 = 0;
	Global_2448386.f_36.f_4 = 0;
	Global_2448386.f_36.f_41 = -1;
	Global_2448386.f_36.f_6 = { Var0 };
	Global_2448386.f_36.f_54 = 0;
	Global_2448386.f_36.f_130 = 0;
	Global_2448386.f_36.f_345 = 0;
	Global_2448386.f_36.f_55 = 0;
	Global_2448386.f_36.f_131 = 0;
	Global_2448386.f_36.f_346 = 0;
	Global_2448386.f_36.f_520 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2448386.f_36.f_477[iVar6] = 0;
		iVar6++;
	}
	Global_2448386.f_36.f_53 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		Global_2448386.f_36.f_57[iVar6] = 0;
		iVar6++;
	}
	Global_2448386.f_36.f_129 = 0;
	iVar6 = 0;
	while (iVar6 <= 29)
	{
		Global_2448386.f_36.f_132[iVar6] = 0;
		iVar6++;
	}
	Global_2448386.f_36.f_344 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2448386.f_36.f_347[iVar6] = 0;
		Global_2448386.f_36.f_362[iVar6] = 0;
		Global_2448386.f_36.f_392[iVar6 /*6*/] = { Var0 };
		Global_2448386.f_36.f_377[iVar6] = 0;
		iVar6++;
	}
	if (bParam0)
	{
		iVar6 = 0;
		while (iVar6 < 4)
		{
			Global_2448386.f_36.f_43[iVar6] = 0;
			iVar6++;
		}
		if (bParam1)
		{
			Global_2448386.f_36.f_498 = 0;
			Global_2448386.f_36.f_499 = 0;
			iVar6 = 0;
			while (iVar6 < 5)
			{
				Global_2448386.f_36.f_506[iVar6] = -1;
				Global_2448386.f_36.f_512[iVar6] = -1;
				iVar6++;
			}
			Global_2448386.f_36.f_48 = 0;
			Global_2448386.f_36.f_12 = { Var0 };
			Global_2448386.f_36.f_52 = 0;
			Global_2448386.f_36.f_492 = { 0f, 0f, 0f };
			Global_2448386.f_36.f_495 = { 0f, 0f, 0f };
			Global_2448386.f_36.f_51 = 0;
			Global_2448386.f_36.f_50 = 0;
			Global_2448386.f_36.f_1 = -1;
			Global_2448386.f_36.f_518 = -1;
		}
	}
}

void func_655()
{
	Global_2456479.f_8 = 0;
	Global_2456479.f_7 = 0;
}

bool func_656()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 148;
}

bool func_657()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 5;
}

int func_658()
{
	if (func_322() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

void func_659()
{
	Global_1655047.f_1774 = 0;
}

void func_660()
{
	Global_2448386.f_725 = 0;
}

bool func_661()
{
	return Global_2448386.f_725;
}

void func_662()
{
	Global_14688 = 0;
	func_663();
}

void func_663()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16833 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15822 = 6;
	}
}

bool func_664(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

bool func_665(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

int func_666(int iParam0)
{
	if (iParam0 == Global_262145.f_5002[0])
	{
		return 0;
	}
	else if (iParam0 == Global_262145.f_5002[1])
	{
		return 1;
	}
	else if (iParam0 == Global_262145.f_5002[2])
	{
		return 2;
	}
	else if (iParam0 == Global_262145.f_5002[3])
	{
		return 3;
	}
	else if (iParam0 == Global_262145.f_5002[4])
	{
		return 4;
	}
	else if (iParam0 == Global_262145.f_5002[5])
	{
		return 5;
	}
	else if (iParam0 == Global_262145.f_5002[6])
	{
		return 6;
	}
	else if (iParam0 == Global_262145.f_5002[7])
	{
		return 7;
	}
	else if (iParam0 == Global_262145.f_5002[8])
	{
		return 8;
	}
	else if (iParam0 == Global_262145.f_5002[9])
	{
		return 9;
	}
	else if (iParam0 == Global_262145.f_5002[10])
	{
		return 10;
	}
	else if (iParam0 == Global_262145.f_5002[11])
	{
		return 11;
	}
	else if (iParam0 == Global_262145.f_5002[12])
	{
		return 12;
	}
	else if (iParam0 == Global_262145.f_5002[13])
	{
		return 13;
	}
	else if (iParam0 == Global_262145.f_5002[14])
	{
		return 14;
	}
	else if (iParam0 == Global_262145.f_5002[15])
	{
		return 15;
	}
	return -1;
}

void func_667()
{
	Global_2448386.f_589 = 0;
}

void func_668()
{
	struct<14> Var0;
	int iVar14;
	
	Var0.f_4 = -1;
	iVar14 = PLAYER::PLAYER_ID();
	if (iVar14 != -1)
	{
		Global_1624218[iVar14 /*38*/] = { Var0 };
	}
}

void func_669()
{
	Global_1646081.f_7 = 0;
}

void func_670(bool bParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;
	
	Global_2448386.f_558.f_3 = { Var0 };
	Global_2448386.f_558 = 0;
	Global_2448386.f_558.f_1 = 0;
	Global_2448386.f_558.f_12 = 0;
	if (bParam0)
	{
		Global_2448386.f_558.f_2 = 0;
		Global_2448386.f_558.f_13 = 0;
		Global_2448386.f_558.f_14 = 0;
		Global_2394835 = 0;
		if (bParam1)
		{
			Global_2448386.f_558.f_9 = 0;
			Global_2448386.f_558.f_10 = 0;
			Global_2448386.f_558.f_11 = 0;
			Global_2448386.f_558.f_16 = -1;
		}
		if (iParam2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			Global_1646106.f_1347 = 0;
			Global_1646106.f_1348 = 0;
		}
		if (PLAYER::PLAYER_ID() != -1)
		{
			Global_1624218[PLAYER::PLAYER_ID() /*38*/].f_2 = 0;
			Global_1624218[PLAYER::PLAYER_ID() /*38*/] = 0;
		}
	}
}

void func_671()
{
	Global_2448386.f_558.f_12 = 0;
}

bool func_672()
{
	return Global_2448386.f_558.f_9 > 0;
}

var func_673()
{
	return Global_2448386.f_558.f_12;
}

void func_674()
{
	GAMEPLAY::CLEAR_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_99.f_32), 11);
}

void func_675()
{
	GAMEPLAY::CLEAR_BIT(&(Global_1624218[PLAYER::PLAYER_ID() /*38*/].f_29), 3);
}

void func_676()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1575089[iVar0] = 0;
		iVar0++;
	}
}

void func_677()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1624218[iVar0 /*38*/].f_5 = 0;
	}
}

void func_678()
{
	Global_2458658 = 0;
	Global_2458659 = 0;
	Global_2458660 = 0;
	Global_2458661 = 0;
}

void func_679()
{
	Global_2448386.f_36.f_49 = 0;
}

void func_680()
{
	Global_2448386.f_36.f_51 = 0;
}

void func_681()
{
	if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) != Global_1379042)
	{
		if (CAM::_0x19CAFA3C87F7C2FF() == 0 && Global_1379042 == 3)
		{
			Global_1379042 = CAM::_0xEE778F8C7E1142E2(0);
		}
		CAM::_0x2A2173E46DAECD12(CAM::_0x19CAFA3C87F7C2FF(), Global_1379042);
	}
}

bool func_682()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386.f_558.f_1, 0);
}

void func_683(int iParam0)
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		unk_0x7C226D5346D4D10A(iParam0);
	}
}

void func_684(bool bParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_1589747[iVar0 /*790*/].f_203, 0))
			{
				GAMEPLAY::SET_BIT(&(Global_1589747[iVar0 /*790*/].f_203), 0);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iVar0 /*790*/].f_203, 0))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1589747[iVar0 /*790*/].f_203), 0);
		}
	}
}

void func_685()
{
	GAMEPLAY::CLEAR_BIT(&(Global_2448386.f_2), 31);
}

void func_686()
{
	Global_2437022.f_1889.f_803 = func_128();
}

void func_687()
{
	Global_2448386.f_773 = 0;
}

void func_688()
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_691(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1663381.f_271[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	func_690();
	func_689();
	Global_1663381 = 0;
}

void func_689()
{
	Global_1663381.f_4 = 0;
}

void func_690()
{
	Global_1663381.f_3 = 0;
}

void func_691(int iParam0)
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = 1;
	Var0.f_2 = 3;
	Var0.f_28 = 4;
	Global_1663381.f_5[iParam0 /*53*/] = { Var0 };
}

void func_692()
{
	GAMEPLAY::CLEAR_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18), 20);
}

void func_693(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_23(iParam0, 18, 1))
		{
			func_63(iParam0, 18, 1);
		}
	}
	else if (func_23(iParam0, 18, 1))
	{
		func_61(iParam0, 18, 1);
	}
}

void func_694()
{
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_784), 3);
}

void func_695(bool bParam0, int iParam1)
{
	func_209();
	if (bParam0)
	{
		func_299(1);
		UI::CLEAR_HELP(1);
	}
	UI::CLEAR_PRINTS();
	func_203();
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(0);
	func_238(0, 1, 1, 0, 0);
	func_701();
	func_191(12, 0, -1);
	func_192(1);
	CAM::SET_WIDESCREEN_BORDERS(0, -1);
	UI::DISPLAY_RADAR(1);
	UI::DISPLAY_HUD(1);
	func_700();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(0, 0);
		}
	}
	func_245(0);
	if (((((func_112() == 0 && func_699() == 0) && iParam1) && !func_242(PLAYER::PLAYER_ID())) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && func_319())
	{
		func_344(PLAYER::PLAYER_ID(), 1, 0);
	}
	Global_2437022.f_3728 = 0;
	func_696();
}

void func_696()
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_185(&Global_2533115))
	{
		if (!func_184(&Global_2533115, 3500, 1) || NETWORK::_0x631DC5DFF4B110E3(PLAYER::PLAYER_ID()))
		{
			if (!func_698())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_326(&Global_2533115, 1, 0);
				}
				else if (!func_240(PLAYER::PLAYER_ID(), 0))
				{
					if (AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1992968846) != 1 && AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1992968846) != 0)
					{
						NETWORK::SET_LOCAL_PLAYER_VISIBLE_LOCALLY(1);
						NETWORK::SET_PLAYER_VISIBLE_LOCALLY(PLAYER::PLAYER_ID(), 1);
					}
					ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 255, 0);
				}
			}
			else
			{
				func_326(&Global_2533115, 1, 0);
			}
		}
		else
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				ENTITY::RESET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID());
			}
			func_183(&Global_2533115);
		}
	}
	if (Global_2533119 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2533119, iVar0))
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (func_12(iVar1, 1, 1))
				{
					func_697(iVar1);
				}
			}
			iVar0++;
		}
	}
}

void func_697(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_2533119, iParam0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_184(&(Global_2533120[iParam0 /*2*/]), 3500, 1) || NETWORK::_0x631DC5DFF4B110E3(iParam0))
		{
			if (!func_698())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_326(&(Global_2533120[iParam0 /*2*/]), 1, 0);
				}
				else if (!func_240(iParam0, 0))
				{
					NETWORK::SET_PLAYER_VISIBLE_LOCALLY(iParam0, 1);
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
					{
						ENTITY::SET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(iParam0), 255, 0);
					}
				}
			}
			else
			{
				func_326(&(Global_2533120[iParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
			{
				ENTITY::RESET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(iParam0));
			}
			func_183(&(Global_2533120[iParam0 /*2*/]));
			GAMEPLAY::CLEAR_BIT(&Global_2533119, iParam0);
		}
	}
}

int func_698()
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING() || NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 1;
	}
	return 0;
}

int func_699()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 7);
}

void func_700()
{
	Global_17228.f_5 = 0;
}

void func_701()
{
	func_192(1);
	func_191(4, 0, -1);
	func_191(6, 0, -1);
	func_191(7, 0, -1);
	func_191(3, 0, -1);
	func_191(1, 0, -1);
	func_191(2, 0, -1);
	func_191(11, 0, -1);
	func_191(13, 0, -1);
	func_191(14, 0, -1);
	func_191(16, 0, -1);
}

void func_702(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1312446)
	{
		if (!func_736())
		{
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				Global_1574618[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_734(PLAYER::PLAYER_ID(), bParam0);
	iVar2 = func_732(iVar1, bParam0);
	if (!func_731(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			Global_1574618[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_1574618[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 252)
	{
		iVar3 = func_730(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_728(iVar4))
			{
				func_719(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_713(func_714(59, 0, 0), 0);
	func_711(func_714(135, 0, 0), 1);
	func_710(func_714(22, 0, 0), func_714(73, 0, 0));
	if (func_736())
	{
		if (func_478(77, -1))
		{
			func_709(1);
			func_708(1);
		}
	}
	if (func_707() || func_706())
	{
		func_30(77, 1, -1, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_703(28, 1, 0);
			func_703(29, 1, 0);
			func_703(30, 1, 0);
			func_703(31, 1, 0);
			func_703(32, 1, 0);
			func_703(33, 1, 0);
			func_703(34, 1, 0);
			func_703(35, 1, 0);
			func_703(36, 1, 0);
			func_703(37, 1, 0);
			func_703(38, 1, 0);
		}
	}
	if (func_714(21, 0, 0))
	{
		GAMEPLAY::ENABLE_STUNT_JUMP_SET(0);
	}
	Global_968395 = 0;
}

void func_703(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_23(iParam0, 0, 0))
		{
			if (iParam2 && Global_93284.f_18[iParam0])
			{
				if (func_705(iParam0) == 3 && !func_22(iParam0))
				{
					func_704(iParam0);
					func_63(iParam0, 0, 0);
					func_61(iParam0, 1, 0);
					func_380(iParam0);
				}
				else
				{
					func_63(iParam0, 1, 0);
					func_380(iParam0);
				}
			}
			else
			{
				func_63(iParam0, 0, 0);
				func_61(iParam0, 1, 0);
				func_380(iParam0);
			}
		}
		else
		{
			func_61(iParam0, 1, 0);
			func_380(iParam0);
		}
	}
	else if (func_23(iParam0, 0, 0))
	{
		func_61(iParam0, 0, 0);
		func_61(iParam0, 1, 0);
		func_380(iParam0);
	}
}

void func_704(int iParam0)
{
	if (Global_93284.f_18[iParam0])
	{
		func_63(iParam0, 10, 1);
		func_63(iParam0, 19, 1);
	}
}

int func_705(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
	}
	return 6;
}

bool func_706()
{
	return Global_1312845;
}

bool func_707()
{
	return Global_1312847;
}

void func_708(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_703(28, bParam0, 0);
	func_703(30, bParam0, 0);
	func_703(31, bParam0, 0);
	func_703(33, bParam0, 0);
	func_703(34, bParam0, 0);
	func_703(38, bParam0, 0);
}

void func_709(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_703(29, bParam0, 0);
	func_703(32, bParam0, 0);
	func_703(36, bParam0, 0);
	func_703(35, bParam0, 0);
	func_703(37, bParam0, 0);
}

void func_710(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_703(0, bParam0, 1);
	func_703(1, bParam0, 1);
	func_703(2, bParam0, 1);
	func_703(3, bParam0, 1);
	func_703(4, bParam0, 1);
	func_703(5, bParam0, 1);
	func_703(6, bParam0, 1);
	func_703(7, bParam0, bVar0);
	func_703(8, bParam0, 1);
	func_703(9, bParam0, 1);
	func_703(10, bParam0, 1);
	func_703(11, bParam0, 1);
	func_703(12, bParam0, bVar0);
	func_703(13, bParam0, 1);
	func_703(21, bParam0, 1);
	func_703(14, bParam0, 1);
	func_703(15, bParam0, 1);
	func_703(16, bParam0, 1);
	func_703(17, bParam0, 1);
	func_703(18, bParam0, 1);
	func_703(19, bParam0, 1);
	func_703(20, bParam0, 1);
	func_703(22, bParam0, 1);
	func_703(23, bParam0, 1);
	func_703(24, bParam0, 1);
	func_703(25, bParam0, 1);
	func_703(26, bParam0, 1);
	func_703(27, bParam0, 1);
	func_381(1, !bParam1);
	if (!bVar0)
	{
		func_704(12);
	}
}

void func_711(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = func_712(0);
	if (Global_262145.f_63 == 1 && func_714(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_703(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_22(44))
		{
			func_704(44);
		}
	}
	if (bParam0)
	{
		if (func_596(0) > 1)
		{
			GAMEPLAY::SET_BIT(&(Global_2524719.f_1724), 10);
		}
	}
}

int func_712(bool bParam0)
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (func_707())
	{
		return 1;
	}
	if (func_706())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2524719.f_1715, 26))
		{
			uVar0 = func_24(1191, -1, 0);
			if (!GAMEPLAY::IS_BIT_SET(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_478(122, -1);
}

void func_713(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = func_712(0);
	func_703(39, bParam0, 0);
	func_703(40, bParam0, 0);
	func_703(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_703(43, bParam0, 0);
		func_703(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_22(39))
		{
			func_704(39);
		}
		if (!func_22(40))
		{
			func_704(40);
		}
		if (!func_22(41))
		{
			func_704(41);
		}
		if (!func_22(42))
		{
			func_704(42);
		}
		if (!func_22(43))
		{
			func_704(43);
		}
	}
}

int func_714(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7573 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_716(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4716 == 1)
		{
			return 1;
		}
	}
	if (func_707() || func_706())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_715())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1574618[iVar1], iVar0);
}

int func_715()
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_1720, 23))
	{
		return 1;
	}
	if (func_707())
	{
		return 1;
	}
	if (func_706())
	{
		return 1;
	}
	uVar0 = Global_1378933[func_25(-1)];
	if (GAMEPLAY::IS_BIT_SET(uVar0, 7))
	{
		GAMEPLAY::SET_BIT(&(Global_2524719.f_1720), 23);
		return 1;
	}
	return 0;
}

int func_716(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (!func_736())
	{
		return 0;
	}
	if (func_718())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_717(iParam1);
	uVar1 = uVar0;
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_645, uVar1);
}

int func_717(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		default:
	}
	return 1;
}

bool func_718()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_146, 3);
}

void func_719(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_727(-1))
			{
				if (!func_736())
				{
					return;
				}
			}
			if (!func_727(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_726() && !func_725())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_724())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_727(-1))
				{
					if (!func_720())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		GAMEPLAY::SET_BIT(&(Global_1574618[iVar1]), iVar0);
	}
}

int func_720()
{
	var uVar0;
	
	if (func_723(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	uVar0 = Global_1378933[func_25(-1)];
	if (GAMEPLAY::IS_BIT_SET(uVar0, 2))
	{
		func_721(1);
		return 1;
	}
	return 0;
}

void func_721(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142, 25))
		{
			func_722(PLAYER::PLAYER_ID(), 12);
			GAMEPLAY::SET_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142), 25);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142, 25))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142), 25);
	}
}

void func_722(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_717(iParam1);
	uVar1 = uVar0;
	GAMEPLAY::SET_BIT(&(Global_1589747[iParam0 /*790*/].f_645), uVar1);
}

int func_723(int iParam0)
{
	if (func_707())
	{
		return 1;
	}
	if (func_706())
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_142, 25);
}

int func_724()
{
	var uVar0;
	
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_1720, 6))
	{
		return 1;
	}
	uVar0 = Global_1378933[func_25(-1)];
	if (GAMEPLAY::IS_BIT_SET(uVar0, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2524719.f_1720, 6))
		{
			GAMEPLAY::SET_BIT(&(Global_2524719.f_1720), 6);
		}
		return 1;
	}
	if (func_707())
	{
		return 1;
	}
	if (func_706())
	{
		return 1;
	}
	return 0;
}

bool func_725()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_146, 7);
}

int func_726()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_707())
	{
		return 1;
	}
	if (func_706())
	{
		return 1;
	}
	return func_478(121, -1);
}

bool func_727(int iParam0)
{
	return func_478(123, iParam0);
}

int func_728(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (func_707())
	{
		return 1;
	}
	if (func_706())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			iVar1 = iParam0;
			iVar1 = (iVar1 % 32);
			uVar0 = func_24(func_729(iParam0), -1, 0);
			if (GAMEPLAY::IS_BIT_SET(uVar0, iVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_729(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1200;
		
		case 1:
			return 1201;
		
		case 2:
			return 1202;
		
		case 3:
			return 1203;
		
		case 4:
			return 1204;
		
		case 5:
			return 1206;
		
		case 6:
			return 3815;
		
		case 7:
			return 4018;
		
		case 8:
			return 5472;
		
		default:
	}
	return 1200;
}

int func_730(int iParam0)
{
	if (func_707())
	{
		return 1;
	}
	if (func_706())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
			if (!func_727(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
		case 156:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 78:
		case 103:
		case 124:
		case 126:
		case 127:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_731(int iParam0)
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_707())
	{
		return 1;
	}
	if (func_706())
	{
		return 1;
	}
	return func_478(119, iParam0);
}

int func_732(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_733(iParam0, 0);
}

int func_733(int iParam0, int iParam1)
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

int func_734(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_735(iParam0);
}

int func_735(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1378945[func_25(-1)];
			}
			else if (func_58(iParam0))
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1378945[func_25(-1)];
	}
	return 0;
}

int func_736()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_707())
	{
		return 1;
	}
	if (func_706())
	{
		return 1;
	}
	return func_478(120, -1);
}

int func_737()
{
	var uVar0;
	
	func_742(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_461())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_741())
	{
		return 1;
	}
	if (func_740(157))
	{
		if (!func_739())
		{
			return 1;
		}
	}
	if (func_740(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_738() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_738()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_738()
{
	switch (func_28())
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

bool func_739()
{
	return Global_2448386.f_587;
}

int func_740(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_741()
{
	return Global_2458191;
}

void func_742(var uParam0)
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
					func_743(iVar0);
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

void func_743(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_12(vVar0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_744(uVar4, &bVar5))
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

int func_744(var uParam0, var uParam1)
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

void func_745()
{
	SYSTEM::WAIT(0);
}

void func_746(struct<17> Param0, var uParam17, var uParam18, var uParam19, var uParam20)
{
	var uVar0;
	
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(2, 0, Param0.f_16);
	func_751(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_568, 7);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_740, 11);
	Global_1589747[PLAYER::PLAYER_ID() /*790*/] = 16;
	if (bLocal_759)
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(800);
		}
		if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			if (!NETWORK::_0x35F0B98A8387274D())
			{
				uVar0 = PLAYER::PLAYER_ID() + 32;
				NETWORK::_0xFB680D403909DC70(1, uVar0);
				func_195(1);
			}
		}
	}
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	if (!func_750())
	{
		func_391(0);
	}
	GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	func_693(iLocal_93, 1);
	func_393(1);
	if (!bLocal_759)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_344(PLAYER::PLAYER_ID(), 1, 0);
		}
	}
	Global_2524719.f_1715 = 0;
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 0, 0, 0);
	func_749();
	func_747();
	Local_740[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 0;
}

void func_747()
{
	NETWORK::NETWORK_BLOCK_INVITES(1);
	func_748(1, -1);
	NETWORK::_NETWORK_BLOCK_INVITES_2(1);
	if (func_478(133, -1))
	{
		func_30(133, 0, -1, 1);
	}
	Global_2448386.f_632 = 1;
}

void func_748(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x0D01D20616FC73FB(0, iParam1);
			break;
		
		default:
			uVar1 = func_407(iParam1);
			uVar0 = GAMEPLAY::GET_PROFILE_SETTING(uVar1);
			if (GAMEPLAY::IS_BIT_SET(uVar0, iParam0))
			{
				GAMEPLAY::CLEAR_BIT(&uVar0, iParam0);
				STATS::_0x0D01D20616FC73FB(uVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_30(120, 0, iParam1, 1);
			func_30(124, 0, iParam1, 1);
			func_30(115, 0, iParam1, 1);
			func_30(119, 0, iParam1, 1);
			break;
	}
}

void func_749()
{
	AI::OPEN_SEQUENCE_TASK(&uLocal_753);
	AI::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
	AI::TASK_TURN_PED_TO_FACE_COORD(0, 17.0693f, -1115.935f, 28.7968f, 0);
	AI::CLOSE_SEQUENCE_TASK(uLocal_753);
}

int func_750()
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
		if (func_461())
		{
			return 0;
		}
		if (func_740(155))
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

int func_751(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_752();
			}
			else
			{
				return 0;
			}
		}
		if (!func_372())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_752();
					}
					else
					{
						return 0;
					}
				}
				if (func_461())
				{
					if (!bParam2)
					{
						func_752();
					}
					else
					{
						return 0;
					}
				}
				if (func_740(155))
				{
					if (!bParam2)
					{
						func_752();
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
					func_752();
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
				func_752();
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
			func_752();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_752()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

