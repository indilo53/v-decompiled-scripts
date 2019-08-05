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
	int iLocal_46 = 0;
	struct<21> Local_47[54];
	struct<279> Local_1182 = { 64, 3, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 16, 3, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	int iLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	int iLocal_1474 = 0;
	var uLocal_1475 = 0;
	int iLocal_1476 = 0;
	vector3 vLocal_1477 = { 0f, 0f, 0f };
	vector3 vLocal_1480 = { 0f, 0f, 0f };
	int iLocal_1483 = 0;
	int iLocal_1484 = 0;
	int iLocal_1485 = 0;
	var uLocal_1486[2] = { 0, 0 };
	struct<2> Local_1489[20];
	int iLocal_1530 = 0;
	int iLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	struct<5> Local_1536[54];
	struct<2> Local_1807[54];
	int iLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	struct<6> Local_1919 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1925 = 3;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 3;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	int iLocal_1934 = 0;
	int iLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	struct<2> Local_1938 = { 0, -1 } ;
	struct<18> Local_1940 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1958 = 0;
	int iLocal_1959 = 0;
	int iLocal_1960 = 0;
	int iLocal_1961 = 0;
	int iLocal_1962 = 0;
	int iLocal_1963 = 0;
	int iLocal_1964 = 0;
	struct<4> Local_1965[54];
	var uLocal_2182[54] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2237[3] = { 0, 0, 0 };
	var uLocal_2241 = 0;
	struct<116> Local_2242 = { 2, 0, 0, 2, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54 } ;
	var uLocal_2358 = 3;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 3;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 3;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 3;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 3;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 3;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 3;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 3;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 3;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 3;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 3;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 3;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 3;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 3;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 3;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 3;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 3;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 3;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 3;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 3;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 3;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 3;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 3;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 3;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 3;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 3;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 3;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 3;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 3;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 3;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 3;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 3;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 3;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 3;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 3;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 3;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 3;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 3;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 3;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 3;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 3;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 3;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 3;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 3;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 3;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 3;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 3;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 3;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 3;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 3;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 3;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 3;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 3;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 3;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	int iLocal_2574 = 0;
	struct<657> Local_2575 = { 54, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 54, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2 } ;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	struct<11> Local_3235[32];
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
	iLocal_46 = -1;
	iLocal_1483 = -1;
	iLocal_1484 = -1;
	iLocal_1530 = -1;
	iLocal_1958 = -1;
	iLocal_1959 = -1;
	iLocal_1960 = -1;
	iLocal_1961 = -1;
	iLocal_1962 = 1;
	iLocal_1964 = -1;
	func_348();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_344();
	}
	else
	{
		func_342();
	}
	func_341(&Local_1182, &Local_47);
	while (true)
	{
		func_340();
		func_325();
		func_15();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_2575.f_659, 0))
	{
		func_13();
		GAMEPLAY::SET_BIT(&(Local_2575.f_659), 0);
	}
	func_2();
}

void func_2()
{
	int iVar0;
	var uVar1[2];
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
		{
			if (func_12(iVar4, 1, 1))
			{
				if (Local_3235[iVar0 /*11*/] >= 0)
				{
					GAMEPLAY::SET_BIT(&(uVar1[func_11(Local_3235[iVar0 /*11*/])]), func_10(Local_3235[iVar0 /*11*/]));
					func_3(iVar0);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 54)
	{
		if (!GAMEPLAY::IS_BIT_SET(uVar1[func_11(iVar0)], func_10(iVar0)))
		{
			if (Local_2575.f_598[iVar0] >= 0)
			{
				Local_2575.f_598[iVar0] = -1;
			}
		}
		iVar0++;
	}
}

void func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_3235[iParam0 /*11*/];
	if (Local_2575.f_598[iVar0] == -1)
	{
		Local_2575.f_598[iVar0] = iParam0;
	}
	else if (Local_2575.f_598[iVar0] == iParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_2575.f_653[func_11(iVar0)], func_10(iVar0)))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_3235[iParam0 /*11*/].f_10, 0) && !GAMEPLAY::IS_BIT_SET(Local_3235[iParam0 /*11*/].f_10, 2))
			{
				GAMEPLAY::SET_BIT(&(Local_2575.f_653[func_11(iVar0)]), func_10(iVar0));
				func_9(&(Local_2575.f_489[iVar0 /*2*/]), 0, 0);
			}
		}
		else
		{
			if (GAMEPLAY::IS_BIT_SET(Local_3235[iParam0 /*11*/].f_10, 1))
			{
				iVar1 = 0;
				while (iVar1 < 3)
				{
					Local_2575.f_217[iVar0 /*4*/][iVar1] = Local_3235[iParam0 /*11*/].f_5[iVar1];
					Local_2575[iVar0 /*4*/][iVar1] = Local_3235[iParam0 /*11*/].f_1[iVar1];
					Local_2575.f_434[iVar0] = Local_3235[iParam0 /*11*/].f_9;
					GAMEPLAY::SET_BIT(&(Local_2575.f_656[func_11(iVar0)]), func_10(iVar0));
					iVar1++;
				}
			}
			if (GAMEPLAY::IS_BIT_SET(Local_3235[iParam0 /*11*/].f_10, 1) && (GAMEPLAY::IS_BIT_SET(Local_3235[iParam0 /*11*/].f_10, 2) || func_5(&(Local_2575.f_489[iVar0 /*2*/]), func_7(iVar0) + 10000, 0)))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_2575.f_653[func_11(iVar0)]), func_10(iVar0));
				GAMEPLAY::CLEAR_BIT(&(Local_2575.f_656[func_11(iVar0)]), func_10(iVar0));
				func_4(&(Local_2575.f_489[iVar0 /*2*/]));
			}
		}
	}
}

void func_4(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_5(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_6(uParam0, bParam2, 0);
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

void func_6(var uParam0, bool bParam1, bool bParam2)
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

int func_7(int iParam0)
{
	if (func_8(iParam0, &Local_47))
	{
		if ((Local_1182.f_1[0 /*65*/][Local_2575[iParam0 /*4*/][0]] == 7 && Local_1182.f_1[1 /*65*/][Local_2575[iParam0 /*4*/][1]] == 7) && Local_1182.f_1[2 /*65*/][Local_2575[iParam0 /*4*/][2]] == 7)
		{
			return 11000;
		}
	}
	return 5500;
}

int func_8(int iParam0, var uParam1)
{
	switch ((uParam1[iParam0 /*21*/])->f_17)
	{
		case 4:
			if (Global_262145.f_26008)
			{
				return 0;
			}
			return 1;
			break;
		
		case 8:
			if (Global_262145.f_26009)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

void func_9(var uParam0, bool bParam1, bool bParam2)
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

int func_10(int iParam0)
{
	return (iParam0 - func_11(iParam0) * 32);
}

int func_11(int iParam0)
{
	return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
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

void func_13()
{
	int iVar0;
	int iVar1;
	struct<9> Var2;
	
	Var2 = 3;
	Var2.f_4 = 3;
	iVar0 = 0;
	while (iVar0 < 54)
	{
		func_14(iVar0, &Var2, &Local_1182, &Local_47);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			Local_2575.f_217[iVar0 /*4*/][iVar1] = Var2.f_4[iVar1];
			Local_2575[iVar0 /*4*/][iVar1] = Var2[iVar1];
			Local_2575.f_434[iVar0] = Var2.f_8;
			iVar1++;
		}
		iVar0++;
	}
}

void func_14(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar4 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar2 = unk_0xF2D49816A804D134(0, *uParam2);
		(*uParam1)[iVar0] = iVar2;
		if (uParam2->f_1[iVar0 /*65*/][iVar2] == 0)
		{
			iVar3 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, uParam2->f_225);
			uParam1->f_4[iVar0] = (IntToFloat(iVar3) + 0.5f);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < uParam2->f_225)
			{
				if (uParam2->f_226[iVar0 /*17*/][iVar1] == uParam2->f_1[iVar0 /*65*/][iVar2])
				{
					iVar4++;
				}
				iVar1++;
			}
			iVar3 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar4);
			iVar4 = 0;
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < uParam2->f_225)
			{
				if (uParam2->f_226[iVar0 /*17*/][iVar1] == uParam2->f_1[iVar0 /*65*/][iVar2])
				{
					if (iVar4 == iVar3)
					{
						uParam1->f_4[iVar0] = SYSTEM::TO_FLOAT(iVar1);
						iVar1 = uParam2->f_225;
					}
					iVar4++;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	if (func_8(iParam0, uParam3))
	{
		if ((uParam2->f_1[0 /*65*/][(*uParam1)[0]] == 7 && uParam2->f_1[1 /*65*/][(*uParam1)[1]] == 7) && uParam2->f_1[2 /*65*/][(*uParam1)[2]] == 7)
		{
			iVar2 = unk_0xF2D49816A804D134(0, 12);
			uParam1->f_8 = iVar2;
		}
	}
}

void func_15()
{
	vector3 vVar0;
	vector3 vVar3;
	
	func_312();
	if (iLocal_1471 > 0)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(2, 199, 1);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, 200);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 200);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, 199);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 199);
		CONTROLS::DISABLE_CONTROL_ACTION(2, 210, 1);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, 210);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 210);
	}
	if (func_311(&uLocal_1534))
	{
		if (!func_5(&uLocal_1534, 5000, 1))
		{
			PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.2f);
		}
	}
	switch (iLocal_1471)
	{
		case 0:
			if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 18))
			{
				STREAMING::REMOVE_ANIM_DICT(func_310());
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 18);
			}
			if (func_293())
			{
				iLocal_1474 = 0;
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 21);
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 22);
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 30);
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 31);
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 21);
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 22);
				func_292(1);
			}
			break;
		
		case 1:
			func_291(iLocal_1961);
			Local_1938 = unk_0x67D02A194A2FC2BD("SLOT_MACHINE");
			break;
		
		case 3:
			func_289();
			break;
		
		case 2:
			if (!func_288())
			{
				func_292(0);
			}
			break;
		
		case 4:
			func_4(&Local_1919);
			iLocal_1934 = 0;
			iLocal_1935 = 0;
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			func_282(0);
			UI::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
			GAMEPLAY::SET_BIT(&(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_309.f_4), 7);
			if (func_274())
			{
				func_267(0);
				func_292(5);
			}
			break;
		
		case 5:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_casino_slot_machines_playing"))
			{
				AUDIO::START_AUDIO_SCENE("dlc_vw_casino_slot_machines_playing");
			}
			unk_0x79C0E43EB9B944E2(518572876);
			func_222();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			func_282(0);
			UI::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
			func_42();
			break;
		
		case 6:
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			func_282(0);
			UI::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
			if (GAMEPLAY::IS_BIT_SET(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_309.f_4, 7))
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_309.f_4), 7);
				func_31();
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_casino_slot_machines_playing"))
			{
				AUDIO::STOP_AUDIO_SCENE("dlc_vw_casino_slot_machines_playing");
			}
			if (CAM::_0xEE778F8C7E1142E2(0) == 4)
			{
				if (func_30() < 0.6f)
				{
					unk_0x79C0E43EB9B944E2(518572876);
				}
			}
			vVar0 = { CONTROLS::GET_CONTROL_NORMAL(2, 218), CONTROLS::GET_CONTROL_NORMAL(2, 219), 0f };
			vVar3 = { CONTROLS::GET_CONTROL_NORMAL(2, 220), CONTROLS::GET_CONTROL_NORMAL(2, 221), 0f };
			if ((func_30() > 0.99f || func_30() < 0f) || ((SYSTEM::VMAG(vVar0) >= 0.24f || SYSTEM::VMAG(vVar3) >= 0.24f) && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2115798116)))
			{
				AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_29();
				func_292(0);
				if (func_12(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_17(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 18))
				{
					STREAMING::REMOVE_ANIM_DICT(func_310());
					GAMEPLAY::CLEAR_BIT(&uLocal_1472, 18);
				}
				if (UI::IS_RADAR_HIDDEN())
				{
					UI::DISPLAY_RADAR(1);
				}
				func_9(&uLocal_1534, 1, 0);
				if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 2))
				{
					func_16(0);
					GAMEPLAY::CLEAR_BIT(&uLocal_1472, 2);
				}
			}
			break;
	}
}

void func_16(int iParam0)
{
	Global_968394 = iParam0;
}

void func_17(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_28())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
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
		if (!func_26())
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
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
			{
				return;
			}
			uVar25 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar13 || (!func_23(PLAYER::PLAYER_ID(), 0) && !func_22()))
				{
					ENTITY::SET_ENTITY_VISIBLE(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2424047[iParam0 /*416*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_21(uVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar25))
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
					func_20();
					func_19();
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
				Global_2424047[iParam0 /*416*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405071.f_2668)
				{
					Global_2405071.f_2668 = 0;
				}
			}
			else
			{
				if (!func_21(uVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar25))
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
					if (func_18(Global_4456448.f_161209))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar25, 1);
					}
				}
				if (Global_1312844)
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

bool func_18(int iParam0)
{
	return iParam0 == 17;
}

void func_19()
{
	vector3 vVar0;
	
	Global_2437364.f_1232 = 0;
	Global_2437364.f_1233 = 0;
	Global_2437364.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437364.f_1239 = -1;
	Global_2437364.f_1240 = 0;
	Global_2405071.f_2679 = { vVar0 };
}

void func_20()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2722 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_207 = 0;
	Global_2405071.f_2677 = 0;
}

int func_21(var uParam0)
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

bool func_22()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

bool func_23(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_24(-1, 0) == 8;
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

int func_24(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
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

int func_25()
{
	return Global_1312745;
}

int func_26()
{
	if (func_27() == 0)
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	return Global_1312467.f_18;
}

int func_28()
{
	if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_35 && !Global_2449538.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

void func_29()
{
	vector3 vVar0[24];
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_1938))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Local_1938);
	}
	Local_1938.f_1 = -1;
	if (iLocal_1960 >= 0)
	{
		StringCopy(&cVar0, "machine_0", 24);
		StringIntConCat(&cVar0, Local_47[iLocal_1960 /*21*/].f_17, 24);
		StringConCat(&cVar0, "a", 24);
		if (UI::IS_NAMED_RENDERTARGET_REGISTERED(&cVar0))
		{
			UI::RELEASE_NAMED_RENDERTARGET(&cVar0);
		}
	}
	iLocal_1960 = -1;
}

float func_30()
{
	var uVar0;
	
	uVar0 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(uLocal_1475);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar0))
	{
		return PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar0);
	}
	return -1f;
}

void func_31()
{
	int iVar0;
	int iVar1;
	
	iVar0 = (NETWORK::_GET_POSIX_TIME() - Global_1689901);
	iVar1 = (NETWORK::_GET_POSIX_TIME() - Global_1689902);
	if (Global_1689902 == -1)
	{
		func_35(iVar0);
	}
	else
	{
		func_35(iVar1);
	}
	func_34();
	func_32();
	Global_1689901 = -1;
	Global_1689902 = -1;
	Global_1689918 = -1;
	Global_2458547 = 1;
}

void func_32()
{
	func_33(1599929969, NETWORK::_GET_POSIX_TIME());
}

void func_33(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

void func_34()
{
	func_33(575353331, NETWORK::_GET_POSIX_TIME());
}

void func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = func_41();
	Global_1689910 = (Global_1689910 + iParam0);
	func_36(iVar0, iParam0);
	func_32();
}

void func_36(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1[9];
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	
	iVar11 = (iParam0 + 1 * 12 - 12);
	iVar12 = 1;
	if ((iVar11 % 32) + 12 > 32)
	{
		iVar12 = 2;
	}
	iVar13 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar11) / 32f));
	if (iVar13 < 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		if ((iVar13 + iVar0) >= 9)
		{
			return;
		}
		iVar14 = func_40((iVar13 + iVar0));
		uVar1[(iVar13 + iVar0)] = func_39(iVar14);
		iVar0++;
	}
	iVar15 = func_38(&uVar1, iParam0, 12);
	iVar15 = (iVar15 + iParam1);
	func_37(&uVar1, iParam0, 12, iVar15);
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		uVar16 = func_40((iVar13 + iVar0));
		func_33(uVar16, uVar1[(iVar13 + iVar0)]);
		iVar0++;
	}
}

void func_37(var uParam0, int iParam1, int iParam2, int iParam3)
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
	
	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar3) / 32f));
	iVar5 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar3 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar4 - 1) + iVar5) >= *uParam0)
	{
		return;
	}
	iVar6 = 0;
	iVar7 = (iVar3 % 32);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		iVar8 = (32 - iVar7);
		if (iVar8 > (iParam2 - iVar6))
		{
			iVar8 = (iParam2 - iVar6);
		}
		iVar1 = iVar7;
		while (iVar1 <= ((iVar7 + iVar8) - 1))
		{
			if (GAMEPLAY::IS_BIT_SET(iParam3, iVar6))
			{
				GAMEPLAY::SET_BIT(uParam0[(iVar4 + iVar0)], iVar1);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(uParam0[(iVar4 + iVar0)], iVar1);
			}
			iVar6++;
			iVar1++;
		}
		if (iVar7 > 0)
		{
			iVar7 = 0;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_38(var uParam0, int iParam1, int iParam2)
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
	
	iVar3 = (iParam1 + 1 * iParam2);
	iVar4 = (iVar3 - iParam2);
	iVar5 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar4) / 32f));
	iVar6 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar4 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar5 - 1) + iVar6) >= *uParam0)
	{
		return 0;
	}
	iVar7 = 0;
	iVar8 = (iVar4 % 32);
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		iVar9 = (32 - iVar8);
		if (iVar9 > (iParam2 - iVar7))
		{
			iVar9 = (iParam2 - iVar7);
		}
		iVar1 = iVar8;
		while (iVar1 <= ((iVar8 + iVar9) - 1))
		{
			if (GAMEPLAY::IS_BIT_SET((*uParam0)[(iVar5 + iVar0)], iVar1))
			{
				GAMEPLAY::SET_BIT(&uVar2, iVar7);
			}
			iVar7++;
			iVar1++;
		}
		if (iVar8 > 0)
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_39(int iParam0)
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

var func_40(int iParam0)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return GAMEPLAY::GET_HASH_KEY(&cVar0);
}

int func_41()
{
	return func_39(92143537);
}

void func_42()
{
	bool bVar0;
	struct<6> Var1;
	int iVar7;
	int iVar8;
	int iVar9;
	
	bVar0 = true;
	func_221();
	func_220();
	if ((((((func_219() || func_218()) || NETWORK::_0x2EAC52B4019E2782()) || UI::_0x2F057596F2BD0061()) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || func_217(1)) || UI::IS_WARNING_MESSAGE_ACTIVE())
	{
		bVar0 = false;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_2575.f_653[func_11(iLocal_1959)], func_10(iLocal_1959)) && !GAMEPLAY::IS_BIT_SET(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10, 2))
	{
		if (!func_216())
		{
			func_215(1);
			GAMEPLAY::SET_BIT(&uLocal_1472, 13);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 13))
	{
		if (func_216())
		{
			func_215(0);
		}
		GAMEPLAY::CLEAR_BIT(&uLocal_1472, 13);
	}
	if (bVar0)
	{
		if (CONTROLS::IS_CONTROL_JUST_RELEASED(0, 0) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(0, 0))
		{
			iLocal_1530++;
			if (iLocal_1530 > 1)
			{
				iLocal_1530 = 0;
			}
			func_213(iLocal_1530);
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 21) || GAMEPLAY::IS_BIT_SET(uLocal_1472, 22))
		{
			if (((CONTROLS::IS_CONTROL_JUST_RELEASED(0, 189) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(0, 189)) || CONTROLS::IS_CONTROL_JUST_RELEASED(0, 190)) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(0, 190))
			{
				if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 21))
				{
					GAMEPLAY::SET_BIT(&uLocal_1472, 22);
					GAMEPLAY::CLEAR_BIT(&uLocal_1472, 21);
				}
				else if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 22))
				{
					GAMEPLAY::SET_BIT(&uLocal_1472, 21);
					GAMEPLAY::CLEAR_BIT(&uLocal_1472, 22);
				}
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 0);
			}
			if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 202) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
			{
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 21);
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 22);
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 0);
			}
		}
		else if (CONTROLS::IS_CONTROL_JUST_RELEASED(0, 210) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(0, 210))
		{
			GAMEPLAY::SET_BIT(&uLocal_1472, 21);
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 0);
			return;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_1473, 2))
	{
		if ((((iLocal_1476 == 4 || iLocal_1476 == 10) || iLocal_1476 == 11) || iLocal_1476 == 12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
		{
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 0);
			GAMEPLAY::CLEAR_BIT(&uLocal_1473, 2);
		}
	}
	if (Global_262145.f_25805)
	{
		if (!func_311(&Local_1919))
		{
			func_6(&Local_1919, 1, 0);
		}
		else if (func_5(&Local_1919, 120000, 1))
		{
			func_212(1);
		}
	}
	if (!iLocal_1935)
	{
		uLocal_1937 = NETWORK::GET_NETWORK_TIME();
		iLocal_1935 = 1;
	}
	if (!iLocal_1934)
	{
		uLocal_1936 = NETWORK::GET_NETWORK_TIME();
		iLocal_1934 = 1;
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_1472, 3))
	{
		if (iLocal_1476 == 4 || iLocal_1476 == 10)
		{
			if (!func_195(iLocal_1959))
			{
				func_192(27);
				return;
			}
		}
		if ((((bVar0 && (!GAMEPLAY::IS_BIT_SET(Local_2575.f_653[func_11(iLocal_1959)], func_10(iLocal_1959)) || GAMEPLAY::IS_BIT_SET(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10, 2))) && !GAMEPLAY::IS_BIT_SET(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10, 0)) && GAMEPLAY::IS_BIT_SET(uLocal_1472, 0)) && !(GAMEPLAY::IS_BIT_SET(uLocal_1472, 21) || GAMEPLAY::IS_BIT_SET(uLocal_1472, 22)))
		{
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 208))
			{
				if (func_191())
				{
					if (iLocal_1476 == 4 || iLocal_1476 == 10)
					{
						if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (func_187() == 2)
							{
								func_186("CAS_MG_CTIME", -1);
							}
							else
							{
								func_186("CAS_MG_CBAN", -1);
							}
							GAMEPLAY::SET_BIT(&uLocal_1472, 6);
						}
						func_192(27);
					}
				}
				else if (func_185() >= (Local_47[iLocal_1959 /*21*/].f_16 * iLocal_1962))
				{
					if ((((iLocal_1476 == 4 || iLocal_1476 == 10) || iLocal_1476 == 11) || iLocal_1476 == 12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
					{
						GAMEPLAY::SET_BIT(&uLocal_1472, 30);
						GAMEPLAY::CLEAR_BIT(&uLocal_1472, 5);
						if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 208))
						{
							func_184();
						}
						else
						{
							func_183();
						}
						func_182();
						GAMEPLAY::CLEAR_BIT(&(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10), 1);
						GAMEPLAY::CLEAR_BIT(&(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
						GAMEPLAY::CLEAR_BIT(&(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10), 0);
						GAMEPLAY::CLEAR_BIT(&uLocal_1472, 24);
						GAMEPLAY::SET_BIT(&uLocal_1472, 3);
						GAMEPLAY::CLEAR_BIT(&uLocal_1472, 0);
					}
				}
				else if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_186("SLOTS_NOMON", -1);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(uLocal_1472, 3))
			{
				if ((((iLocal_1476 == 4 || iLocal_1476 == 10) || iLocal_1476 == 11) || iLocal_1476 == 12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
				{
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 203) && !GAMEPLAY::IS_BIT_SET(uLocal_1472, 27))
					{
						GAMEPLAY::SET_BIT(&uLocal_1472, 30);
						func_174(1, -1, -1, -1);
						iLocal_1962++;
						if (iLocal_1962 > 5)
						{
							iLocal_1962 = 1;
						}
						func_173((Local_47[iLocal_1959 /*21*/].f_16 * iLocal_1962));
						if ((iLocal_1476 == 4 || iLocal_1476 == 10) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
						{
							func_172(0);
						}
						func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_1959 /*21*/].f_17, 5);
						func_174(1, -1, -1, -1);
						GAMEPLAY::CLEAR_BIT(&uLocal_1472, 0);
					}
					else if (!CONTROLS::IS_CONTROL_JUST_PRESSED(2, 203))
					{
						GAMEPLAY::CLEAR_BIT(&uLocal_1472, 27);
					}
					if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 204) && !GAMEPLAY::IS_BIT_SET(uLocal_1472, 28))
					{
						GAMEPLAY::SET_BIT(&uLocal_1472, 30);
						func_174(1, -1, -1, -1);
						iLocal_1962 = 5;
						iVar8 = func_185();
						if (iVar8 < (Local_47[iLocal_1959 /*21*/].f_16 * iLocal_1962))
						{
							iLocal_1962 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((iVar8 / Local_47[iLocal_1959 /*21*/].f_16)));
						}
						if ((iLocal_1476 == 4 || iLocal_1476 == 10) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
						{
							func_172(1);
						}
						func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_1959 /*21*/].f_17, 6);
						func_173((Local_47[iLocal_1959 /*21*/].f_16 * iLocal_1962));
						GAMEPLAY::CLEAR_BIT(&uLocal_1472, 0);
					}
					else if (!CONTROLS::IS_CONTROL_JUST_PRESSED(2, 204))
					{
						GAMEPLAY::CLEAR_BIT(&uLocal_1472, 28);
					}
				}
				if (iLocal_1476 == 4 || iLocal_1476 == 10)
				{
					if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 202) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
					{
						func_192(27);
					}
				}
			}
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(uLocal_1472, 4))
	{
		if (func_167((Local_47[iLocal_1959 /*21*/].f_16 * iLocal_1962), &iLocal_2574, 0, 0))
		{
			if (iLocal_2574 == 2)
			{
				GAMEPLAY::SET_BIT(&uLocal_1472, 4);
				Local_1919.f_5 = (Local_1919.f_5 + (Local_47[iLocal_1959 /*21*/].f_16 * iLocal_1962));
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 3);
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 24);
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 4);
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 5);
				GAMEPLAY::CLEAR_BIT(&(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10), 1);
				GAMEPLAY::CLEAR_BIT(&(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10), 0);
				GAMEPLAY::CLEAR_BIT(&(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 0);
				GAMEPLAY::SET_BIT(&uLocal_1473, 2);
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_186("SLOTS_FAILTR", -1);
				}
				func_164(10);
			}
			iLocal_2574 = 0;
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(uLocal_1472, 5))
	{
		if (((iLocal_1476 == 8 || iLocal_1476 == 14) || iLocal_1476 == 9) || iLocal_1476 == 15)
		{
			if (func_30() > 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2044168827))
			{
				if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 0))
				{
					GAMEPLAY::CLEAR_BIT(&uLocal_1472, 0);
				}
				GAMEPLAY::SET_BIT(&uLocal_1472, 5);
				GAMEPLAY::SET_BIT(&(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10), 0);
			}
		}
		else
		{
			if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 0))
			{
				func_163(0, 0);
				func_160(1, -1);
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 0);
			}
			GAMEPLAY::SET_BIT(&uLocal_1472, 5);
			GAMEPLAY::SET_BIT(&(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10), 0);
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(uLocal_1472, 24))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_2575.f_653[func_11(iLocal_1959)], func_10(iLocal_1959)))
		{
			func_14(iLocal_1959, &uLocal_1925, &Local_1182, &Local_47);
			GAMEPLAY::SET_BIT(&uLocal_1472, 24);
		}
	}
	else
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10, 1))
		{
			Local_47[iLocal_1959 /*21*/] = func_158(iLocal_1959, Local_1182.f_1[0 /*65*/][uLocal_1925[0]], Local_1182.f_1[1 /*65*/][uLocal_1925[1]], Local_1182.f_1[2 /*65*/][uLocal_1925[2]], 0);
			Local_47[iLocal_1959 /*21*/].f_1 = func_156(iLocal_1959, Local_1182.f_1[0 /*65*/][uLocal_1925[0]], Local_1182.f_1[1 /*65*/][uLocal_1925[1]], Local_1182.f_1[2 /*65*/][uLocal_1925[2]], uLocal_1925.f_8);
			if (Local_47[iLocal_1959 /*21*/] > 0)
			{
				if (func_118(Local_47[iLocal_1959 /*21*/], &iLocal_2574, 0))
				{
					if (Local_47[iLocal_1959 /*21*/].f_1 > 0)
					{
						func_64(Local_47[iLocal_1959 /*21*/].f_1);
					}
					iVar7 = 0;
					while (iVar7 < 3)
					{
						Local_3235[PLAYER::PLAYER_ID() /*11*/].f_5[iVar7] = uLocal_1925.f_4[iVar7];
						Local_3235[PLAYER::PLAYER_ID() /*11*/].f_1[iVar7] = uLocal_1925[iVar7];
						iVar7++;
					}
					Local_3235[PLAYER::PLAYER_ID() /*11*/].f_9 = uLocal_1925.f_8;
					func_55();
					GAMEPLAY::SET_BIT(&(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10), 1);
					iLocal_2574 = 0;
				}
			}
			else
			{
				iVar7 = 0;
				while (iVar7 < 3)
				{
					Local_3235[PLAYER::PLAYER_ID() /*11*/].f_5[iVar7] = uLocal_1925.f_4[iVar7];
					Local_3235[PLAYER::PLAYER_ID() /*11*/].f_1[iVar7] = uLocal_1925[iVar7];
					iVar7++;
				}
				Local_3235[PLAYER::PLAYER_ID() /*11*/].f_9 = uLocal_1925.f_8;
				GAMEPLAY::SET_BIT(&(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10), 1);
				func_55();
				func_50((Local_47[iLocal_1959 /*21*/].f_16 * iLocal_1962));
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_2575.f_653[func_11(iLocal_1959)], func_10(iLocal_1959)) || GAMEPLAY::IS_BIT_SET(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10, 2))
		{
			if (Local_47[iLocal_1959 /*21*/] > 0)
			{
				if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 16))
				{
					func_164(22);
				}
				else if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 14))
				{
					if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 29))
					{
						func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_1959 /*21*/].f_17, 4);
					}
					else
					{
						func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_1959 /*21*/].f_17, 3);
					}
					func_164(19);
				}
				else
				{
					func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_1959 /*21*/].f_17, 2);
					func_164(18);
				}
				Var1 = { func_49(Local_47[iLocal_1959 /*21*/].f_17, 1) };
				func_47(&Var1);
				iVar9 = func_45(Local_1182.f_1[0 /*65*/][uLocal_1925[0]], Local_1182.f_1[1 /*65*/][uLocal_1925[1]], Local_1182.f_1[2 /*65*/][uLocal_1925[2]]);
				if (iVar9 == 6)
				{
					func_44(Local_47[iLocal_1959 /*21*/].f_17, Local_47[iLocal_1959 /*21*/]);
				}
				func_174(2, iVar9, Local_47[iLocal_1959 /*21*/], Local_47[iLocal_1959 /*21*/].f_1);
			}
			else
			{
				if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 15))
				{
					func_164(24);
				}
				else
				{
					func_164(23);
				}
				func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_1959 /*21*/].f_17, 1);
				Var1 = { func_49(Local_47[iLocal_1959 /*21*/].f_17, 0) };
				func_47(&Var1);
			}
			func_43(Local_47[iLocal_1959 /*21*/]);
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 3);
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 4);
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 5);
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 24);
		}
	}
}

void func_43(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_1938, "SET_LAST_WIN");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_44(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			GAMEPLAY::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 4);
			break;
		
		case 2:
			GAMEPLAY::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 5);
			break;
		
		case 3:
			GAMEPLAY::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 6);
			break;
		
		case 4:
			GAMEPLAY::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 7);
			break;
		
		case 5:
			if (iParam1 >= 1000000)
			{
				GAMEPLAY::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 3);
			}
			else
			{
				GAMEPLAY::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 10);
			}
			break;
		
		case 6:
			GAMEPLAY::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 8);
			break;
		
		case 7:
			GAMEPLAY::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 2);
			break;
		
		case 8:
			GAMEPLAY::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_782), 9);
			break;
	}
}

int func_45(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == iParam1 && iParam1 == iParam2)
	{
		return func_46(iParam0, 3);
	}
	else
	{
		if (iParam0 == 7)
		{
			iVar0++;
		}
		if (iParam1 == 7)
		{
			iVar0++;
		}
		if (iParam2 == 7)
		{
			iVar0++;
		}
		if (iVar0 >= 1)
		{
			return func_46(7, iVar0);
		}
	}
	return 0;
}

int func_46(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			if (iParam1 == 3)
			{
				return 7;
			}
			else if (iParam1 == 2)
			{
				return 8;
			}
			else if (iParam1 == 1)
			{
				return 9;
			}
			break;
	}
	return 0;
}

void func_47(var uParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_1938, "SET_MESSAGE");
	func_48(uParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_48(var uParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

struct<6> func_49(int iParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "SLOTS_MES", 24);
	iVar6 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 17);
	if (bParam1)
	{
		StringConCat(&Var0, "P", 24);
	}
	else
	{
		StringConCat(&Var0, "N", 24);
	}
	StringIntConCat(&Var0, iParam0, 24);
	if (iVar6 < 10)
	{
		StringConCat(&Var0, "0", 24);
		StringIntConCat(&Var0, iVar6, 24);
	}
	else
	{
		StringIntConCat(&Var0, iVar6, 24);
	}
	return Var0;
}

void func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_54();
	iVar1 = NETWORK::_GET_POSIX_TIME();
	iVar2 = func_53();
	if (iVar0 == 0)
	{
		func_52();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26159)
	{
		func_51();
		iVar2 = 0;
	}
	if ((iVar2 - iParam0) >= Global_262145.f_26160)
	{
		func_33(-1274895349, Global_262145.f_26160);
		func_51();
		Global_2458546 = 1;
	}
	else
	{
		func_33(-1274895349, (iVar2 - iParam0));
	}
}

void func_51()
{
	func_52();
}

void func_52()
{
	func_33(2026157635, NETWORK::_GET_POSIX_TIME());
}

int func_53()
{
	return func_39(-1274895349);
}

int func_54()
{
	return func_39(2026157635);
}

void func_55()
{
	struct<22> Var0;
	
	if (Global_262145.f_25805)
	{
		if (Local_47[iLocal_1959 /*21*/] > 0)
		{
			Local_1919.f_3++;
		}
		else
		{
			Local_1919.f_4++;
		}
		Local_1919.f_2 = (Local_1919.f_2 + (Local_47[iLocal_1959 /*21*/] - (iLocal_1962 * Local_47[iLocal_1959 /*21*/].f_16)));
	}
	if (Global_262145.f_25799)
	{
		Var0 = -1867894674;
		Var0.f_1 = -1125105727;
		Var0.f_2 = iLocal_1959;
		if (func_191())
		{
			switch (func_187())
			{
				case 0:
					Var0.f_4 = GAMEPLAY::GET_HASH_KEY("win cutoff");
					break;
				
				case 1:
					Var0.f_4 = GAMEPLAY::GET_HASH_KEY("loss cutoff");
					break;
				
				case 2:
					Var0.f_4 = GAMEPLAY::GET_HASH_KEY("time cutoff");
					break;
			}
		}
		else if (Local_47[iLocal_1959 /*21*/] > 0)
		{
			Var0.f_4 = -562306862;
		}
		else
		{
			Var0.f_4 = -1851302466;
		}
		Var0.f_6 = (Local_47[iLocal_1959 /*21*/] - (iLocal_1962 * Local_47[iLocal_1959 /*21*/].f_16));
		Var0.f_7 = func_185();
		Var0.f_10 = (GAMEPLAY::IS_BIT_SET(uLocal_1472, 20) || GAMEPLAY::IS_BIT_SET(uLocal_1473, 1));
		Var0.f_11 = func_63(PLAYER::PLAYER_ID());
		Var0.f_12 = (iLocal_1962 * Local_47[iLocal_1959 /*21*/].f_16);
		Var0.f_14 = Local_47[iLocal_1959 /*21*/];
		if (iLocal_1962 == 5)
		{
			Var0.f_5 = 1;
		}
		else
		{
			Var0.f_5 = 0;
		}
		Var0.f_15 = Local_47[iLocal_1959 /*21*/] > 0;
		Var0.f_17 = GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(uLocal_1936, NETWORK::GET_NETWORK_TIME()));
		Var0.f_18 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
		Var0.f_19 = unk_0xDB663CC9FF3407A9(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
		Var0.f_21 = Local_47[iLocal_1959 /*21*/].f_17;
		if (func_63(PLAYER::PLAYER_ID()))
		{
			Var0.f_20 = 1983458449;
		}
		else if (func_62())
		{
			Var0.f_20 = 1334658487;
		}
		else if (func_56())
		{
			Var0.f_20 = 980726932;
		}
		else
		{
			Var0.f_20 = 939907746;
		}
		iLocal_1934 = 0;
		unk_0xEF5EC67D392B830A(&Var0);
	}
}

int func_56()
{
	int iVar0;
	
	if (func_60(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_59();
		if (iVar0 == func_58())
		{
			return 0;
		}
		else
		{
			return func_57(iVar0);
		}
	}
	return 0;
}

int func_57(int iParam0)
{
	if (iParam0 == func_58())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_362.f_1, 18);
}

int func_58()
{
	return -1;
}

int func_59()
{
	return Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11;
}

bool func_60(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_61(iParam0))
		{
			return 0;
		}
	}
	return Global_1626536[iParam0 /*603*/].f_11 != func_58();
}

int func_61(int iParam0)
{
	if (iParam0 != func_58())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_58())
		{
			return Global_1626536[iParam0 /*603*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_62()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_362.f_1, 18);
}

int func_63(int iParam0)
{
	if (iParam0 != func_58())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_362 != 0;
	}
	return 0;
}

int func_64(int iParam0)
{
	var uVar0;
	var uVar1;
	struct<9> Var2[20];
	int iVar183;
	int iVar184;
	int iVar185;
	
	if (Local_47[iLocal_1959 /*21*/].f_17 == 8)
	{
		if (iParam0 == 12)
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_grenade"), 25, 0, 0);
		}
		else
		{
			func_117(iParam0, &uVar0, &uVar1);
			WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), uVar0, uVar1);
		}
	}
	else if (Local_47[iLocal_1959 /*21*/].f_17 == 4)
	{
		iLocal_46 = -1;
		iVar184 = 0;
		while (iVar184 < 36)
		{
			func_114(iVar184, &(Var2[iVar183 /*9*/]));
			if (Var2[iVar183 /*9*/].f_7 == iParam0)
			{
				if (!func_111(Var2[iVar183 /*9*/], -1, -1))
				{
					iVar183++;
				}
			}
			iVar184++;
		}
		if (iVar183 > 0)
		{
			iVar185 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar183);
			func_110(Var2[iVar185 /*9*/], 1, -1, 1);
			iLocal_46 = Var2[iVar185 /*9*/].f_8;
		}
		else
		{
			func_65(0, "SLOT MACHINE RP", -1827353931, 1223799452, Global_262145.f_26870, 1, -1, 0);
		}
	}
	GAMEPLAY::SET_BIT(&uLocal_1472, 16);
	return 1;
}

var func_65(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_66(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_66(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_109(PLAYER::PLAYER_ID()) || func_108(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9526 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9526;
		}
	}
	else if (func_105() || func_101(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22647 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22647;
		}
	}
	else if (Global_262145.f_6526 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6526;
	}
	if (func_100(uParam2))
	{
	}
	if (func_99())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_97(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_96(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_93(0, &iVar1);
					break;
				
				case 3:
					func_93(1, &iVar1);
					break;
				
				case 1:
					func_89(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1680657)
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
			func_86(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_75((func_85(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_39.f_2 != -1)
				{
					func_86(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_69(iVar1);
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
				func_67((func_68(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_67((func_68(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_67(int iParam0)
{
	if (func_99())
	{
		Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_5 = iParam0;
		func_33(joaat("mpply_globalxp"), iParam0);
	}
}

int func_68(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_39(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_5;
			}
		}
		else
		{
			return func_39(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

void func_69(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_74(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_72(func_73(&Var0));
			if (iVar13 == 0)
			{
				func_71(&Global_1382581, iParam0);
				func_70(joaat("mpply_crew_local_xp_0"), Global_1382581);
			}
			else if (iVar13 == 1)
			{
				func_71(&Global_1382582, iParam0);
				func_70(joaat("mpply_crew_local_xp_1"), Global_1382582);
			}
			else if (iVar13 == 2)
			{
				func_71(&Global_1382583, iParam0);
				func_70(joaat("mpply_crew_local_xp_2"), Global_1382583);
			}
			else if (iVar13 == 3)
			{
				func_71(&Global_1382584, iParam0);
				func_70(joaat("mpply_crew_local_xp_3"), Global_1382584);
			}
			else if (iVar13 == 4)
			{
				func_71(&Global_1382585, iParam0);
				func_70(joaat("mpply_crew_local_xp_4"), Global_1382585);
			}
		}
	}
}

void func_70(int iParam0, var uParam1)
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
			Global_1382576 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1382578 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1382578 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1382579 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1382580 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1382581 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1382582 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1382583 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1382584 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1382585 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1382586 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1382587 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1382588 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1382589 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1382590 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1382591 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1382592 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_71(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_72(int iParam0)
{
	if (iParam0 == Global_1382576)
	{
		return 0;
	}
	else if (iParam0 == Global_1382577)
	{
		return 1;
	}
	else if (iParam0 == Global_1382578)
	{
		return 2;
	}
	else if (iParam0 == Global_1382579)
	{
		return 3;
	}
	else if (iParam0 == Global_1382580)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_73(var uParam0)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2458541;
		}
	}
	return Global_2458541;
}

struct<13> func_74(var uParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

void func_75(int iParam0, int iParam1, int iParam2)
{
	if (func_99())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9494 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1382702[func_84(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1382702[func_84(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9493 == 0)
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
		if (Global_262145.f_9493 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_83(PLAYER::PLAYER_ID()))
		{
			Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_1 = iParam0;
			Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_211.f_6 = func_81(iParam0, 1);
		}
		func_80(639, iParam0, -1, 1);
		func_79(640, func_81(iParam0, 1), -1, 1, 0);
		Global_1382702[func_84(-1)] = iParam0;
		func_76(7, 0);
	}
}

void func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_78(iParam0, iParam1))
	{
		iVar0 = func_77();
		Global_2458506[iVar0] = iParam0;
	}
}

int func_77()
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

int func_78(int iParam0, var uParam1)
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

void func_79(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_84(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_80(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2539502[iParam0 /*3*/][func_84(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1382642[func_84(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1382648[func_84(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1382654[func_84(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1382660[func_84(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1382618[func_84(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1382624[func_84(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1382630[func_84(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1382636[func_84(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1382594[func_84(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1382600[func_84(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1382606[func_84(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1382612[func_84(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1382666[func_84(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1382672[func_84(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1382678[func_84(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1382684[func_84(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1382690[func_84(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1382696[func_84(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1382702[func_84(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1382708[func_84(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2573513[0 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2573513[1 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2573513[2 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2573513[3 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 8956:
			Global_2573644[func_84(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1382714[func_84(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1382720[func_84(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1382726[func_84(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1382732[func_84(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2573577[0 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2573577[1 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2573577[2 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2573577[3 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2573577[4 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2573647[0 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2573647[1 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2573647[2 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2573647[3 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2573647[4 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2573663[0 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2573663[1 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2573663[2 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2573663[3 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2573663[4 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2573577[5 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2573513[4 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2573679[func_84(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2573688[func_84(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2573682[func_84(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2573691[func_84(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2573685[func_84(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2573694[func_84(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2573697[func_84(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2573577[6 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2573513[5 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2573577[7 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2573513[6 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2573577[8 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2573513[7 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2573577[9 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2573513[8 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2573577[10 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2573513[9 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2573577[11 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2573513[10 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2573577[12 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2573513[11 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2573577[13 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2573513[12 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2573577[14 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2573513[13 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2573577[15 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2573513[14 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2573577[16 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2573513[15 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2573577[17 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2573513[16 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2573513[17 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2573513[18 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2573513[19 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2573513[20 /*3*/][func_84(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2573700[func_84(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2573703[func_84(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2573706[func_84(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2573709[func_84(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2573712[func_84(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2573715[func_84(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2573718[func_84(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2573721[func_84(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2573724[func_84(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2573727[func_84(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2573730[func_84(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2573733[func_84(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2573736[func_84(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_81(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_82(iParam0, 0);
}

int func_82(int iParam0, int iParam1)
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

int func_83(int iParam0)
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

int func_84(int iParam0)
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

int func_85(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1382702[func_84(-1)];
			}
			else if (func_83(iParam0))
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1382702[func_84(-1)];
	}
	return 0;
}

void func_86(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_88(iParam0, func_84(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_87(iParam0))
	{
		func_79(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_80(iParam0, iVar0, iParam2, 1);
	}
}

int func_87(int iParam0)
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

int func_88(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2539502[iParam0 /*3*/][func_84(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_89(int iParam0)
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_92(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_91(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_90(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_90(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_90(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(uParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_91(var uParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2505680 = { func_74(uParam0) };
		Global_2505693 = { func_74(iParam1) };
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

int func_92(int iParam0, int iParam1, int iParam2)
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

void func_93(bool bParam0, int iParam1)
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
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_91(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_12(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_94(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_91(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_90(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_90(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_94(var uParam0, int iParam1)
{
	return SYSTEM::VDIST(func_95(uParam0), func_95(iParam1));
	return 0f;
}

Vector3 func_95(var uParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

int func_96(int iParam0)
{
	int iVar0;
	
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_90(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_97(int iParam0)
{
	if (iParam0 < 0)
	{
		if (GAMEPLAY::ABSI(iParam0) > func_85(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_85(PLAYER::PLAYER_ID());
		}
	}
	if (func_98(8000, 0, 0) > 0)
	{
		if (func_98(8000, 0, 0) < (iParam0 + func_85(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_98(8000, 0, 0) - func_85(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_98(int iParam0, bool bParam1, int iParam2)
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
	return Global_289559[iParam0];
}

int func_99()
{
	return 1;
}

int func_100(var uParam0)
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

int func_101(int iParam0)
{
	return func_102(func_103(iParam0));
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_103(int iParam0)
{
	if (func_104(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_104(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_105()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_107();
	}
	return func_106(Global_4456448.f_138474);
}

int func_106(int iParam0)
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

var func_107()
{
	return Global_2448756.f_16;
}

bool func_108(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
}

bool func_109(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
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
	var uVar20;
	
	if (iParam2 == -1)
	{
		iParam2 = func_25();
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

int func_111(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_25();
	}
	iVar1 = func_113(iParam0, iParam1);
	uVar2 = func_112(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_112(int iParam0)
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

int func_113(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_25();
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

void func_114(int iParam0, var uParam1)
{
	uParam1->f_8 = iParam0;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 27147;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_27", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_27", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 1:
			*uParam1 = 27148;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_28", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_28", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 2:
			*uParam1 = 27149;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_33", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_33", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 3:
			*uParam1 = 27150;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_34", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_34", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 4:
			*uParam1 = 27151;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_35", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_35", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 5:
			*uParam1 = 27152;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_36", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_36", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 6:
			*uParam1 = 27153;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_37", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_37", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 7:
			*uParam1 = 27154;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_38", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_38", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 8:
			*uParam1 = 27155;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_39", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_39", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 9:
			*uParam1 = 27156;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_40", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_40", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 10:
			*uParam1 = 27157;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_41", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_41", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 11:
			*uParam1 = 27158;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_42", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_42", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 12:
			*uParam1 = 27159;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_6", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_6", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 13:
			*uParam1 = 27160;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_7", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_7", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 14:
			*uParam1 = 27161;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_8", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_8", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 15:
			*uParam1 = 27162;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_9", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_9", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 16:
			*uParam1 = 27163;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_10", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_10", 24);
			}
			uParam1->f_7 = 1;
			break;
		
		case 17:
			*uParam1 = 27164;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_116", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_116", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 18:
			*uParam1 = 27165;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_117", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_117", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 19:
			*uParam1 = 27166;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_118", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_118", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 20:
			*uParam1 = 27167;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_119", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_119", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 21:
			*uParam1 = 27168;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PE_0_0", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PE_0_0", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 22:
			*uParam1 = 27169;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PE_0_1", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PE_0_1", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 23:
			*uParam1 = 27170;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_6", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_6", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 24:
			*uParam1 = 27171;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_7", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_7", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 25:
			*uParam1 = 27172;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_8", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_8", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 26:
			*uParam1 = 27173;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_9", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_9", 24);
			}
			uParam1->f_7 = 2;
			break;
		
		case 27:
			*uParam1 = 27174;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_24", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_24", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 28:
			*uParam1 = 27175;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_25", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_25", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 29:
			*uParam1 = 27176;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_26", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_26", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 30:
			*uParam1 = 27177;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_29", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_29", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 31:
			*uParam1 = 27178;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_30", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_30", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 32:
			*uParam1 = 27179;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_31", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_31", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 33:
			*uParam1 = 27180;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_32", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_32", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 34:
			*uParam1 = 27181;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_43", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_43", 24);
			}
			uParam1->f_7 = 3;
			break;
		
		case 35:
			*uParam1 = 27182;
			if (func_115())
			{
				StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_44", 24);
			}
			else
			{
				StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_44", 24);
			}
			uParam1->f_7 = 3;
			break;
	}
}

bool func_115()
{
	return func_116(PLAYER::PLAYER_ID());
}

int func_116(var uParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_117(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = joaat("ammo_pistol");
			*uParam2 = 1500;
			break;
		
		case 2:
			*uParam1 = joaat("ammo_pistol");
			*uParam2 = 3000;
			break;
		
		case 3:
			*uParam1 = joaat("ammo_smg");
			*uParam2 = 2000;
			break;
		
		case 4:
			*uParam1 = joaat("ammo_smg");
			*uParam2 = 4000;
			break;
		
		case 5:
			*uParam1 = joaat("ammo_shotgun");
			*uParam2 = 2000;
			break;
		
		case 6:
			*uParam1 = joaat("ammo_shotgun");
			*uParam2 = 4000;
			break;
		
		case 7:
			*uParam1 = joaat("ammo_rifle");
			*uParam2 = 2500;
			break;
		
		case 8:
			*uParam1 = joaat("ammo_rifle");
			*uParam2 = 5000;
			break;
		
		case 9:
			*uParam1 = joaat("ammo_mg");
			*uParam2 = 5500;
			break;
		
		case 10:
			*uParam1 = joaat("ammo_sniper");
			*uParam2 = 1000;
			break;
		
		case 11:
			*uParam1 = joaat("ammo_minigun");
			*uParam2 = 7000;
			break;
	}
}

bool func_118(int iParam0, int iParam1, int iParam2)
{
	return func_119(iParam0, 3, iParam1, iParam2, -1);
}

int func_119(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	
	if (iParam0 <= 0)
	{
	}
	else if (!func_155(iParam1))
	{
	}
	else
	{
		iVar0 = func_185();
		iVar1 = (Global_262145.f_26157 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_153();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_134(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_185() - Global_1689891);
			func_133(iVar4, 1);
			func_131();
			func_130();
			Global_1689891 = (Global_1689891 + iVar4);
			if (iParam1 == 0)
			{
				func_124(iVar4);
				Global_2458546 = 1;
			}
			else if (iParam1 == 3)
			{
				func_123(iVar4);
				if (iVar4 >= Global_262145.f_26165)
				{
					Global_2458547 = 1;
				}
				else if (iVar4 >= Global_262145.f_26164)
				{
					Global_2458546 = 1;
				}
			}
			Var5 = func_122(iParam1);
			Var5.f_1 = func_121(iParam1, iParam3, iParam4);
			if (func_120(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (NETWORKCASH::NETWORK_GET_VC_WALLET_BALANCE(-1) + NETWORKCASH::NETWORK_GET_VC_BANK_BALANCE());
			Var5.f_6 = Global_1689891;
			unk_0x0999F3F090EC5012(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_121(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_122(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -2043662707;
			break;
		
		case 1:
			iVar0 = -1612659516;
			break;
		
		case 2:
			iVar0 = -1304782539;
			break;
		
		case 3:
			iVar0 = 1196301501;
			break;
		
		case 4:
			iVar0 = -1964607937;
			break;
		
		case 5:
			iVar0 = -2125268726;
			break;
		
		case 6:
			iVar0 = 1138851024;
			break;
		
		case 7:
			iVar0 = 1848798713;
			break;
		
		case 8:
			iVar0 = 1196301501;
			break;
		
		case 9:
			iVar0 = -1297103179;
			break;
		
		case 10:
			iVar0 = 1754365518;
			break;
	}
	return iVar0;
}

void func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_54();
	iVar1 = NETWORK::_GET_POSIX_TIME();
	iVar2 = func_53();
	if (iVar0 == 0)
	{
		func_52();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26159)
	{
		func_51();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26161)
	{
		func_33(-1274895349, Global_262145.f_26161);
		func_51();
		Global_2458546 = 1;
	}
	else
	{
		func_33(-1274895349, (iVar2 + iParam0));
	}
}

void func_124(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_129();
	iVar1 = NETWORK::_GET_POSIX_TIME();
	iVar2 = func_128();
	if (iVar0 == 0)
	{
		func_127();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26158)
	{
		func_126();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_125()
	{
		func_33(-1127742296, func_125());
		func_126();
		Global_2458546 = 1;
	}
	else
	{
		func_33(-1127742296, (iVar2 + iParam0));
	}
}

int func_125()
{
	if (func_63(PLAYER::PLAYER_ID()))
	{
		return Global_262145.f_25953;
	}
	return Global_262145.f_25952;
}

void func_126()
{
	func_127();
}

void func_127()
{
	func_33(67083818, NETWORK::_GET_POSIX_TIME());
}

int func_128()
{
	return func_39(-1127742296);
}

int func_129()
{
	return func_39(67083818);
}

void func_130()
{
	if (GAMEPLAY::IS_BIT_SET(Global_1689926, 6))
	{
		GAMEPLAY::SET_BIT(&Global_1689926, 9);
		func_9(&Global_1689929, 0, 0);
	}
}

void func_131()
{
	if (func_132())
	{
		GAMEPLAY::SET_BIT(&Global_1689926, 1);
	}
}

bool func_132()
{
	return (GAMEPLAY::IS_BIT_SET(Global_1689926, 6) || GAMEPLAY::IS_BIT_SET(Global_1689926, 5));
}

void func_133(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	GAMEPLAY::SET_BIT(&Global_1689926, 6);
	Global_1689927 = iParam0;
	Global_1689928 = iParam1;
}

bool func_134(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_120(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_152())
	{
		if (*uParam0 == 0)
		{
			if (func_151() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_122(iParam1);
			iVar5 = -22148635;
			if (func_155(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_147(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_147(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_142())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_141(func_151()))
			{
				if (func_140(func_151()) == 2)
				{
					UNK3::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_139(func_151()));
					if (func_155(iParam1))
					{
						unk_0x3BD101471C7F9EEC(iVar0, iParam2);
					}
					else
					{
						unk_0xED44897CB336F480(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_135(func_151());
			}
		}
	}
	else if (iVar0 > 0 || NETWORKCASH::NETWORK_CAN_SPEND_MONEY(iVar0, 0, 1, 0, -1, 0))
	{
		if (func_155(iParam1))
		{
			unk_0x3BD101471C7F9EEC(iVar0, iParam2);
		}
		else
		{
			unk_0xED44897CB336F480(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

void func_135(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_152())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_138(iParam0))
		{
			if (!bVar0)
			{
				unk_0xFA336E7F40C0A0D0();
			}
		}
		else if (!bVar0)
		{
			UNK3::_NETWORK_SHOP_TERMINATE_SERVICE(Global_4263509[iParam0 /*84*/].f_65);
		}
		func_136(&(Global_4263509[iParam0 /*84*/]));
	}
}

void func_136(var uParam0)
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_137(&(uParam0->f_13));
	func_137(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_137(var uParam0)
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

int func_138(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

int func_139(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65;
	}
	return -1;
}

int func_140(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_2;
	}
	return 0;
}

int func_141(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_2 != 1;
	}
	return 0;
}

int func_142()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_152())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_151();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!UNK3::_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_25()) || UNK3::_NETWORK_SHOP_GET_TRANSACTIONS_DISABLED())
		{
			if (func_146(Global_4263509[iVar2 /*84*/].f_65.f_6, Global_4263509[iVar2 /*84*/].f_65.f_4, Global_4263509[iVar2 /*84*/].f_65.f_1) == 1)
			{
				Global_4264085 = 1;
			}
			return 0;
		}
		if (Global_2459772)
		{
			if (Global_4263509[iVar2 /*84*/].f_65.f_6 == 1067618600 || Global_4263509[iVar2 /*84*/].f_65.f_6 == -1303831698)
			{
				Global_4264086 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_139(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || UNK3::_NETWORK_SHOP_CHECKOUT_START(iVar3))
		{
			Global_4263509[iVar2 /*84*/].f_65.f_13 = 1;
			Global_4263509[iVar2 /*84*/].f_65.f_12 = 0;
			Global_4263509[iVar2 /*84*/].f_65.f_14 = GAMEPLAY::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4263509[iVar2 /*84*/].f_65.f_8 = 1;
				Global_4263509[iVar2 /*84*/].f_65.f_12 = 1;
			}
			Global_4263509[iVar2 /*84*/].f_65.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_143(Global_4263509[iVar2 /*84*/], iVar2);
			}
			Global_4264070 = 1;
			return 1;
		}
	}
	return 0;
}

void func_143(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)
{
	vector3 vVar0;
	int iVar35;
	
	if (iParam84 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 1803946278;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.f_2 = { Param0.f_65 };
	vVar0.f_2.f_32 = iParam84;
	iVar35 = func_145(vVar0.y);
	if ((Global_262145.f_23434 && !Global_262145.f_23435) && !Global_262145.f_23436)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_144();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar35);
	}
}

void func_144()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_145(var uParam0)
{
	var uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, uParam0);
	return uVar0;
}

int func_146(int iParam0, int iParam1, int iParam2)
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
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1727256317:
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

int func_147(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_152())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!UNK3::_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_25()) || UNK3::_NETWORK_SHOP_GET_TRANSACTIONS_DISABLED())
		{
			Global_4264085 = 1;
			return 0;
		}
		if (Global_2459772)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4264086 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_151();
	if (iVar1 == -1)
	{
		if (!func_149(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_148(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4263509[iVar1 /*84*/].f_65.f_1 = Var2.f_2;
		Global_4263509[iVar1 /*84*/].f_65.f_15 = Var2;
		Global_4263509[iVar1 /*84*/].f_65.f_16 = Var2.f_1;
		if (bVar0 || UNK3::_NETWORK_SHOP_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_148(int iParam0)
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

int func_149(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_152())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!UNK3::_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_25()) || UNK3::_NETWORK_SHOP_GET_TRANSACTIONS_DISABLED())
		{
			Global_4264085 = 1;
			return 0;
		}
		if (Global_2459772)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4264086 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4263509[iVar1 /*84*/].f_65.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4263509[iVar1 /*84*/].f_65.f_5 == 1)
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
		if (UNK3::_NETWORK_SHOP_BASKET_END())
		{
			unk_0xFA336E7F40C0A0D0();
		}
	}
	if (bVar0 || UNK3::_NETWORK_SHOP_BASKET_START(&uVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_150(uVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_150(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263509[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_152())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4263509[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4263509[iVar0 /*84*/].f_65.f_1 = iParam5;
			Global_4263509[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4263509[iVar0 /*84*/].f_65.f_4 = iParam2;
			Global_4263509[iVar0 /*84*/].f_65.f_7 = uParam3;
			Global_4263509[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4263509[iVar0 /*84*/].f_65 = uParam0;
			Global_4263509[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4263509[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4263509[iVar0 /*84*/].f_65.f_10 = uParam7;
			Global_4263509[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4263509[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4263509[iVar0 /*84*/].f_65.f_14 = GAMEPLAY::GET_FRAME_COUNT();
			Global_4263509[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4264070 = 0;
			if (bParam6)
			{
				Global_4263509[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_143(Global_4263509[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_151()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_139(iVar0) != 2147483647)
		{
			if (func_138(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_152()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_153()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_125() - func_128());
	iVar1 = (Global_262145.f_26157 - func_185());
	iVar2 = func_154();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_154()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_125();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (unk_0x8968D4D8C6C40C11())
	{
		if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(iVar0, 0, 1, 0, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (NETWORKCASH::NETWORK_GET_VC_BANK_BALANCE() + NETWORKCASH::NETWORK_GET_VC_WALLET_BALANCE(-1));
		}
	}
	else if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(iVar0, 0, 1, 0, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = unk_0x5D1E75F91C07DEE5();
	}
	return iVar1;
}

int func_155(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

int func_156(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 >= 0 && func_8(iParam0, &Local_47))
	{
		if ((iParam1 == 7 && iParam2 == 7) && iParam3 == 7)
		{
			return func_157(Local_47[iParam0 /*21*/].f_17, iParam4);
		}
	}
	return 0;
}

int func_157(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 8:
			switch (iParam1)
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 12;
					break;
				
				case 3:
					return 8;
					break;
				
				case 4:
					return 11;
					break;
				
				case 5:
					return 1;
					break;
				
				case 6:
					return 4;
					break;
				
				case 7:
					return 6;
					break;
				
				case 8:
					return 9;
					break;
				
				case 9:
					return 7;
					break;
				
				case 10:
					return 10;
					break;
				
				case 11:
					return 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
				case 3:
				case 6:
				case 9:
					return 1;
					break;
				
				case 1:
				case 4:
				case 7:
				case 10:
					return 2;
					break;
				
				case 2:
				case 5:
				case 8:
				case 11:
					return 3;
					break;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_158(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (bParam4)
	{
	}
	GAMEPLAY::CLEAR_BIT(&uLocal_1472, 14);
	GAMEPLAY::CLEAR_BIT(&uLocal_1472, 15);
	GAMEPLAY::CLEAR_BIT(&uLocal_1472, 16);
	GAMEPLAY::CLEAR_BIT(&uLocal_1472, 29);
	GAMEPLAY::CLEAR_BIT(&uLocal_1473, 0);
	if (iParam1 == iParam2 && iParam2 == iParam3)
	{
		iVar1 = func_159(iParam1, 3);
		iVar1 = (iVar1 * (iLocal_1962 * Local_47[iParam0 /*21*/].f_16));
		if (iParam1 >= 5)
		{
			GAMEPLAY::SET_BIT(&uLocal_1472, 14);
			if (iParam1 == 6)
			{
				GAMEPLAY::SET_BIT(&uLocal_1472, 29);
			}
		}
		else if (iParam1 >= 2)
		{
			GAMEPLAY::SET_BIT(&uLocal_1473, 0);
		}
		return iVar1;
	}
	else
	{
		if (iParam1 == 7)
		{
			iVar0++;
		}
		if (iParam2 == 7)
		{
			iVar0++;
		}
		if (iParam3 == 7)
		{
			iVar0++;
		}
		if (iVar0 >= 1)
		{
			if (bParam4)
			{
			}
			iVar1 = func_159(7, iVar0);
			iVar1 = (iVar1 * (iLocal_1962 * Local_47[iParam0 /*21*/].f_16));
			return iVar1;
		}
	}
	if (iParam1 == iParam2 && iParam1 >= 5)
	{
		GAMEPLAY::SET_BIT(&uLocal_1472, 15);
	}
	return 0;
}

int func_159(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return Local_1182.f_278[1];
		
		case 2:
			return Local_1182.f_278[2];
		
		case 3:
			return Local_1182.f_278[3];
		
		case 4:
			return Local_1182.f_278[4];
		
		case 5:
			return Local_1182.f_278[5];
		
		case 6:
			return Local_1182.f_278[6];
		
		case 7:
			if (iParam1 == 3)
			{
				return Local_1182.f_278[7];
			}
			else if (iParam1 == 2)
			{
				return Local_1182.f_278[8];
			}
			else if (iParam1 == 1)
			{
				return Local_1182.f_278[9];
			}
			break;
	}
	return 0;
}

void func_160(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_162(&iVar0, 0, iParam1))
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
		func_161(&(Global_17411.f_5660[iVar0 /*10*/]));
		Global_17411.f_5721[iVar0] = 0;
	}
	else
	{
		Global_17411.f_5721[iVar0] = 0;
	}
}

void func_161(var uParam0)
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

int func_162(var uParam0, bool bParam1, int iParam2)
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

void func_163(bool bParam0, bool bParam1)
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

void func_164(int iParam0)
{
	vector3 vVar0[24];
	var uVar6;
	
	func_165(iParam0, &Local_1940);
	uLocal_1475 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(vLocal_1477, vLocal_1480, 2, Local_1940.f_17, Local_1940.f_16, 1065353216, 0, 1065353216);
	if (iParam0 == 5 || iParam0 == 6)
	{
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1475, func_310(), &Local_1940, 4f, -8f, 13, 16, 1148846080, 0);
	}
	else if (iParam0 == 11 || iParam0 == 12)
	{
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1475, func_310(), &Local_1940, 8f, -8f, 13, 16, 1148846080, 0);
	}
	else if (iParam0 == 8 || iParam0 == 14)
	{
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1475, func_310(), &Local_1940, 8f, -4f, 13, 16, 1148846080, 0);
	}
	else if (((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 3)
	{
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1475, func_310(), &Local_1940, 2f, -1.5f, 13, 16, 2f, 0);
	}
	else
	{
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1475, func_310(), &Local_1940, 2f, -1.5f, 13, 16, 1148846080, 0);
		if (iParam0 == 15 || iParam0 == 9)
		{
			StringCopy(&cVar0, "vw_prop_casino_slot_0", 24);
			StringIntConCat(&cVar0, Local_47[iLocal_1959 /*21*/].f_17, 24);
			StringConCat(&cVar0, "a", 24);
			uVar6 = GAMEPLAY::GET_HASH_KEY(&cVar0);
			StringConCat(&Local_1940, "_SLOTMACHINE", 64);
			unk_0x45F35C0EDC33B03B(uLocal_1475, uVar6, vLocal_1477, func_310(), &Local_1940, 2f, -1.5f, 13);
		}
	}
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uLocal_1475);
	iLocal_1476 = iParam0;
}

void func_165(int iParam0, char* sParam1)
{
	struct<8> Var0;
	
	sParam1->f_17 = 1;
	sParam1->f_16 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "enter_left", 64);
			break;
		
		case 2:
			StringCopy(sParam1, "enter_right", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "enter_left_short", 64);
			break;
		
		case 3:
			StringCopy(sParam1, "enter_right_short", 64);
			break;
		
		case 4:
			StringCopy(sParam1, "base_idle", 64);
			if (CAM::_0xEE778F8C7E1142E2(0) == 4)
			{
				func_166(4, &Var0, 1, 0);
			}
			else
			{
				func_166(4, &Var0, 5, 0);
			}
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 5:
			StringCopy(sParam1, "press_betone_a", 64);
			break;
		
		case 6:
			StringCopy(sParam1, "press_betmax_a", 64);
			break;
		
		case 7:
			StringCopy(sParam1, "press_autospin", 64);
			break;
		
		case 8:
			StringCopy(sParam1, "press_spin", 64);
			func_166(8, &Var0, 2, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 9:
			StringCopy(sParam1, "pull_spin", 64);
			func_166(8, &Var0, 2, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 10:
			StringCopy(sParam1, "betidle_idle", 64);
			if (CAM::_0xEE778F8C7E1142E2(0) == 4)
			{
				func_166(10, &Var0, 1, 0);
			}
			else
			{
				func_166(10, &Var0, 3, 0);
			}
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 11:
			StringCopy(sParam1, "betidle_press_betone", 64);
			func_166(11, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 12:
			StringCopy(sParam1, "betidle_press_betmax", 64);
			func_166(12, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 13:
			StringCopy(sParam1, "betidle_press_autospin", 64);
			break;
		
		case 14:
			StringCopy(sParam1, "betidle_press_spin", 64);
			func_166(14, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 15:
			StringCopy(sParam1, "betidle_pull_spin", 64);
			func_166(15, &Var0, 2, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 16:
			StringCopy(sParam1, "betidle_to_base_transition", 64);
			break;
		
		case 17:
			StringCopy(sParam1, "spinning", 64);
			func_166(17, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			sParam1->f_16 = 1;
			sParam1->f_17 = 0;
			break;
		
		case 18:
			StringCopy(sParam1, "win", 64);
			if (GAMEPLAY::IS_BIT_SET(uLocal_1473, 0))
			{
				func_166(18, &Var0, 4, 0);
			}
			else
			{
				func_166(18, &Var0, 7, 4);
			}
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 19:
			StringCopy(sParam1, "win_big", 64);
			func_166(19, &Var0, 3, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 20:
			StringCopy(sParam1, "win_to_spinning_wheel", 64);
			break;
		
		case 21:
			StringCopy(sParam1, "spinning_wheel", 64);
			sParam1->f_16 = 1;
			sParam1->f_17 = 0;
			break;
		
		case 22:
			StringCopy(sParam1, "win_spinning_wheel", 64);
			break;
		
		case 23:
			StringCopy(sParam1, "lose", 64);
			iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 10);
			if (iVar1 >= 9)
			{
				func_166(23, &Var0, 6, 3);
			}
			else
			{
				func_166(23, &Var0, 3, 0);
			}
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 24:
			StringCopy(sParam1, "lose_cruel", 64);
			func_166(24, &Var0, 2, 0);
			StringConCat(sParam1, &Var0, 64);
			break;
		
		case 25:
			StringCopy(sParam1, "exit_left", 64);
			sParam1->f_16 = 0;
			sParam1->f_17 = 0;
			break;
		
		case 26:
			StringCopy(sParam1, "betidle_left", 64);
			sParam1->f_16 = 0;
			sParam1->f_17 = 0;
			break;
		
		case 27:
			StringCopy(sParam1, "exit_right", 64);
			sParam1->f_16 = 0;
			sParam1->f_17 = 0;
			break;
		
		case 28:
			StringCopy(sParam1, "betidle_right", 64);
			sParam1->f_16 = 0;
			sParam1->f_17 = 0;
			break;
	}
}

void func_166(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	if (iParam2 > 1)
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(iParam3, iParam2);
		if (iParam0 == 4)
		{
			iVar1 = iLocal_1483;
		}
		else if (iParam0 == 10)
		{
			iVar1 = iLocal_1484;
		}
		if (iVar0 == iVar1)
		{
			iVar0++;
			if (iVar0 >= iParam2)
			{
				iVar0 = 0;
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			StringCopy(sParam1, "_a", 4);
			break;
		
		case 1:
			StringCopy(sParam1, "_b", 4);
			break;
		
		case 2:
			StringCopy(sParam1, "_c", 4);
			break;
		
		case 3:
			StringCopy(sParam1, "_d", 4);
			break;
		
		case 4:
			StringCopy(sParam1, "_e", 4);
			break;
		
		case 5:
			StringCopy(sParam1, "_f", 4);
			break;
		
		case 6:
			StringCopy(sParam1, "_g", 4);
			break;
	}
	if (iParam0 == 4)
	{
		iLocal_1483 = iVar0;
	}
	else if (iParam0 == 10)
	{
		iLocal_1484 = iVar0;
	}
}

int func_167(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_152() && *uParam1 == 1)
	{
		bParam3 = false;
	}
	if (!bParam3 || func_169(iParam0))
	{
		return func_168(iParam0, 2, uParam1, iParam2, -1, -1);
	}
	else
	{
		*uParam1 = 3;
	}
	return 1;
}

int func_168(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (iParam0 <= 0)
	{
	}
	else if (func_155(iParam1))
	{
	}
	else
	{
		iVar0 = func_185();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0 && (!func_152() || *uParam2 != 1))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_134(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_1689891 - func_185());
			if (iParam1 == 1)
			{
				Global_2458547 = 1;
			}
			else if (iVar2 >= Global_262145.f_26166)
			{
				Global_2458546 = 1;
			}
			func_133(iVar2, 0);
			func_131();
			func_130();
			Global_1689891 = (Global_1689891 - iVar2);
			Var3 = func_122(iParam1);
			Var3.f_1 = func_121(iParam1, iParam3, iParam4);
			if (func_120(iParam1))
			{
				Var3.f_2 = iVar2;
			}
			else
			{
				Var3.f_2 = 0;
			}
			Var3.f_3 = iVar2;
			Var3.f_4 = iParam1;
			Var3.f_5 = (NETWORKCASH::NETWORK_GET_VC_WALLET_BALANCE(-1) + NETWORKCASH::NETWORK_GET_VC_BANK_BALANCE());
			Var3.f_6 = Global_1689891;
			Var3.f_7 = iParam5;
			unk_0x0999F3F090EC5012(&Var3);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_169(int iParam0)
{
	int iVar0;
	
	if (func_191())
	{
		return 0;
	}
	iVar0 = func_185();
	if (iVar0 < iParam0)
	{
		return 0;
	}
	return 1;
}

void func_170(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_171(iParam1);
	switch (iParam2)
	{
		case 1:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "no_win", PLAYER::GET_PLAYER_PED(uParam0), uVar0, 1, 20);
			break;
		
		case 2:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "small_win", PLAYER::GET_PLAYER_PED(uParam0), uVar0, 1, 20);
			break;
		
		case 3:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "big_win", PLAYER::GET_PLAYER_PED(uParam0), uVar0, 1, 20);
			break;
		
		case 4:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "jackpot", PLAYER::GET_PLAYER_PED(uParam0), uVar0, 1, 20);
			break;
		
		case 5:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "place_bet", PLAYER::GET_PLAYER_PED(uParam0), uVar0, 1, 20);
			break;
		
		case 6:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "place_max_bet", PLAYER::GET_PLAYER_PED(uParam0), uVar0, 1, 20);
			break;
		
		case 7:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "spinning", PLAYER::GET_PLAYER_PED(uParam0), uVar0, 1, 20);
			break;
		
		case 8:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "start_spin", PLAYER::GET_PLAYER_PED(uParam0), uVar0, 1, 20);
			break;
		
		case 9:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "wheel_stop_clunk", PLAYER::GET_PLAYER_PED(uParam0), uVar0, 1, 20);
			break;
		
		case 10:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "wheel_stop_on_prize", PLAYER::GET_PLAYER_PED(uParam0), uVar0, 1, 20);
			break;
		
		case 11:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "welcome_stinger", PLAYER::GET_PLAYER_PED(uParam0), uVar0, 1, 20);
			break;
		
		case 12:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "spin_wheel", PLAYER::GET_PLAYER_PED(uParam0), uVar0, 1, 20);
			break;
		
		case 13:
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "spin_wheel_win", PLAYER::GET_PLAYER_PED(uParam0), uVar0, 1, 20);
			break;
	}
}

char* func_171(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "dlc_vw_casino_slot_machine_ak_player_sounds";
		
		case 2:
			return "dlc_vw_casino_slot_machine_ir_player_sounds";
		
		case 3:
			return "dlc_vw_casino_slot_machine_rsr_player_sounds";
		
		case 4:
			return "dlc_vw_casino_slot_machine_fs_player_sounds";
		
		case 5:
			return "dlc_vw_casino_slot_machine_ds_player_sounds";
		
		case 6:
			return "dlc_vw_casino_slot_machine_kd_player_sounds";
		
		case 7:
			return "dlc_vw_casino_slot_machine_td_player_sounds";
		
		case 8:
			return "dlc_vw_casino_slot_machine_hz_player_sounds";
		
		default:
	}
	return "";
}

void func_172(int iParam0)
{
	if (iParam0 == 0)
	{
		if (iLocal_1476 == 4 || (iLocal_1476 == 16 && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)))
		{
			func_164(5);
		}
		else if (iLocal_1476 == 10 || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
		{
			func_164(11);
		}
	}
	else if (iParam0 == 1)
	{
		if (iLocal_1476 == 4 || (iLocal_1476 == 16 && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)))
		{
			func_164(6);
		}
		else if (iLocal_1476 == 10 || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
		{
			func_164(12);
		}
	}
}

void func_173(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_1938, "SET_BET");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_174(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	struct<2> Var1;
	vector3 vVar10[24];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iLocal_1916 != iParam0)
	{
		if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			UI::CLEAR_HELP(1);
		}
		switch (iParam0)
		{
			case 1:
				func_181("SLOTS_HELPB", Local_47[iLocal_1959 /*21*/].f_16, Local_47[iLocal_1959 /*21*/].f_16 * 5);
				break;
			
			case 2:
			case 3:
				if (iParam1 == 1 && Local_47[iLocal_1959 /*21*/].f_17 == 8)
				{
					StringCopy(&cVar10, "SLOTS_HELPW1b", 24);
				}
				else
				{
					StringCopy(&cVar10, "SLOTS_HELPW", 24);
					if (iParam1 >= 0)
					{
						StringIntConCat(&cVar10, iParam1, 24);
					}
					if ((iParam1 == 9 || iParam1 == 8) || iParam1 == 7)
					{
						StringIntConCat(&cVar10, Local_47[iLocal_1959 /*21*/].f_17, 24);
					}
				}
				if (func_8(iLocal_1959, &Local_47))
				{
					if (iParam1 == 7 && iParam3 > 0)
					{
						if (Local_47[iLocal_1959 /*21*/].f_17 == 8)
						{
							if (iParam3 != 12)
							{
								func_117(iParam3, &iVar16, &iVar17);
								unk_0x585847C5E4E11709(PLAYER::PLAYER_PED_ID(), iVar16, &iVar18);
								if (iVar18 < iVar17)
								{
									if (iVar16 == joaat("ammo_pistol"))
									{
										StringIntConCat(&cVar10, 1, 24);
									}
									else if (iVar16 == joaat("ammo_smg"))
									{
										StringIntConCat(&cVar10, 3, 24);
									}
									else if (iVar16 == joaat("ammo_shotgun"))
									{
										StringIntConCat(&cVar10, 5, 24);
									}
									else if (iVar16 == joaat("ammo_rifle"))
									{
										StringIntConCat(&cVar10, 7, 24);
									}
									else
									{
										StringIntConCat(&cVar10, iParam3, 24);
									}
									StringConCat(&cVar10, "a", 24);
								}
								else
								{
									StringIntConCat(&cVar10, iParam3, 24);
									StringConCat(&cVar10, "b", 24);
								}
							}
							else
							{
								StringIntConCat(&cVar10, iParam3, 24);
							}
						}
						else if (Local_47[iLocal_1959 /*21*/].f_17 == 4)
						{
							bVar0 = true;
							if (iLocal_46 == -1)
							{
								StringCopy(&cVar10, "SLOTS_HELPW74b", 24);
								func_180(&cVar10, Global_262145.f_26870);
							}
							else
							{
								func_114(iLocal_46, &Var1);
								StringCopy(&cVar10, "SLOTS_HELPW74a", 24);
								func_175(&cVar10, &(Var1.f_1), iParam2, 1);
							}
						}
					}
				}
				if (!bVar0)
				{
					func_180(&cVar10, iParam2);
				}
				func_9(&uLocal_1917, 1, 0);
				break;
		}
		iLocal_1916 = iParam0;
	}
}

int func_175(char* sParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	func_176(9, sParam0, 1, sParam1, uParam2, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_176(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_179() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_23(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_177(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1665914.f_5[iVar0 /*53*/] = iParam0;
		Global_1665914.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1665914.f_5[iVar0 /*53*/].f_2[0] = uParam4;
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

int func_177(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1665914 - 1))
	{
		if (iParam0 > Global_1665914.f_5[iVar0 /*53*/].f_1)
		{
			func_178(iVar0);
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

void func_178(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1665914.f_5[iVar0 /*53*/] = { Global_1665914.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_179()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

void func_180(char[4] cParam0, var uParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
}

void func_181(char* sParam0, var uParam1, var uParam2)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
}

void func_182()
{
	if (iLocal_1916 != 0)
	{
		if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			UI::CLEAR_HELP(1);
		}
		iLocal_1916 = 0;
	}
}

void func_183()
{
	if (iLocal_1476 == 4 || (iLocal_1476 == 16 && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)))
	{
		func_164(8);
	}
	else if (((iLocal_1476 == 10 || iLocal_1476 == 11) || iLocal_1476 == 12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
	{
		func_164(14);
	}
}

void func_184()
{
	if (iLocal_1476 == 4 || (iLocal_1476 == 16 && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)))
	{
		func_164(9);
	}
	else if (((iLocal_1476 == 10 || iLocal_1476 == 11) || iLocal_1476 == 12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
	{
		func_164(15);
	}
}

int func_185()
{
	return func_88(8248, -1, 0);
}

void func_186(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_187()
{
	if (func_190() <= 0)
	{
		return 0;
	}
	if (func_189() <= 0)
	{
		return 1;
	}
	if (func_188())
	{
		return 2;
	}
	return 3;
}

bool func_188()
{
	return Global_1689908 != 0;
}

int func_189()
{
	return (Global_262145.f_26160 + func_53());
}

int func_190()
{
	return (Global_262145.f_26161 - func_53());
}

bool func_191()
{
	return func_187() != 3;
}

void func_192(int iParam0)
{
	struct<8> Var0;
	
	func_212(0);
	if (iLocal_1959 != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 23))
		{
			Var0 = { func_194(Local_47[iLocal_1959 /*21*/].f_17) };
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Var0);
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 23);
		}
	}
	func_193(-1);
	GAMEPLAY::CLEAR_BIT(&(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10), 0);
	GAMEPLAY::CLEAR_BIT(&(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10), 1);
	GAMEPLAY::CLEAR_BIT(&(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
	GAMEPLAY::CLEAR_BIT(&uLocal_1472, 3);
	GAMEPLAY::CLEAR_BIT(&uLocal_1472, 4);
	GAMEPLAY::CLEAR_BIT(&uLocal_1472, 5);
	GAMEPLAY::CLEAR_BIT(&uLocal_1472, 24);
	GAMEPLAY::CLEAR_BIT(&uLocal_1472, 21);
	GAMEPLAY::CLEAR_BIT(&uLocal_1472, 22);
	iLocal_1962 = 1;
	func_292(6);
	func_164(iParam0);
	func_182();
}

void func_193(int iParam0)
{
	if (iParam0 >= 0)
	{
		iLocal_1960 = iParam0;
	}
	iLocal_1959 = iParam0;
	Local_3235[PLAYER::PLAYER_ID() /*11*/] = iParam0;
	iLocal_1961 = -1;
}

struct<8> func_194(int iParam0)
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "CasinoUI_Slots_Angel", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "CasinoUI_Slots_Impotent", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "CasinoUI_Slots_Ranger", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "CasinoUI_Slots_Fame", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "CasinoUI_Slots_Deity", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "CasinoUI_Slots_Knife", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "CasinoUI_Slots_Diamond", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "CasinoUI_Slots_Evacuator", 32);
			break;
	}
	return Var0;
}

int func_195(int iParam0)
{
	vector3 vVar0;
	bool bVar6;
	var uVar7;
	
	if (func_211(0, &uVar7))
	{
		StringCopy(&vVar0, "SLOTS_REGBAN", 24);
		bVar6 = true;
	}
	else if (func_191())
	{
		if (func_187() == 2)
		{
			StringCopy(&vVar0, "CAS_MG_CTIME", 24);
			bVar6 = true;
		}
		else
		{
			StringCopy(&vVar0, "CAS_MG_CBAN", 24);
			bVar6 = true;
		}
	}
	else if (!func_62() && !func_56())
	{
		StringCopy(&vVar0, "CAS_MG_MEMB2", 24);
		bVar6 = true;
	}
	else if (func_185() <= 0)
	{
		StringCopy(&vVar0, "CAS_MG_NOCHIPS1", 24);
		bVar6 = true;
	}
	else if (func_185() < Local_47[iParam0 /*21*/].f_16)
	{
		StringCopy(&vVar0, "CAS_MG_LOWCHIPS1", 24);
		bVar6 = true;
	}
	else if ((((((((Global_262145.f_25933 || (Global_262145.f_25940 && Local_47[iParam0 /*21*/].f_17 == 1)) || (Global_262145.f_25938 && Local_47[iParam0 /*21*/].f_17 == 2)) || (Global_262145.f_25935 && Local_47[iParam0 /*21*/].f_17 == 3)) || (Global_262145.f_25936 && Local_47[iParam0 /*21*/].f_17 == 4)) || (Global_262145.f_25939 && Local_47[iParam0 /*21*/].f_17 == 5)) || (Global_262145.f_25937 && Local_47[iParam0 /*21*/].f_17 == 6)) || (Global_262145.f_25934 && Local_47[iParam0 /*21*/].f_17 == 7)) || (Global_262145.f_25941 && Local_47[iParam0 /*21*/].f_17 == 8))
	{
		StringCopy(&vVar0, "SLOTS_ENTERB", 24);
		bVar6 = true;
	}
	if ((((func_210() || func_209()) || func_208()) || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_OUT())
	{
		bVar6 = true;
		GAMEPLAY::SET_BIT(&uLocal_1472, 6);
	}
	if (func_202())
	{
		bVar6 = true;
		GAMEPLAY::SET_BIT(&uLocal_1472, 6);
	}
	if (bVar6)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&vVar0, "CAS_MG_MEMB2"))
		{
			if (!func_200("CAS_MG_MEMB2", func_201(1)))
			{
				func_199("CAS_MG_MEMB2", func_201(1));
			}
			GAMEPLAY::SET_BIT(&uLocal_1472, 6);
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 52))
			{
				UI::CLEAR_HELP(1);
				func_198();
				func_292(2);
			}
		}
		else if (!GAMEPLAY::IS_BIT_SET(uLocal_1472, 6))
		{
			func_182();
			if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_186(&vVar0, -1);
				GAMEPLAY::SET_BIT(&uLocal_1472, 6);
			}
		}
		if (iLocal_1958 != -1)
		{
			func_196(&iLocal_1958);
		}
		return 0;
	}
	return 1;
}

void func_196(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_197(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_197(int iParam0)
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
		if (Global_37139[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_198()
{
	if (!NETWORKCASH::NETWORK_CAN_SPEND_MONEY(func_201(0), 0, 1, 0, -1, 0))
	{
		func_186("MAITRD_M_D0E", -1);
	}
	else if (func_57(PLAYER::PLAYER_ID()))
	{
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1671295.f_5, 31))
	{
	}
	else if (Global_4264077 != 0)
	{
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_1671295.f_5), 30);
	}
}

void func_199(char* sParam0, var uParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

bool func_200(char* sParam0, var uParam1)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_201(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

int func_202()
{
	int iVar0;
	
	if (func_60(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = func_59();
		if (func_12(iVar0, 1, 1) && GAMEPLAY::IS_BIT_SET(Global_1589819[iVar0 /*818*/].f_273.f_362.f_3, 6))
		{
			return 1;
		}
		if ((func_104(PLAYER::PLAYER_ID(), 0) && func_206(PLAYER::PLAYER_ID())) || func_203(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_203(int iParam0)
{
	if (func_205(iParam0) != func_58())
	{
		return func_205(iParam0) == func_204(iParam0);
	}
	return 0;
}

int func_204(int iParam0)
{
	if (iParam0 != func_58())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_58();
}

int func_205(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_11.f_35;
}

int func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_207(iParam0, 9);
	}
	return 0;
}

var func_207(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_11.f_4, iParam1);
}

bool func_208()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448756.f_2, 11);
}

var func_209()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448756, 20);
}

bool func_210()
{
	return Global_2448756.f_579;
}

int func_211(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -850297695;
			break;
		
		case 1:
			iVar0 = 1316161270;
			break;
		
		case 2:
			iVar0 = 1023703758;
			break;
		
		case 5:
			iVar0 = 1045499606;
			break;
		
		case 3:
			iVar0 = 1697066635;
			break;
		
		case 4:
			iVar0 = 1144169546;
			break;
	}
	if (!unk_0x158C16F5E4CF41F8(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_212(bool bParam0)
{
	struct<17> Var0;
	
	if (Global_262145.f_25805)
	{
		Var0 = -1125105727;
		Var0.f_1 = iLocal_1959;
		if (func_191())
		{
			switch (func_187())
			{
				case 0:
					Var0.f_2 = GAMEPLAY::GET_HASH_KEY("win cutoff");
					break;
				
				case 1:
					Var0.f_2 = GAMEPLAY::GET_HASH_KEY("loss cutoff");
					break;
				
				case 2:
					Var0.f_2 = GAMEPLAY::GET_HASH_KEY("time cutoff");
					break;
			}
		}
		else if (bParam0)
		{
			Var0.f_2 = 1330140418;
		}
		else
		{
			Var0.f_2 = 847129329;
		}
		Var0.f_3 = Local_1919.f_2;
		Var0.f_4 = func_185();
		if (bParam0)
		{
			Var0.f_5 = 120000;
		}
		else if (iLocal_1935)
		{
			Var0.f_5 = GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(uLocal_1937, NETWORK::GET_NETWORK_TIME()));
		}
		Var0.f_6 = (GAMEPLAY::IS_BIT_SET(uLocal_1472, 20) || GAMEPLAY::IS_BIT_SET(uLocal_1473, 1));
		Var0.f_7 = Local_1919.f_5;
		Var0.f_10 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
		Var0.f_11 = unk_0xDB663CC9FF3407A9(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
		Var0.f_12 = (Local_1919.f_3 + Local_1919.f_4);
		Var0.f_13 = Local_1919.f_3;
		Var0.f_14 = Local_1919.f_4;
		Var0.f_16 = Local_47[iLocal_1959 /*21*/].f_17;
		if (func_63(PLAYER::PLAYER_ID()))
		{
			Var0.f_15 = 1983458449;
		}
		else if (func_62())
		{
			Var0.f_15 = 1334658487;
		}
		else if (func_56())
		{
			Var0.f_15 = 980726932;
		}
		else
		{
			Var0.f_15 = 939907746;
		}
		unk_0xE60054A0FAE8227F(&Var0);
		func_4(&Local_1919);
		Local_1919.f_2 = 0;
		Local_1919.f_3 = 0;
		Local_1919.f_4 = 0;
		Local_1919.f_5 = 0;
		iLocal_1935 = 0;
	}
}

void func_213(int iParam0)
{
	var uVar0;
	float fVar3;
	
	func_214(iLocal_1959, &uVar0, &fVar3);
	switch (iParam0)
	{
		case 0:
			if (CAM::_0xEE778F8C7E1142E2(0) != 4)
			{
				CAM::_SET_CAM_PERSPECTIVE(0, 4);
			}
			break;
		
		case 1:
			if (CAM::_0xEE778F8C7E1142E2(0) != 0)
			{
				CAM::_SET_CAM_PERSPECTIVE(0, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			break;
	}
	iLocal_1530 = iParam0;
}

void func_214(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1100.483f, 230.4082f, -50.8409f };
			*fParam2 = 45f;
			break;
		
		case 1:
			*uParam1 = { 1100.939f, 231.0017f, -50.8409f };
			*fParam2 = 60f;
			break;
		
		case 2:
			*uParam1 = { 1101.221f, 231.6943f, -50.8409f };
			*fParam2 = 75f;
			break;
		
		case 3:
			*uParam1 = { 1101.323f, 232.4321f, -50.8409f };
			*fParam2 = 90f;
			break;
		
		case 4:
			*uParam1 = { 1101.229f, 233.1719f, -50.8409f };
			*fParam2 = 105f;
			break;
		
		case 5:
			*uParam1 = { 1108.938f, 239.4797f, -50.8409f };
			*fParam2 = -45f;
			break;
		
		case 6:
			*uParam1 = { 1109.536f, 239.0278f, -50.8409f };
			*fParam2 = -30f;
			break;
		
		case 7:
			*uParam1 = { 1110.229f, 238.7428f, -50.8409f };
			*fParam2 = -15f;
			break;
		
		case 8:
			*uParam1 = { 1110.974f, 238.642f, -50.8409f };
			*fParam2 = 0f;
			break;
		
		case 9:
			*uParam1 = { 1111.716f, 238.7384f, -50.8409f };
			*fParam2 = 15f;
			break;
		
		case 10:
			*uParam1 = { 1112.407f, 239.0216f, -50.8409f };
			*fParam2 = 30f;
			break;
		
		case 11:
			*uParam1 = { 1112.999f, 239.4742f, -50.8409f };
			*fParam2 = 45f;
			break;
		
		case 12:
			*uParam1 = { 1120.853f, 233.1621f, -50.8409f };
			*fParam2 = -105f;
			break;
		
		case 13:
			*uParam1 = { 1120.753f, 232.4272f, -50.8409f };
			*fParam2 = -90f;
			break;
		
		case 14:
			*uParam1 = { 1120.853f, 231.6886f, -50.8409f };
			*fParam2 = -75f;
			break;
		
		case 15:
			*uParam1 = { 1121.135f, 230.9999f, -50.8409f };
			*fParam2 = -60f;
			break;
		
		case 16:
			*uParam1 = { 1121.592f, 230.4106f, -50.8409f };
			*fParam2 = -45f;
			break;
		
		case 17:
			*uParam1 = { 1104.572f, 229.4451f, -50.8409f };
			*fParam2 = -36f;
			break;
		
		case 18:
			*uParam1 = { 1104.302f, 230.3183f, -50.8409f };
			*fParam2 = -108f;
			break;
		
		case 19:
			*uParam1 = { 1105.049f, 230.845f, -50.8409f };
			*fParam2 = 180f;
			break;
		
		case 20:
			*uParam1 = { 1105.781f, 230.2973f, -50.8409f };
			*fParam2 = 108f;
			break;
		
		case 21:
			*uParam1 = { 1105.486f, 229.4322f, -50.8409f };
			*fParam2 = 36f;
			break;
		
		case 22:
			*uParam1 = { 1108.005f, 233.9177f, -50.8409f };
			*fParam2 = -36f;
			break;
		
		case 23:
			*uParam1 = { 1107.735f, 234.7909f, -50.8409f };
			*fParam2 = -108f;
			break;
		
		case 24:
			*uParam1 = { 1108.482f, 235.3176f, -50.8409f };
			*fParam2 = 180f;
			break;
		
		case 25:
			*uParam1 = { 1109.214f, 234.7699f, -50.8409f };
			*fParam2 = 108f;
			break;
		
		case 26:
			*uParam1 = { 1108.919f, 233.9048f, -50.8409f };
			*fParam2 = 36f;
			break;
		
		case 27:
			*uParam1 = { 1113.64f, 233.6755f, -50.8409f };
			*fParam2 = -36f;
			break;
		
		case 28:
			*uParam1 = { 1113.37f, 234.5486f, -50.8409f };
			*fParam2 = -108f;
			break;
		
		case 29:
			*uParam1 = { 1114.117f, 235.0753f, -50.8409f };
			*fParam2 = 180f;
			break;
		
		case 30:
			*uParam1 = { 1114.848f, 234.5277f, -50.8409f };
			*fParam2 = 108f;
			break;
		
		case 31:
			*uParam1 = { 1114.554f, 233.6625f, -50.8409f };
			*fParam2 = 36f;
			break;
		
		case 32:
			*uParam1 = { 1116.662f, 228.8896f, -50.8409f };
			*fParam2 = -36f;
			break;
		
		case 33:
			*uParam1 = { 1116.392f, 229.7628f, -50.8409f };
			*fParam2 = -108f;
			break;
		
		case 34:
			*uParam1 = { 1117.139f, 230.2895f, -50.8409f };
			*fParam2 = 180f;
			break;
		
		case 35:
			*uParam1 = { 1117.871f, 229.7419f, -50.8409f };
			*fParam2 = 108f;
			break;
		
		case 36:
			*uParam1 = { 1117.576f, 228.8767f, -50.8409f };
			*fParam2 = 36f;
			break;
		
		case 37:
			*uParam1 = { 1129.64f, 250.451f, -52.0409f };
			*fParam2 = 180f;
			break;
		
		case 38:
			*uParam1 = { 1130.376f, 250.3577f, -52.0409f };
			*fParam2 = 165f;
			break;
		
		case 39:
			*uParam1 = { 1131.062f, 250.0776f, -52.0409f };
			*fParam2 = 150f;
			break;
		
		case 40:
			*uParam1 = { 1131.655f, 249.6264f, -52.0409f };
			*fParam2 = 135f;
			break;
		
		case 41:
			*uParam1 = { 1132.109f, 249.0355f, -52.0409f };
			*fParam2 = 120f;
			break;
		
		case 42:
			*uParam1 = { 1132.396f, 248.3382f, -52.0409f };
			*fParam2 = 105f;
			break;
		
		case 43:
			*uParam1 = { 1132.492f, 247.5984f, -52.0409f };
			*fParam2 = 90f;
			break;
		
		case 44:
			*uParam1 = { 1133.952f, 256.1037f, -52.0409f };
			*fParam2 = -45f;
			break;
		
		case 45:
			*uParam1 = { 1133.827f, 256.9098f, -52.0409f };
			*fParam2 = -117f;
			break;
		
		case 46:
			*uParam1 = { 1134.556f, 257.2778f, -52.0409f };
			*fParam2 = 171f;
			break;
		
		case 47:
			*uParam1 = { 1135.132f, 256.699f, -52.0409f };
			*fParam2 = 99f;
			break;
		
		case 48:
			*uParam1 = { 1134.759f, 255.9734f, -52.0409f };
			*fParam2 = 27f;
			break;
		
		case 49:
			*uParam1 = { 1138.195f, 251.8611f, -52.0409f };
			*fParam2 = -45f;
			break;
		
		case 50:
			*uParam1 = { 1138.07f, 252.6677f, -52.0409f };
			*fParam2 = -117f;
			break;
		
		case 51:
			*uParam1 = { 1138.799f, 253.0363f, -52.0409f };
			*fParam2 = 171f;
			break;
		
		case 52:
			*uParam1 = { 1139.372f, 252.4563f, -52.0409f };
			*fParam2 = 99f;
			break;
		
		case 53:
			*uParam1 = { 1139f, 251.7306f, -52.0409f };
			*fParam2 = 27f;
			break;
	}
}

void func_215(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&Global_1689926, 2);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_1689926, 2);
	}
}

bool func_216()
{
	return GAMEPLAY::IS_BIT_SET(Global_1689926, 2);
}

bool func_217(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

bool func_218()
{
	return Global_68807;
}

bool func_219()
{
	return UI::GET_PAUSE_MENU_STATE() != 0;
}

void func_220()
{
	if (iLocal_1530 == 0 && CAM::_0xEE778F8C7E1142E2(0) == 4)
	{
	}
}

void func_221()
{
	var uVar0;
	bool bVar1;
	
	if (iLocal_1476 == 10)
	{
		if (!func_311(&uLocal_1532))
		{
			func_6(&uLocal_1532, 1, 0);
		}
		else if (func_5(&uLocal_1532, 10000, 1))
		{
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 0);
			func_164(16);
			return;
		}
	}
	else
	{
		func_4(&uLocal_1532);
	}
	uVar0 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(uLocal_1475);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar0))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar0) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1424880317))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (iLocal_1476 == 4 || iLocal_1476 == 16)
		{
			func_164(4);
		}
		else if (iLocal_1476 == 10)
		{
			func_164(10);
		}
		else if (((((iLocal_1476 == 5 || iLocal_1476 == 6) || iLocal_1476 == 7) || iLocal_1476 == 11) || iLocal_1476 == 12) || iLocal_1476 == 13)
		{
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 0);
			func_164(10);
		}
		else if ((((iLocal_1476 == 18 || iLocal_1476 == 19) || iLocal_1476 == 23) || iLocal_1476 == 24) || iLocal_1476 == 22)
		{
			func_164(10);
		}
		else if (iLocal_1476 == 20)
		{
			func_164(21);
		}
		else if (((iLocal_1476 == 8 || iLocal_1476 == 9) || iLocal_1476 == 14) || iLocal_1476 == 15)
		{
			func_164(17);
		}
	}
}

void func_222()
{
	vector3 vVar0;
	
	if (CONTROLS::_IS_INPUT_DISABLED(0))
	{
		if (!iLocal_1531)
		{
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 0);
		}
		iLocal_1531 = 1;
	}
	else
	{
		if (iLocal_1531)
		{
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 0);
		}
		iLocal_1531 = 0;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10, 0))
	{
		if (((iLocal_1476 == 4 || iLocal_1476 == 10) || iLocal_1476 == 11) || iLocal_1476 == 12)
		{
			if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 25))
			{
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 0);
			}
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&uLocal_1472, 25);
	}
	if (iLocal_1959 >= 0 && (iLocal_1471 == 5 || GAMEPLAY::IS_BIT_SET(uLocal_1472, 31)))
	{
		func_266();
		if ((!GAMEPLAY::IS_BIT_SET(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10, 0) && !GAMEPLAY::IS_BIT_SET(uLocal_1472, 3)) && (((iLocal_1476 == 4 || iLocal_1476 == 10) || iLocal_1476 == 11) || iLocal_1476 == 12))
		{
			if (!func_311(&uLocal_1917) || func_5(&uLocal_1917, 5000, 1))
			{
				func_174(1, -1, -1, -1);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(uLocal_1472, 0))
		{
			if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 21) || GAMEPLAY::IS_BIT_SET(uLocal_1472, 22))
			{
				MemCopy(&vVar0, {func_194(Local_47[iLocal_1959 /*21*/].f_17)}, 6);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&vVar0, 0);
				GAMEPLAY::SET_BIT(&uLocal_1472, 23);
				if (func_264(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&vVar0))
				{
					func_163(0, 0);
					func_262(1, &vVar0, &vVar0);
					func_261(-1, 1, 1);
					if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 21))
					{
						func_260("SLOTS_RULEaT");
						StringCopy(&vVar0, "SLOTS_RULEa", 24);
						StringIntConCat(&vVar0, Local_47[iLocal_1959 /*21*/].f_17, 24);
						func_259(&vVar0, 0, 0);
					}
					else if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 22))
					{
						func_260("SLOTS_RULEbT");
						func_259("SLOTS_RULEb", 0, 0);
						func_258(Local_47[iLocal_1959 /*21*/].f_16);
						func_258(Local_47[iLocal_1959 /*21*/].f_16 * 5);
					}
					if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 21))
					{
						func_257(1, 1, 2);
					}
					else
					{
						func_257(1, 2, 2);
					}
					func_256(202, "SLOTS_RULEBK", -1);
					func_255(8, "SLOTS_RULENEXT", -1);
					GAMEPLAY::SET_BIT(&uLocal_1472, 0);
					func_232(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
					func_231(1);
				}
			}
			else if (func_264(0, -1, 0))
			{
				func_163(0, 0);
				if (!GAMEPLAY::IS_BIT_SET(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10, 0) && (((((iLocal_1476 == 4 || iLocal_1476 == 10) || iLocal_1476 == 11) || iLocal_1476 == 12) || GAMEPLAY::IS_BIT_SET(uLocal_1472, 31)) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)))
				{
					func_256(202, "SLOTS_EXIT", -1);
					func_230("SLOTS_SPIN", CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 208, 1), CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 201, 1), 0, 0);
					func_256(203, "SLOTS_BET", -1);
					if (iLocal_1962 < 5)
					{
						func_256(204, "SLOTS_BETM", -1);
					}
				}
				func_256(210, "SLOTS_RULEIN", -1);
				GAMEPLAY::SET_BIT(&uLocal_1472, 0);
				func_223(0, -1, -1, 1, 0, 0, 1, 1, 0);
				func_231(1);
			}
		}
		else
		{
			if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 21) || GAMEPLAY::IS_BIT_SET(uLocal_1472, 22))
			{
				func_232(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			else
			{
				func_223(0, -1, -1, 1, 0, 0, 1, 1, 0);
			}
			func_231(1);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 0))
	{
		func_163(0, 0);
		func_160(1, -1);
		GAMEPLAY::CLEAR_BIT(&uLocal_1472, 0);
	}
}

void func_223(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_162(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_227(bParam4, bParam8))
	{
		return;
	}
	if (func_225())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_23(PLAYER::PLAYER_ID(), 0))
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
					func_224(&(Global_17411.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_4964[iVar2 /*4*/])) == GAMEPLAY::GET_HASH_KEY("PREV"))
					{
						func_224(&(Global_17411.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17411.f_5013[iVar1] == -1)
					{
						func_48(&(Global_17411.f_4964[iVar1 /*4*/]));
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
				func_224(&Global_4267964);
				if (Global_4267964.f_20 == -1)
				{
					func_48(&(Global_4267964.f_16));
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

void func_224(var uParam0)
{
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(uParam0);
}

int func_225()
{
	vector3 vVar0;
	
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	if (func_226())
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

int func_226()
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_227(bool bParam0, bool bParam1)
{
	if (Global_2437364.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_229(8, -1) && func_228() != 64)) || (UI::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::_0x2EAC52B4019E2782()) || Global_71850) || Global_17411.f_8352) || UI::IS_WARNING_MESSAGE_ACTIVE()) || Global_93734.f_1409)
	{
		return 0;
	}
	return 1;
}

int func_228()
{
	return Global_1312802;
}

var func_229(int iParam0, int iParam1)
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

void func_230(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (Global_17411.f_4769 >= 12)
	{
		return;
	}
	StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), sParam0, 16);
	Global_17411.f_4769++;
	StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sParam2, 64);
	StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), "PREV", 16);
	Global_17411.f_4769++;
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sParam3, 64);
		StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), "PREV", 16);
		Global_17411.f_4769++;
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sParam4, 64);
		StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), "PREV", 16);
		Global_17411.f_4769++;
	}
}

void func_231(int iParam0)
{
	Global_1373453.f_1100 = iParam0;
}

void func_232(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	
	if (!func_162(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_227(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_17411)
	{
		if (func_253(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_252())
		{
			uVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(uVar61) * fVar63));
		}
		fVar64 = (SYSTEM::TO_FLOAT(uVar60) / SYSTEM::TO_FLOAT(uVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_252())
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
			func_248(Global_17411.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
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
					StringCopy(&cVar65, func_247(29), 64);
					StringCopy(&cVar81, func_245(29, 1), 64);
					if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_6997[29 /*16*/])) == -1487683087)
					{
						func_244(Global_17408, Global_17409, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
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
				func_244(Global_17408, (Global_17409 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_17409 + fVar57) + 0.034722f) + 0f);
				if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_1)) != 0)
				{
					func_243();
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
					func_243();
					func_241((((Global_17408 + fParam5) - 0.00390625f) - func_242("CM_ITEM_COUNT", Global_17411.f_5736, Global_17411.f_5737)), ((Global_17409 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_17411.f_5736, Global_17411.f_5737);
				}
				else if (Global_17411.f_5731 > Global_17411.f_5225)
				{
					if (Global_17411.f_5734 != 0)
					{
						func_243();
						func_241((((Global_17408 + fParam5) - 0.00390625f) - func_242("CM_ITEM_COUNT", Global_17411.f_5734, Global_17411.f_5733)), ((Global_17409 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_17411.f_5734, Global_17411.f_5733);
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
				func_244(Global_17408, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_253(Global_17411.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_17408 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_240(fVar42);
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
				func_244(Global_17408, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_240(fVar42);
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
					func_253(Global_17411.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_239(Global_17411.f_4768, 1, &uVar47, &uVar48, &uVar49, &uVar50);
					GRAPHICS::DRAW_SPRITE(func_247(Global_17411.f_4768), func_245(Global_17411.f_4768, 1), ((Global_17408 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
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
					func_253(Global_4267964.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_17408 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_240(fVar42);
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
				func_244(Global_17408, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_240(fVar42);
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
					func_253(Global_4267964.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_239(Global_4267964.f_67, 1, &uVar47, &uVar48, &uVar49, &uVar50);
					GRAPHICS::DRAW_SPRITE(func_247(Global_4267964.f_67), func_245(Global_4267964.f_67, 1), ((Global_17408 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
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
			func_223(uVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
											func_237(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
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
												if (func_253(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
										if (func_253(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_253(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_239(26, 1, &uVar47, &uVar48, &uVar49, &uVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_247(26), func_245(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
												}
											}
										}
										if (func_253(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_253(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_239(27, 1, &uVar47, &uVar48, &uVar49, &uVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_247(27), func_245(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
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
										func_237(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_236(bVar32);
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
												if (func_253(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_253(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_239(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, &uVar47, &uVar48, &uVar49, &uVar50);
														if (iVar5 == 1)
														{
															if (Global_17411.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_247(Global_17411.f_4433[(iVar22 + iVar28)]), func_245(Global_17411.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_247(Global_17411.f_4433[(iVar22 + iVar28)]), func_245(Global_17411.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
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
											if (func_179() && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_237(0, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
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
												if (func_253(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_253(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_239(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, &uVar47, &uVar48, &uVar49, &uVar50);
															if (Global_17411.f_4433[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_247(Global_17411.f_4433[(iVar22 + iVar14)]), func_245(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), (Global_17408 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
															}
															else if (Global_17411.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_247(Global_17411.f_4433[(iVar22 + iVar14)]), func_245(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_247(Global_17411.f_4433[(iVar22 + iVar14)]), func_245(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
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
										func_237(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_236(bVar32);
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
										if (func_253(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_253(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_239(26, 1, &uVar47, &uVar48, &uVar49, &uVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_247(26), func_245(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
												}
											}
										}
										if (func_253(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_253(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_239(27, 1, &uVar47, &uVar48, &uVar49, &uVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_247(27), func_245(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_237(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar55, 0, 0, 0);
										func_235((fVar34 + fVar42), fVar35, "NUMBER", Global_17411.f_3918[iVar20], 0);
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
										func_237(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_236(bVar32);
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
										if (func_253(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_253(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_239(26, 1, &uVar47, &uVar48, &uVar49, &uVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_247(26), func_245(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
												}
											}
										}
										if (func_253(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_253(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_239(27, 1, &uVar47, &uVar48, &uVar49, &uVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_247(27), func_245(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
												}
											}
										}
									}
									func_237(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar55, 0, 0, 0);
									func_234((fVar34 + fVar42), fVar35, "NUMBER", Global_17411.f_4175[iVar21], Global_17411.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_253(Global_17411.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_253(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17411.f_5083[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_253(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_239(26, 1, &uVar47, &uVar48, &uVar49, &uVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_247(26), func_245(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
													}
												}
											}
											if (func_253(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_253(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_239(27, 1, &uVar47, &uVar48, &uVar49, &uVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_247(27), func_245(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_253(Global_17411.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_239(Global_17411.f_4433[iVar22], bVar32, &uVar47, &uVar48, &uVar49, &uVar50);
												GRAPHICS::DRAW_SPRITE(func_247(Global_17411.f_4433[iVar22]), func_245(Global_17411.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_233(Global_17411.f_4433[iVar22])), (fVar37 * func_233(Global_17411.f_4433[iVar22])), 0f, uVar47, uVar48, uVar49, uVar50, 0);
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
								if (func_253(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_282(0);
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
		func_231(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

float func_233(int iParam0)
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

void func_234(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_235(float fParam0, float fParam1, char* sParam2, var uParam3, int iParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_236(bool bParam0)
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

void func_237(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_238(Global_17411.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_238(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_239(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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

void func_240(float fParam0)
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

void func_241(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam4);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_242(char* sParam0, var uParam1, var uParam2)
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
	func_243();
	UI::_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return UI::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_243()
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

void func_244(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_245(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_17411.f_6997[iParam0 /*16*/])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_6997[iParam0 /*16*/])) == -1487683087)
		{
			Var19 = { func_74(PLAYER::PLAYER_ID()) };
			if (NETWORK::_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_246(&uVar3);
			}
		}
		else
		{
			return func_246(&(Global_17411.f_6997[iParam0 /*16*/]));
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

var func_246(var uParam0)
{
	return uParam0;
}

char* func_247(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_17411.f_6020[iParam0 /*16*/])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_6020[iParam0 /*16*/])) == -1487683087)
		{
			Var16 = { func_74(PLAYER::PLAYER_ID()) };
			NETWORK::_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_246(&uVar0);
		}
		else
		{
			return func_246(&(Global_17411.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 50)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_248(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
		func_251(Global_17411.f_5218, 1);
	}
	else
	{
		func_251(Global_17411.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_250(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]));
		if (Global_17411.f_5075[Global_17411.f_5219])
		{
			func_253(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_249(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]));
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

var func_249(var uParam0)
{
	if (!UI::DOES_TEXT_LABEL_EXIST(uParam0))
	{
	}
	return UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_250(var uParam0)
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
	func_237(0, 1, 0, 0, 0, 0, 0);
	UI::_BEGIN_TEXT_COMMAND_WIDTH(uParam0);
	return UI::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_251(int iParam0, bool bParam1)
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

int func_252()
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

int func_253(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;
	
	StringCopy(&cVar0, func_247(iParam0), 64);
	StringCopy(&cVar16, func_245(iParam0, bParam1), 64);
	if (GAMEPLAY::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar32, &iVar33);
			fVar35 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_252())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_252())
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
		vVar37.x = (vVar37.x * (func_254(iParam0) / fVar34));
		vVar37.y = (vVar37.y * (func_254(iParam0) / fVar34));
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

float func_254(int iParam0)
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

void func_255(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = CONTROLS::_0x80C2FD58D720C801(2, iParam0, 1);
	if (Global_17411.f_4769 >= 12)
	{
		StringCopy(&Global_4267964, sVar0, 64);
		StringCopy(&(Global_4267964.f_16), sParam1, 16);
		Global_4267964.f_20 = iParam2;
		return;
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_17411.f_5052), Global_17411.f_4769);
	StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), sParam1, 16);
	Global_17411.f_5013[Global_17411.f_4769] = iParam2;
	Global_17411.f_5026[Global_17411.f_4769] = 359;
	Global_17411.f_5039[Global_17411.f_4769] = iParam0;
	Global_17411.f_4769++;
}

void func_256(int iParam0, char* sParam1, int iParam2)
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
	GAMEPLAY::CLEAR_BIT(&(Global_17411.f_5052), Global_17411.f_4769);
	StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), sParam1, 16);
	Global_17411.f_5013[Global_17411.f_4769] = iParam2;
	Global_17411.f_5026[Global_17411.f_4769] = iParam0;
	Global_17411.f_5039[Global_17411.f_4769] = 32;
	Global_17411.f_4769++;
}

void func_257(int iParam0, int iParam1, int iParam2)
{
	Global_17411.f_5735 = iParam0;
	Global_17411.f_5736 = iParam1;
	Global_17411.f_5737 = iParam2;
}

void func_258(var uParam0)
{
	if (Global_17411.f_4763 >= 3 || Global_17411.f_4762 >= 4)
	{
		return;
	}
	Global_17411.f_4696[Global_17411.f_4762] = 2;
	Global_17411.f_4762++;
	Global_17411.f_4701[Global_17411.f_4763] = uParam0;
	Global_17411.f_4763++;
}

void func_259(char* sParam0, int iParam1, int iParam2)
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

void func_260(char* sParam0)
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

void func_261(int iParam0, bool bParam1, int iParam2)
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

void func_262(int iParam0, char* sParam1, char* sParam2)
{
	Global_17411 = iParam0;
	func_263(29, sParam1, sParam2);
}

void func_263(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17411.f_6020[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17411.f_6997[iParam0 /*16*/]), sParam2, 64);
}

bool func_264(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_162(&iVar0, 1, iParam1))
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
	bVar2 = func_265(&(Global_17411.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_265(var uParam0)
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

void func_266()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_1938))
	{
		unk_0x32F34FF7F617643B(Local_1938, 1);
		UI::SET_TEXT_RENDER_ID(Local_1938.f_1);
		GRAPHICS::_SET_UI_LAYER(4);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		GRAPHICS::DRAW_SCALEFORM_MOVIE(Local_1938, 0.401f, 0.09f, 0.805f, 0.195f, 255, 255, 255, 255, 0);
		UI::SET_TEXT_RENDER_ID(UI::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	}
}

void func_267(int iParam0)
{
	Global_1689901 = NETWORK::_GET_POSIX_TIME();
	Global_1689918 = iParam0;
	if (!func_273())
	{
		func_271();
	}
	if (!func_270())
	{
		func_268();
	}
}

void func_268()
{
	func_33(-1040706016, NETWORK::_GET_POSIX_TIME());
	func_269();
	func_32();
	Global_1689915 = 1;
	Global_1689910 = 0;
}

void func_269()
{
	func_33(-1959489725, 0);
	func_33(-1767815638, 0);
	func_33(-1983697810, 0);
	func_33(2071236561, 0);
	func_33(-569486077, 0);
	func_33(-806012719, 0);
	func_33(-1030054372, 0);
	func_33(611934680, 0);
	func_33(387434261, 0);
	func_33(92143537, 0);
	func_33(1599929969, 0);
}

bool func_270()
{
	return Global_1689915;
}

void func_271()
{
	func_33(937560627, NETWORK::_GET_POSIX_TIME());
	func_34();
	func_272((NETWORK::_GET_POSIX_TIME() + 86400));
	Global_1689914 = 1;
}

void func_272(int iParam0)
{
	Global_1689909 = iParam0;
}

bool func_273()
{
	return func_39(937560627) != 0;
}

int func_274()
{
	var uVar0;
	struct<6> Var1;
	
	switch (iLocal_1474)
	{
		case 0:
			if (func_281())
			{
				if (func_280())
				{
					func_173((Local_47[iLocal_1959 /*21*/].f_16 * iLocal_1962));
					func_43(0);
					Var1 = { func_49(Local_47[iLocal_1959 /*21*/].f_17, 1) };
					func_47(&Var1);
					func_279(Local_47[iLocal_1959 /*21*/].f_17);
					func_278(iLocal_1959, &vLocal_1477, &vLocal_1480);
					iLocal_1485 = func_277();
					GAMEPLAY::CLEAR_BIT(&uLocal_1472, 26);
					GAMEPLAY::SET_BIT(&uLocal_1472, 26);
					AI::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), func_276(iLocal_1485), 1f, 7000, 0.05f, 0, func_275(iLocal_1485));
					GAMEPLAY::CLEAR_BIT(&uLocal_1472, 30);
					GAMEPLAY::CLEAR_BIT(&uLocal_1472, 31);
					iLocal_1474++;
				}
			}
			break;
		
		case 1:
			if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_95(PLAYER::PLAYER_ID()), func_276(iLocal_1485), 0) <= 0.25f)
			{
				GAMEPLAY::SET_BIT(&uLocal_1472, 26);
			}
			if ((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 1) && AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 0) && !AI::IS_PED_WALKING(PLAYER::PLAYER_PED_ID())) || (GAMEPLAY::IS_BIT_SET(uLocal_1472, 26) && AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 0))
			{
				if (CAM::_0xEE778F8C7E1142E2(0) == 1 || CAM::_0xEE778F8C7E1142E2(0) == 2)
				{
					CAM::_SET_CAM_PERSPECTIVE(0, 0);
				}
				if (CAM::_0xEE778F8C7E1142E2(0) == 4)
				{
					unk_0x79C0E43EB9B944E2(518572876);
				}
				func_164(iLocal_1485);
				iLocal_1474++;
			}
			break;
		
		case 2:
			uVar0 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(uLocal_1475);
			unk_0x79C0E43EB9B944E2(518572876);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))
				{
					GAMEPLAY::SET_BIT(&uLocal_1472, 31);
					func_42();
					if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 30))
					{
						GAMEPLAY::CLEAR_BIT(&uLocal_1472, 30);
						GAMEPLAY::CLEAR_BIT(&uLocal_1472, 31);
						return 1;
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar0) >= 0.99f)
				{
					func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_1959 /*21*/].f_17, 11);
					func_164(4);
					iLocal_1474++;
				}
			}
			break;
		
		case 3:
			unk_0x79C0E43EB9B944E2(518572876);
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 30);
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 31);
			return 1;
			break;
	}
	return 0;
}

var func_275(int iParam0)
{
	vector3 vVar0;
	
	func_165(iParam0, &Local_1940);
	vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_310(), &Local_1940, vLocal_1477, vLocal_1480, 0.01f, 2) };
	return vVar0.z;
}

Vector3 func_276(int iParam0)
{
	func_165(iParam0, &Local_1940);
	return PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_310(), &Local_1940, vLocal_1477, vLocal_1480, 0.01f, 2);
}

int func_277()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 100f;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_95(PLAYER::PLAYER_ID()), func_276((0 + iVar2)), 1) < fVar0)
		{
			fVar0 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_95(PLAYER::PLAYER_ID()), func_276((0 + iVar2)), 1);
			iVar1 = (0 + iVar2);
		}
		iVar2++;
	}
	return iVar1;
}

void func_278(int iParam0, var uParam1, var uParam2)
{
	float fVar0;
	
	func_214(iParam0, uParam1, &fVar0);
	*uParam2 = { 0f, 0f, fVar0 };
}

void func_279(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = 6;
			break;
		
		case 2:
			iVar0 = 2;
			break;
		
		case 3:
			iVar0 = 3;
			break;
		
		case 4:
			iVar0 = 7;
			break;
		
		case 5:
			iVar0 = 4;
			break;
		
		case 6:
			iVar0 = 5;
			break;
		
		case 7:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 8;
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_1938, "SET_THEME");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_280()
{
	vector3 vVar0[24];
	var uVar6;
	
	StringCopy(&cVar0, "vw_Prop_Casino_Slot_0", 24);
	StringIntConCat(&cVar0, Local_47[iLocal_1959 /*21*/].f_17, 24);
	StringConCat(&cVar0, "A", 24);
	uVar6 = GAMEPLAY::GET_HASH_KEY(&cVar0);
	StringCopy(&cVar0, "machine_0", 24);
	StringIntConCat(&cVar0, Local_47[iLocal_1959 /*21*/].f_17, 24);
	StringConCat(&cVar0, "a", 24);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_1938))
	{
		if (!UI::IS_NAMED_RENDERTARGET_REGISTERED(&cVar0))
		{
			UI::REGISTER_NAMED_RENDERTARGET(&cVar0, 0);
			if (!UI::IS_NAMED_RENDERTARGET_LINKED(uVar6))
			{
				UI::LINK_NAMED_RENDERTARGET(uVar6);
				if (Local_1938.f_1 == -1)
				{
					Local_1938.f_1 = UI::GET_NAMED_RENDERTARGET_RENDER_ID(&cVar0);
				}
				return 1;
			}
			else
			{
				if (Local_1938.f_1 == -1)
				{
					Local_1938.f_1 = UI::GET_NAMED_RENDERTARGET_RENDER_ID(&cVar0);
				}
				return 1;
			}
		}
		else if (!UI::IS_NAMED_RENDERTARGET_LINKED(uVar6))
		{
			UI::LINK_NAMED_RENDERTARGET(uVar6);
			if (Local_1938.f_1 == -1)
			{
				Local_1938.f_1 = UI::GET_NAMED_RENDERTARGET_RENDER_ID(&cVar0);
			}
			return 1;
		}
		else
		{
			if (Local_1938.f_1 == -1)
			{
				Local_1938.f_1 = UI::GET_NAMED_RENDERTARGET_RENDER_ID(&cVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_281()
{
	GAMEPLAY::SET_BIT(&uLocal_1472, 18);
	STREAMING::REQUEST_ANIM_DICT(func_310());
	if (STREAMING::HAS_ANIM_DICT_LOADED(func_310()))
	{
		return 1;
	}
	return 0;
}

void func_282(int iParam0)
{
	if (func_287())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_286(0))
		{
			func_283(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_2424, 2);
	}
}

void func_283(int iParam0)
{
	if (func_287())
	{
		return;
	}
	if (Global_14725)
	{
		func_285(0, 0);
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
	if (!func_284())
	{
		Global_14553.f_1 = 3;
	}
}

int func_284()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_285(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_286(0))
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

int func_286(int iParam0)
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

bool func_287()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 19);
}

bool func_288()
{
	return Global_4264077 == 1;
}

void func_289()
{
	char[] cVar0[8];
	vector3 vVar6;
	
	MemCopy(&cVar0, {func_194(Local_47[iLocal_1959 /*21*/].f_17)}, 6);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar0, 0);
	GAMEPLAY::SET_BIT(&uLocal_1472, 23);
	if (func_264(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar0))
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_1472, 19))
		{
			func_163(0, 0);
			func_262(1, &cVar0, &cVar0);
			StringCopy(&vVar6, "SLOTS_TITLE", 24);
			StringIntConCat(&vVar6, Local_47[iLocal_1959 /*21*/].f_17, 24);
			func_260(&vVar6);
			func_261(-1, 1, 1);
			func_259("SLOTS_DIS", 0, 0);
			StringCopy(&vVar6, "SLOTS_DIS1", 24);
			StringIntConCat(&vVar6, Local_47[iLocal_1959 /*21*/].f_17, 24);
			func_290(&vVar6);
			func_290("SLOTS_DIS2");
			func_290("SLOTS_DIS3");
			func_256(202, "SLOTS_EXIT", -1);
			func_256(201, "SLOTS_ACC", -1);
			GAMEPLAY::SET_BIT(&uLocal_1472, 19);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
		}
		func_231(1);
		func_232(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 202) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
		{
			iLocal_1961 = -1;
			func_193(-1);
			if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 2))
			{
				if ((func_12(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && func_26())
				{
					func_17(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				if (UI::IS_RADAR_HIDDEN())
				{
					UI::DISPLAY_RADAR(1);
				}
				func_16(0);
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 2);
			}
			func_163(0, 0);
			func_160(1, -1);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&cVar0);
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 23);
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 19);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
			func_292(0);
		}
		if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 201))
		{
			func_163(0, 0);
			func_160(1, -1);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&cVar0);
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 19);
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 23);
			if (func_8(iLocal_1959, &Local_47))
			{
				GAMEPLAY::SET_BIT(&uLocal_1473, 1);
			}
			else
			{
				GAMEPLAY::SET_BIT(&uLocal_1472, 20);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
			func_292(4);
		}
	}
}

void func_290(char* sParam0)
{
	if (Global_17411.f_4765 >= 3 || Global_17411.f_4762 >= 4)
	{
		return;
	}
	Global_17411.f_4696[Global_17411.f_4762] = 1;
	Global_17411.f_4762++;
	StringCopy(&(Global_17411.f_4713[Global_17411.f_4765 /*16*/]), sParam0, 64);
	Global_17411.f_4765++;
}

void func_291(int iParam0)
{
	Local_3235[PLAYER::PLAYER_ID() /*11*/] = iParam0;
	if (Local_2575.f_598[iParam0] != -1)
	{
		if (Local_2575.f_598[iParam0] == PLAYER::PLAYER_ID())
		{
			func_193(iParam0);
			if (func_8(iParam0, &Local_47) && GAMEPLAY::IS_BIT_SET(uLocal_1473, 1))
			{
				func_292(4);
			}
			else if (!func_8(iParam0, &Local_47) && GAMEPLAY::IS_BIT_SET(uLocal_1472, 20))
			{
				func_292(4);
			}
			else
			{
				func_292(3);
			}
		}
		else
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_1472, 1))
			{
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_186("SLOTS_USED", -1);
					GAMEPLAY::SET_BIT(&uLocal_1472, 1);
				}
			}
			iLocal_1961 = -1;
			func_193(-1);
			if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 2))
			{
				if (func_12(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_17(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				if (UI::IS_RADAR_HIDDEN())
				{
					UI::DISPLAY_RADAR(1);
				}
				func_16(0);
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 2);
			}
			func_292(0);
		}
	}
}

void func_292(int iParam0)
{
	iLocal_1471 = iParam0;
}

int func_293()
{
	vector3 vVar0[2];
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	vector3 vVar14;
	vector3 vVar20;
	float fVar23;
	int iVar24;
	
	if ((((((((((((((((func_12(PLAYER::PLAYER_ID(), 1, 1) && func_307(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2405071.f_2668) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !GAMEPLAY::IS_BIT_SET(Global_1671295.f_4, 2)) && !func_218()) && !NETWORK::_0x2EAC52B4019E2782()) && !UI::_0x2F057596F2BD0061()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !func_217(1)) && !func_219()) && !func_210()) && !func_208()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && !Global_2458648.f_12) && Global_1671289 != 31)
	{
		if (iLocal_1964 < 0)
		{
			iVar13 = 0;
			while (iVar13 < 8)
			{
				func_214(iLocal_1963, &vVar20, &fVar23);
				vVar0[0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, fVar23, 0.0579063f, -0.256112f, -0.197113f) };
				vVar0[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, fVar23, 0.0289372f, -1.85613f, 2.75002f) };
				vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, fVar23, 0f, -0.4f, 1f) };
				vVar10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, fVar23, 0f, -0.6f, 1f) };
				fVar23 = func_306(func_95(PLAYER::PLAYER_ID()), vVar20, 1);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vVar0[0 /*3*/], vVar0[1 /*3*/], 1.25f, 0, 1, 0))
				{
					if ((func_305(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar23, 45f) || func_301(PLAYER::PLAYER_PED_ID(), vVar7, 45f)) || func_301(PLAYER::PLAYER_PED_ID(), vVar10, 45f))
					{
						iLocal_1964 = iLocal_1963;
					}
				}
				iLocal_1963++;
				if (iLocal_1963 >= 54)
				{
					iLocal_1963 = 0;
				}
				iVar13++;
			}
		}
		else
		{
			func_214(iLocal_1964, &vVar20, &fVar23);
			vVar0[0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, fVar23, 0.0579063f, -0.256112f, -0.197113f) };
			vVar0[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, fVar23, 0.0289372f, -1.85613f, 2.75002f) };
			vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, fVar23, 0f, -0.4f, 1f) };
			vVar10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, fVar23, 0f, -0.6f, 1f) };
			fVar23 = func_306(func_95(PLAYER::PLAYER_ID()), vVar20, 1);
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vVar0[0 /*3*/], vVar0[1 /*3*/], 1.25f, 0, 1, 0) || ((!func_305(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar23, 45f) && !func_301(PLAYER::PLAYER_PED_ID(), vVar7, 45f)) && !func_301(PLAYER::PLAYER_PED_ID(), vVar10, 45f)))
			{
				iLocal_1964 = -1;
			}
		}
		if (iLocal_1964 >= 0)
		{
			func_214(iLocal_1964, &vVar20, &fVar23);
			vVar0[0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, fVar23, 0f, -0.5f, 0.77f) };
			if (Local_2575.f_598[iLocal_1964] == -1 && !func_300(iLocal_1964))
			{
				if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 1))
				{
					GAMEPLAY::CLEAR_BIT(&uLocal_1472, 1);
				}
				if (func_195(iLocal_1964))
				{
					if (iLocal_1958 == -1)
					{
						StringCopy(&vVar14, "SLOTS_ENTER", 24);
						StringIntConCat(&vVar14, Local_47[iLocal_1964 /*21*/].f_17, 24);
						if (!func_62())
						{
							if (func_60(PLAYER::PLAYER_ID(), 0))
							{
								iVar24 = func_59();
								if (func_57(iVar24))
								{
									if (func_299(iVar24) == 1)
									{
										StringConCat(&vVar14, "c", 24);
									}
									else if (func_298(iVar24))
									{
										StringConCat(&vVar14, "a", 24);
									}
									else
									{
										StringConCat(&vVar14, "b", 24);
									}
								}
							}
						}
						func_297(&iLocal_1958, 3, &vVar14, 0, 0, 0, 0);
					}
					if (func_296(iLocal_1958, 1))
					{
						if (iLocal_1958 != -1)
						{
							func_196(&iLocal_1958);
						}
						iLocal_1961 = iLocal_1964;
						func_17(PLAYER::PLAYER_ID(), 0, 256, 0);
						UI::DISPLAY_RADAR(0);
						func_16(1);
						CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
						CONTROLS::DISABLE_CONTROL_ACTION(2, 199, 1);
						CONTROLS::SET_INPUT_EXCLUSIVE(0, 200);
						CONTROLS::SET_INPUT_EXCLUSIVE(2, 200);
						CONTROLS::SET_INPUT_EXCLUSIVE(0, 199);
						CONTROLS::SET_INPUT_EXCLUSIVE(2, 199);
						PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
						if (!GAMEPLAY::IS_BIT_SET(uLocal_1472, 2))
						{
							GAMEPLAY::SET_BIT(&uLocal_1472, 2);
						}
						return 1;
					}
				}
			}
			else if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (Local_2575.f_598[iLocal_1964] != PLAYER::PLAYER_ID())
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_1472, 1))
					{
						func_186("SLOTS_USED", -1);
						GAMEPLAY::SET_BIT(&uLocal_1472, 1);
					}
				}
			}
		}
		else
		{
			if (func_294())
			{
				UI::CLEAR_HELP(1);
			}
			if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 1))
			{
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 1);
			}
			if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 6))
			{
				GAMEPLAY::CLEAR_BIT(&uLocal_1472, 6);
			}
			if (iLocal_1958 != -1)
			{
				func_196(&iLocal_1958);
			}
		}
	}
	else
	{
		if (func_294())
		{
			UI::CLEAR_HELP(1);
		}
		if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 1))
		{
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 1);
		}
		if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 6))
		{
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 6);
		}
		if (iLocal_1958 != -1)
		{
			func_196(&iLocal_1958);
		}
	}
	return 0;
}

int func_294()
{
	if ((func_295("SLOTS_NOMON") || func_295("SLOTS_FAILTR")) || func_295("SLOTS_USED"))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 6))
	{
		if (((((func_295("CAS_MG_CBAN") || func_295("CAS_MG_CTIME")) || func_295("CAS_MG_LOWCHIPS1")) || func_295("CAS_MG_NOCHIPS1")) || func_200("CAS_MG_MEMB2", func_201(1))) || func_295("SLOTS_REGBAN"))
		{
			return 1;
		}
	}
	return 0;
}

var func_295(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_296(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_197(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_286(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/] == 1 && Global_37139[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_37139[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_37139[iVar0 /*32*/].f_5 = 1;
			Global_37139[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_37139[iVar0 /*32*/] == 0)
			{
			}
			if (Global_37139[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_297(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_196(iParam0);
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
		if (!Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/] = 1;
			Global_37139[iVar0 /*32*/].f_1 = Global_37340;
			Global_37340++;
			Global_37139[iVar0 /*32*/].f_4 = 0;
			Global_37139[iVar0 /*32*/].f_29 = 0;
			Global_37139[iVar0 /*32*/].f_5 = 0;
			Global_37139[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_37139[iVar0 /*32*/].f_8), sParam2, 16);
			Global_37139[iVar0 /*32*/].f_6 = iParam3;
			Global_37139[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_37139[iVar0 /*32*/].f_7 = 0;
			Global_37139[iVar0 /*32*/].f_3 = iParam5;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_37139[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_37139[iVar0 /*32*/].f_13), sParam4, 64);
				Global_37139[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_37139[iVar0 /*32*/].f_12 = 0;
				Global_37139[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_37139[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_298(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 26);
}

int func_299(int iParam0)
{
	if (func_60(iParam0, 1))
	{
		return Global_1626536[func_59() /*603*/].f_11.f_447;
	}
	return -1;
}

int func_300(int iParam0)
{
	if (iParam0 < 32)
	{
		return GAMEPLAY::IS_BIT_SET(Global_2506781, iParam0);
	}
	else
	{
		iParam0 = (iParam0 - 32);
		return GAMEPLAY::IS_BIT_SET(Global_2506782, iParam0);
	}
	return 0;
}

bool func_301(var uParam0, vector3 vParam1, float fParam4)
{
	return func_302(ENTITY::GET_ENTITY_COORDS(uParam0, 1), ENTITY::GET_ENTITY_HEADING(uParam0), vParam1, fParam4);
}

bool func_302(vector3 vParam0, var uParam3, vector3 vParam4, float fParam7)
{
	vector3 vVar0;
	var uVar3;
	
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(0f, 0f, 0f, uParam3, 0f, 1f, 0f) };
	uVar3 = func_303(func_304(vVar0), func_304(vParam4 - vParam0));
	return GAMEPLAY::ACOS(uVar3) <= fParam7;
}

float func_303(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_304(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_305(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

float func_306(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = GAMEPLAY::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_307(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_309(iParam0);
	iVar1 = func_308(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_37371[iVar1 /*5*/].f_3;
}

int func_308(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37371[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_309(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_37371[iVar0 /*5*/].f_1)
		{
			return Global_37371[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

char* func_310()
{
	if (func_115())
	{
		return "anim_casino_a@amb@casino@games@slots@female";
	}
	return "anim_casino_a@amb@casino@games@slots@male";
}

bool func_311(var uParam0)
{
	return uParam0->f_1;
}

void func_312()
{
	func_323();
	func_222();
	func_321();
	func_319();
	func_314();
	func_313();
}

void func_313()
{
}

void func_314()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar6;
	int iVar7[3];
	int iVar11[3];
	struct<5> Var15;
	float fVar24;
	
	Var15 = 3;
	Var15.f_4 = 3;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1689853[iVar0 /*3*/].f_1 >= 0)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_2242[func_11(Global_1689853[iVar0 /*3*/].f_1)], func_10(Global_1689853[iVar0 /*3*/].f_1)))
			{
				GAMEPLAY::SET_BIT(&(Local_2242[func_11(Global_1689853[iVar0 /*3*/].f_1)]), func_10(Global_1689853[iVar0 /*3*/].f_1));
			}
			if (Global_1689853[iVar0 /*3*/])
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_2242.f_3[func_11(Global_1689853[iVar0 /*3*/].f_1)], func_10(Global_1689853[iVar0 /*3*/].f_1)))
				{
					func_318(&Var15, Global_1689853[iVar0 /*3*/].f_2);
					func_9(&(Local_2242.f_6[Global_1689853[iVar0 /*3*/].f_1 /*2*/]), 0, 0);
					iVar1 = 0;
					while (iVar1 < 3)
					{
						Local_2242.f_115[Global_1689853[iVar0 /*3*/].f_1 /*4*/][iVar1] = Var15.f_4[iVar1];
						iVar1++;
					}
					GAMEPLAY::SET_BIT(&(Local_2242.f_3[func_11(Global_1689853[iVar0 /*3*/].f_1)]), func_10(Global_1689853[iVar0 /*3*/].f_1));
				}
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 54)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_2242.f_3[func_11(iVar1)], func_10(iVar1)))
		{
			func_214(iVar1, &uVar3, &uVar6);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				iVar7[iVar0] = 0;
				iVar11[iVar0] = 0;
				if (func_311(&(Local_2242.f_6[iVar1 /*2*/])))
				{
					if (func_5(&(Local_2242.f_6[iVar1 /*2*/]), (2000 + (750 * iVar0)), 0))
					{
						if (iVar0 > 0)
						{
							if (iVar11[(iVar0 - 1)])
							{
								if (func_311(&(Local_1536[iVar1 /*5*/][(iVar0 - 1) /*2*/])))
								{
									if (func_5(&(Local_1536[iVar1 /*5*/][(iVar0 - 1) /*2*/]), 150, 0))
									{
										iVar7[iVar0] = 1;
										if (Local_47[iVar1 /*21*/].f_10[iVar0] == -1f)
										{
											Local_47[iVar1 /*21*/].f_10[iVar0] = ((Local_2242.f_115[iVar1 /*4*/][iVar0] * 22.5f) + IntToFloat(SYSTEM::FLOOR((Local_47[iVar1 /*21*/].f_2[iVar0] / 360f)) * 360));
										}
									}
								}
								else
								{
									func_6(&(Local_1536[iVar1 /*5*/][(iVar0 - 1) /*2*/]), 0, 0);
								}
							}
						}
						else
						{
							iVar7[iVar0] = 1;
							if (Local_47[iVar1 /*21*/].f_10[iVar0] == -1f)
							{
								Local_47[iVar1 /*21*/].f_10[iVar0] = ((Local_2242.f_115[iVar1 /*4*/][iVar0] * 22.5f) + IntToFloat(SYSTEM::FLOOR((Local_47[iVar1 /*21*/].f_2[iVar0] / 360f)) * 360));
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1965[iVar1 /*4*/][iVar0]))
				{
					if (Local_47[iVar1 /*21*/].f_6[iVar0] != Local_47[iVar1 /*21*/].f_2[iVar0])
					{
						if (!iVar7[iVar0])
						{
							func_317(iVar1, iVar0);
						}
						ENTITY::SET_ENTITY_ROTATION(Local_1965[iVar1 /*4*/][iVar0], Local_47[iVar1 /*21*/].f_2[iVar0], 0f, uVar6, 2, 1);
						Local_47[iVar1 /*21*/].f_6[iVar0] = Local_47[iVar1 /*21*/].f_2[iVar0];
					}
				}
				if (iVar7[iVar0])
				{
					fVar24 = ((Local_2242.f_115[iVar1 /*4*/][iVar0] * 22.5f) - (Local_47[iVar1 /*21*/].f_2[iVar0] % 360f));
					if (GAMEPLAY::ABSF(fVar24) <= 20f || (Local_47[iVar1 /*21*/].f_10[iVar0] != -1f && Local_47[iVar1 /*21*/].f_2[iVar0] >= Local_47[iVar1 /*21*/].f_10[iVar0]))
					{
						if (Local_47[iVar1 /*21*/].f_2[iVar0] != (Local_2242.f_115[iVar1 /*4*/][iVar0] * 22.5f))
						{
							func_315(iVar1, 9);
							if (Local_2242.f_115[iVar1 /*4*/][iVar0] == 6f)
							{
								func_315(iVar1, 10);
							}
						}
						Local_47[iVar1 /*21*/].f_2[iVar0] = (Local_2242.f_115[iVar1 /*4*/][iVar0] * 22.5f);
						iVar11[iVar0] = 1;
						if (ENTITY::DOES_ENTITY_EXIST(Local_1965[iVar1 /*4*/][iVar0]))
						{
							ENTITY::SET_ENTITY_ROTATION(Local_1965[iVar1 /*4*/][iVar0], Local_47[iVar1 /*21*/].f_2[iVar0], 0f, uVar6, 2, 1);
						}
					}
					else
					{
						Local_47[iVar1 /*21*/].f_2[iVar0] = (Local_47[iVar1 /*21*/].f_2[iVar0] + (600f * SYSTEM::TIMESTEP()));
					}
				}
				else
				{
					Local_47[iVar1 /*21*/].f_2[iVar0] = (Local_47[iVar1 /*21*/].f_2[iVar0] + (600f * SYSTEM::TIMESTEP()));
				}
				iVar0++;
			}
			if (!GAMEPLAY::IS_BIT_SET(uLocal_1486[func_11(iVar1)], func_10(iVar1)))
			{
				func_315(iVar1, 7);
				func_315(iVar1, 8);
				GAMEPLAY::SET_BIT(&(uLocal_1486[func_11(iVar1)]), func_10(iVar1));
			}
			if (iVar11[2])
			{
				iVar2 = 0;
				while (iVar2 < 10)
				{
					if (Global_1689853[iVar2 /*3*/].f_1 == iVar1)
					{
						GAMEPLAY::CLEAR_BIT(&(uLocal_1486[func_11(iVar1)]), func_10(iVar1));
						Local_47[iVar1 /*21*/].f_15 = -1f;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							Local_47[iVar1 /*21*/].f_10[iVar0] = -1f;
							if (ENTITY::DOES_ENTITY_EXIST(Local_1965[iVar1 /*4*/][iVar0]))
							{
								if (Local_47[iVar1 /*21*/].f_2[iVar0] != (Local_2242.f_115[iVar1 /*4*/][iVar0] * 22.5f))
								{
									func_214(iVar1, &uVar3, &uVar6);
									Local_47[iVar1 /*21*/].f_2[iVar0] = (Local_2242.f_115[iVar1 /*4*/][iVar0] * 22.5f);
									ENTITY::SET_ENTITY_ROTATION(Local_1965[iVar1 /*4*/][iVar0], Local_47[iVar1 /*21*/].f_2[iVar0], 0f, uVar6, 2, 1);
								}
							}
							else
							{
								Local_47[iVar1 /*21*/].f_2[iVar0] = 0f;
							}
							iVar0++;
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_2182[iVar1]))
						{
							Local_47[iVar1 /*21*/].f_14 = 0f;
							ENTITY::SET_ENTITY_ROTATION(uLocal_2182[iVar1], 0f, 0f, uVar6, 2, 1);
						}
						func_4(&(Local_1536[iVar1 /*5*/][0 /*2*/]));
						func_4(&(Local_1536[iVar1 /*5*/][1 /*2*/]));
						func_4(&(Local_1807[iVar1 /*2*/]));
						Global_1689853[iVar2 /*3*/] = 0;
						func_4(&(Local_2242.f_6[Global_1689853[iVar2 /*3*/].f_1 /*2*/]));
						GAMEPLAY::CLEAR_BIT(&(Local_2242.f_3[func_11(Global_1689853[iVar2 /*3*/].f_1)]), func_10(Global_1689853[iVar2 /*3*/].f_1));
					}
					iVar2++;
				}
			}
		}
		else
		{
			iVar2 = 0;
			while (iVar2 < 10)
			{
				if (Global_1689853[iVar2 /*3*/].f_1 == iVar1)
				{
					GAMEPLAY::CLEAR_BIT(&(uLocal_1486[func_11(iVar1)]), func_10(iVar1));
					Local_47[iVar1 /*21*/].f_15 = -1f;
					iVar0 = 0;
					while (iVar0 < 3)
					{
						Local_47[iVar1 /*21*/].f_10[iVar0] = -1f;
						if (ENTITY::DOES_ENTITY_EXIST(Local_1965[iVar1 /*4*/][iVar0]))
						{
							if (Local_47[iVar1 /*21*/].f_2[iVar0] != (Local_2242.f_115[iVar1 /*4*/][iVar0] * 22.5f))
							{
								func_214(iVar1, &uVar3, &uVar6);
								Local_47[iVar1 /*21*/].f_2[iVar0] = (Local_2242.f_115[iVar1 /*4*/][iVar0] * 22.5f);
								ENTITY::SET_ENTITY_ROTATION(Local_1965[iVar1 /*4*/][iVar0], Local_47[iVar1 /*21*/].f_2[iVar0], 0f, uVar6, 2, 1);
							}
						}
						else
						{
							Local_47[iVar1 /*21*/].f_2[iVar0] = 0f;
						}
						iVar0++;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_2182[iVar1]))
					{
						Local_47[iVar1 /*21*/].f_14 = 0f;
						ENTITY::SET_ENTITY_ROTATION(uLocal_2182[iVar1], 0f, 0f, uVar6, 2, 1);
					}
					func_4(&(Local_1536[iVar1 /*5*/][0 /*2*/]));
					func_4(&(Local_1536[iVar1 /*5*/][1 /*2*/]));
					func_4(&(Local_1807[iVar1 /*2*/]));
					func_4(&(Local_2242.f_6[Global_1689853[iVar2 /*3*/].f_1 /*2*/]));
					GAMEPLAY::CLEAR_BIT(&(Local_2242.f_3[func_11(Global_1689853[iVar2 /*3*/].f_1)]), func_10(Global_1689853[iVar2 /*3*/].f_1));
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_315(int iParam0, int iParam1)
{
	var uVar0;
	vector3 vVar1;
	var uVar4;
	
	uVar0 = func_316(Local_47[iParam0 /*21*/].f_17);
	func_214(iParam0, &vVar1, &uVar4);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar1, uVar4, 0f, -0.4f, 1f) };
	switch (iParam1)
	{
		case 1:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "no_win", vVar1, uVar0, 0, 20, 0);
			break;
		
		case 2:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "small_win", vVar1, uVar0, 0, 20, 0);
			break;
		
		case 3:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "big_win", vVar1, uVar0, 0, 20, 0);
			break;
		
		case 4:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "jackpot", vVar1, uVar0, 0, 20, 0);
			break;
		
		case 5:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "place_bet", vVar1, uVar0, 0, 20, 0);
			break;
		
		case 6:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "place_max_bet", vVar1, uVar0, 0, 20, 0);
			break;
		
		case 7:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "spinning", vVar1, uVar0, 0, 20, 0);
			break;
		
		case 8:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "start_spin", vVar1, uVar0, 0, 20, 0);
			break;
		
		case 9:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "wheel_stop_clunk", vVar1, uVar0, 0, 20, 0);
			break;
		
		case 10:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "wheel_stop_on_prize", vVar1, uVar0, 0, 20, 0);
			break;
		
		case 11:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "welcome_stinger", vVar1, uVar0, 0, 20, 0);
			break;
		
		case 12:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "spin_wheel", vVar1, uVar0, 0, 20, 0);
			break;
		
		case 13:
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "spin_wheel_win", vVar1, uVar0, 0, 20, 0);
			break;
	}
}

char* func_316(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "dlc_vw_casino_slot_machine_ak_npc_sounds";
		
		case 2:
			return "dlc_vw_casino_slot_machine_ir_npc_sounds";
		
		case 3:
			return "dlc_vw_casino_slot_machine_rsr_npc_sounds";
		
		case 4:
			return "dlc_vw_casino_slot_machine_fs_npc_sounds";
		
		case 5:
			return "dlc_vw_casino_slot_machine_ds_npc_sounds";
		
		case 6:
			return "dlc_vw_casino_slot_machine_kd_npc_sounds";
		
		case 7:
			return "dlc_vw_casino_slot_machine_td_npc_sounds";
		
		case 8:
			return "dlc_vw_casino_slot_machine_hz_npc_sounds";
		
		default:
	}
	return "";
}

void func_317(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	if (Local_47[iParam0 /*21*/].f_6[iParam1] != 0f)
	{
		fVar0 = (Local_47[iParam0 /*21*/].f_2[iParam1] - Local_47[iParam0 /*21*/].f_6[iParam1]);
		fVar1 = (fVar0 % 22.5f);
		if (GAMEPLAY::ABSF(fVar1) <= 2.5f)
		{
			if (fVar1 < 0f)
			{
				Local_47[iParam0 /*21*/].f_2[iParam1] = (Local_47[iParam0 /*21*/].f_2[iParam1] - IntToFloat(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(3, 8)));
			}
			else
			{
				Local_47[iParam0 /*21*/].f_2[iParam1] = (Local_47[iParam0 /*21*/].f_2[iParam1] + IntToFloat(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(3, 8)));
			}
		}
	}
}

void func_318(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[8];
	int iVar13;
	int iVar14[3];
	
	uParam0->f_4[0] = 0f;
	uParam0->f_4[1] = 0f;
	uParam0->f_4[2] = 0f;
	switch (iParam1)
	{
		case 1:
		case 2:
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 4);
			iVar14[0] = iVar2;
			iVar14[1] = iVar2;
			iVar13 = 0;
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (iVar0 != iVar14[0] && iVar0 != 7)
				{
					iVar4[iVar13] = iVar0;
					iVar13++;
				}
				iVar0++;
			}
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar13);
			iVar14[2] = iVar4[iVar2];
			break;
		
		case 3:
		case 4:
		case 5:
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 6);
			iVar14[0] = iVar2;
			iVar13 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (iVar0 != iVar14[0] || iVar14[0] == 0)
				{
					iVar4[iVar13] = iVar0;
					iVar13++;
				}
				iVar0++;
			}
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar13);
			iVar14[1] = iVar4[iVar2];
			iVar13 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (iVar0 != iVar14[1] || iVar14[1] == 0)
				{
					iVar4[iVar13] = iVar0;
					iVar13++;
				}
				iVar0++;
			}
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar13);
			iVar14[2] = iVar4[iVar2];
			break;
		
		case 6:
		case 7:
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 3);
			iVar14[0] = iVar2;
			iVar14[1] = iVar2;
			iVar14[2] = iVar2;
			break;
		
		case 9:
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5, 6);
			iVar14[0] = iVar2;
			iVar14[1] = iVar2;
			iVar14[2] = 0;
			break;
		
		case 8:
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(4, 5);
			iVar14[0] = iVar2;
			iVar14[1] = iVar2;
			iVar14[2] = iVar2;
			break;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = 0;
		if (iVar14[iVar0] == 0)
		{
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Local_1182.f_225);
			uParam0->f_4[iVar0] = (IntToFloat(iVar2) + 0.5f);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < Local_1182.f_225)
			{
				if (Local_1182.f_226[iVar0 /*17*/][iVar1] == iVar14[iVar0])
				{
					iVar3++;
				}
				iVar1++;
			}
			iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar3);
			iVar3 = 0;
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_1182.f_225)
			{
				if (Local_1182.f_226[iVar0 /*17*/][iVar1] == iVar14[iVar0])
				{
					if (iVar3 == iVar2)
					{
						uParam0->f_4[iVar0] = SYSTEM::TO_FLOAT(iVar1);
						iVar1 = Local_1182.f_225;
					}
					iVar3++;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_319()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6;
	int iVar7[3];
	int iVar11[3];
	bool bVar15;
	float fVar16;
	float fVar17;
	
	iVar1 = 0;
	while (iVar1 < 54)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_2242[func_11(iVar1)], func_10(iVar1)))
		{
		}
		else if (GAMEPLAY::IS_BIT_SET(Local_2575.f_653[func_11(iVar1)], func_10(iVar1)) || ((iVar1 == iLocal_1959 && GAMEPLAY::IS_BIT_SET(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10, 0)) && !GAMEPLAY::IS_BIT_SET(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10, 2)))
		{
			if (iVar1 == iLocal_1959 && GAMEPLAY::IS_BIT_SET(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10, 2))
			{
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					iVar7[iVar0] = 0;
					iVar11[iVar0] = 0;
					if (func_311(&(Local_2575.f_489[iVar1 /*2*/])))
					{
						if (func_5(&(Local_2575.f_489[iVar1 /*2*/]), (2000 + (750 * iVar0)), 0))
						{
							if (GAMEPLAY::IS_BIT_SET(Local_2575.f_656[func_11(iVar1)], func_10(iVar1)))
							{
								if (iVar0 > 0)
								{
									if (iVar11[(iVar0 - 1)])
									{
										if (func_311(&(Local_1536[iVar1 /*5*/][(iVar0 - 1) /*2*/])))
										{
											if (func_5(&(Local_1536[iVar1 /*5*/][(iVar0 - 1) /*2*/]), 150, 0))
											{
												iVar7[iVar0] = 1;
												if (Local_47[iVar1 /*21*/].f_10[iVar0] == -1f)
												{
													Local_47[iVar1 /*21*/].f_10[iVar0] = ((Local_2575.f_217[iVar1 /*4*/][iVar0] * 22.5f) + IntToFloat(SYSTEM::FLOOR((Local_47[iVar1 /*21*/].f_2[iVar0] / 360f)) * 360));
												}
											}
										}
										else
										{
											func_6(&(Local_1536[iVar1 /*5*/][(iVar0 - 1) /*2*/]), 0, 0);
										}
									}
								}
								else
								{
									iVar7[iVar0] = 1;
									if (Local_47[iVar1 /*21*/].f_10[iVar0] == -1f)
									{
										Local_47[iVar1 /*21*/].f_10[iVar0] = ((Local_2575.f_217[iVar1 /*4*/][iVar0] * 22.5f) + IntToFloat(SYSTEM::FLOOR((Local_47[iVar1 /*21*/].f_2[iVar0] / 360f)) * 360));
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1965[iVar1 /*4*/][iVar0]))
					{
						if (!iVar7[iVar0])
						{
							func_317(iVar1, iVar0);
						}
						if (iLocal_1959 == iVar1)
						{
							if (!iVar7[iVar0])
							{
								if (!GAMEPLAY::IS_BIT_SET(uLocal_1472, (8 + iVar0)))
								{
									vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_1965[iVar1 /*4*/][iVar0], 1) };
									vVar3.z = (vVar3.z - 10f);
									ENTITY::SET_ENTITY_COORDS(Local_1965[iVar1 /*4*/][iVar0], vVar3, 1, 0, 0, 1);
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_2237[iVar0]))
									{
										vVar3 = { ENTITY::GET_ENTITY_COORDS(uLocal_2237[iVar0], 1) };
										vVar3.z = (vVar3.z + 10f);
										ENTITY::SET_ENTITY_COORDS(uLocal_2237[iVar0], vVar3, 1, 0, 0, 1);
										INTERIOR::FORCE_ROOM_FOR_ENTITY(uLocal_2237[iVar0], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
										GAMEPLAY::SET_BIT(&uLocal_1472, (8 + iVar0));
									}
								}
							}
						}
						func_214(iVar1, &vVar3, &uVar6);
						ENTITY::SET_ENTITY_ROTATION(Local_1965[iVar1 /*4*/][iVar0], Local_47[iVar1 /*21*/].f_2[iVar0], 0f, uVar6, 2, 1);
						if (iLocal_1959 == iVar1 && ENTITY::DOES_ENTITY_EXIST(uLocal_2237[iVar0]))
						{
							ENTITY::SET_ENTITY_ROTATION(uLocal_2237[iVar0], Local_47[iVar1 /*21*/].f_2[iVar0], 0f, uVar6, 2, 1);
						}
						Local_47[iVar1 /*21*/].f_6[iVar0] = Local_47[iVar1 /*21*/].f_2[iVar0];
					}
					if (iVar7[iVar0])
					{
						fVar16 = ((Local_2575.f_217[iVar1 /*4*/][iVar0] * 22.5f) - (Local_47[iVar1 /*21*/].f_2[iVar0] % 360f));
						if (GAMEPLAY::ABSF(fVar16) <= 20f || (Local_47[iVar1 /*21*/].f_10[iVar0] != -1f && Local_47[iVar1 /*21*/].f_2[iVar0] >= Local_47[iVar1 /*21*/].f_10[iVar0]))
						{
							Local_47[iVar1 /*21*/].f_2[iVar0] = (Local_2575.f_217[iVar1 /*4*/][iVar0] * 22.5f);
							if (iLocal_1959 == iVar1)
							{
								if (GAMEPLAY::IS_BIT_SET(uLocal_1472, (8 + iVar0)))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_1965[iVar1 /*4*/][iVar0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_2237[iVar0]))
									{
										vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_1965[iVar1 /*4*/][iVar0], 1) };
										vVar3.z = (vVar3.z + 10f);
										ENTITY::SET_ENTITY_COORDS(Local_1965[iVar1 /*4*/][iVar0], vVar3, 1, 0, 0, 1);
										INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_1965[iVar1 /*4*/][iVar0], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
										vVar3 = { ENTITY::GET_ENTITY_COORDS(uLocal_2237[iVar0], 1) };
										vVar3.z = (vVar3.z - 10f);
										ENTITY::SET_ENTITY_COORDS(uLocal_2237[iVar0], vVar3, 1, 0, 0, 1);
										GAMEPLAY::CLEAR_BIT(&uLocal_1472, (8 + iVar0));
									}
									func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_1959 /*21*/].f_17, 9);
									if (Local_1182.f_1[0 /*65*/][uLocal_1925[0]] == 6)
									{
										func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_1959 /*21*/].f_17, 10);
									}
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_1965[iVar1 /*4*/][iVar0]))
							{
								iVar11[iVar0] = 1;
								ENTITY::SET_ENTITY_ROTATION(Local_1965[iVar1 /*4*/][iVar0], Local_47[iVar1 /*21*/].f_2[iVar0], 0f, uVar6, 2, 1);
								if (iLocal_1959 == iVar1 && ENTITY::DOES_ENTITY_EXIST(uLocal_2237[iVar0]))
								{
									ENTITY::SET_ENTITY_ROTATION(uLocal_2237[iVar0], Local_47[iVar1 /*21*/].f_2[iVar0], 0f, uVar6, 2, 1);
								}
							}
						}
						else
						{
							Local_47[iVar1 /*21*/].f_2[iVar0] = (Local_47[iVar1 /*21*/].f_2[iVar0] + (600f * SYSTEM::TIMESTEP()));
						}
					}
					else
					{
						Local_47[iVar1 /*21*/].f_2[iVar0] = (Local_47[iVar1 /*21*/].f_2[iVar0] + (600f * SYSTEM::TIMESTEP()));
					}
					iVar0++;
				}
				if (iVar1 == iLocal_1959)
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_1486[func_11(iVar1)], func_10(iVar1)))
					{
						func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_1959 /*21*/].f_17, 7);
						func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_1959 /*21*/].f_17, 8);
						GAMEPLAY::SET_BIT(&(uLocal_1486[func_11(iVar1)]), func_10(iVar1));
					}
				}
				if (func_320(iVar1, iVar11[2]))
				{
					if (!func_311(&(Local_1807[iVar1 /*2*/])))
					{
						func_6(&(Local_1807[iVar1 /*2*/]), 1, 0);
					}
					else if (func_5(&(Local_1807[iVar1 /*2*/]), 1000, 1) && !GAMEPLAY::IS_BIT_SET(uLocal_1472, 12))
					{
						if (iLocal_1959 == iVar1)
						{
							if (iLocal_1476 == 17)
							{
								iVar2 = func_45(Local_1182.f_1[0 /*65*/][uLocal_1925[0]], Local_1182.f_1[1 /*65*/][uLocal_1925[1]], Local_1182.f_1[2 /*65*/][uLocal_1925[2]]);
								func_174(3, iVar2, Local_47[iLocal_1959 /*21*/], -1);
								func_164(20);
							}
							if (!GAMEPLAY::IS_BIT_SET(uLocal_1472, 12))
							{
								GAMEPLAY::SET_BIT(&uLocal_1472, 12);
							}
						}
					}
					else if (func_5(&(Local_1807[iVar1 /*2*/]), 1250, 1))
					{
						if (!func_5(&(Local_2575.f_489[iVar1 /*2*/]), func_7(iVar1), 0))
						{
							if (func_5(&(Local_2575.f_489[iVar1 /*2*/]), (func_7(iVar1) - 2000), 0))
							{
								bVar15 = true;
								if (Local_47[iVar1 /*21*/].f_15 == -1f)
								{
									Local_47[iVar1 /*21*/].f_15 = (SYSTEM::TO_FLOAT(Local_2575.f_434[iVar1] * 30) + IntToFloat(SYSTEM::FLOOR((Local_47[iVar1 /*21*/].f_14 / 360f)) * 360));
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_2182[iVar1]))
							{
								if (iLocal_1959 == iVar1)
								{
									if (!bVar15)
									{
										if (!GAMEPLAY::IS_BIT_SET(uLocal_1472, 11))
										{
											vVar3 = { ENTITY::GET_ENTITY_COORDS(uLocal_2182[iVar1], 1) };
											vVar3.z = (vVar3.z - 10f);
											ENTITY::SET_ENTITY_COORDS(uLocal_2182[iVar1], vVar3, 1, 0, 0, 1);
											if (ENTITY::DOES_ENTITY_EXIST(uLocal_2241))
											{
												vVar3 = { ENTITY::GET_ENTITY_COORDS(uLocal_2241, 1) };
												vVar3.z = (vVar3.z + 10f);
												ENTITY::SET_ENTITY_COORDS(uLocal_2241, vVar3, 1, 0, 0, 1);
												INTERIOR::FORCE_ROOM_FOR_ENTITY(uLocal_2241, INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
												GAMEPLAY::SET_BIT(&uLocal_1472, 11);
											}
											func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_1959 /*21*/].f_17, 12);
										}
									}
								}
								func_214(iVar1, &vVar3, &uVar6);
								ENTITY::SET_ENTITY_ROTATION(uLocal_2182[iVar1], 0f, Local_47[iVar1 /*21*/].f_14, uVar6, 2, 1);
								if (iLocal_1959 == iVar1 && ENTITY::DOES_ENTITY_EXIST(uLocal_2241))
								{
									ENTITY::SET_ENTITY_ROTATION(uLocal_2241, 0f, Local_47[iVar1 /*21*/].f_14, uVar6, 2, 1);
								}
							}
							if (bVar15)
							{
								fVar17 = (SYSTEM::TO_FLOAT(Local_2575.f_434[iVar1] * 30) - (Local_47[iVar1 /*21*/].f_14 % 360f));
								if (GAMEPLAY::ABSF(fVar17) <= 20f || (Local_47[iVar1 /*21*/].f_15 != -1f && Local_47[iVar1 /*21*/].f_14 >= Local_47[iVar1 /*21*/].f_15))
								{
									Local_47[iVar1 /*21*/].f_14 = SYSTEM::TO_FLOAT(Local_2575.f_434[iVar1] * 30);
									if (iLocal_1959 == iVar1)
									{
										if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 11))
										{
											if (ENTITY::DOES_ENTITY_EXIST(uLocal_2182[iVar1]) && ENTITY::DOES_ENTITY_EXIST(uLocal_2241))
											{
												vVar3 = { ENTITY::GET_ENTITY_COORDS(uLocal_2182[iVar1], 1) };
												vVar3.z = (vVar3.z + 10f);
												ENTITY::SET_ENTITY_COORDS(uLocal_2182[iVar1], vVar3, 1, 0, 0, 1);
												INTERIOR::FORCE_ROOM_FOR_ENTITY(uLocal_2182[iVar1], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
												vVar3 = { ENTITY::GET_ENTITY_COORDS(uLocal_2241, 1) };
												vVar3.z = (vVar3.z - 10f);
												ENTITY::SET_ENTITY_COORDS(uLocal_2241, vVar3, 1, 0, 0, 1);
												GAMEPLAY::CLEAR_BIT(&uLocal_1472, 11);
											}
										}
										if (ENTITY::DOES_ENTITY_EXIST(uLocal_2182[iVar1]))
										{
											ENTITY::SET_ENTITY_ROTATION(uLocal_2182[iVar1], 0f, Local_47[iVar1 /*21*/].f_14, uVar6, 2, 1);
										}
										if (iLocal_1959 == iVar1 && ENTITY::DOES_ENTITY_EXIST(uLocal_2241))
										{
											ENTITY::SET_ENTITY_ROTATION(uLocal_2241, 0f, Local_47[iVar1 /*21*/].f_14, uVar6, 2, 1);
										}
										func_170(PLAYER::PLAYER_ID(), Local_47[iLocal_1959 /*21*/].f_17, 13);
										GAMEPLAY::SET_BIT(&(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
									}
								}
								else
								{
									Local_47[iVar1 /*21*/].f_14 = (Local_47[iVar1 /*21*/].f_14 + (300f * SYSTEM::TIMESTEP()));
								}
							}
							else
							{
								Local_47[iVar1 /*21*/].f_14 = (Local_47[iVar1 /*21*/].f_14 + (300f * SYSTEM::TIMESTEP()));
							}
						}
					}
				}
				else if (iLocal_1959 == iVar1 && iVar11[2])
				{
					if (func_8(iVar1, &Local_47))
					{
						if ((Local_1182.f_1[0 /*65*/][Local_2575[iVar1 /*4*/][0]] == 7 && Local_1182.f_1[1 /*65*/][Local_2575[iVar1 /*4*/][1]] == 7) && Local_1182.f_1[2 /*65*/][Local_2575[iVar1 /*4*/][2]] == 7)
						{
						}
						else
						{
							GAMEPLAY::SET_BIT(&(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
						}
					}
					else
					{
						GAMEPLAY::SET_BIT(&(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
					}
				}
			}
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(uLocal_1486[func_11(iVar1)]), func_10(iVar1));
			Local_47[iVar1 /*21*/].f_15 = -1f;
			iVar0 = 0;
			while (iVar0 < 3)
			{
				Local_47[iVar1 /*21*/].f_10[iVar0] = -1f;
				if (ENTITY::DOES_ENTITY_EXIST(Local_1965[iVar1 /*4*/][iVar0]))
				{
					if (Local_47[iVar1 /*21*/].f_2[iVar0] != (Local_2575.f_217[iVar1 /*4*/][iVar0] * 22.5f))
					{
						func_214(iVar1, &vVar3, &uVar6);
						Local_47[iVar1 /*21*/].f_2[iVar0] = (Local_2575.f_217[iVar1 /*4*/][iVar0] * 22.5f);
						ENTITY::SET_ENTITY_ROTATION(Local_1965[iVar1 /*4*/][iVar0], Local_47[iVar1 /*21*/].f_2[iVar0], 0f, uVar6, 2, 1);
					}
				}
				else
				{
					Local_47[iVar1 /*21*/].f_2[iVar0] = 0f;
				}
				iVar0++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_2182[iVar1]))
			{
				if (Local_47[iVar1 /*21*/].f_14 != SYSTEM::TO_FLOAT(Local_2575.f_434[iVar1] * 30))
				{
					func_214(iVar1, &vVar3, &uVar6);
					Local_47[iVar1 /*21*/].f_14 = SYSTEM::TO_FLOAT(Local_2575.f_434[iVar1] * 30);
					ENTITY::SET_ENTITY_ROTATION(uLocal_2182[iVar1], 0f, Local_47[iVar1 /*21*/].f_14, uVar6, 2, 1);
				}
			}
			else
			{
				Local_47[iVar1 /*21*/].f_14 = 0f;
			}
			if (iLocal_1959 == iVar1)
			{
				if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 12))
				{
					GAMEPLAY::CLEAR_BIT(&uLocal_1472, 12);
				}
				if (GAMEPLAY::IS_BIT_SET(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10, 2) && !GAMEPLAY::IS_BIT_SET(uLocal_1472, 3))
				{
					func_4(&(Local_1536[iVar1 /*5*/][0 /*2*/]));
					func_4(&(Local_1536[iVar1 /*5*/][1 /*2*/]));
					func_4(&(Local_1807[iVar1 /*2*/]));
					GAMEPLAY::CLEAR_BIT(&(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
					GAMEPLAY::CLEAR_BIT(&(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10), 0);
					GAMEPLAY::CLEAR_BIT(&(Local_3235[PLAYER::PLAYER_ID() /*11*/].f_10), 1);
					GAMEPLAY::CLEAR_BIT(&uLocal_1472, 0);
					GAMEPLAY::SET_BIT(&uLocal_1473, 2);
				}
				if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 11))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_2182[iVar1]))
					{
						vVar3 = { ENTITY::GET_ENTITY_COORDS(uLocal_2182[iVar1], 1) };
						vVar3.z = (vVar3.z + 10f);
						ENTITY::SET_ENTITY_COORDS(uLocal_2182[iVar1], vVar3, 1, 0, 0, 1);
						INTERIOR::FORCE_ROOM_FOR_ENTITY(uLocal_2182[iVar1], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
						vVar3 = { ENTITY::GET_ENTITY_COORDS(uLocal_2241, 1) };
						vVar3.z = (vVar3.z - 10f);
						ENTITY::SET_ENTITY_COORDS(uLocal_2241, vVar3, 1, 0, 0, 1);
					}
					GAMEPLAY::CLEAR_BIT(&uLocal_1472, 11);
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (GAMEPLAY::IS_BIT_SET(uLocal_1472, (8 + iVar0)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1965[iVar1 /*4*/][iVar0]))
						{
							vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_1965[iVar1 /*4*/][iVar0], 1) };
							vVar3.z = (vVar3.z + 10f);
							ENTITY::SET_ENTITY_COORDS(Local_1965[iVar1 /*4*/][iVar0], vVar3, 1, 0, 0, 1);
							INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_1965[iVar1 /*4*/][iVar0], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
							vVar3 = { ENTITY::GET_ENTITY_COORDS(uLocal_2237[iVar0], 1) };
							vVar3.z = (vVar3.z - 10f);
							ENTITY::SET_ENTITY_COORDS(uLocal_2237[iVar0], vVar3, 1, 0, 0, 1);
						}
						GAMEPLAY::CLEAR_BIT(&uLocal_1472, (8 + iVar0));
					}
					iVar0++;
				}
			}
			else
			{
				func_4(&(Local_1536[iVar1 /*5*/][0 /*2*/]));
				func_4(&(Local_1536[iVar1 /*5*/][1 /*2*/]));
				func_4(&(Local_1807[iVar1 /*2*/]));
			}
		}
		iVar1++;
	}
}

int func_320(int iParam0, var uParam1)
{
	if (((func_8(iParam0, &Local_47) && Local_1182.f_1[0 /*65*/][Local_2575[iParam0 /*4*/][0]] == 7) && Local_1182.f_1[1 /*65*/][Local_2575[iParam0 /*4*/][1]] == 7) && Local_1182.f_1[2 /*65*/][Local_2575[iParam0 /*4*/][2]] == 7)
	{
		if (func_311(&(Local_2575.f_489[iParam0 /*2*/])))
		{
			if (uParam1 || func_5(&(Local_2575.f_489[iParam0 /*2*/]), 6500, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_321()
{
	var uVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6;
	char cVar7[64];
	
	iVar2 = 0;
	while (iVar2 < 54)
	{
		if (func_322(iVar2))
		{
			if (func_8(iVar2, &Local_47))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2182[iVar2]))
				{
					if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
					{
						StringCopy(&cVar7, "vw_Prop_vw_slot_wheel_0", 64);
						StringIntConCat(&cVar7, Local_47[iVar2 /*21*/].f_17, 64);
						StringConCat(&cVar7, "a", 64);
						uVar0 = GAMEPLAY::GET_HASH_KEY(&cVar7);
						STREAMING::REQUEST_MODEL(uVar0);
						if (STREAMING::HAS_MODEL_LOADED(uVar0))
						{
							func_214(iVar2, &vVar3, &uVar6);
							vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, uVar6, 0f, -0.12f, 1.6f) };
							uLocal_2182[iVar2] = OBJECT::CREATE_OBJECT(uVar0, vVar3, 0, 0, 1);
							ENTITY::FREEZE_ENTITY_POSITION(uLocal_2182[iVar2], 1);
							ENTITY::SET_ENTITY_ROTATION(uLocal_2182[iVar2], 0f, 0f, uVar6, 2, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uVar0);
						}
					}
				}
			}
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1965[iVar2 /*4*/][iVar1]))
				{
					if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
					{
						StringCopy(&cVar7, "vw_Prop_Casino_Slot_0", 64);
						StringIntConCat(&cVar7, Local_47[iVar2 /*21*/].f_17, 64);
						StringConCat(&cVar7, "a_reels", 64);
						uVar0 = GAMEPLAY::GET_HASH_KEY(&cVar7);
						STREAMING::REQUEST_MODEL(uVar0);
						if (STREAMING::HAS_MODEL_LOADED(uVar0))
						{
							func_214(iVar2, &vVar3, &uVar6);
							if (iVar1 == 0)
							{
								vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, uVar6, -0.115f, 0.047f, 0.906f) };
							}
							else if (iVar1 == 1)
							{
								vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, uVar6, 0.005f, 0.047f, 0.906f) };
							}
							else if (iVar1 == 2)
							{
								vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, uVar6, 0.125f, 0.047f, 0.906f) };
							}
							Local_1965[iVar2 /*4*/][iVar1] = OBJECT::CREATE_OBJECT(uVar0, vVar3, 0, 0, 1);
							ENTITY::FREEZE_ENTITY_POSITION(Local_1965[iVar2 /*4*/][iVar1], 1);
							ENTITY::SET_ENTITY_COLLISION(Local_1965[iVar2 /*4*/][iVar1], 0, 0);
							ENTITY::SET_ENTITY_ROTATION(Local_1965[iVar2 /*4*/][iVar1], 0f, 0f, uVar6, 2, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uVar0);
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1965[iVar2 /*4*/][iVar1]))
				{
					OBJECT::DELETE_OBJECT(&(Local_1965[iVar2 /*4*/][iVar1]));
				}
				iVar1++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_2182[iVar2]))
			{
				OBJECT::DELETE_OBJECT(&(uLocal_2182[iVar2]));
			}
		}
		iVar2++;
	}
	if (iLocal_1959 >= 0)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2237[iVar1]))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					StringCopy(&cVar7, "Vw_prop_casino_slot_0", 64);
					StringIntConCat(&cVar7, Local_47[iLocal_1959 /*21*/].f_17, 64);
					StringConCat(&cVar7, "b_reels", 64);
					uVar0 = GAMEPLAY::GET_HASH_KEY(&cVar7);
					STREAMING::REQUEST_MODEL(uVar0);
					if (STREAMING::HAS_MODEL_LOADED(uVar0))
					{
						func_214(iLocal_1959, &vVar3, &uVar6);
						if (iVar1 == 0)
						{
							vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, uVar6, -0.115f, 0.047f, 0.906f) };
						}
						else if (iVar1 == 1)
						{
							vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, uVar6, 0.005f, 0.047f, 0.906f) };
						}
						else if (iVar1 == 2)
						{
							vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, uVar6, 0.125f, 0.047f, 0.906f) };
						}
						vVar3.z = (vVar3.z - 10f);
						uLocal_2237[iVar1] = OBJECT::CREATE_OBJECT(uVar0, vVar3, 0, 0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(uLocal_2237[iVar1], 1);
						ENTITY::SET_ENTITY_ROTATION(uLocal_2237[iVar1], 0f, 0f, uVar6, 2, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uVar0);
					}
				}
			}
			iVar1++;
		}
		if (func_8(iLocal_1959, &Local_47))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2241))
			{
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					StringCopy(&cVar7, "vw_prop_vw_slot_wheel_0", 64);
					StringIntConCat(&cVar7, Local_47[iLocal_1959 /*21*/].f_17, 64);
					StringConCat(&cVar7, "b", 64);
					uVar0 = GAMEPLAY::GET_HASH_KEY(&cVar7);
					STREAMING::REQUEST_MODEL(uVar0);
					if (STREAMING::HAS_MODEL_LOADED(uVar0))
					{
						func_214(iLocal_1959, &vVar3, &uVar6);
						vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, uVar6, 0f, -0.12f, 1.6f) };
						vVar3.z = (vVar3.z - 10f);
						uLocal_2241 = OBJECT::CREATE_OBJECT(uVar0, vVar3, 0, 0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(uLocal_2241, 1);
						ENTITY::SET_ENTITY_ROTATION(uLocal_2241, 0f, 0f, uVar6, 2, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uVar0);
					}
				}
			}
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_2237[iVar1]))
			{
				OBJECT::DELETE_OBJECT(&(uLocal_2237[iVar1]));
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_2241))
		{
			OBJECT::DELETE_OBJECT(&uLocal_2241);
		}
	}
}

int func_322(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	
	func_214(iParam0, &vVar0, &uVar3);
	if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_95(PLAYER::PLAYER_ID()), vVar0, 1) <= 10f)
	{
		return 1;
	}
	return 0;
}

void func_323()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	var uVar6;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_1489[iVar0 /*2*/].f_1 == -1)
		{
			iVar1 = func_324(Local_1489[iVar0 /*2*/], iVar0);
			if (iVar1 != -1)
			{
				Local_1489[iVar0 /*2*/] = iVar1;
				Local_1489[iVar0 /*2*/].f_1 = AUDIO::GET_SOUND_ID();
				func_214(iVar1, &vVar2, &uVar5);
				vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar2, uVar5, 0f, -0.2f, 1f) };
				uVar6 = func_171(Local_47[iVar1 /*21*/].f_17);
				AUDIO::PLAY_SOUND_FROM_COORD(Local_1489[iVar0 /*2*/].f_1, "attract_loop", vVar2, uVar6, 0, 0, 0);
			}
		}
		else if (Local_2575.f_598[Local_1489[iVar0 /*2*/]] != -1 || func_300(Local_1489[iVar0 /*2*/]))
		{
			AUDIO::STOP_SOUND(Local_1489[iVar0 /*2*/].f_1);
			AUDIO::RELEASE_SOUND_ID(Local_1489[iVar0 /*2*/].f_1);
			Local_1489[iVar0 /*2*/].f_1 = -1;
		}
		else if (AUDIO::HAS_SOUND_FINISHED(Local_1489[iVar0 /*2*/].f_1))
		{
			AUDIO::RELEASE_SOUND_ID(Local_1489[iVar0 /*2*/].f_1);
			Local_1489[iVar0 /*2*/].f_1 = -1;
		}
		iVar0++;
	}
}

int func_324(int iParam0, int iParam1)
{
	int iVar0[36];
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	bool bVar42;
	int iVar43;
	
	if (iParam1 < 2)
	{
		iVar40 = 0;
		iVar41 = 35;
	}
	else
	{
		iVar40 = 36;
		iVar41 = 53;
	}
	iVar38 = iVar40;
	while (iVar38 <= iVar41)
	{
		if (Local_2575.f_598[iVar38] == -1 && !func_300(iVar38))
		{
			bVar42 = false;
			iVar39 = 0;
			while (iVar39 < 4)
			{
				if (Local_1489[iVar39 /*2*/] == iVar38)
				{
					bVar42 = true;
					iVar39 = 4;
				}
				iVar39++;
			}
			if (!bVar42)
			{
				iVar0[iVar37] = iVar38;
				iVar37++;
			}
		}
		iVar38++;
	}
	iVar43 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar37);
	iVar38 = 0;
	while (iVar38 < iVar37)
	{
		if (iParam0 != -1 && (iVar0[iVar43] == iParam0 || Local_47[iVar0[iVar43] /*21*/].f_17 == Local_47[iParam0 /*21*/].f_17))
		{
			iVar43++;
			if (iVar43 >= iVar37)
			{
				iVar43 = 0;
			}
		}
		else
		{
			return iVar0[iVar43];
		}
		iVar38++;
	}
	return -1;
}

void func_325()
{
	if (func_329())
	{
		func_342();
	}
	if (Global_1689887)
	{
		Global_1689887 = 0;
		func_342();
	}
	if (Global_2405071.f_2668 && Global_2409274 != 0)
	{
		if (Global_2409274 != 6)
		{
			func_342();
		}
	}
	if (!func_327(PLAYER::PLAYER_ID()))
	{
		func_342();
	}
	if ((func_326() && Global_1671295.f_2688 != 123) && CAM::IS_SCREEN_FADED_OUT())
	{
		func_342();
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_34, 9))
	{
		func_342();
	}
}

var func_326()
{
	return GAMEPLAY::IS_BIT_SET(Global_1671295.f_3, 2);
}

int func_327(int iParam0)
{
	if (iParam0 != func_58())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_328(Global_2424047[iParam0 /*416*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_328(int iParam0)
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

int func_329()
{
	var uVar0;
	
	func_337(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_336())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_335())
	{
		return 1;
	}
	if (func_334(157))
	{
		if (!func_333())
		{
			return 1;
		}
	}
	if (func_334(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_330() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_330()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_330()
{
	switch (func_332())
	{
		case 0:
			return func_331();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_331()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_332()
{
	return Global_25765;
}

bool func_333()
{
	return Global_2448756.f_586;
}

int func_334(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_335()
{
	return Global_2458613;
}

bool func_336()
{
	return Global_2448756.f_581;
}

void func_337(var uParam0)
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
					func_338(iVar0);
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

void func_338(int iParam0)
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
						if (func_339(uVar4, &bVar5))
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

int func_339(var uParam0, var uParam1)
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

void func_340()
{
	SYSTEM::WAIT(0);
}

void func_341(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_1[0 /*65*/][0] = 0;
	uParam0->f_1[0 /*65*/][1] = 6;
	uParam0->f_1[0 /*65*/][2] = 1;
	uParam0->f_1[0 /*65*/][3] = 2;
	uParam0->f_1[0 /*65*/][4] = 3;
	uParam0->f_1[0 /*65*/][5] = 4;
	uParam0->f_1[0 /*65*/][6] = 7;
	uParam0->f_1[0 /*65*/][7] = 2;
	uParam0->f_1[0 /*65*/][8] = 1;
	uParam0->f_1[0 /*65*/][9] = 3;
	uParam0->f_1[0 /*65*/][10] = 4;
	uParam0->f_1[0 /*65*/][11] = 1;
	uParam0->f_1[0 /*65*/][12] = 0;
	uParam0->f_1[0 /*65*/][13] = 5;
	uParam0->f_1[0 /*65*/][14] = 1;
	uParam0->f_1[0 /*65*/][15] = 0;
	uParam0->f_1[0 /*65*/][16] = 3;
	uParam0->f_1[0 /*65*/][17] = 0;
	uParam0->f_1[0 /*65*/][18] = 4;
	uParam0->f_1[0 /*65*/][19] = 2;
	uParam0->f_1[0 /*65*/][20] = 1;
	uParam0->f_1[0 /*65*/][21] = 2;
	uParam0->f_1[0 /*65*/][22] = 1;
	uParam0->f_1[0 /*65*/][23] = 1;
	uParam0->f_1[0 /*65*/][24] = 7;
	uParam0->f_1[0 /*65*/][25] = 3;
	uParam0->f_1[0 /*65*/][26] = 1;
	uParam0->f_1[0 /*65*/][27] = 2;
	uParam0->f_1[0 /*65*/][28] = 4;
	uParam0->f_1[0 /*65*/][29] = 5;
	uParam0->f_1[0 /*65*/][30] = 7;
	uParam0->f_1[0 /*65*/][31] = 3;
	uParam0->f_1[0 /*65*/][32] = 0;
	uParam0->f_1[0 /*65*/][33] = 4;
	uParam0->f_1[0 /*65*/][34] = 6;
	uParam0->f_1[0 /*65*/][35] = 1;
	uParam0->f_1[0 /*65*/][36] = 2;
	uParam0->f_1[0 /*65*/][37] = 0;
	uParam0->f_1[0 /*65*/][38] = 2;
	uParam0->f_1[0 /*65*/][39] = 0;
	uParam0->f_1[0 /*65*/][40] = 3;
	uParam0->f_1[0 /*65*/][41] = 5;
	uParam0->f_1[0 /*65*/][42] = 3;
	uParam0->f_1[0 /*65*/][43] = 4;
	uParam0->f_1[0 /*65*/][44] = 2;
	uParam0->f_1[0 /*65*/][45] = 1;
	uParam0->f_1[0 /*65*/][46] = 2;
	uParam0->f_1[0 /*65*/][47] = 1;
	uParam0->f_1[0 /*65*/][48] = 6;
	uParam0->f_1[0 /*65*/][49] = 1;
	uParam0->f_1[0 /*65*/][50] = 7;
	uParam0->f_1[0 /*65*/][51] = 5;
	uParam0->f_1[0 /*65*/][52] = 7;
	uParam0->f_1[0 /*65*/][53] = 1;
	uParam0->f_1[0 /*65*/][54] = 2;
	uParam0->f_1[0 /*65*/][55] = 4;
	uParam0->f_1[0 /*65*/][56] = 1;
	uParam0->f_1[0 /*65*/][57] = 2;
	uParam0->f_1[0 /*65*/][58] = 3;
	uParam0->f_1[0 /*65*/][59] = 5;
	uParam0->f_1[0 /*65*/][60] = 7;
	uParam0->f_1[0 /*65*/][61] = 4;
	uParam0->f_1[0 /*65*/][62] = 0;
	uParam0->f_1[0 /*65*/][63] = 6;
	uParam0->f_1[1 /*65*/][0] = 3;
	uParam0->f_1[1 /*65*/][1] = 0;
	uParam0->f_1[1 /*65*/][2] = 1;
	uParam0->f_1[1 /*65*/][3] = 6;
	uParam0->f_1[1 /*65*/][4] = 3;
	uParam0->f_1[1 /*65*/][5] = 1;
	uParam0->f_1[1 /*65*/][6] = 0;
	uParam0->f_1[1 /*65*/][7] = 3;
	uParam0->f_1[1 /*65*/][8] = 2;
	uParam0->f_1[1 /*65*/][9] = 7;
	uParam0->f_1[1 /*65*/][10] = 5;
	uParam0->f_1[1 /*65*/][11] = 0;
	uParam0->f_1[1 /*65*/][12] = 1;
	uParam0->f_1[1 /*65*/][13] = 7;
	uParam0->f_1[1 /*65*/][14] = 4;
	uParam0->f_1[1 /*65*/][15] = 0;
	uParam0->f_1[1 /*65*/][16] = 1;
	uParam0->f_1[1 /*65*/][17] = 1;
	uParam0->f_1[1 /*65*/][18] = 0;
	uParam0->f_1[1 /*65*/][19] = 2;
	uParam0->f_1[1 /*65*/][20] = 5;
	uParam0->f_1[1 /*65*/][21] = 1;
	uParam0->f_1[1 /*65*/][22] = 4;
	uParam0->f_1[1 /*65*/][23] = 0;
	uParam0->f_1[1 /*65*/][24] = 3;
	uParam0->f_1[1 /*65*/][25] = 0;
	uParam0->f_1[1 /*65*/][26] = 3;
	uParam0->f_1[1 /*65*/][27] = 0;
	uParam0->f_1[1 /*65*/][28] = 1;
	uParam0->f_1[1 /*65*/][29] = 0;
	uParam0->f_1[1 /*65*/][30] = 6;
	uParam0->f_1[1 /*65*/][31] = 0;
	uParam0->f_1[1 /*65*/][32] = 0;
	uParam0->f_1[1 /*65*/][33] = 1;
	uParam0->f_1[1 /*65*/][34] = 0;
	uParam0->f_1[1 /*65*/][35] = 3;
	uParam0->f_1[1 /*65*/][36] = 0;
	uParam0->f_1[1 /*65*/][37] = 1;
	uParam0->f_1[1 /*65*/][38] = 0;
	uParam0->f_1[1 /*65*/][39] = 2;
	uParam0->f_1[1 /*65*/][40] = 2;
	uParam0->f_1[1 /*65*/][41] = 4;
	uParam0->f_1[1 /*65*/][42] = 0;
	uParam0->f_1[1 /*65*/][43] = 0;
	uParam0->f_1[1 /*65*/][44] = 0;
	uParam0->f_1[1 /*65*/][45] = 7;
	uParam0->f_1[1 /*65*/][46] = 0;
	uParam0->f_1[1 /*65*/][47] = 2;
	uParam0->f_1[1 /*65*/][48] = 7;
	uParam0->f_1[1 /*65*/][49] = 5;
	uParam0->f_1[1 /*65*/][50] = 0;
	uParam0->f_1[1 /*65*/][51] = 1;
	uParam0->f_1[1 /*65*/][52] = 0;
	uParam0->f_1[1 /*65*/][53] = 0;
	uParam0->f_1[1 /*65*/][54] = 0;
	uParam0->f_1[1 /*65*/][55] = 1;
	uParam0->f_1[1 /*65*/][56] = 5;
	uParam0->f_1[1 /*65*/][57] = 5;
	uParam0->f_1[1 /*65*/][58] = 0;
	uParam0->f_1[1 /*65*/][59] = 7;
	uParam0->f_1[1 /*65*/][60] = 0;
	uParam0->f_1[1 /*65*/][61] = 0;
	uParam0->f_1[1 /*65*/][62] = 1;
	uParam0->f_1[1 /*65*/][63] = 6;
	uParam0->f_1[2 /*65*/][0] = 0;
	uParam0->f_1[2 /*65*/][1] = 1;
	uParam0->f_1[2 /*65*/][2] = 7;
	uParam0->f_1[2 /*65*/][3] = 6;
	uParam0->f_1[2 /*65*/][4] = 0;
	uParam0->f_1[2 /*65*/][5] = 2;
	uParam0->f_1[2 /*65*/][6] = 2;
	uParam0->f_1[2 /*65*/][7] = 4;
	uParam0->f_1[2 /*65*/][8] = 0;
	uParam0->f_1[2 /*65*/][9] = 1;
	uParam0->f_1[2 /*65*/][10] = 0;
	uParam0->f_1[2 /*65*/][11] = 5;
	uParam0->f_1[2 /*65*/][12] = 0;
	uParam0->f_1[2 /*65*/][13] = 2;
	uParam0->f_1[2 /*65*/][14] = 5;
	uParam0->f_1[2 /*65*/][15] = 0;
	uParam0->f_1[2 /*65*/][16] = 0;
	uParam0->f_1[2 /*65*/][17] = 3;
	uParam0->f_1[2 /*65*/][18] = 0;
	uParam0->f_1[2 /*65*/][19] = 1;
	uParam0->f_1[2 /*65*/][20] = 0;
	uParam0->f_1[2 /*65*/][21] = 0;
	uParam0->f_1[2 /*65*/][22] = 0;
	uParam0->f_1[2 /*65*/][23] = 2;
	uParam0->f_1[2 /*65*/][24] = 1;
	uParam0->f_1[2 /*65*/][25] = 0;
	uParam0->f_1[2 /*65*/][26] = 1;
	uParam0->f_1[2 /*65*/][27] = 0;
	uParam0->f_1[2 /*65*/][28] = 0;
	uParam0->f_1[2 /*65*/][29] = 2;
	uParam0->f_1[2 /*65*/][30] = 0;
	uParam0->f_1[2 /*65*/][31] = 1;
	uParam0->f_1[2 /*65*/][32] = 0;
	uParam0->f_1[2 /*65*/][33] = 4;
	uParam0->f_1[2 /*65*/][34] = 0;
	uParam0->f_1[2 /*65*/][35] = 4;
	uParam0->f_1[2 /*65*/][36] = 0;
	uParam0->f_1[2 /*65*/][37] = 0;
	uParam0->f_1[2 /*65*/][38] = 0;
	uParam0->f_1[2 /*65*/][39] = 3;
	uParam0->f_1[2 /*65*/][40] = 0;
	uParam0->f_1[2 /*65*/][41] = 4;
	uParam0->f_1[2 /*65*/][42] = 0;
	uParam0->f_1[2 /*65*/][43] = 0;
	uParam0->f_1[2 /*65*/][44] = 7;
	uParam0->f_1[2 /*65*/][45] = 0;
	uParam0->f_1[2 /*65*/][46] = 2;
	uParam0->f_1[2 /*65*/][47] = 0;
	uParam0->f_1[2 /*65*/][48] = 5;
	uParam0->f_1[2 /*65*/][49] = 4;
	uParam0->f_1[2 /*65*/][50] = 0;
	uParam0->f_1[2 /*65*/][51] = 3;
	uParam0->f_1[2 /*65*/][52] = 0;
	uParam0->f_1[2 /*65*/][53] = 0;
	uParam0->f_1[2 /*65*/][54] = 0;
	uParam0->f_1[2 /*65*/][55] = 3;
	uParam0->f_1[2 /*65*/][56] = 0;
	uParam0->f_1[2 /*65*/][57] = 3;
	uParam0->f_1[2 /*65*/][58] = 0;
	uParam0->f_1[2 /*65*/][59] = 2;
	uParam0->f_1[2 /*65*/][60] = 4;
	uParam0->f_1[2 /*65*/][61] = 0;
	uParam0->f_1[2 /*65*/][62] = 0;
	uParam0->f_1[2 /*65*/][63] = 6;
	uParam0->f_278[0] = 0;
	uParam0->f_278[1] = 25;
	uParam0->f_278[2] = 50;
	uParam0->f_278[3] = 75;
	uParam0->f_278[4] = 100;
	uParam0->f_278[5] = 250;
	uParam0->f_278[6] = 1000;
	uParam0->f_278[7] = 500;
	uParam0->f_278[8] = 5;
	uParam0->f_278[9] = 2;
	uParam0->f_226[0 /*17*/][0] = 5;
	uParam0->f_226[0 /*17*/][1] = 2;
	uParam0->f_226[0 /*17*/][2] = 1;
	uParam0->f_226[0 /*17*/][3] = 3;
	uParam0->f_226[0 /*17*/][4] = 7;
	uParam0->f_226[0 /*17*/][5] = 6;
	uParam0->f_226[0 /*17*/][6] = 1;
	uParam0->f_226[0 /*17*/][7] = 4;
	uParam0->f_226[0 /*17*/][8] = 5;
	uParam0->f_226[0 /*17*/][9] = 2;
	uParam0->f_226[0 /*17*/][10] = 3;
	uParam0->f_226[0 /*17*/][11] = 7;
	uParam0->f_226[0 /*17*/][12] = 2;
	uParam0->f_226[0 /*17*/][13] = 4;
	uParam0->f_226[0 /*17*/][14] = 1;
	uParam0->f_226[0 /*17*/][15] = 7;
	uParam0->f_226[1 /*17*/][0] = 5;
	uParam0->f_226[1 /*17*/][1] = 2;
	uParam0->f_226[1 /*17*/][2] = 1;
	uParam0->f_226[1 /*17*/][3] = 3;
	uParam0->f_226[1 /*17*/][4] = 7;
	uParam0->f_226[1 /*17*/][5] = 6;
	uParam0->f_226[1 /*17*/][6] = 1;
	uParam0->f_226[1 /*17*/][7] = 4;
	uParam0->f_226[1 /*17*/][8] = 5;
	uParam0->f_226[1 /*17*/][9] = 2;
	uParam0->f_226[1 /*17*/][10] = 3;
	uParam0->f_226[1 /*17*/][11] = 7;
	uParam0->f_226[1 /*17*/][12] = 2;
	uParam0->f_226[1 /*17*/][13] = 4;
	uParam0->f_226[1 /*17*/][14] = 1;
	uParam0->f_226[1 /*17*/][15] = 7;
	uParam0->f_226[2 /*17*/][0] = 5;
	uParam0->f_226[2 /*17*/][1] = 2;
	uParam0->f_226[2 /*17*/][2] = 1;
	uParam0->f_226[2 /*17*/][3] = 3;
	uParam0->f_226[2 /*17*/][4] = 7;
	uParam0->f_226[2 /*17*/][5] = 6;
	uParam0->f_226[2 /*17*/][6] = 1;
	uParam0->f_226[2 /*17*/][7] = 4;
	uParam0->f_226[2 /*17*/][8] = 5;
	uParam0->f_226[2 /*17*/][9] = 2;
	uParam0->f_226[2 /*17*/][10] = 3;
	uParam0->f_226[2 /*17*/][11] = 7;
	uParam0->f_226[2 /*17*/][12] = 2;
	uParam0->f_226[2 /*17*/][13] = 4;
	uParam0->f_226[2 /*17*/][14] = 1;
	uParam0->f_226[2 /*17*/][15] = 7;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			uParam0->f_197[iVar0 /*9*/][uParam0->f_1[iVar0 /*65*/][iVar1]]++;
			iVar1++;
		}
		iVar0++;
	}
	(uParam1[0 /*21*/])->f_17 = 4;
	(uParam1[1 /*21*/])->f_17 = 5;
	(uParam1[2 /*21*/])->f_17 = 6;
	(uParam1[3 /*21*/])->f_17 = 7;
	(uParam1[4 /*21*/])->f_17 = 8;
	(uParam1[5 /*21*/])->f_17 = 1;
	(uParam1[6 /*21*/])->f_17 = 2;
	(uParam1[7 /*21*/])->f_17 = 3;
	(uParam1[8 /*21*/])->f_17 = 4;
	(uParam1[9 /*21*/])->f_17 = 5;
	(uParam1[10 /*21*/])->f_17 = 6;
	(uParam1[11 /*21*/])->f_17 = 7;
	(uParam1[12 /*21*/])->f_17 = 1;
	(uParam1[13 /*21*/])->f_17 = 2;
	(uParam1[14 /*21*/])->f_17 = 3;
	(uParam1[15 /*21*/])->f_17 = 4;
	(uParam1[16 /*21*/])->f_17 = 5;
	(uParam1[17 /*21*/])->f_17 = 4;
	(uParam1[18 /*21*/])->f_17 = 5;
	(uParam1[19 /*21*/])->f_17 = 1;
	(uParam1[20 /*21*/])->f_17 = 2;
	(uParam1[21 /*21*/])->f_17 = 3;
	(uParam1[22 /*21*/])->f_17 = 7;
	(uParam1[23 /*21*/])->f_17 = 8;
	(uParam1[24 /*21*/])->f_17 = 4;
	(uParam1[25 /*21*/])->f_17 = 5;
	(uParam1[26 /*21*/])->f_17 = 6;
	(uParam1[27 /*21*/])->f_17 = 4;
	(uParam1[28 /*21*/])->f_17 = 5;
	(uParam1[29 /*21*/])->f_17 = 1;
	(uParam1[30 /*21*/])->f_17 = 2;
	(uParam1[31 /*21*/])->f_17 = 3;
	(uParam1[32 /*21*/])->f_17 = 7;
	(uParam1[33 /*21*/])->f_17 = 8;
	(uParam1[34 /*21*/])->f_17 = 4;
	(uParam1[35 /*21*/])->f_17 = 5;
	(uParam1[36 /*21*/])->f_17 = 6;
	(uParam1[37 /*21*/])->f_17 = 8;
	(uParam1[38 /*21*/])->f_17 = 7;
	(uParam1[39 /*21*/])->f_17 = 6;
	(uParam1[40 /*21*/])->f_17 = 5;
	(uParam1[41 /*21*/])->f_17 = 4;
	(uParam1[42 /*21*/])->f_17 = 3;
	(uParam1[43 /*21*/])->f_17 = 2;
	(uParam1[44 /*21*/])->f_17 = 3;
	(uParam1[45 /*21*/])->f_17 = 4;
	(uParam1[46 /*21*/])->f_17 = 5;
	(uParam1[47 /*21*/])->f_17 = 1;
	(uParam1[48 /*21*/])->f_17 = 2;
	(uParam1[49 /*21*/])->f_17 = 6;
	(uParam1[50 /*21*/])->f_17 = 7;
	(uParam1[51 /*21*/])->f_17 = 8;
	(uParam1[52 /*21*/])->f_17 = 4;
	(uParam1[53 /*21*/])->f_17 = 5;
	iVar0 = 0;
	while (iVar0 < 54)
	{
		switch ((uParam1[iVar0 /*21*/])->f_17)
		{
			case 1:
			case 6:
				(uParam1[iVar0 /*21*/])->f_16 = 100;
				break;
			
			case 2:
			case 3:
				(uParam1[iVar0 /*21*/])->f_16 = 25;
				break;
			
			case 4:
			case 8:
				(uParam1[iVar0 /*21*/])->f_16 = 5;
				break;
			
			case 5:
			case 7:
				(uParam1[iVar0 /*21*/])->f_16 = 500;
				break;
		}
		iVar0++;
	}
}

void func_342()
{
	struct<8> Var0;
	int iVar8;
	int iVar9;
	
	if (iLocal_1958 != -1)
	{
		func_196(&iLocal_1958);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_casino_slot_machines_playing"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_casino_slot_machines_playing");
	}
	if (iLocal_1959 != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 23))
		{
			Var0 = { func_194(Local_47[iLocal_1959 /*21*/].f_17) };
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Var0);
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 23);
		}
		if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 19))
		{
			func_163(0, 0);
			func_160(1, -1);
			GAMEPLAY::CLEAR_BIT(&uLocal_1472, 19);
		}
		func_212(0);
	}
	func_182();
	func_29();
	if (GAMEPLAY::IS_BIT_SET(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_309.f_4, 7))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_309.f_4), 7);
		func_31();
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 13))
	{
		if (func_216())
		{
			func_215(0);
		}
		GAMEPLAY::CLEAR_BIT(&uLocal_1472, 13);
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 18))
	{
		STREAMING::REMOVE_ANIM_DICT(func_310());
		GAMEPLAY::CLEAR_BIT(&uLocal_1472, 18);
	}
	iVar9 = 0;
	while (iVar9 < 54)
	{
		iVar8 = 0;
		while (iVar8 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1965[iVar9 /*4*/][iVar8]))
			{
				OBJECT::DELETE_OBJECT(&(Local_1965[iVar9 /*4*/][iVar8]));
			}
			iVar8++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_2182[iVar9]))
		{
			OBJECT::DELETE_OBJECT(&(uLocal_2182[iVar9]));
		}
		iVar9++;
	}
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_2237[iVar8]))
		{
			OBJECT::DELETE_OBJECT(&(uLocal_2237[iVar8]));
		}
		iVar8++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_2241))
	{
		OBJECT::DELETE_OBJECT(&uLocal_2241);
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_1472, 2))
	{
		if (func_12(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			func_17(PLAYER::PLAYER_ID(), 1, 0, 0);
			AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		if (UI::IS_RADAR_HIDDEN())
		{
			UI::DISPLAY_RADAR(1);
		}
		func_16(0);
		GAMEPLAY::CLEAR_BIT(&uLocal_1472, 2);
	}
	func_163(0, 0);
	func_160(1, -1);
	func_343();
}

void func_343()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_344()
{
	if (Global_1689887)
	{
		Global_1689887 = 0;
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
	func_346(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_2575, 660);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_3235, 353);
	if (!func_345())
	{
		func_342();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	}
	else
	{
		func_342();
	}
}

int func_345()
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
		if (func_336())
		{
			return 0;
		}
		if (func_334(155))
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

int func_346(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_343();
			}
			else
			{
				return 0;
			}
		}
		if (!func_347())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_343();
					}
					else
					{
						return 0;
					}
				}
				if (func_336())
				{
					if (!bParam2)
					{
						func_343();
					}
					else
					{
						return 0;
					}
				}
				if (func_334(155))
				{
					if (!bParam2)
					{
						func_343();
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
					func_343();
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
				func_343();
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
			func_343();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_347()
{
	return Global_1312844;
}

void func_348()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 54)
	{
		Local_2575.f_598[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_1489[iVar0 /*2*/].f_1 = -1;
		Local_1489[iVar0 /*2*/] = -1;
		iVar0++;
	}
}

