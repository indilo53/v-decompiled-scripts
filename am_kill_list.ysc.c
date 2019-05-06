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
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	struct<617> Local_110 = { 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_727 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_739[4] = { 0, 0, 0, 0 };
	struct<18> Local_744[32];
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	int iLocal_1323[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1329 = 0;
	int iLocal_1330 = 0;
	int iLocal_1331 = 0;
	float fLocal_1332 = 0f;
	var uLocal_1333[4] = { 0, 0, 0, 0 };
	struct<8> Local_1338[24];
	int iLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	int iLocal_1534[4] = { 0, 0, 0, 0 };
	int iLocal_1539[4] = { 0, 0, 0, 0 };
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	struct<42> Local_1547[32];
	struct<104> Local_2892 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = -1;
	var uLocal_3002 = -1;
	var uLocal_3003 = -1;
	var uLocal_3004 = -1;
	var uLocal_3005 = -1;
	var uLocal_3006 = -1;
	var uLocal_3007 = 0;
	var uLocal_3008 = 32;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	int iLocal_3432 = 0;
	int iLocal_3433 = 0;
	int iLocal_3434 = 0;
	var uLocal_3435[4] = { 0, 0, 0, 0 };
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	int iLocal_3444 = 0;
	struct<2> Local_3445[10];
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	struct<2> Local_3476[5];
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	int iLocal_3491 = 0;
	vector3 vLocal_3492 = { 0f, 0f, 0f };
	int iLocal_3495 = 0;
	var uLocal_3496 = 0;
	int iLocal_3497 = 0;
	int iLocal_3498 = 0;
	int iLocal_3499 = 0;
	int iLocal_3500[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3525 = 0;
	int iLocal_3526[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_3532 = 0;
	var uLocal_3533[4] = { 0, 0, 0, 0 };
	var uLocal_3538[4] = { 0, 0, 0, 0 };
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
	fLocal_1332 = -100f;
	iLocal_3433 = -1;
	iLocal_3434 = -1;
	iLocal_3497 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_837(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_826(ScriptParam_0);
	}
	else
	{
		func_782();
	}
	while (true)
	{
		func_781();
		if (func_774())
		{
			func_782();
		}
		else if (func_771(19))
		{
			func_782();
		}
		if (func_770())
		{
			func_782();
		}
		func_746();
		switch (func_745(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if ((func_744() == 1 && Local_110.f_1 != -1) && Local_110.f_2 != -1)
				{
					func_742();
					func_738(129, Local_110.f_1, Local_110.f_2, 0);
					if (Global_2524719.f_4807 == -1)
					{
						if (!func_737())
						{
							Global_2524719.f_4807 = 0;
						}
						else
						{
							Global_2524719.f_4807 = 1;
						}
					}
					func_736(Local_110.f_30[0 /*3*/]);
					Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 1;
				}
				else if (func_744() == 4)
				{
					Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 3;
				}
				break;
			
			case 1:
				if (func_744() == 1)
				{
					func_731();
					func_730();
					func_712();
					func_422();
					func_162();
					func_161();
					func_160();
				}
				else if (func_744() == 4)
				{
					Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 3;
				}
				break;
			
			case 3:
				func_159(&(Local_110.f_320));
				if (func_158(&(Local_110.f_320)))
				{
					Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 4;
				}
				break;
			
			case 2:
				Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 4;
			
			case 4:
				func_782();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_744())
			{
				case 0:
					if (func_143())
					{
						if (func_138())
						{
							func_135(func_137(129, Local_110.f_1, Local_110.f_2, 0));
							Local_110 = 1;
						}
					}
					break;
				
				case 1:
					func_126();
					func_32();
					func_23();
					if (func_1())
					{
						Local_110 = 4;
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
	int iVar0;
	int iVar1;
	
	if ((GAMEPLAY::IS_BIT_SET(Local_110.f_3, 0) && GAMEPLAY::IS_BIT_SET(Local_110.f_3, 1)) && GAMEPLAY::IS_BIT_SET(Local_110.f_3, 2))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 11))
		{
			return 0;
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 6))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 11))
		{
			return 0;
		}
	}
	if (Local_110.f_241 > 0)
	{
		if (Local_110 != 4)
		{
			if (func_22())
			{
				if (Local_110.f_241 == 3)
				{
					if (func_20())
					{
						if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 11))
						{
							return 1;
						}
					}
				}
				else if (func_18(&(Local_110.f_322), 3000, 0))
				{
					if (func_20())
					{
						return 1;
					}
				}
			}
		}
		if (Local_110.f_241 < 3)
		{
			iVar0 = 0;
			if (Local_110.f_241 >= 1)
			{
				iVar0 = 1;
				iVar1 = 0;
				while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
					{
						if (!func_15(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)), 0))
						{
							if (Local_744[iVar1 /*18*/].f_17 < 2)
							{
								iVar0 = 0;
							}
						}
					}
					iVar1++;
				}
			}
			if (iVar0 == 1)
			{
				if ((!((GAMEPLAY::IS_BIT_SET(Local_110.f_3, 0) && GAMEPLAY::IS_BIT_SET(Local_110.f_3, 1)) && GAMEPLAY::IS_BIT_SET(Local_110.f_3, 2)) && !GAMEPLAY::IS_BIT_SET(Local_110.f_3, 6)) && !GAMEPLAY::IS_BIT_SET(Local_110.f_3, 14))
				{
					GAMEPLAY::SET_BIT(&(Local_110.f_3), 15);
				}
				func_6();
			}
			else if (Local_110.f_241 < 3)
			{
				if (func_3())
				{
					GAMEPLAY::SET_BIT(&(Local_110.f_3), 16);
					GAMEPLAY::SET_BIT(&(Local_110.f_3), 15);
					func_6();
				}
			}
		}
	}
	return 0;
}

int func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
		{
			if (!func_4(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1, 0, 0, 0, 0, 1, 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_4(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(uParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_5(uParam0, (iVar0 - 1), bParam6, iParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (iParam2 && PED::IS_PED_A_PLAYER(iVar2))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
					{
						if (!bParam5)
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_5(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0, iParam1, uParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0, iParam1, uParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(uParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (AI::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || AI::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uParam0, 0), ENTITY::GET_ENTITY_COORDS(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_6()
{
	if (Local_110.f_241 != 3)
	{
		func_8();
		func_7(&(Local_110.f_324), 0, 0);
		Local_110.f_241 = 3;
	}
}

void func_7(var uParam0, bool bParam1, bool bParam2)
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

void func_8()
{
	if (!func_14())
	{
		return;
	}
	if (!GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312576.f_9)
	{
		return;
	}
	func_9();
}

void func_9()
{
	func_11();
	func_10(0);
}

void func_10(bool bParam0)
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

void func_11()
{
	if (!func_13())
	{
	}
	if (func_14())
	{
		UI::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312576.f_12));
		func_12();
		UI::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_12()
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

int func_13()
{
	if (!func_14())
	{
		return 0;
	}
	UI::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312576.f_12));
	func_12();
	return UI::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_14()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_15(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_16(-1, 0) == 8;
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

int func_16(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_17();
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

int func_17()
{
	return Global_1312736;
}

int func_18(var uParam0, int iParam1, bool bParam2)
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

int func_20()
{
	int iVar0;
	
	if (!func_21(&(Local_110.f_328)))
	{
		func_19(&(Local_110.f_328), 0, 0);
	}
	else if (func_18(&(Local_110.f_328), 20000, 0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_48[iVar0]))
		{
			if (Local_110.f_85[iVar0] < 4)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_21(var uParam0)
{
	return uParam0->f_1;
}

int func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_23()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_48[iVar1]))
		{
			if (!func_31(Local_110.f_48[iVar1]))
			{
				switch (Local_110.f_85[iVar1])
				{
					case 0:
						if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_48[iVar1]), 0))
						{
							Local_110.f_85[iVar1] = 1;
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_48[iVar1]), 0) && func_30(iVar1))
						{
							Local_110.f_85[iVar1] = 1;
						}
						break;
					
					case 1:
						if (Local_110.f_241 == 1)
						{
							if (!func_22())
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_48[iVar1]), 0))
								{
									uVar4 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_110.f_48[iVar1]), 0);
									if (func_29(uVar4, 250f))
									{
										Local_110.f_85[iVar1] = 2;
									}
									else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(uVar4)))
									{
										if ((iVar1 % 4) == 0)
										{
											iVar0 = (iVar1 / 4);
											if (iVar0 < 5)
											{
												if (Local_110.f_110[iVar0] == -1 || !func_28(iVar1))
												{
													iVar2 = func_27();
													if (iVar2 != func_26())
													{
														uVar3 = PLAYER::GET_PLAYER_PED(iVar2);
														if (!PED::IS_PED_INJURED(uVar3))
														{
															if (func_25(uVar4, uVar3, 1) > 250f)
															{
																Local_110.f_110[iVar0] = iVar2;
															}
														}
													}
												}
											}
										}
									}
								}
								else
								{
									Local_110.f_85[iVar1] = 2;
								}
							}
							else
							{
								Local_110.f_85[iVar1] = 3;
							}
						}
						else
						{
							Local_110.f_85[iVar1] = 3;
						}
						break;
					
					case 2:
						if (Local_110.f_241 == 1)
						{
							if (func_22())
							{
								Local_110.f_85[iVar1] = 3;
							}
							else if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 6))
							{
								Local_110.f_85[iVar1] = 3;
							}
							else if (GAMEPLAY::IS_BIT_SET(Local_110.f_464, iVar1))
							{
								Local_110.f_85[iVar1] = 1;
								GAMEPLAY::CLEAR_BIT(&(Local_110.f_464), iVar1);
							}
						}
						else
						{
							Local_110.f_85[iVar1] = 3;
						}
						break;
					
					case 3:
						if (PED::IS_PED_FLEEING(NETWORK::NET_TO_PED(Local_110.f_48[iVar1])))
						{
							func_24(&(Local_110.f_48[iVar1]));
							Local_110.f_85[iVar1] = 4;
						}
						break;
					}
				}
		}
		iVar1++;
	}
}

void func_24(var uParam0)
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
	}
}

float func_25(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1, 0))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(uParam1, 1) };
	}
	else
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(uParam1, 0) };
	}
	return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, iParam2);
}

int func_26()
{
	return -1;
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_26();
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (iVar0 == func_26())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (Local_744[iVar1 /*18*/].f_1 != 0)
				{
					if (Local_744[iVar1 /*18*/].f_17 == 1)
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if ((iParam0 % 4) == 0)
	{
		iVar0 = (iParam0 / 4);
		if (iVar0 < 5)
		{
			if (Local_110.f_110[iVar0] != -1)
			{
				iVar3 = Local_110.f_110[iVar0];
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
					if (func_837(iVar1, 1, 1))
					{
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
						{
							uVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
							iVar3 = uVar2;
							if (Local_744[iVar3 /*18*/].f_17 != 1)
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
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_29(var uParam0, float fParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_744[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_744[iVar0 /*18*/].f_17 == 1)
				{
					uVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
					uVar2 = PLAYER::GET_PLAYER_PED(uVar1);
					if (!PED::IS_PED_INJURED(uVar2))
					{
						if (func_25(uParam0, uVar2, 1) < fParam1)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30(int iParam0)
{
	var uVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_48[iParam0]), 0))
	{
		return 0;
	}
	uVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_110.f_48[iParam0]), 0);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
	{
		return 0;
	}
	return 1;
}

int func_31(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
}

void func_32()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	if (Local_110.f_463 > 0)
	{
		if (Local_110.f_28 != Local_110.f_463)
		{
			Local_110.f_28 = Local_110.f_463;
		}
	}
	switch (Local_110.f_241)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_110.f_28)
			{
				if (Local_110.f_17[iVar0] == func_26())
				{
				}
				else
				{
					iVar1++;
					if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 4))
					{
					}
				}
				iVar0++;
			}
			func_123();
			func_122();
			if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 4))
			{
				Local_110.f_463 = iVar1;
			}
			if (func_120())
			{
				func_113();
				Local_110.f_241 = 1;
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 4) && func_110() > 1)
			{
				func_109();
				func_113();
				Local_110.f_241 = 1;
			}
			if (!func_737())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[0]))
				{
					if (!func_107(Local_110.f_7[0]))
					{
						Var2.f_2 = 840666990;
						func_105(Var2, func_106(NETWORK::NET_TO_VEH(Local_110.f_7[0]), 1, 0));
						Local_110.f_241 = 2;
					}
				}
			}
			if (Local_110.f_241 == 0)
			{
				if (!func_21(&(Local_110.f_330)))
				{
					if (!func_21(&(Local_110.f_326)))
					{
						func_19(&(Local_110.f_330), 0, 0);
					}
				}
				else if (func_21(&(Local_110.f_326)))
				{
					func_104(&(Local_110.f_330));
				}
				else if (func_18(&(Local_110.f_330), func_103(), 0))
				{
					Var2.f_2 = 840666990;
					func_105(Var2, func_102(1));
					GAMEPLAY::SET_BIT(&(Local_110.f_3), 12);
					func_6();
				}
				if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 14))
				{
					func_6();
				}
			}
			break;
		
		case 1:
			func_35();
			func_33();
			func_109();
			if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 6))
			{
				Local_110.f_241 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

void func_33()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 19))
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 6))
	{
		if (!func_21(&(Local_110.f_332)))
		{
			func_19(&(Local_110.f_332), 0, 0);
			GAMEPLAY::SET_BIT(&(Local_110.f_3), 7);
		}
		else if (func_18(&(Local_110.f_332), func_34(), 0))
		{
			GAMEPLAY::SET_BIT(&(Local_110.f_3), 6);
		}
	}
}

int func_34()
{
	if (func_737())
	{
		return Global_262145.f_10996;
	}
	return Global_262145.f_10973;
}

void func_35()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar2 = true;
	bVar3 = false;
	if (Local_110.f_278 > 0)
	{
		if (Local_110.f_279 >= Local_110.f_278)
		{
			if (Local_110.f_254 >= Local_110.f_255)
			{
				GAMEPLAY::SET_BIT(&(Local_110.f_3), 0);
				GAMEPLAY::SET_BIT(&(Local_110.f_3), 1);
				GAMEPLAY::SET_BIT(&(Local_110.f_3), 2);
				return;
			}
		}
	}
	iVar5 = 0;
	if (bVar2)
	{
		if (Local_110.f_278 > 0)
		{
			if (Local_110.f_279 >= Local_110.f_278)
			{
				if (Local_110.f_256[0] >= 0)
				{
					iVar5 = (iVar5 + Local_110.f_256[0]);
				}
				if (Local_110.f_256[1] >= 0)
				{
					iVar5 = (iVar5 + Local_110.f_256[1]);
				}
				if (Local_110.f_256[2] >= 0)
				{
					iVar5 = (iVar5 + Local_110.f_256[2]);
				}
				if (Local_110.f_256[3] >= 0)
				{
					iVar5 = (iVar5 + Local_110.f_256[3]);
				}
				if (iVar5 >= Local_110.f_255)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 24)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_48[iVar4]))
						{
							if (!func_31(Local_110.f_48[iVar4]))
							{
								bVar3 = true;
							}
						}
						iVar4++;
					}
					if (!bVar3)
					{
						GAMEPLAY::SET_BIT(&(Local_110.f_3), 0);
						GAMEPLAY::SET_BIT(&(Local_110.f_3), 1);
						GAMEPLAY::SET_BIT(&(Local_110.f_3), 2);
						return;
					}
				}
				bVar3 = false;
				iVar4 = 0;
				iVar4 = 0;
				while (iVar4 < 24)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_48[iVar4]))
					{
						if (!func_31(Local_110.f_48[iVar4]))
						{
							bVar3 = true;
						}
					}
					iVar4++;
				}
				if (!bVar3)
				{
					if (!func_21(&(Local_110.f_347)))
					{
						func_19(&(Local_110.f_347), 0, 0);
					}
					else if (func_18(&(Local_110.f_347), 3000, 0))
					{
						GAMEPLAY::SET_BIT(&(Local_110.f_3), 0);
						GAMEPLAY::SET_BIT(&(Local_110.f_3), 1);
						GAMEPLAY::SET_BIT(&(Local_110.f_3), 2);
						return;
					}
				}
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 0) || !GAMEPLAY::IS_BIT_SET(Local_110.f_3, 1))
	{
		if (Local_110.f_249 >= func_101())
		{
			GAMEPLAY::SET_BIT(&(Local_110.f_3), 0);
			GAMEPLAY::SET_BIT(&(Local_110.f_3), 1);
		}
		iVar0 = 0;
		while (iVar0 < Local_110.f_242)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_73[iVar0]))
			{
				if (func_100(iVar0))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_245, iVar0))
					{
						if ((Local_110.f_27 != joaat("hydra") && !func_4(NETWORK::NET_TO_VEH(Local_110.f_73[iVar0]), 1, 0, 0, 0, 0, 1, 0)) || Local_110.f_27 == joaat("hydra"))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_110.f_3), 0);
							if (func_21(&(Local_3476[iVar0 /*2*/])))
							{
								func_104(&(Local_3476[iVar0 /*2*/]));
							}
						}
						else if (func_4(NETWORK::NET_TO_VEH(Local_110.f_73[iVar0]), 1, 0, 0, 0, 0, 1, 0) && ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_73[iVar0])) == joaat("savage"))
						{
							if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 0))
							{
								GAMEPLAY::CLEAR_BIT(&(Local_110.f_3), 0);
							}
							if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 18))
							{
								func_99(func_102(1), iVar0);
								GAMEPLAY::SET_BIT(&(Local_110.f_3), 18);
							}
						}
						else if (func_98(iVar0) || !func_737())
						{
							if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 0))
							{
								GAMEPLAY::CLEAR_BIT(&(Local_110.f_3), 0);
							}
							if (!GAMEPLAY::IS_BIT_SET(Local_110.f_303, iVar0))
							{
								func_97(func_102(1), iVar0);
								GAMEPLAY::SET_BIT(&(Local_110.f_303), iVar0);
							}
						}
						else
						{
							func_24(&(Local_110.f_73[iVar0]));
							if (!GAMEPLAY::IS_BIT_SET(Local_110.f_253, iVar0))
							{
								Local_110.f_251 = (Local_110.f_251 - 1);
								if (func_96() > 1)
								{
									if (Local_110.f_252 > 0)
									{
										Local_110.f_302++;
										func_95(iVar0, func_102(1));
									}
								}
								GAMEPLAY::SET_BIT(&(Local_110.f_253), iVar0);
							}
							func_104(&(Local_3476[iVar0 /*2*/]));
						}
					}
				}
				else if (func_94(iVar0))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_253, iVar0))
					{
						Local_110.f_251 = (Local_110.f_251 - 1);
						if (func_96() > 1)
						{
							if (Local_110.f_252 > 0)
							{
								Local_110.f_302++;
								func_95(iVar0, func_102(1));
							}
						}
						if (Local_110.f_27 == joaat("hydra"))
						{
							Local_110.f_254++;
						}
						GAMEPLAY::SET_BIT(&(Local_110.f_253), iVar0);
					}
					if (func_21(&(Local_110.f_336[iVar0 /*2*/])))
					{
						func_104(&(Local_110.f_336[iVar0 /*2*/]));
					}
					func_24(&(Local_110.f_73[iVar0]));
				}
				else
				{
					if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 0))
					{
						GAMEPLAY::CLEAR_BIT(&(Local_110.f_3), 0);
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_271, iVar0))
					{
						if (!func_21(&(Local_110.f_336[iVar0 /*2*/])))
						{
							func_19(&(Local_110.f_336[iVar0 /*2*/]), 0, 0);
						}
						else if (func_18(&(Local_110.f_336[iVar0 /*2*/]), 5000, 0))
						{
							GAMEPLAY::SET_BIT(&(Local_110.f_271), iVar0);
						}
						else if (func_18(&(Local_110.f_336[iVar0 /*2*/]), 3000, 0))
						{
							if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_73[iVar0])) == joaat("savage"))
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 18))
								{
									func_99(func_102(1), iVar0);
									GAMEPLAY::SET_BIT(&(Local_110.f_3), 18);
								}
							}
							else if (func_98(iVar0) || !func_737())
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_110.f_303, iVar0))
								{
									func_97(func_102(1), iVar0);
									GAMEPLAY::SET_BIT(&(Local_110.f_303), iVar0);
								}
							}
						}
					}
				}
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_110.f_116)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_48[(iVar0 * 4 + iVar1)]))
				{
					iVar6 = (iVar0 * 4 + iVar1);
					if (!func_31(Local_110.f_48[(iVar0 * 4 + iVar1)]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_48[(iVar0 * 4 + iVar1)]), 0))
						{
							if (!func_92((iVar0 * 4 + iVar1)))
							{
								GAMEPLAY::CLEAR_BIT(&(Local_110.f_3), 0);
							}
							else if (func_91(iVar6))
							{
								if (!func_18(&(Local_110.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
								{
								}
								if (UI::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_110.f_48[(iVar0 * 4 + iVar1)])))
								{
									func_90(&(Local_1338[(iVar0 * 4 + iVar1) /*8*/]));
								}
								func_24(&(Local_110.f_48[(iVar0 * 4 + iVar1)]));
								if (GAMEPLAY::IS_BIT_SET(Local_110.f_272[func_89(iVar6)], func_88(iVar6)))
								{
									if (Local_110.f_85[(iVar0 * 4 + iVar1)] > 0)
									{
										func_87((iVar0 * 4 + iVar1), func_102(1));
										Local_110.f_254++;
									}
								}
								Local_110.f_85[(iVar0 * 4 + iVar1)] = 0;
								if (func_21(&(Local_110.f_364[iVar6 /*2*/])))
								{
									func_104(&(Local_110.f_364[iVar6 /*2*/]));
								}
								if (GAMEPLAY::IS_BIT_SET(Local_110.f_275[func_89(iVar6)], func_88(iVar6)))
								{
									GAMEPLAY::CLEAR_BIT(&(Local_110.f_275[func_89(iVar6)]), func_88(iVar6));
								}
							}
							else
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_110.f_272[func_89(iVar6)], func_88(iVar6)))
								{
									if (!func_21(&(Local_110.f_364[iVar6 /*2*/])))
									{
										func_19(&(Local_110.f_364[iVar6 /*2*/]), 0, 0);
									}
									else if (func_18(&(Local_110.f_364[iVar6 /*2*/]), 7000, 0))
									{
										GAMEPLAY::SET_BIT(&(Local_110.f_272[func_89(iVar6)]), func_88(iVar6));
										func_104(&(Local_110.f_364[iVar6 /*2*/]));
									}
								}
								if (!GAMEPLAY::IS_BIT_SET(Local_110.f_275[func_89(iVar6)], func_88(iVar6)))
								{
									GAMEPLAY::SET_BIT(&(Local_110.f_275[func_89(iVar6)]), func_88(iVar6));
								}
							}
						}
					}
					else if (GAMEPLAY::IS_BIT_SET(Local_110.f_272[func_89(iVar6)], func_88(iVar6)) || Local_110.f_27 == joaat("hydra"))
					{
						if (!func_18(&(Local_110.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
						{
						}
						func_24(&(Local_110.f_48[(iVar0 * 4 + iVar1)]));
						if (GAMEPLAY::IS_BIT_SET(Local_110.f_272[func_89(iVar6)], func_88(iVar6)))
						{
							if (Local_110.f_85[(iVar0 * 4 + iVar1)] > 0)
							{
								Local_110.f_254++;
								func_87((iVar0 * 4 + iVar1), func_102(1));
							}
						}
						Local_110.f_85[(iVar0 * 4 + iVar1)] = 0;
						if (GAMEPLAY::IS_BIT_SET(Local_110.f_275[func_89(iVar6)], func_88(iVar6)))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_110.f_275[func_89(iVar6)]), func_88(iVar6));
						}
					}
					else
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_110.f_272[func_89(iVar6)], func_88(iVar6)))
						{
							if (!func_21(&(Local_110.f_364[iVar6 /*2*/])))
							{
								func_19(&(Local_110.f_364[iVar6 /*2*/]), 0, 0);
							}
							else if (func_18(&(Local_110.f_364[iVar6 /*2*/]), 7000, 0))
							{
								GAMEPLAY::SET_BIT(&(Local_110.f_272[func_89(iVar6)]), func_88(iVar6));
								func_104(&(Local_110.f_364[iVar6 /*2*/]));
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_110.f_275[func_89(iVar6)], func_88(iVar6)))
						{
							GAMEPLAY::SET_BIT(&(Local_110.f_275[func_89(iVar6)]), func_88(iVar6));
						}
					}
				}
				iVar1++;
			}
			if (Local_110.f_249 < func_101())
			{
				if (func_73(iVar0))
				{
				}
				GAMEPLAY::CLEAR_BIT(&(Local_110.f_3), 0);
			}
			iVar0++;
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 2))
	{
		if (Local_110.f_247 >= Global_262145.f_10094)
		{
			GAMEPLAY::SET_BIT(&(Local_110.f_3), 2);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_110.f_243)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_48[(20 + iVar1)]))
			{
				iVar7 = (20 + iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iVar1)]), 0))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_110.f_3), 2);
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_110.f_272[func_89(iVar7)], func_88(iVar7)))
				{
					if (!func_18(&(Local_110.f_414[(20 + iVar1) /*2*/]), 5000, 0))
					{
					}
					if (func_21(&(Local_110.f_364[iVar7 /*2*/])))
					{
						func_104(&(Local_110.f_364[iVar7 /*2*/]));
					}
					func_24(&(Local_110.f_48[(20 + iVar1)]));
					if (Local_110.f_85[(20 + iVar1)] > 0)
					{
						Local_110.f_254++;
						if (func_96() > 1)
						{
							if (Local_110.f_317 > 0)
							{
								Local_110.f_316++;
							}
						}
						func_87((20 + iVar1), func_102(1));
					}
					Local_110.f_85[(20 + iVar1)] = 0;
					if (GAMEPLAY::IS_BIT_SET(Local_110.f_275[func_89(iVar7)], func_88(iVar7)))
					{
						GAMEPLAY::CLEAR_BIT(&(Local_110.f_275[func_89(iVar7)]), func_88(iVar7));
					}
				}
				else
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_272[func_89(iVar7)], func_88(iVar7)))
					{
						if (!func_21(&(Local_110.f_364[iVar7 /*2*/])))
						{
							func_19(&(Local_110.f_364[iVar7 /*2*/]), 0, 0);
						}
						else if (func_18(&(Local_110.f_364[iVar7 /*2*/]), 7000, 0))
						{
							GAMEPLAY::SET_BIT(&(Local_110.f_272[func_89(iVar7)]), func_88(iVar7));
							func_104(&(Local_110.f_364[iVar7 /*2*/]));
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_275[func_89(iVar7)], func_88(iVar7)))
					{
						GAMEPLAY::SET_BIT(&(Local_110.f_275[func_89(iVar7)]), func_88(iVar7));
					}
				}
			}
			if (Local_110.f_247 < func_72())
			{
				if (func_51(iVar1))
				{
				}
				GAMEPLAY::CLEAR_BIT(&(Local_110.f_3), 2);
			}
			iVar1++;
		}
	}
	func_36();
}

void func_36()
{
	int iVar0;
	int iVar1;
	
	if (func_96() == 1)
	{
		return;
	}
	if (func_96() == 2)
	{
		if (Local_110.f_252 > 0)
		{
			if (Local_110.f_302 > 0)
			{
				if (Local_110.f_302 >= (Local_110.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							iVar0 = Local_110.f_279 + 1;
							if (iVar0 < 10)
							{
								iVar1 = Local_110.f_280[iVar0];
								if (iVar1 != 5)
								{
									func_47();
									Local_110.f_279++;
									func_40();
								}
								else if (Local_110.f_318 >= func_39())
								{
									func_47();
									Local_110.f_279++;
									func_40();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_96() == 3)
	{
		if (Local_110.f_317 > 0)
		{
			if (Local_110.f_316 > 0)
			{
				if (Local_110.f_316 >= Local_110.f_317)
				{
					if (Local_110.f_317 >= func_38())
					{
						func_47();
						Local_110.f_279++;
						func_40();
					}
				}
			}
		}
	}
	else if (func_96() == 4)
	{
		if (Local_110.f_316 > 0)
		{
			if (Local_110.f_302 > 0)
			{
				if (Local_110.f_317 > 0)
				{
					if (Local_110.f_316 >= (Local_110.f_317 - 2))
					{
						if (Local_110.f_252 > 0)
						{
							if (Local_110.f_302 >= (Local_110.f_252 - 2))
							{
								if (func_50() <= func_49())
								{
									if (func_48() <= func_37())
									{
										iVar0 = Local_110.f_279 + 1;
										if (iVar0 < 10)
										{
											iVar1 = Local_110.f_280[iVar0];
											if (iVar1 != 5)
											{
												func_47();
												Local_110.f_279++;
												func_40();
											}
											else if (Local_110.f_318 >= func_39())
											{
												func_47();
												Local_110.f_279++;
												func_40();
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
	else if (func_96() == 5)
	{
		if (Local_110.f_252 > 0)
		{
			if (Local_110.f_302 > 0)
			{
				if (Local_110.f_302 >= (Local_110.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							func_47();
							Local_110.f_279++;
							func_40();
						}
					}
				}
			}
		}
	}
}

int func_37()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_110.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_110.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_96() == 4)
				{
					return 2;
				}
				else if (func_96() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_38()
{
	return Local_110.f_305[Local_110.f_279];
}

int func_39()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < Local_110.f_278)
	{
		iVar0 = (iVar0 + Local_110.f_305[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_40()
{
	var uVar0;
	
	if (Local_110.f_29 == -1)
	{
		uVar0 = func_46(Local_110.f_27);
		Local_110.f_29 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, uVar0);
		if (func_737())
		{
			if (Local_110.f_27 == joaat("hydra"))
			{
				if (Local_110.f_29 == 2)
				{
					Local_110.f_29 = 4;
				}
			}
			else if (Local_110.f_27 == joaat("savage"))
			{
				if (Local_110.f_29 == 0)
				{
					Local_110.f_29 = 1;
				}
				else if (Local_110.f_29 == 1)
				{
					Local_110.f_29 = 2;
				}
				else if (Local_110.f_29 == 2)
				{
					Local_110.f_29 = 3;
				}
			}
			else if (Local_110.f_27 == joaat("valkyrie"))
			{
				if (Local_110.f_29 == 2)
				{
					Local_110.f_29 = 3;
				}
				else if (Local_110.f_29 == 3)
				{
					Local_110.f_29 = 4;
				}
			}
			else if (Local_110.f_27 == joaat("buzzard"))
			{
				if (Local_110.f_29 == 0)
				{
					Local_110.f_29 = 1;
				}
				else if (Local_110.f_29 == 1)
				{
					Local_110.f_29 = 2;
				}
				else if (Local_110.f_29 == 2)
				{
					Local_110.f_29 = 3;
				}
				else if (Local_110.f_29 == 3)
				{
					Local_110.f_29 = 4;
				}
			}
		}
		else if (Local_110.f_27 == joaat("savage"))
		{
			if (Local_110.f_29 == 0)
			{
				Local_110.f_29 = 1;
			}
			else if (Local_110.f_29 == 1)
			{
				Local_110.f_29 = 2;
			}
			else if (Local_110.f_29 == 2)
			{
				Local_110.f_29 = 3;
			}
		}
	}
	switch (Local_110.f_27)
	{
		case joaat("rhino"):
			Local_110.f_280[0] = 4;
			Local_110.f_291[0] = func_45(4);
			Local_110.f_305[0] = func_44(4);
			Local_110.f_280[1] = 4;
			Local_110.f_291[1] = func_45(4);
			Local_110.f_305[1] = func_44(4);
			Local_110.f_280[2] = 4;
			Local_110.f_291[2] = func_45(4);
			Local_110.f_305[2] = func_44(4);
			if (Local_110.f_12 <= 2 || !func_737())
			{
				Local_110.f_278 = 3;
			}
			else if (Local_110.f_12 == 3)
			{
				Local_110.f_280[3] = 4;
				Local_110.f_291[3] = func_45(4);
				Local_110.f_305[3] = func_44(4);
				Local_110.f_278 = 4;
			}
			else
			{
				Local_110.f_280[3] = 4;
				Local_110.f_291[3] = func_45(4);
				Local_110.f_305[3] = func_44(4);
				Local_110.f_280[4] = 4;
				Local_110.f_291[4] = func_45(4);
				Local_110.f_305[4] = func_44(4);
				Local_110.f_278 = 5;
			}
			Local_110.f_255 = func_41();
			if (!func_737())
			{
				Local_110.f_1 = 0;
			}
			else
			{
				Local_110.f_1 = 5;
			}
			Local_110.f_2 = Local_110.f_29;
			switch (Local_110.f_29)
			{
				case 0:
					Local_110.f_30[0 /*3*/] = { 1016.734f, 2360.83f, 50.4559f };
					Local_110.f_43[0] = 269.414f;
					Local_110.f_30[1 /*3*/] = { 1002.526f, 2390.64f, 50.5438f };
					Local_110.f_43[1] = 3.5491f;
					Local_110.f_30[2 /*3*/] = { 986.0139f, 2301.592f, 48.8235f };
					Local_110.f_43[2] = 54.4509f;
					Local_110.f_30[3 /*3*/] = { 977.1004f, 2371.714f, 51.0115f };
					Local_110.f_43[3] = 178.1948f;
					Local_110.f_159[0 /*3*/] = { 1028.325f, 2436.455f, 44.2365f };
					Local_110.f_175[0] = 270.8322f;
					Local_110.f_159[1 /*3*/] = { 1166.498f, 2403.021f, 56.662f };
					Local_110.f_175[1] = 177.3506f;
					Local_110.f_159[2 /*3*/] = { 892.8997f, 2465.881f, 49.7859f };
					Local_110.f_175[2] = 318.1089f;
					Local_110.f_159[3 /*3*/] = { 1078.988f, 2246.879f, 43.7942f };
					Local_110.f_175[3] = 272.0801f;
					Local_110.f_159[4 /*3*/] = { 1016.784f, 2259.447f, 43.8512f };
					Local_110.f_175[4] = 104.0591f;
					Local_110.f_117[0 /*3*/] = { 1042.504f, 2280.497f, 48.6315f };
					Local_110.f_148[0] = 296.4225f;
					Local_110.f_117[1 /*3*/] = { 991.9136f, 2278.353f, 48.1838f };
					Local_110.f_148[1] = 164.9695f;
					Local_110.f_117[2 /*3*/] = { 1029.763f, 2447.042f, 44.5979f };
					Local_110.f_148[2] = 136.0596f;
					Local_110.f_117[3 /*3*/] = { 971.0186f, 2422.765f, 50.6913f };
					Local_110.f_148[3] = 116.379f;
					Local_110.f_117[4 /*3*/] = { 1017.264f, 2432.009f, 45.2054f };
					Local_110.f_148[4] = 86.6586f;
					Local_110.f_117[5 /*3*/] = { 1072.751f, 2237.599f, 43.3802f };
					Local_110.f_148[5] = 74.6822f;
					Local_110.f_117[6 /*3*/] = { 944.4364f, 2407.392f, 50.0925f };
					Local_110.f_148[6] = 206.8863f;
					Local_110.f_117[7 /*3*/] = { 1059.804f, 2280.784f, 48.5613f };
					Local_110.f_148[7] = 267.8581f;
					Local_110.f_117[8 /*3*/] = { 1004.272f, 2372.344f, 54.5719f };
					Local_110.f_148[8] = 267.5856f;
					Local_110.f_117[9 /*3*/] = { 972.3055f, 2235.821f, 53.1094f };
					Local_110.f_148[9] = 325.0964f;
					break;
				
				case 1:
					Local_110.f_30[0 /*3*/] = { 1733.134f, 3302.545f, 40.2235f };
					Local_110.f_43[0] = 194.8062f;
					Local_110.f_30[1 /*3*/] = { 1761.281f, 3309.879f, 40.1489f };
					Local_110.f_43[1] = 238.9372f;
					Local_110.f_30[2 /*3*/] = { 1755.753f, 3236.49f, 41.0341f };
					Local_110.f_43[2] = 16.3071f;
					Local_110.f_30[3 /*3*/] = { 1676.76f, 3279.734f, 39.8901f };
					Local_110.f_43[3] = 209.9883f;
					Local_110.f_117[0 /*3*/] = { 1758.449f, 3309.247f, 40.1417f };
					Local_110.f_148[0] = 221.3913f;
					Local_110.f_117[1 /*3*/] = { 1746.445f, 3323.75f, 40.1528f };
					Local_110.f_148[1] = 246.3415f;
					Local_110.f_117[2 /*3*/] = { 1775.057f, 3332.943f, 40.3398f };
					Local_110.f_148[2] = 213.4087f;
					Local_110.f_117[3 /*3*/] = { 1713.24f, 3302.458f, 40.1851f };
					Local_110.f_148[3] = 100.5405f;
					Local_110.f_117[4 /*3*/] = { 1693.817f, 3293.163f, 40.1465f };
					Local_110.f_148[4] = 289.6017f;
					Local_110.f_117[5 /*3*/] = { 1697.449f, 3176.312f, 44.0261f };
					Local_110.f_148[5] = 285.6456f;
					Local_110.f_117[6 /*3*/] = { 1710.565f, 3180.909f, 43.2884f };
					Local_110.f_148[6] = 310.9245f;
					Local_110.f_117[7 /*3*/] = { 1627.436f, 3198.51f, 39.9059f };
					Local_110.f_148[7] = 46.7117f;
					Local_110.f_117[8 /*3*/] = { 1788.401f, 3208.964f, 43.0201f };
					Local_110.f_148[8] = 35.9192f;
					Local_110.f_117[9 /*3*/] = { 1698.308f, 3289.254f, 47.8594f };
					Local_110.f_148[9] = 207.53f;
					Local_110.f_159[0 /*3*/] = { 1669.932f, 3132.549f, 42.2874f };
					Local_110.f_175[0] = 286.6127f;
					Local_110.f_159[1 /*3*/] = { 1943.321f, 3263.146f, 44.7265f };
					Local_110.f_175[1] = 124.1428f;
					Local_110.f_159[2 /*3*/] = { 1151.224f, 3172.348f, 40.6704f };
					Local_110.f_175[2] = 275.0147f;
					Local_110.f_159[3 /*3*/] = { 1134.716f, 3169.23f, 40.6443f };
					Local_110.f_175[3] = 287.91f;
					Local_110.f_159[4 /*3*/] = { 1311.352f, 2963.962f, 40.0443f };
					Local_110.f_175[4] = 270.287f;
					break;
				
				case 2:
					Local_110.f_30[0 /*3*/] = { 2703.281f, 1576.7f, 23.527f };
					Local_110.f_43[0] = 172.439f;
					Local_110.f_30[1 /*3*/] = { 2702.781f, 1512.725f, 23.5199f };
					Local_110.f_43[1] = 53.9805f;
					Local_110.f_30[2 /*3*/] = { 2678.432f, 1518.734f, 23.5295f };
					Local_110.f_43[2] = 303.2142f;
					Local_110.f_30[3 /*3*/] = { 2677.509f, 1566.525f, 23.501f };
					Local_110.f_43[3] = 218.5974f;
					Local_110.f_117[0 /*3*/] = { 2621.796f, 1695.869f, 26.5983f };
					Local_110.f_148[0] = 264.5842f;
					Local_110.f_117[1 /*3*/] = { 2746.846f, 1567.683f, 23.501f };
					Local_110.f_148[1] = 133.7932f;
					Local_110.f_117[2 /*3*/] = { 2664.273f, 1599.201f, 23.7604f };
					Local_110.f_148[2] = 205.1215f;
					Local_110.f_117[3 /*3*/] = { 2757.255f, 1576.939f, 23.501f };
					Local_110.f_148[3] = 66.1065f;
					Local_110.f_117[4 /*3*/] = { 2714.176f, 1480.445f, 23.5007f };
					Local_110.f_148[4] = 7.8064f;
					Local_110.f_117[5 /*3*/] = { 2713.364f, 1450.272f, 23.6191f };
					Local_110.f_148[5] = 358.7563f;
					Local_110.f_117[6 /*3*/] = { 2739.862f, 1463.719f, 23.5015f };
					Local_110.f_148[6] = 142.1748f;
					Local_110.f_117[7 /*3*/] = { 2676.403f, 1589.224f, 26.2548f };
					Local_110.f_148[7] = 247.816f;
					Local_110.f_117[8 /*3*/] = { 2703.085f, 1685.568f, 23.4887f };
					Local_110.f_148[8] = 124.4666f;
					Local_110.f_117[9 /*3*/] = { 2665.022f, 1409.433f, 23.538f };
					Local_110.f_148[9] = 348.6588f;
					Local_110.f_159[0 /*3*/] = { 2737.115f, 1697.578f, 23.6755f };
					Local_110.f_175[0] = 89.8563f;
					Local_110.f_159[1 /*3*/] = { 2778.598f, 1458.218f, 23.5382f };
					Local_110.f_175[1] = 163.8004f;
					Local_110.f_159[2 /*3*/] = { 2529.779f, 1641.113f, 27.9752f };
					Local_110.f_175[2] = 270.0754f;
					Local_110.f_159[3 /*3*/] = { 2665.372f, 1702.379f, 23.4882f };
					Local_110.f_175[3] = 184.9752f;
					Local_110.f_159[4 /*3*/] = { 2726.623f, 1640.299f, 23.5607f };
					Local_110.f_175[4] = 90.4555f;
					break;
				
				case 3:
				case 4:
					Local_110.f_30[0 /*3*/] = { 1088.383f, -3024.919f, 4.901f };
					Local_110.f_43[0] = 0.5044f;
					Local_110.f_30[1 /*3*/] = { 1086.846f, -2975.534f, 4.9012f };
					Local_110.f_43[1] = 179.2507f;
					Local_110.f_30[2 /*3*/] = { 986.4979f, -3024.68f, 4.9008f };
					Local_110.f_43[2] = 0.3066f;
					Local_110.f_30[3 /*3*/] = { 986.1768f, -2972.394f, 4.9012f };
					Local_110.f_43[3] = 180.2973f;
					Local_110.f_117[0 /*3*/] = { 991.85f, -2969.792f, 4.9008f };
					Local_110.f_148[0] = 336.7541f;
					Local_110.f_117[1 /*3*/] = { 1178.155f, -3022.33f, 4.9021f };
					Local_110.f_148[1] = 6.0929f;
					Local_110.f_117[2 /*3*/] = { 1107.679f, -2983.992f, 4.901f };
					Local_110.f_148[2] = 4.2803f;
					Local_110.f_117[3 /*3*/] = { 1043.869f, -2979.597f, 4.901f };
					Local_110.f_148[3] = 274.985f;
					Local_110.f_117[4 /*3*/] = { 1042.952f, -3031.76f, 4.901f };
					Local_110.f_148[4] = 267.2555f;
					Local_110.f_117[5 /*3*/] = { 1095.349f, -3077.492f, 4.8877f };
					Local_110.f_148[5] = 6.5529f;
					Local_110.f_117[6 /*3*/] = { 1114.924f, -3031.319f, 4.901f };
					Local_110.f_148[6] = 89.1724f;
					Local_110.f_117[7 /*3*/] = { 1048.021f, -3077.814f, 4.901f };
					Local_110.f_148[7] = 348.279f;
					Local_110.f_117[8 /*3*/] = { 995.4651f, -3036.897f, 4.9008f };
					Local_110.f_148[8] = 267.8075f;
					Local_110.f_117[9 /*3*/] = { 1101.347f, -2968.894f, 13.3329f };
					Local_110.f_148[9] = 0.5237f;
					Local_110.f_159[0 /*3*/] = { 1254.191f, -3126.908f, 4.8012f };
					Local_110.f_175[0] = 357.9713f;
					Local_110.f_159[1 /*3*/] = { 856.4759f, -3118.969f, 4.9008f };
					Local_110.f_175[1] = 269.3234f;
					Local_110.f_159[2 /*3*/] = { 838.2247f, -3118.748f, 4.9008f };
					Local_110.f_175[2] = 269.3055f;
					Local_110.f_159[3 /*3*/] = { 1197.595f, -2983.872f, 4.9021f };
					Local_110.f_175[3] = 359.1497f;
					Local_110.f_159[4 /*3*/] = { 962.6804f, -3016.159f, 4.9017f };
					Local_110.f_175[4] = 270.0873f;
					break;
			}
			break;
		
		case joaat("savage"):
			Local_110.f_240 = joaat("insurgent");
			Local_110.f_280[0] = 2;
			Local_110.f_291[0] = func_45(2);
			Local_110.f_280[1] = 4;
			Local_110.f_291[1] = func_45(4);
			Local_110.f_305[1] = func_44(4);
			Local_110.f_280[2] = 2;
			Local_110.f_291[2] = func_45(2);
			if (Local_110.f_12 <= 2 || !func_737())
			{
				Local_110.f_280[3] = 5;
				Local_110.f_291[3] = func_45(5);
				Local_110.f_278 = 4;
			}
			else if (Local_110.f_12 == 3)
			{
				Local_110.f_280[3] = 4;
				Local_110.f_291[3] = func_45(4);
				Local_110.f_305[3] = func_44(4);
				Local_110.f_280[4] = 2;
				Local_110.f_291[4] = func_45(2);
				Local_110.f_280[5] = 5;
				Local_110.f_291[5] = func_45(5);
				Local_110.f_278 = 6;
			}
			else
			{
				Local_110.f_280[3] = 4;
				Local_110.f_291[3] = func_45(4);
				Local_110.f_305[3] = func_44(4);
				Local_110.f_280[4] = 2;
				Local_110.f_291[4] = func_45(2);
				Local_110.f_280[5] = 4;
				Local_110.f_291[5] = func_45(4);
				Local_110.f_305[5] = func_44(4);
				Local_110.f_280[6] = 5;
				Local_110.f_291[6] = func_45(5);
				Local_110.f_278 = 7;
			}
			Local_110.f_255 = func_41();
			if (!func_737())
			{
				Local_110.f_1 = 2;
			}
			else
			{
				Local_110.f_1 = 7;
			}
			Local_110.f_2 = Local_110.f_29;
			switch (Local_110.f_29)
			{
				case 0:
					Local_110.f_30[0 /*3*/] = { -1177.65f, -2845.542f, 12.9458f };
					Local_110.f_43[0] = 331.74f;
					Local_110.f_30[1 /*3*/] = { -1082.479f, -2900.191f, 12.9478f };
					Local_110.f_43[1] = 327.7335f;
					Local_110.f_30[2 /*3*/] = { -1202.019f, -2873.67f, 12.9454f };
					Local_110.f_43[2] = 149.1604f;
					Local_110.f_30[3 /*3*/] = { -1126.58f, -2918.416f, 12.9454f };
					Local_110.f_43[3] = 150.6753f;
					Local_110.f_117[0 /*3*/] = { -985.8373f, -2942.973f, 12.9451f };
					Local_110.f_148[0] = 147.2177f;
					Local_110.f_117[1 /*3*/] = { -1051.412f, -2880.828f, 29.3631f };
					Local_110.f_148[1] = 103.9461f;
					Local_110.f_117[2 /*3*/] = { -1154.54f, -2821.091f, 29.3631f };
					Local_110.f_148[2] = 160.822f;
					Local_110.f_117[3 /*3*/] = { -1211.898f, -2789.125f, 12.9523f };
					Local_110.f_148[3] = 205.8375f;
					Local_110.f_117[4 /*3*/] = { -1199.493f, -2724.709f, 12.9771f };
					Local_110.f_148[4] = 124.7328f;
					break;
				
				case 1:
					Local_110.f_30[0 /*3*/] = { 1930.067f, 4710.339f, 40.1633f };
					Local_110.f_43[0] = 344.2504f;
					Local_110.f_30[1 /*3*/] = { 1954.56f, 4724.181f, 40.0604f };
					Local_110.f_43[1] = 340.3425f;
					Local_110.f_30[2 /*3*/] = { 2004.913f, 4748.04f, 40.0604f };
					Local_110.f_43[2] = 351.5693f;
					Local_110.f_30[3 /*3*/] = { 2027.928f, 4757.387f, 40.0595f };
					Local_110.f_43[3] = 354.2446f;
					Local_110.f_117[0 /*3*/] = { 1954.209f, 4653.232f, 39.7136f };
					Local_110.f_148[0] = 245.2865f;
					Local_110.f_117[1 /*3*/] = { 2116.177f, 4761.993f, 40.2281f };
					Local_110.f_148[1] = 74.1185f;
					Local_110.f_117[2 /*3*/] = { 2123.414f, 4784.407f, 39.9703f };
					Local_110.f_148[2] = 10.2312f;
					Local_110.f_117[3 /*3*/] = { 1925.159f, 4817.925f, 43.9706f };
					Local_110.f_148[3] = 222.4017f;
					Local_110.f_117[4 /*3*/] = { 2009.58f, 4802.505f, 41.009f };
					Local_110.f_148[4] = 150.2763f;
					Local_110.f_117[5 /*3*/] = { 2133.472f, 4834.528f, 40.347f };
					Local_110.f_148[5] = 105.4526f;
					Local_110.f_117[6 /*3*/] = { 2139.058f, 4792.084f, 39.9703f };
					Local_110.f_148[6] = 88.9429f;
					Local_110.f_117[7 /*3*/] = { 2014.276f, 4721.062f, 40.6111f };
					Local_110.f_148[7] = 51.1733f;
					Local_110.f_117[8 /*3*/] = { 2060.417f, 4847.691f, 40.8344f };
					Local_110.f_148[8] = 169.7083f;
					Local_110.f_117[9 /*3*/] = { 2151.434f, 4789.446f, 39.9594f };
					Local_110.f_148[9] = 29.5849f;
					Local_110.f_243 = 3;
					break;
				
				case 2:
					if (!func_737())
					{
						Local_110.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_110.f_43[0] = 319.153f;
					}
					else
					{
						Local_110.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_110.f_43[0] = 319.153f;
						Local_110.f_30[1 /*3*/] = { 218.7712f, 7018.654f, 1.0042f };
						Local_110.f_43[1] = 316.7079f;
						Local_110.f_30[2 /*3*/] = { 230.1561f, 7001.589f, 1.2508f };
						Local_110.f_43[2] = 316.9623f;
						Local_110.f_30[3 /*3*/] = { 242.3287f, 6987.263f, 1.7354f };
						Local_110.f_43[3] = 314.2003f;
					}
					Local_110.f_117[0 /*3*/] = { 131.5444f, 6956.887f, 12.1839f };
					Local_110.f_148[0] = 326.4292f;
					Local_110.f_117[1 /*3*/] = { 201.7152f, 6842.864f, 21.2216f };
					Local_110.f_148[1] = 6.8118f;
					Local_110.f_117[2 /*3*/] = { 66.3015f, 6924.146f, 12.2944f };
					Local_110.f_148[2] = 32.8776f;
					Local_110.f_117[3 /*3*/] = { 42.4962f, 7055.19f, 1.3986f };
					Local_110.f_148[3] = 8.387f;
					Local_110.f_117[4 /*3*/] = { 146.7828f, 6849.039f, 17.571f };
					Local_110.f_148[4] = 291.5504f;
					Local_110.f_117[5 /*3*/] = { 290.266f, 6946.917f, 3.1171f };
					Local_110.f_148[5] = 333.1838f;
					Local_110.f_117[6 /*3*/] = { 50.5669f, 7102.213f, 2.0034f };
					Local_110.f_148[6] = 203.8353f;
					Local_110.f_117[7 /*3*/] = { 274.1516f, 6856.506f, 15.8452f };
					Local_110.f_148[7] = 32.2329f;
					Local_110.f_117[8 /*3*/] = { 88.9963f, 7113.472f, 24.5763f };
					Local_110.f_148[8] = 195.4847f;
					Local_110.f_117[9 /*3*/] = { 131.6119f, 6956.082f, 12.2413f };
					Local_110.f_148[9] = 327.4941f;
					Local_110.f_243 = 4;
					break;
				
				case 3:
					if (!func_737())
					{
						Local_110.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_110.f_43[0] = 156.0209f;
					}
					else
					{
						Local_110.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_110.f_43[0] = 156.0209f;
						Local_110.f_30[1 /*3*/] = { 699.7866f, -1637.337f, 8.7086f };
						Local_110.f_43[1] = 41.8571f;
						Local_110.f_30[2 /*3*/] = { 663.725f, -1634.052f, 8.7086f };
						Local_110.f_43[2] = 305.7411f;
						Local_110.f_30[3 /*3*/] = { 662.7472f, -1596.468f, 8.7086f };
						Local_110.f_43[3] = 223.2489f;
					}
					if (func_96() == 2 || func_96() == 5)
					{
						Local_110.f_242 = 3;
					}
					else
					{
						Local_110.f_242 = 4;
					}
					Local_110.f_117[0 /*3*/] = { 585.7374f, -1450.264f, 19.043f };
					Local_110.f_148[0] = 197.3456f;
					Local_110.f_117[1 /*3*/] = { 784.6684f, -1526.172f, 9.5498f };
					Local_110.f_148[1] = 140.7211f;
					Local_110.f_117[2 /*3*/] = { 790.8864f, -1603.665f, 30.2421f };
					Local_110.f_148[2] = 98.9528f;
					Local_110.f_117[3 /*3*/] = { 782.042f, -1487.963f, 19.2726f };
					Local_110.f_148[3] = 107.0238f;
					Local_110.f_117[4 /*3*/] = { 698.9001f, -1443.555f, 21.3382f };
					Local_110.f_148[4] = 202.129f;
					Local_110.f_117[5 /*3*/] = { 566.2017f, -1506.386f, 27.1027f };
					Local_110.f_148[5] = 230.1207f;
					Local_110.f_117[6 /*3*/] = { 752.1943f, -1491.94f, 19.4421f };
					Local_110.f_148[6] = 36.194f;
					Local_110.f_117[7 /*3*/] = { 702.7894f, -1452.929f, 30.3215f };
					Local_110.f_148[7] = 48.2522f;
					Local_110.f_117[8 /*3*/] = { 592.6577f, -1452.304f, 28.8626f };
					Local_110.f_148[8] = 296.114f;
					Local_110.f_117[9 /*3*/] = { 794.9213f, -1660.62f, 43.147f };
					Local_110.f_148[9] = 3.1632f;
					break;
			}
			break;
		
		case joaat("hydra"):
			Local_110.f_240 = joaat("lazer");
			Local_110.f_280[0] = 2;
			Local_110.f_291[0] = func_45(2);
			Local_110.f_280[1] = 2;
			Local_110.f_291[1] = func_45(2);
			Local_110.f_280[2] = 2;
			Local_110.f_291[2] = func_45(2);
			if (Local_110.f_12 <= 2 || !func_737())
			{
				Local_110.f_278 = 3;
			}
			else if (Local_110.f_12 == 3)
			{
				Local_110.f_280[3] = 2;
				Local_110.f_291[3] = func_45(2);
				Local_110.f_280[4] = 2;
				Local_110.f_291[4] = func_45(2);
				Local_110.f_278 = 5;
			}
			else
			{
				Local_110.f_280[3] = 2;
				Local_110.f_291[3] = func_45(2);
				Local_110.f_280[4] = 2;
				Local_110.f_291[4] = func_45(2);
				Local_110.f_280[5] = 2;
				Local_110.f_291[5] = func_45(2);
				Local_110.f_278 = 6;
			}
			Local_110.f_255 = func_41();
			if (!func_737())
			{
				Local_110.f_1 = 1;
			}
			else
			{
				Local_110.f_1 = 6;
			}
			Local_110.f_2 = Local_110.f_29;
			switch (Local_110.f_29)
			{
				case 0:
					if (!func_737())
					{
						Local_110.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_110.f_43[0] = 197.4435f;
					}
					else
					{
						Local_110.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_110.f_43[0] = 197.4435f;
						Local_110.f_30[1 /*3*/] = { 132.5468f, -2805.181f, 5.0002f };
						Local_110.f_43[1] = 197.1133f;
						Local_110.f_30[2 /*3*/] = { 123.1125f, -2823.665f, 5.0002f };
						Local_110.f_43[2] = 272.2065f;
						Local_110.f_30[3 /*3*/] = { 163.5494f, -2795.92f, 5.0002f };
						Local_110.f_43[3] = 142.941f;
					}
					Local_110.f_159[0 /*3*/] = { 887.9951f, -3884.45f, 54.3252f };
					Local_110.f_175[0] = 34.149f;
					Local_110.f_159[1 /*3*/] = { -255.1527f, -4101.981f, 100.1964f };
					Local_110.f_175[1] = -26.0182f;
					Local_110.f_159[2 /*3*/] = { 1271.189f, -3196.243f, 104.9035f };
					Local_110.f_175[2] = 88.3998f;
					Local_110.f_159[3 /*3*/] = { -879.6379f, -2210.024f, 245.712f };
					Local_110.f_175[3] = -141.7949f;
					Local_110.f_228[0] = 10000;
					Local_110.f_228[1] = 10000;
					Local_110.f_228[2] = 10000;
					Local_110.f_228[3] = 10000;
					Local_110.f_117[0 /*3*/] = { 546.2563f, -3289.316f, 17.714f };
					Local_110.f_148[0] = 143.4012f;
					Local_110.f_117[1 /*3*/] = { 596.183f, -3288.174f, 17.714f };
					Local_110.f_148[1] = 212.1136f;
					Local_110.f_117[2 /*3*/] = { 500.3511f, -3338.894f, 23.591f };
					Local_110.f_148[2] = 95.8248f;
					Local_110.f_117[3 /*3*/] = { 480.8767f, -3238.414f, 5.0696f };
					Local_110.f_148[3] = 113.3084f;
					Local_110.f_117[4 /*3*/] = { 444.4339f, -3187.956f, 5.0703f };
					Local_110.f_148[4] = 260.1329f;
					Local_110.f_242 = 4;
					break;
				
				case 1:
					if (!func_737())
					{
						Local_110.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_110.f_43[0] = 131.0993f;
					}
					else
					{
						Local_110.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_110.f_43[0] = 131.0993f;
						Local_110.f_30[1 /*3*/] = { -1734.978f, -796.148f, 8.3998f };
						Local_110.f_43[1] = 127.8408f;
						Local_110.f_30[2 /*3*/] = { -1762.095f, -758.1465f, 8.6368f };
						Local_110.f_43[2] = 131.1571f;
						Local_110.f_30[3 /*3*/] = { -1792.501f, -751.6967f, 8.1782f };
						Local_110.f_43[3] = 132.943f;
					}
					Local_110.f_159[0 /*3*/] = { -1876.497f, -665.6128f, 109.1172f };
					Local_110.f_175[0] = 316.9068f;
					Local_110.f_159[1 /*3*/] = { -1099.297f, 20.5145f, 150.0107f };
					Local_110.f_175[1] = 142.3075f;
					Local_110.f_159[2 /*3*/] = { -803.6566f, -866.03f, 137.4505f };
					Local_110.f_175[2] = 93.1231f;
					Local_110.f_159[3 /*3*/] = { -1697.535f, -1306.955f, 127.8882f };
					Local_110.f_175[3] = -9.0334f;
					Local_110.f_228[0] = 10000;
					Local_110.f_228[1] = 10000;
					Local_110.f_228[2] = 10000;
					Local_110.f_228[3] = 10000;
					Local_110.f_117[0 /*3*/] = { -1468.446f, -546.457f, 84.073f };
					Local_110.f_148[0] = 236.3566f;
					Local_110.f_117[1 /*3*/] = { -1288.024f, -439.2769f, 102.47f };
					Local_110.f_148[1] = 212.7533f;
					Local_110.f_117[2 /*3*/] = { -1556.831f, -589.7376f, 32.9884f };
					Local_110.f_148[2] = 299.3619f;
					Local_110.f_117[3 /*3*/] = { -1353.281f, -514.1478f, 22.2694f };
					Local_110.f_148[3] = 115.7556f;
					Local_110.f_117[4 /*3*/] = { -1314.693f, -570.6011f, 28.3023f };
					Local_110.f_148[4] = 191.3862f;
					Local_110.f_242 = 4;
					break;
				
				case 2:
					Local_110.f_30[0 /*3*/] = { 737.7632f, 1292.348f, 359.296f };
					Local_110.f_43[0] = 176.244f;
					Local_110.f_159[0 /*3*/] = { 737.1152f, 1296.363f, 459.296f };
					Local_110.f_175[0] = 93.8354f;
					Local_110.f_159[1 /*3*/] = { -425.5261f, 1185.381f, 324.6416f };
					Local_110.f_175[1] = 250.5173f;
					Local_110.f_159[2 /*3*/] = { 1157.617f, 116.7023f, 180.3293f };
					Local_110.f_175[2] = 337.8961f;
					Local_110.f_159[3 /*3*/] = { 1604.747f, 2094.859f, 184.1727f };
					Local_110.f_175[3] = 142.1369f;
					Local_110.f_228[0] = 10000;
					Local_110.f_228[1] = 10000;
					Local_110.f_228[2] = 10000;
					Local_110.f_228[3] = 10000;
					Local_110.f_117[0 /*3*/] = { 662.439f, 1284.189f, 359.296f };
					Local_110.f_148[0] = 208.2624f;
					Local_110.f_117[1 /*3*/] = { 782.1017f, 1279.344f, 359.2967f };
					Local_110.f_148[1] = 349.048f;
					Local_110.f_117[2 /*3*/] = { 769.1426f, 1300.744f, 359.2967f };
					Local_110.f_148[2] = 69.8162f;
					Local_110.f_117[3 /*3*/] = { 750.6609f, 1209.155f, 326.5541f };
					Local_110.f_148[3] = 286.6181f;
					Local_110.f_242 = 4;
					Local_110.f_243 = 4;
					break;
				
				case 3:
					Local_110.f_30[0 /*3*/] = { 2521.121f, -471.1436f, 91.9971f };
					Local_110.f_43[0] = 292.0822f;
					Local_110.f_30[1 /*3*/] = { 2510.273f, -473.5832f, 91.9929f };
					Local_110.f_43[1] = 43.3907f;
					Local_110.f_30[2 /*3*/] = { 2481.39f, -320.2297f, 91.9927f };
					Local_110.f_43[2] = 124.2279f;
					Local_110.f_30[3 /*3*/] = { 2560.314f, -438.3987f, 91.9926f };
					Local_110.f_43[3] = 129.3366f;
					Local_110.f_159[0 /*3*/] = { 2870.504f, 368.2049f, 101.6602f };
					Local_110.f_175[0] = 137.5025f;
					Local_110.f_159[1 /*3*/] = { 1859.596f, 272.0942f, 162.159f };
					Local_110.f_175[1] = 227.9336f;
					Local_110.f_159[2 /*3*/] = { 2666.033f, -931.6996f, 100.6606f };
					Local_110.f_175[2] = 6.0299f;
					Local_110.f_159[3 /*3*/] = { 1336.474f, -345.6518f, 424.9653f };
					Local_110.f_175[3] = -87.5596f;
					Local_110.f_228[0] = 10000;
					Local_110.f_228[1] = 10000;
					Local_110.f_228[2] = 10000;
					Local_110.f_228[3] = 10000;
					Local_110.f_242 = 4;
					Local_110.f_117[0 /*3*/] = { 2528.376f, -424.9132f, 113.09f };
					Local_110.f_148[0] = 338.8487f;
					Local_110.f_117[1 /*3*/] = { 2473.828f, -384.0913f, 108.6521f };
					Local_110.f_148[1] = 272.5443f;
					Local_110.f_117[2 /*3*/] = { 2535.322f, -335.4323f, 113.0844f };
					Local_110.f_148[2] = 223.0158f;
					Local_110.f_117[3 /*3*/] = { 2478.752f, -416.0706f, 92.7351f };
					Local_110.f_148[3] = 355.6682f;
					Local_110.f_117[4 /*3*/] = { 2482.176f, -353.0269f, 92.7351f };
					Local_110.f_148[4] = 179.3658f;
					break;
				
				case 4:
					if (!func_737())
					{
						Local_110.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_110.f_43[0] = 331.7771f;
					}
					else
					{
						Local_110.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_110.f_43[0] = 331.7771f;
						Local_110.f_30[1 /*3*/] = { -1841.38f, -3156.666f, 12.9444f };
						Local_110.f_43[1] = 324.1843f;
						Local_110.f_30[2 /*3*/] = { -1860.858f, -3143.922f, 12.9444f };
						Local_110.f_43[2] = 330.0586f;
						Local_110.f_30[3 /*3*/] = { -1885.131f, -3129.948f, 12.9444f };
						Local_110.f_43[3] = 329.5413f;
					}
					Local_110.f_159[0 /*3*/] = { -1185.202f, -2364.726f, 112.9452f };
					Local_110.f_175[0] = 146.9594f;
					Local_110.f_159[1 /*3*/] = { -382.1712f, -2495.05f, 105.0008f };
					Local_110.f_175[1] = 137.6555f;
					Local_110.f_159[2 /*3*/] = { -412.0741f, -2847.307f, 105.0004f };
					Local_110.f_175[2] = 114.7478f;
					Local_110.f_159[3 /*3*/] = { -2538.447f, -3165.758f, 133.9589f };
					Local_110.f_175[3] = -84.6269f;
					Local_110.f_228[0] = 10000;
					Local_110.f_228[1] = 10000;
					Local_110.f_228[2] = 10000;
					Local_110.f_228[3] = 10000;
					Local_110.f_242 = 4;
					Local_110.f_117[0 /*3*/] = { -1051.566f, -2880.667f, 29.3631f };
					Local_110.f_148[0] = 153.0449f;
					Local_110.f_117[1 /*3*/] = { -1154.167f, -2821.089f, 29.3631f };
					Local_110.f_148[1] = 153.1271f;
					Local_110.f_117[2 /*3*/] = { -1441.866f, -3280.676f, 12.9449f };
					Local_110.f_148[2] = 331.3771f;
					Local_110.f_117[3 /*3*/] = { -1209.32f, -2789.023f, 12.9523f };
					Local_110.f_148[3] = 183.2579f;
					Local_110.f_117[4 /*3*/] = { -1239.188f, -2688.943f, 12.9449f };
					Local_110.f_148[4] = 149.3518f;
					break;
				
				case 5:
					Local_110.f_30[0 /*3*/] = { -144.0471f, -593.1377f, 210.7752f };
					Local_110.f_43[0] = 184.7817f;
					Local_110.f_159[0 /*3*/] = { 449.0346f, -981.1837f, 142.6917f };
					Local_110.f_175[0] = 91.7761f;
					Local_110.f_159[1 /*3*/] = { -665.604f, -932.722f, 145.3242f };
					Local_110.f_175[1] = 269.7376f;
					Local_110.f_159[2 /*3*/] = { -686.7255f, 217.4708f, 136.5301f };
					Local_110.f_175[1] = 211.4614f;
					Local_110.f_159[3 /*3*/] = { 314.4621f, -130.8896f, 222.2372f };
					Local_110.f_175[3] = 148.9204f;
					Local_110.f_228[0] = 10000;
					Local_110.f_228[1] = 10000;
					Local_110.f_228[2] = 10000;
					Local_110.f_228[3] = 10000;
					Local_110.f_242 = 4;
					Local_110.f_117[0 /*3*/] = { -159.1301f, -600.2693f, 200.7354f };
					Local_110.f_148[0] = 113.298f;
					Local_110.f_117[1 /*3*/] = { -145.0832f, -578.3243f, 200.7354f };
					Local_110.f_148[1] = 353.0292f;
					Local_110.f_117[2 /*3*/] = { -135.3186f, -606.2405f, 200.7354f };
					Local_110.f_148[2] = 216.1793f;
					Local_110.f_117[3 /*3*/] = { -208.5985f, -725.582f, 219.5222f };
					Local_110.f_148[3] = 347.4008f;
					Local_110.f_243 = 4;
					break;
			}
			break;
		
		case joaat("valkyrie"):
			Local_110.f_240 = joaat("buzzard");
			Local_110.f_280[0] = 2;
			Local_110.f_291[0] = func_45(2);
			Local_110.f_305[0] = func_44(4);
			Local_110.f_280[1] = 4;
			Local_110.f_291[1] = func_45(4);
			Local_110.f_305[1] = func_44(4);
			Local_110.f_280[2] = 2;
			Local_110.f_291[2] = func_45(2);
			Local_110.f_305[2] = func_44(4);
			if (Local_110.f_12 <= 2 || !func_737())
			{
				Local_110.f_280[3] = 5;
				Local_110.f_291[3] = func_45(5);
				Local_110.f_278 = 4;
			}
			else if (Local_110.f_12 == 3)
			{
				Local_110.f_280[3] = 4;
				Local_110.f_291[3] = func_45(4);
				Local_110.f_305[3] = func_44(4);
				Local_110.f_280[4] = 2;
				Local_110.f_291[4] = func_45(2);
				Local_110.f_280[5] = 5;
				Local_110.f_291[5] = func_45(5);
				Local_110.f_278 = 6;
			}
			else
			{
				Local_110.f_280[3] = 4;
				Local_110.f_291[3] = func_45(4);
				Local_110.f_305[3] = func_44(4);
				Local_110.f_280[4] = 2;
				Local_110.f_291[4] = func_45(2);
				Local_110.f_280[5] = 4;
				Local_110.f_291[5] = func_45(4);
				Local_110.f_305[5] = func_44(4);
				Local_110.f_280[6] = 5;
				Local_110.f_291[6] = func_45(5);
				Local_110.f_278 = 7;
			}
			Local_110.f_255 = func_41();
			if (!func_737())
			{
				Local_110.f_1 = 3;
			}
			else
			{
				Local_110.f_1 = 8;
			}
			Local_110.f_2 = Local_110.f_29;
			switch (Local_110.f_29)
			{
				case 0:
					if (!func_737())
					{
						Local_110.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_110.f_43[0] = 290.0732f;
					}
					else
					{
						Local_110.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_110.f_43[0] = 290.0732f;
						Local_110.f_30[1 /*3*/] = { -754.8721f, -1442.684f, 4.0005f };
						Local_110.f_43[1] = 231.5867f;
						Local_110.f_30[2 /*3*/] = { -712.4144f, -1459.331f, 4.0005f };
						Local_110.f_43[2] = 49.6234f;
						Local_110.f_30[3 /*3*/] = { -729.9052f, -1418.734f, 4.0005f };
						Local_110.f_43[3] = 229.3317f;
					}
					Local_110.f_117[0 /*3*/] = { -692.5144f, -1384.774f, 4.1503f };
					Local_110.f_148[0] = 230.0049f;
					Local_110.f_117[1 /*3*/] = { -724.5416f, -1374.024f, 0.6002f };
					Local_110.f_148[1] = 147.9421f;
					Local_110.f_117[2 /*3*/] = { -763.0113f, -1531.637f, 4.4284f };
					Local_110.f_148[2] = 22.3204f;
					Local_110.f_117[3 /*3*/] = { -622.6572f, -1346.997f, 10.7793f };
					Local_110.f_148[3] = 80.7676f;
					Local_110.f_117[4 /*3*/] = { -650.5557f, -1313.337f, 9.8688f };
					Local_110.f_148[4] = 162.0507f;
					Local_110.f_117[5 /*3*/] = { -687.8698f, -1314.519f, 4.1019f };
					Local_110.f_148[5] = 225.9002f;
					Local_110.f_117[6 /*3*/] = { -719.8957f, -1300.4f, 4.1019f };
					Local_110.f_148[6] = 140.0515f;
					Local_110.f_117[7 /*3*/] = { -661.9195f, -1213.277f, 9.7043f };
					Local_110.f_148[7] = 90.6966f;
					Local_110.f_117[8 /*3*/] = { -758.4667f, -1332.722f, 8.6f };
					Local_110.f_148[8] = 226.042f;
					Local_110.f_117[9 /*3*/] = { -597.2482f, -1415.324f, 11.0923f };
					Local_110.f_148[9] = 79.7294f;
					Local_110.f_243 = 4;
					break;
				
				case 1:
					Local_110.f_30[0 /*3*/] = { 307.4523f, 2835.238f, 42.4361f };
					Local_110.f_43[0] = 122.9714f;
					Local_110.f_30[1 /*3*/] = { 358.6979f, 2863.14f, 42.0979f };
					Local_110.f_43[1] = 118.6931f;
					Local_110.f_30[2 /*3*/] = { 356.6689f, 2806.741f, 52.9669f };
					Local_110.f_43[2] = 26.5272f;
					Local_110.f_30[3 /*3*/] = { 310.0119f, 2875.712f, 42.5068f };
					Local_110.f_43[3] = 211.0638f;
					Local_110.f_117[0 /*3*/] = { 346.145f, 2861.565f, 42.4603f };
					Local_110.f_148[0] = 203.4084f;
					Local_110.f_117[1 /*3*/] = { 264.2803f, 2872.275f, 42.6105f };
					Local_110.f_148[1] = 123.7895f;
					Local_110.f_117[2 /*3*/] = { 290.4762f, 2853.89f, 42.6424f };
					Local_110.f_148[2] = 115.9053f;
					Local_110.f_117[3 /*3*/] = { 290.606f, 2810.906f, 47.9461f };
					Local_110.f_148[3] = 330.5807f;
					Local_110.f_117[4 /*3*/] = { 341.4013f, 2863.181f, 42.4361f };
					Local_110.f_148[4] = 116.311f;
					Local_110.f_117[5 /*3*/] = { 254.767f, 2880.256f, 42.5168f };
					Local_110.f_148[5] = 145.855f;
					Local_110.f_117[6 /*3*/] = { 301.125f, 2814.328f, 42.4361f };
					Local_110.f_148[6] = 41.353f;
					Local_110.f_117[7 /*3*/] = { 306.254f, 2865.798f, 42.5755f };
					Local_110.f_148[7] = 266.0158f;
					Local_110.f_117[8 /*3*/] = { 195.36f, 2808.636f, 44.3806f };
					Local_110.f_148[8] = 290.3963f;
					Local_110.f_117[9 /*3*/] = { 269.1239f, 2866.509f, 73.1797f };
					Local_110.f_148[9] = 243.2495f;
					Local_110.f_243 = 4;
					break;
				
				case 2:
					Local_110.f_30[0 /*3*/] = { 714.882f, 4175.296f, 39.7092f };
					Local_110.f_43[0] = 280.2862f;
					Local_110.f_30[1 /*3*/] = { 765.1945f, 4182.796f, 39.7152f };
					Local_110.f_43[1] = 32.9157f;
					Local_110.f_30[2 /*3*/] = { 750.664f, 4238.85f, 54.7686f };
					Local_110.f_43[2] = 106.2954f;
					Local_110.f_30[3 /*3*/] = { 569.2263f, 4178.386f, 37.2124f };
					Local_110.f_43[3] = 272.3807f;
					Local_110.f_117[0 /*3*/] = { 724.4003f, 4198.888f, 39.7092f };
					Local_110.f_148[0] = 254.5411f;
					Local_110.f_117[1 /*3*/] = { 792.2949f, 4184.186f, 39.5336f };
					Local_110.f_148[1] = 183.227f;
					Local_110.f_117[2 /*3*/] = { 754.1003f, 4181.829f, 39.7131f };
					Local_110.f_148[2] = 338.6039f;
					Local_110.f_117[3 /*3*/] = { 849.6327f, 4224.779f, 49.5859f };
					Local_110.f_148[3] = 71.8258f;
					Local_110.f_117[4 /*3*/] = { 856.303f, 4257.466f, 49.48f };
					Local_110.f_148[4] = 179.6626f;
					Local_110.f_117[5 /*3*/] = { 611.6555f, 4222.132f, 52.4756f };
					Local_110.f_148[5] = 272.7491f;
					Local_110.f_117[6 /*3*/] = { 643.0641f, 4213.754f, 52.6579f };
					Local_110.f_148[6] = 270.8252f;
					Local_110.f_117[7 /*3*/] = { 665.9061f, 4263.513f, 53.7219f };
					Local_110.f_148[7] = 180.4937f;
					Local_110.f_117[8 /*3*/] = { 876.0669f, 4247.905f, 48.9739f };
					Local_110.f_148[8] = 107.4297f;
					Local_110.f_117[9 /*3*/] = { 509.1728f, 4239.358f, 54.4925f };
					Local_110.f_148[9] = 247.5728f;
					break;
				
				case 3:
					Local_110.f_30[0 /*3*/] = { 3279.497f, 5204.456f, 17.3168f };
					Local_110.f_43[0] = 117.7311f;
					Local_110.f_30[1 /*3*/] = { 3280.456f, 5166.343f, 17.9564f };
					Local_110.f_43[1] = 46.3958f;
					Local_110.f_30[2 /*3*/] = { 3258.509f, 5225.87f, 17.2293f };
					Local_110.f_43[2] = 189.2091f;
					Local_110.f_30[3 /*3*/] = { 3302.896f, 5136.244f, 17.3101f };
					Local_110.f_43[3] = 50.0778f;
					Local_110.f_117[0 /*3*/] = { 3318.215f, 5186.109f, 17.4503f };
					Local_110.f_148[0] = 229.5714f;
					Local_110.f_117[1 /*3*/] = { 3309.254f, 5167.526f, 17.4491f };
					Local_110.f_148[1] = 136.4963f;
					Local_110.f_117[2 /*3*/] = { 3372.606f, 5183.914f, 0.4652f };
					Local_110.f_148[2] = 88.3908f;
					Local_110.f_117[3 /*3*/] = { 3222.684f, 5187.734f, 30.0174f };
					Local_110.f_148[3] = 271.8922f;
					Local_110.f_117[4 /*3*/] = { 3217.351f, 5145.03f, 18.4178f };
					Local_110.f_148[4] = 316.4374f;
					Local_110.f_117[5 /*3*/] = { 3155.562f, 5285.246f, 28.0707f };
					Local_110.f_148[5] = 246.1521f;
					Local_110.f_117[6 /*3*/] = { 3311.935f, 5176.247f, 18.6196f };
					Local_110.f_148[6] = 198.8985f;
					Local_110.f_117[7 /*3*/] = { 3230.142f, 5200.801f, 22.8278f };
					Local_110.f_148[7] = 257.2332f;
					Local_110.f_117[8 /*3*/] = { 3420.069f, 5169.133f, 4.8574f };
					Local_110.f_148[8] = 104.7808f;
					Local_110.f_117[9 /*3*/] = { 3242.868f, 5035.166f, 20.011f };
					Local_110.f_148[9] = 339.2293f;
					break;
				
				case 4:
					Local_110.f_30[0 /*3*/] = { -1736.989f, 162.0228f, 63.371f };
					Local_110.f_43[0] = 306.7662f;
					Local_110.f_30[1 /*3*/] = { -1736.938f, 137.1991f, 63.371f };
					Local_110.f_43[1] = 303.3918f;
					Local_110.f_30[2 /*3*/] = { -1756.272f, 172.5584f, 63.3711f };
					Local_110.f_43[2] = 302.365f;
					Local_110.f_30[3 /*3*/] = { -1710.748f, 129.7035f, 63.3716f };
					Local_110.f_43[3] = 304.9788f;
					Local_110.f_117[0 /*3*/] = { -1674.868f, 141.795f, 62.4627f };
					Local_110.f_148[0] = 30.9787f;
					Local_110.f_117[1 /*3*/] = { -1668.265f, 190.8298f, 60.7573f };
					Local_110.f_148[1] = 97.3626f;
					Local_110.f_117[2 /*3*/] = { -1661.135f, 236.6263f, 61.391f };
					Local_110.f_148[2] = 218.2636f;
					Local_110.f_117[3 /*3*/] = { -1706.443f, 186.8354f, 62.9277f };
					Local_110.f_148[3] = 257.6324f;
					Local_110.f_117[4 /*3*/] = { -1722.395f, 227.362f, 60.7408f };
					Local_110.f_148[4] = 244.6777f;
					Local_110.f_117[5 /*3*/] = { -1623.344f, 165.8969f, 59.7796f };
					Local_110.f_148[5] = 12.745f;
					Local_110.f_117[6 /*3*/] = { -1627.188f, 242.7915f, 58.648f };
					Local_110.f_148[6] = 196.3743f;
					Local_110.f_117[7 /*3*/] = { -1796.215f, 150.6246f, 67.7735f };
					Local_110.f_148[7] = 283.2556f;
					Local_110.f_117[8 /*3*/] = { -1774.033f, 105.8673f, 69.3384f };
					Local_110.f_148[8] = 243.4268f;
					Local_110.f_117[9 /*3*/] = { -1594.717f, 210.4007f, 73.3379f };
					Local_110.f_148[9] = 27.7876f;
					break;
			}
			break;
		
		case joaat("buzzard"):
			Local_110.f_240 = joaat("buzzard");
			Local_110.f_280[0] = 2;
			Local_110.f_291[0] = func_45(2);
			Local_110.f_280[1] = 4;
			Local_110.f_291[1] = func_45(4);
			Local_110.f_305[1] = func_44(4);
			Local_110.f_280[2] = 2;
			Local_110.f_291[2] = func_45(2);
			if (Local_110.f_12 <= 2 || !func_737())
			{
				Local_110.f_280[3] = 5;
				Local_110.f_291[3] = func_45(5);
				Local_110.f_278 = 4;
			}
			else if (Local_110.f_12 == 3)
			{
				Local_110.f_280[3] = 4;
				Local_110.f_291[3] = func_45(4);
				Local_110.f_305[3] = func_44(4);
				Local_110.f_280[4] = 2;
				Local_110.f_291[4] = func_45(2);
				Local_110.f_280[5] = 5;
				Local_110.f_291[5] = func_45(5);
				Local_110.f_278 = 6;
			}
			else
			{
				Local_110.f_280[3] = 4;
				Local_110.f_291[3] = func_45(4);
				Local_110.f_305[3] = func_44(4);
				Local_110.f_280[4] = 2;
				Local_110.f_291[4] = func_45(2);
				Local_110.f_280[5] = 4;
				Local_110.f_291[5] = func_45(4);
				Local_110.f_305[5] = func_44(4);
				Local_110.f_280[6] = 5;
				Local_110.f_291[6] = func_45(5);
				Local_110.f_278 = 7;
			}
			Local_110.f_255 = func_41();
			if (!func_737())
			{
				Local_110.f_1 = 4;
			}
			else
			{
				Local_110.f_1 = 9;
			}
			Local_110.f_2 = Local_110.f_29;
			switch (Local_110.f_29)
			{
				case 0:
					Local_110.f_30[0 /*3*/] = { 1139.943f, -1289.195f, 33.6127f };
					Local_110.f_43[0] = 180.7904f;
					Local_110.f_30[1 /*3*/] = { 1156.358f, -1327.402f, 33.7312f };
					Local_110.f_43[1] = 269.3001f;
					Local_110.f_30[2 /*3*/] = { 1204.963f, -1265.334f, 34.2267f };
					Local_110.f_43[2] = 180.39f;
					Local_110.f_30[3 /*3*/] = { 1220.954f, -1214.883f, 34.9485f };
					Local_110.f_43[3] = 276.7351f;
					Local_110.f_117[0 /*3*/] = { 1195.556f, -1277.914f, 34.3601f };
					Local_110.f_148[0] = 329.9165f;
					Local_110.f_117[1 /*3*/] = { 1197.899f, -1297.386f, 34.1985f };
					Local_110.f_148[1] = 264.7702f;
					Local_110.f_117[2 /*3*/] = { 1168.435f, -1382.305f, 33.784f };
					Local_110.f_148[2] = 359.5203f;
					Local_110.f_117[3 /*3*/] = { 1160.796f, -1253.626f, 33.5659f };
					Local_110.f_148[3] = 111.3101f;
					Local_110.f_117[4 /*3*/] = { 1178.2f, -1272.399f, 33.8277f };
					Local_110.f_148[4] = 176.3058f;
					Local_110.f_117[5 /*3*/] = { 1185.282f, -1355.494f, 33.9506f };
					Local_110.f_148[5] = 213.1969f;
					Local_110.f_117[6 /*3*/] = { 1217.704f, -1381.659f, 34.3114f };
					Local_110.f_148[6] = 275.2275f;
					Local_110.f_117[7 /*3*/] = { 1193.388f, -1257.564f, 34.2036f };
					Local_110.f_148[7] = 220.0349f;
					Local_110.f_117[8 /*3*/] = { 1174.833f, -1381.064f, 41.8297f };
					Local_110.f_148[8] = 359.15f;
					Local_110.f_117[9 /*3*/] = { 1154.647f, -1338.613f, 33.7034f };
					Local_110.f_148[9] = 83.4212f;
					break;
				
				case 1:
					Local_110.f_30[0 /*3*/] = { 129.1966f, -368.0656f, 42.257f };
					Local_110.f_43[0] = 247.4892f;
					Local_110.f_30[1 /*3*/] = { 147.9662f, -363.0619f, 42.257f };
					Local_110.f_43[1] = 66.129f;
					Local_110.f_30[2 /*3*/] = { 116.6446f, -436.4488f, 40.1294f };
					Local_110.f_43[2] = 340.0713f;
					Local_110.f_30[3 /*3*/] = { 90.0879f, -385.0907f, 40.2506f };
					Local_110.f_43[3] = 245.7466f;
					Local_110.f_117[0 /*3*/] = { 47.0236f, -401.9681f, 38.9218f };
					Local_110.f_148[0] = 252.6017f;
					Local_110.f_117[1 /*3*/] = { 36.934f, -438.6162f, 38.9206f };
					Local_110.f_148[1] = 245.262f;
					Local_110.f_117[2 /*3*/] = { 69.7929f, -461.295f, 38.9215f };
					Local_110.f_148[2] = 44.7945f;
					Local_110.f_117[3 /*3*/] = { 48.4389f, -397.2337f, 54.29f };
					Local_110.f_148[3] = 255.6518f;
					Local_110.f_117[4 /*3*/] = { 204.0561f, -439.34f, 41.9848f };
					Local_110.f_148[4] = 124.8391f;
					Local_110.f_117[5 /*3*/] = { 142.2612f, -291.4343f, 45.3084f };
					Local_110.f_148[5] = 188.9979f;
					Local_110.f_117[6 /*3*/] = { 163.2065f, -291.4264f, 45.1553f };
					Local_110.f_148[6] = 159.3613f;
					Local_110.f_117[7 /*3*/] = { 115.7637f, -459.3909f, 40.1269f };
					Local_110.f_148[7] = 5.7762f;
					Local_110.f_117[8 /*3*/] = { 76.8378f, -337.484f, 66.2022f };
					Local_110.f_148[8] = 89.3388f;
					Local_110.f_117[9 /*3*/] = { 134.533f, -346.3627f, 101.6362f };
					Local_110.f_148[9] = 85.9158f;
					break;
				
				case 2:
					Local_110.f_30[0 /*3*/] = { -509.9767f, 1186.854f, 323.8415f };
					Local_110.f_43[0] = 310.6241f;
					Local_110.f_30[1 /*3*/] = { -398.0129f, 1230.508f, 324.6416f };
					Local_110.f_43[1] = 166.0191f;
					Local_110.f_30[2 /*3*/] = { -455.6342f, 1141.998f, 324.9044f };
					Local_110.f_43[2] = 343.1715f;
					Local_110.f_30[3 /*3*/] = { -412.4245f, 1133.032f, 324.9044f };
					Local_110.f_43[3] = 342.4984f;
					Local_110.f_117[0 /*3*/] = { -426.3299f, 1216.66f, 324.7585f };
					Local_110.f_148[0] = 248.8594f;
					Local_110.f_117[1 /*3*/] = { -363.2418f, 1266.761f, 329.8745f };
					Local_110.f_148[1] = 195.7758f;
					Local_110.f_117[2 /*3*/] = { -453.9799f, 1074.992f, 326.6897f };
					Local_110.f_148[2] = 28.6127f;
					Local_110.f_117[3 /*3*/] = { -392.485f, 1078.562f, 323.2558f };
					Local_110.f_148[3] = 296.7476f;
					Local_110.f_117[4 /*3*/] = { -413.6003f, 1086.831f, 326.6821f };
					Local_110.f_148[4] = 240.9422f;
					Local_110.f_117[5 /*3*/] = { -381.0179f, 1141.269f, 321.6503f };
					Local_110.f_148[5] = 2.473f;
					Local_110.f_117[6 /*3*/] = { -482.3448f, 1118.646f, 319.0963f };
					Local_110.f_148[6] = 343.6776f;
					Local_110.f_117[7 /*3*/] = { -397.3531f, 1127.527f, 321.7288f };
					Local_110.f_148[7] = 0.2495f;
					Local_110.f_117[8 /*3*/] = { -435.3902f, 1092.162f, 331.5411f };
					Local_110.f_148[8] = 72.7889f;
					Local_110.f_117[9 /*3*/] = { -424.5132f, 1225.076f, 324.7585f };
					Local_110.f_148[9] = 238.4196f;
					break;
				
				case 3:
					Local_110.f_30[0 /*3*/] = { 341.0539f, 3569.789f, 32.4743f };
					Local_110.f_43[0] = 351.0324f;
					Local_110.f_30[1 /*3*/] = { 373.5018f, 3512.322f, 33.1732f };
					Local_110.f_43[1] = 3.5452f;
					Local_110.f_30[2 /*3*/] = { 353.5068f, 3483.839f, 34.0848f };
					Local_110.f_43[2] = 7.3237f;
					Local_110.f_30[3 /*3*/] = { 245.8774f, 3580.881f, 32.9612f };
					Local_110.f_43[3] = 332.0844f;
					Local_110.f_117[0 /*3*/] = { 447.4214f, 3566.317f, 32.2386f };
					Local_110.f_148[0] = 2.6416f;
					Local_110.f_117[1 /*3*/] = { 445.3309f, 3512.088f, 32.9825f };
					Local_110.f_148[1] = 171.8638f;
					Local_110.f_117[2 /*3*/] = { 353.2316f, 3396.212f, 35.4033f };
					Local_110.f_148[2] = 257.0332f;
					Local_110.f_117[3 /*3*/] = { 454.5527f, 3530.242f, 32.4254f };
					Local_110.f_148[3] = 91.7869f;
					Local_110.f_117[4 /*3*/] = { 395.8559f, 3577.025f, 32.2922f };
					Local_110.f_148[4] = 4.2016f;
					Local_110.f_117[5 /*3*/] = { 380.2437f, 3560.991f, 32.342f };
					Local_110.f_148[5] = 339.729f;
					Local_110.f_117[6 /*3*/] = { 408.4627f, 3458.313f, 32.6961f };
					Local_110.f_148[6] = 359.2033f;
					Local_110.f_117[7 /*3*/] = { 476.5523f, 3557.328f, 32.2386f };
					Local_110.f_148[7] = 333.6298f;
					Local_110.f_117[8 /*3*/] = { 325.6323f, 3390.666f, 35.4033f };
					Local_110.f_148[8] = 73.2788f;
					Local_110.f_117[9 /*3*/] = { 461.6116f, 3535.257f, 32.318f };
					Local_110.f_148[9] = 96.8181f;
					break;
				
				case 4:
					Local_110.f_30[0 /*3*/] = { 1493.166f, 1177.555f, 113.2209f };
					Local_110.f_43[0] = 42.1535f;
					Local_110.f_30[1 /*3*/] = { 1433.476f, 1179.544f, 113.1842f };
					Local_110.f_43[1] = 315.0261f;
					Local_110.f_30[2 /*3*/] = { 1471.486f, 1108.967f, 113.3343f };
					Local_110.f_43[2] = 1.2527f;
					Local_110.f_30[3 /*3*/] = { 1448.914f, 1110.622f, 113.3363f };
					Local_110.f_43[3] = 1.9403f;
					Local_110.f_117[0 /*3*/] = { 1485.622f, 1047.388f, 113.334f };
					Local_110.f_148[0] = 352.9674f;
					Local_110.f_117[1 /*3*/] = { 1461.541f, 1083.658f, 113.3344f };
					Local_110.f_148[1] = 88.8285f;
					Local_110.f_117[2 /*3*/] = { 1411.874f, 1126.96f, 113.3341f };
					Local_110.f_148[2] = 177.2297f;
					Local_110.f_117[3 /*3*/] = { 1442.497f, 1148.469f, 113.3342f };
					Local_110.f_148[3] = 273.1487f;
					Local_110.f_117[4 /*3*/] = { 1406.476f, 1256.695f, 106.6555f };
					Local_110.f_148[4] = 225.394f;
					Local_110.f_117[5 /*3*/] = { 1464.077f, 1134.808f, 113.3227f };
					Local_110.f_148[5] = 175.5423f;
					Local_110.f_117[6 /*3*/] = { 1410.314f, 1162.317f, 113.3342f };
					Local_110.f_148[6] = 191.1842f;
					Local_110.f_117[7 /*3*/] = { 1487.483f, 1102.243f, 113.3346f };
					Local_110.f_148[7] = 269.6831f;
					Local_110.f_117[8 /*3*/] = { 1391.034f, 1154.223f, 113.4433f };
					Local_110.f_148[8] = 29.4203f;
					Local_110.f_117[9 /*3*/] = { 1484.87f, 1039.553f, 113.2318f };
					Local_110.f_148[9] = 287.677f;
					break;
			}
			break;
	}
}

int func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_110.f_255 != -1)
	{
		return Local_110.f_255;
	}
	if (Local_110.f_278 == 0)
	{
		return ((4 * Global_262145.f_10093) + Global_262145.f_10094);
	}
	iVar2 = func_96();
	iVar3 = func_43(iVar2);
	iVar4 = func_42(iVar3);
	switch (Local_110.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar1 = 0;
			while (iVar1 < Local_110.f_278)
			{
				iVar0 = (iVar0 + ((Local_110.f_291[iVar1] * iVar4) + Local_110.f_305[iVar1]));
				iVar1++;
			}
			break;
	}
	return iVar0;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case joaat("insurgent"):
			return 2;
			break;
		
		case joaat("lazer"):
			return 1;
			break;
		
		case joaat("buzzard"):
			return 4;
			break;
		
		case joaat("mesa3"):
			return 4;
			break;
		
		case joaat("savage"):
			return 4;
			break;
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			if (Local_110.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
		
		case 4:
			if (Local_110.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else
			{
				iVar0 = joaat("mesa3");
			}
			break;
		
		case 5:
			iVar0 = joaat("savage");
			break;
		
		default:
			if (Local_110.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else if (Local_110.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
	}
	return iVar0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 4:
		case 3:
			if (func_737())
			{
				iVar0 = Global_262145.f_11269;
			}
			else
			{
				iVar0 = Global_262145.f_10989;
			}
			break;
	}
	return iVar0;
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 2:
			if (func_737())
			{
				iVar0 = Global_262145.f_11270;
			}
			else
			{
				iVar0 = Global_262145.f_10990;
			}
			break;
		
		case 5:
			if (func_737())
			{
				iVar0 = Global_262145.f_11271;
			}
			else
			{
				iVar0 = Global_262145.f_10991;
			}
			break;
		
		case 4:
			if (func_737())
			{
				iVar0 = Global_262145.f_11268;
			}
			else
			{
				iVar0 = Global_262145.f_10988;
			}
			break;
	}
	return iVar0;
}

int func_46(int iParam0)
{
	if (!func_737())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 5;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 5;
			
			case joaat("buzzard"):
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 3;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 4;
			
			case joaat("buzzard"):
				return 4;
			}
		
		default:
	}
	return 5;
}

void func_47()
{
	Local_110.f_252 = 0;
	Local_110.f_302 = 0;
	Local_110.f_317 = 0;
	Local_110.f_316 = 0;
}

int func_48()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 20;
	iVar0 = 20;
	while (iVar0 <= 23)
	{
		if (!func_31(Local_110.f_48[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_49()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_110.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_110.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_96() == 4)
				{
					return 2;
				}
				else if (func_96() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_50()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_107(Local_110.f_73[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	if (Local_110.f_318 == 0 || Local_110.f_318 == func_39())
	{
		if (func_96() == 2 || func_96() == 5)
		{
			return 0;
		}
	}
	if (func_96() == 3 || func_96() == 4)
	{
		if (Local_110.f_317 >= func_38())
		{
			iVar0 = Local_110.f_279 + 1;
			if (iVar0 < 10)
			{
				iVar1 = Local_110.f_280[iVar0];
				if (iVar1 == 5)
				{
					bVar2 = true;
				}
			}
			if (!bVar2)
			{
				return 0;
			}
		}
	}
	else if (Local_110.f_317 == 2)
	{
		iVar0 = Local_110.f_279 + 1;
		if (iVar0 < 10)
		{
			iVar1 = Local_110.f_280[iVar0];
			if (iVar1 == 5)
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			return 0;
		}
	}
	if (Local_110.f_318 == func_39())
	{
		return 0;
	}
	if (Local_110.f_318 == func_71())
	{
		return 0;
	}
	if (func_96() == 1)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_48[(20 + iParam0)]))
	{
		if (func_70(Local_110.f_239) && NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 1, 0, 0))
		{
			if (func_68(&iVar3))
			{
				if (func_55(Local_110.f_117[iVar3 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_54(&(Local_110.f_48[(20 + iParam0)]), 22, Local_110.f_239, Local_110.f_117[iVar3 /*3*/], Local_110.f_148[iVar3], 1, 1, 1))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iParam0)]), uLocal_1532);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iParam0)]), 1, 0);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iParam0)]), 0);
						if (iVar3 == 8 || iVar3 == 9)
						{
							WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iParam0)]), joaat("weapon_rpg"), 25000, 1, 1);
						}
						else
						{
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iParam0)]), joaat("weapon_advancedrifle"), 25000, 1);
						}
						fVar6 = (30f * func_53());
						PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iParam0)]), SYSTEM::ROUND(fVar6));
						PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iParam0)]), 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iParam0)]), 0, 1);
						PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iParam0)]), 1);
						PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iParam0)]), 42, 1);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iParam0)]), SYSTEM::ROUND((200f * Global_262145.f_153)), 0);
						PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iParam0)]), 151, 0);
						uVar4 = ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iParam0)]));
						fVar5 = func_52();
						uVar4 = SYSTEM::ROUND((fVar5 * SYSTEM::TO_FLOAT(uVar4)));
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_48[(20 + iParam0)]), uVar4, 0);
						iVar7 = (20 + iParam0);
						if (GAMEPLAY::IS_BIT_SET(Local_110.f_272[func_89(iVar7)], func_88(iVar7)))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_110.f_272[func_89(iVar7)]), func_88(iVar7));
						}
						Local_110.f_247++;
						Local_110.f_317++;
						Local_110.f_250++;
						Local_110.f_318++;
						func_104(&(Local_110.f_414[iVar7 /*2*/]));
						func_19(&(Local_110.f_414[iVar7 /*2*/]), 0, 0);
						if (func_21(&(Local_110.f_364[iVar7 /*2*/])))
						{
							func_104(&(Local_110.f_364[iVar7 /*2*/]));
						}
						func_19(&(Local_3445[iVar3 /*2*/]), 0, 0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_110.f_48[iVar7]), 1, iLocal_1531);
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_48[(20 + iParam0)]))
	{
		return 0;
	}
	return 1;
}

var func_52()
{
	if (func_737())
	{
		return Global_262145.f_11257;
	}
	return Global_262145.f_10977;
}

float func_53()
{
	if (func_737())
	{
		return Global_262145.f_11259;
	}
	return Global_262145.f_10979;
}

int func_54(var uParam0, int iParam1, var uParam2, vector3 vParam3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	uVar0 = PED::CREATE_PED(iParam1, uParam2, vParam3, uParam6, iParam8, bParam7);
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

int func_55(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
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
		if (func_62(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_56(vParam0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405070.f_2++;
	return 1;
}

int func_56(vector3 vParam0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_837(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_58(PLAYER::PLAYER_ID()), vParam0, 1) <= (fVar2 + fParam3))
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
		if (func_837(iVar1, 1, 1))
		{
			if (!func_15(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_57(iVar1) || !bParam10) && !Global_2423801[iVar1 /*413*/].f_259)
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
								if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_58(iVar1), vParam0, 1) <= (fVar2 + fParam3))
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
							if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_58(iVar1), vParam0, 1) <= (fVar2 + fParam3))
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

int func_57(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2423801[iParam0 /*413*/].f_245)
	{
		return 1;
	}
	return 0;
}

Vector3 func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_61() && Global_1589747[iVar0 /*790*/].f_761) && !func_60(Global_1589747[iVar0 /*790*/].f_762))
	{
		return Global_1589747[iVar0 /*790*/].f_762;
	}
	return func_59(iParam0);
}

Vector3 func_59(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_60(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_61()
{
	return Global_2448386.f_16;
}

int func_62(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_837(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_57(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_63(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_59(iVar1), vParam0, 1) < fParam3)
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

int func_63(int iParam0)
{
	if (func_67(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2503649 = { func_66(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2503649))
	{
		return 1;
	}
	if (func_64(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_65(iParam0);
	if (!iVar0 == func_26())
	{
		if (iVar0 == func_65(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_65(int iParam0)
{
	if (iParam0 != func_26())
	{
		return Global_1625435[iParam0 /*560*/].f_11;
	}
	return func_26();
}

struct<13> func_66(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_67(var uParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2503649 = { func_66(uParam0) };
		Global_2503662 = { func_66(iParam1) };
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

int func_68(var uParam0)
{
	int iVar0;
	
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 10);
	if (!func_69(Local_110.f_117[iVar0 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_21(&(Local_3445[iVar0 /*2*/])) || (func_21(&(Local_3445[iVar0 /*2*/])) && func_18(&(Local_3445[iVar0 /*2*/]), 10000, 0)))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

bool func_69(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_70(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	if (Local_110.f_279 == 0)
	{
		iVar0 = Local_110.f_305[0];
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Local_110.f_279)
		{
			iVar0 = (iVar0 + Local_110.f_305[iVar1]);
			iVar1++;
		}
	}
	return iVar0;
}

int func_72()
{
	int iVar0;
	int iVar1;
	
	switch (Local_110.f_27)
	{
		case joaat("savage"):
		case joaat("rhino"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_110.f_305[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4;
	if (func_96() == 3)
	{
		return 0;
	}
	if (Local_110.f_242 < iVar0)
	{
	}
	if (Local_110.f_251 >= iVar0)
	{
		return 0;
	}
	if (func_96() > 1)
	{
		iVar1 = func_86();
		if (Local_110.f_252 >= iVar1)
		{
			return 0;
		}
	}
	if (func_70(Local_110.f_240) && func_70(Local_110.f_239))
	{
		if (func_74(iParam0))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_110.f_245, iParam0))
			{
				Local_110.f_249++;
				Local_110.f_251++;
				Local_110.f_252++;
				GAMEPLAY::CLEAR_BIT(&(Local_110.f_245), iParam0);
				if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 19))
				{
					GAMEPLAY::SET_BIT(&(Local_110.f_3), 19);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0)
{
	if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(4, 1, 0, 0))
	{
		if (func_80(iParam0))
		{
			if (func_75(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_75(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	if (func_107(Local_110.f_73[iParam0]) && GAMEPLAY::IS_BIT_SET(Local_110.f_245, iParam0))
	{
		if (func_79(Local_110.f_73[iParam0]))
		{
			if (Local_110.f_116 <= 0)
			{
				if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0])) == joaat("insurgent"))
				{
					Local_110.f_116 = 2;
				}
				else
				{
					Local_110.f_116 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0])) + 1;
					if (Local_110.f_116 > 4)
					{
						Local_110.f_116 = 4;
					}
				}
			}
			iVar6 = 0;
			while (iVar6 < Local_110.f_116)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_48[(iParam0 * 4 + iVar6)]))
				{
					if (func_70(Local_110.f_239))
					{
						iVar4 = (iVar6 - 1);
						if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0])) == joaat("insurgent"))
						{
							if (iVar4 == 0)
							{
								iVar4 = 7;
							}
						}
						if (func_78(&(Local_110.f_48[(iParam0 * 4 + iVar6)]), Local_110.f_73[iParam0], 22, Local_110.f_239, iVar4, 1, 1, 1))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), uLocal_1532);
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 1, 0);
							PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 0);
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_appistol"), 25000, 0);
							if (func_77())
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
							}
							else
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
							}
							fVar5 = 10f;
							fVar5 = (fVar5 * func_53());
							PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 2, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 3, 0);
							PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 0, 1);
							PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 1);
							PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 1);
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND((200f * Global_262145.f_153)), 0);
							PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 42, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
							PED::SET_PED_DIES_IN_WATER(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_DIES_INSTANTLY_IN_WATER(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_DIES_IN_SINKING_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 151, 0);
							if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]))))
							{
								if (iVar6 == 0)
								{
									PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 299f);
									fVar5 = 3f;
									fVar5 = (fVar5 * func_76());
									PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
									PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 50);
									PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
									PED::SET_PED_FIRING_PATTERN(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), -1857128337);
								}
								uVar0 = Global_262145.f_11241;
								uVar1 = Global_262145.f_11242;
								uVar2 = Global_262145.f_11243;
								uVar3 = Global_262145.f_11244;
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 23, uVar0);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 24, uVar1);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 25, uVar2);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 26, uVar3);
							}
							else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]))))
							{
								PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 299f);
								fVar5 = 3f;
								fVar5 = (fVar5 * func_76());
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
								PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 50);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
								uVar0 = Global_262145.f_11241;
								uVar1 = Global_262145.f_11242;
								uVar2 = Global_262145.f_11243;
								uVar3 = Global_262145.f_11244;
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 23, uVar0);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 24, uVar1);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 25, uVar2);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 26, uVar3);
							}
							iVar7 = (iParam0 * 4 + iVar6);
							if (GAMEPLAY::IS_BIT_SET(Local_110.f_272[func_89(iVar7)], func_88(iVar7)))
							{
								GAMEPLAY::CLEAR_BIT(&(Local_110.f_272[func_89(iVar7)]), func_88(iVar7));
							}
							PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 1);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), 1, iLocal_1531);
							Local_110.f_250++;
							func_104(&(Local_110.f_414[(iParam0 * 4 + iVar6) /*2*/]));
							func_19(&(Local_110.f_414[(iParam0 * 4 + iVar6) /*2*/]), 0, 0);
							if (func_21(&(Local_110.f_364[(iParam0 * 4 + iVar6) /*2*/])))
							{
								func_104(&(Local_110.f_364[(iParam0 * 4 + iVar6) /*2*/]));
							}
						}
					}
				}
				iVar6++;
			}
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < Local_110.f_116)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (func_31(Local_110.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (!PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_48[(iParam0 * 4 + iVar6)]), NETWORK::NET_TO_VEH(Local_110.f_73[iParam0])))
				{
					return 0;
				}
				iVar6++;
			}
			return 1;
		}
	}
	return 0;
}

float func_76()
{
	if (func_737())
	{
		return Global_262145.f_11260;
	}
	return Global_262145.f_10980;
}

int func_77()
{
	if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_78(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_79(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

int func_80(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	var uVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	vector3 vVar12;
	var uVar15;
	int iVar16;
	
	iVar0 = func_96();
	Local_110.f_240 = func_43(iVar0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_73[iParam0]))
	{
		iVar2 = 0;
		while (iVar2 < Local_110.f_116)
		{
			iVar3 = (iParam0 * 4 + iVar2);
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_48[iVar3]))
			{
				return 0;
			}
			iVar2++;
		}
		if (func_70(Local_110.f_240) && !GAMEPLAY::IS_BIT_SET(Local_110.f_245, iParam0))
		{
			fVar10 = 300f;
			if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_110.f_240) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_110.f_240))
			{
				fVar9 = 300f;
			}
			else
			{
				fVar9 = 100f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_110.f_240))
			{
				fVar10 = 800f;
			}
			iVar11 = 0;
			while (iVar11 < Local_110.f_242)
			{
				if (func_85(iVar11))
				{
					func_84(Local_110.f_240, iVar11, &vVar12, &uVar15);
					if (!func_69(vVar12, 0f, 0f, 0f, 0))
					{
						if (func_55(vVar12, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, fVar10, 0, -1, 1, fVar9, 0, 0, 0, 0))
						{
							vVar4 = { vVar12 };
							uVar7 = uVar15;
							iVar8 = 1;
							func_7(&(Local_110.f_186[iVar11 /*2*/]), 0, 0);
							iVar11 = Local_110.f_242;
						}
					}
				}
				iVar11++;
			}
			if (iVar8 == 1)
			{
				iVar16 = 1;
				if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_110.f_240) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_110.f_240))
				{
					iVar16 = 0;
				}
				if (func_83(iParam0))
				{
					if (func_82(&(Local_110.f_73[iParam0]), Local_110.f_240, vVar4, uVar7, 1, 1, 1, 0, iVar16, 1, 0, 0, 0, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 2);
						VEHICLE::_0x2311DD7159F00582(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 1);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 0, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 2);
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 1, 1, 0);
						VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 0);
						unk_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 0);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_110.f_240))
						{
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]));
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 1);
							ROPE::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]));
							ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 0);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_110.f_240))
						{
							VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 3);
							ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 0);
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 1);
							ROPE::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]));
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 30f);
							VEHICLE::_0xE16142B94664DEFD(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 1);
							VEHICLE::_0xC361AA040D6637A8(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 1);
							fVar1 = 500f;
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), SYSTEM::ROUND(fVar1), 0);
						}
						else
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 1, 1);
						}
						if (func_96() == 5)
						{
							fVar1 = SYSTEM::TO_FLOAT(func_81());
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), SYSTEM::ROUND(fVar1), 0);
							ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), SYSTEM::ROUND(fVar1));
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), fVar1);
							VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), fVar1);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), fVar1);
							VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 0);
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x4056EA1105F5ABD7(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), fVar1);
							unk_0xFE205F38AAA58E5B(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), fVar1);
						}
						if (func_21(&(Local_110.f_336[iParam0 /*2*/])))
						{
							func_104(&(Local_110.f_336[iParam0 /*2*/]));
						}
						GAMEPLAY::CLEAR_BIT(&(Local_110.f_253), iParam0);
						GAMEPLAY::SET_BIT(&(Local_110.f_245), iParam0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 1, iLocal_1531);
						if (GAMEPLAY::IS_BIT_SET(Local_110.f_271, iParam0))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_110.f_271), iParam0);
						}
						if (GAMEPLAY::IS_BIT_SET(Local_110.f_303, iParam0))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_110.f_303), iParam0);
						}
						if (Local_110.f_240 == joaat("hydra") || Local_110.f_240 == joaat("savage"))
						{
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_73[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_81()
{
	if (func_737())
	{
		return Global_262145.f_11258;
	}
	return Global_262145.f_10978;
}

int func_82(var uParam0, int iParam1, vector3 vParam2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
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

int func_83(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_744[iVar0 /*18*/].f_6, iParam0))
			{
				uVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_84(var uParam0, int iParam1, var uParam2, var uParam3)
{
	bool bVar0;
	
	bVar0 = (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(uParam0));
	switch (Local_110.f_27)
	{
		case joaat("rhino"):
			if (!func_69(Local_110.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_110.f_159[iParam1 /*3*/] };
				*uParam3 = Local_110.f_175[iParam1];
			}
			break;
		
		case joaat("hydra"):
			if (!func_69(Local_110.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_110.f_159[iParam1 /*3*/] };
				*uParam3 = Local_110.f_175[iParam1];
			}
			break;
		
		case joaat("savage"):
			switch (Local_110.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1292.189f, -2572.868f, 22.9452f };
								*uParam3 = 332.6443f;
								break;
							
							case 1:
								*uParam2 = { -1062.843f, -3502.913f, 23.1484f };
								*uParam3 = 326.474f;
								break;
							
							case 2:
								*uParam2 = { -1842.189f, -3149.964f, 22.9444f };
								*uParam3 = 177.2589f;
								break;
							
							case 3:
								*uParam2 = { -1271.333f, -2267.149f, 12.9454f };
								*uParam3 = 243.2036f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -892.8904f, -2935.942f, 12.9444f };
								*uParam3 = 50.7848f;
								break;
							
							case 1:
								*uParam2 = { -1290.713f, -2658.844f, 13.0516f };
								*uParam3 = 152.2952f;
								break;
							
							case 2:
								*uParam2 = { -1157.682f, -2725.707f, 12.9534f };
								*uParam3 = 187.5114f;
								break;
							
							case 3:
								*uParam2 = { -949.6019f, -3072.991f, 12.9444f };
								*uParam3 = 63.8501f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
							
							case 1:
								*uParam2 = { 2259.96f, 5608.534f, 63.366f };
								*uParam3 = 171.56f;
								break;
							
							case 2:
								*uParam2 = { 1042.117f, 4282.784f, 47.277f };
								*uParam3 = 284.7637f;
								break;
							
							case 3:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							
							case 1:
								*uParam2 = { 2439.703f, 4993.831f, 44.9932f };
								*uParam3 = 136.377f;
								break;
							
							case 2:
								*uParam2 = { 1972.487f, 4843.981f, 43.13f };
								*uParam3 = 315.4388f;
								break;
							
							case 3:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -822.0636f, 5744.907f, 16.2672f };
								*uParam3 = 305.7653f;
								break;
							
							case 1:
								*uParam2 = { 22.328f, 6898.096f, 21.23f };
								*uParam3 = 151.4785f;
								break;
							
							case 2:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
							
							case 3:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							
							case 1:
								*uParam2 = { -38.6174f, 6281.176f, 30.2043f };
								*uParam3 = 32.7307f;
								break;
							
							case 2:
								*uParam2 = { -313.5567f, 6436.651f, 11.6953f };
								*uParam3 = 129.4952f;
								break;
							
							case 3:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1490.884f, -1955.97f, 79.7973f };
								*uParam3 = 78.8897f;
								break;
							
							case 1:
								*uParam2 = { 594.3433f, -1979.466f, 28.9706f };
								*uParam3 = 319.8794f;
								break;
							
							case 2:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
							
							case 3:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 983.6414f, -1848.797f, 30.0987f };
								*uParam3 = 178.6463f;
								break;
							
							case 1:
								*uParam2 = { 992.1669f, -1506.845f, 30.4275f };
								*uParam3 = 90.1264f;
								break;
							
							case 2:
								*uParam2 = { 771.2441f, -1620.786f, 29.9058f };
								*uParam3 = 313.4008f;
								break;
							
							case 3:
								*uParam2 = { 840.4948f, -1950.51f, 27.9516f };
								*uParam3 = 87.2509f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("valkyrie"):
			switch (Local_110.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -619.1071f, -1856.811f, 38.0408f };
								*uParam3 = 10.5487f;
								break;
							
							case 1:
								*uParam2 = { -273.1338f, -1627.779f, 40.8488f };
								*uParam3 = 77.2743f;
								break;
							
							case 2:
								*uParam2 = { -1157.959f, -1697.113f, 40.3479f };
								*uParam3 = 299.9692f;
								break;
							
							case 3:
								*uParam2 = { -1150.749f, -1708.635f, 40.2485f };
								*uParam3 = 295.9259f;
								break;
							
							case 4:
								*uParam2 = { -1001.754f, -731.3828f, 85.5368f };
								*uParam3 = 232.7072f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -648.1588f, -1632.12f, 23.9175f };
								*uParam3 = 145.9387f;
								break;
							
							case 1:
								*uParam2 = { -850.9597f, -1194.948f, 4.7312f };
								*uParam3 = 2.3024f;
								break;
							
							case 2:
								*uParam2 = { -513.3444f, -967.2039f, 22.5742f };
								*uParam3 = 111.3599f;
								break;
							
							case 3:
								*uParam2 = { -720.752f, -1143.745f, 9.6125f };
								*uParam3 = 126.5029f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1384.463f, 3175.862f, 49.4674f };
								*uParam3 = 107.9207f;
								break;
							
							case 1:
								*uParam2 = { 848.3471f, 3587.832f, 42.0217f };
								*uParam3 = 117.8402f;
								break;
							
							case 2:
								*uParam2 = { -390.1283f, 2557.157f, 99.8288f };
								*uParam3 = 292.5476f;
								break;
							
							case 3:
								*uParam2 = { 1084.247f, 2367.027f, 53.6989f };
								*uParam3 = 53.4222f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 654.4302f, 2752.401f, 40.9669f };
								*uParam3 = 192.1139f;
								break;
							
							case 1:
								*uParam2 = { 91.7939f, 3432.573f, 38.5904f };
								*uParam3 = 246.3809f;
								break;
							
							case 2:
								*uParam2 = { -361.922f, 2954.955f, 24.1579f };
								*uParam3 = 273.6807f;
								break;
							
							case 3:
								*uParam2 = { -180.3412f, 2508.928f, 71.8451f };
								*uParam3 = 7.1243f;
								break;
							
							case 4:
								*uParam2 = { 142.7533f, 2271.567f, 93.6005f };
								*uParam3 = 255.3593f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -394.287f, 4340.043f, 65.1832f };
								*uParam3 = 263.3693f;
								break;
							
							case 1:
								*uParam2 = { 1002.483f, 3175.867f, 48.6918f };
								*uParam3 = 0.497f;
								break;
							
							case 2:
								*uParam2 = { 2325.472f, 3922.296f, 45.2575f };
								*uParam3 = 57.4066f;
								break;
							
							case 3:
								*uParam2 = { 1962.95f, 4785.836f, 51.8872f };
								*uParam3 = 134.6506f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1398.018f, 4520.393f, 52.8047f };
								*uParam3 = 105.7989f;
								break;
							
							case 1:
								*uParam2 = { 366.9009f, 4432.027f, 61.6888f };
								*uParam3 = 204.5592f;
								break;
							
							case 2:
								*uParam2 = { 128.2849f, 4454.878f, 80.3457f };
								*uParam3 = 226.3244f;
								break;
							
							case 3:
								*uParam2 = { -132.4943f, 4295.465f, 41.7475f };
								*uParam3 = 276.3481f;
								break;
							
							case 4:
								*uParam2 = { 1908.425f, 4607f, 36.8242f };
								*uParam3 = 174.8533f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3841.898f, 4234.117f, 15.4291f };
								*uParam3 = 336.9579f;
								break;
							
							case 1:
								*uParam2 = { 2836.958f, 5957.465f, 362.3982f };
								*uParam3 = 225.8444f;
								break;
							
							case 2:
								*uParam2 = { 2624.236f, 5310.019f, 52.1567f };
								*uParam3 = 215.63f;
								break;
							
							case 3:
								*uParam2 = { 2780.447f, 4758.9f, 55.0574f };
								*uParam3 = 326.934f;
								break;
							
							case 4:
								*uParam2 = { 3201.127f, 4657.409f, 190.8286f };
								*uParam3 = 359.7683f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3756.635f, 4434.785f, 11.7586f };
								*uParam3 = 138.6266f;
								break;
							
							case 1:
								*uParam2 = { 3680.549f, 4492.803f, 23.5887f };
								*uParam3 = 113.1337f;
								break;
							
							case 2:
								*uParam2 = { 3337.639f, 5482.484f, 19.0418f };
								*uParam3 = 157.3183f;
								break;
							
							case 3:
								*uParam2 = { 2766.238f, 4974.986f, 32.7262f };
								*uParam3 = 225.2302f;
								break;
							
							case 4:
								*uParam2 = { 2797.095f, 4923.666f, 33.1334f };
								*uParam3 = 34.0949f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1988.479f, -219.2565f, 42.6251f };
								*uParam3 = 325.2252f;
								break;
							
							case 1:
								*uParam2 = { -1567.165f, -555.6394f, 123.4493f };
								*uParam3 = 24.7442f;
								break;
							
							case 2:
								*uParam2 = { -713.2371f, 195.5196f, 149.754f };
								*uParam3 = 75.542f;
								break;
							
							case 3:
								*uParam2 = { -509.8761f, 1187.824f, 333.8082f };
								*uParam3 = 128.2553f;
								break;
							
							case 4:
								*uParam2 = { -1265.789f, 1493.722f, 203.9673f };
								*uParam3 = 187.8592f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1570.476f, 1366.453f, 127.6559f };
								*uParam3 = 115.4139f;
								break;
							
							case 1:
								*uParam2 = { -1581.127f, 955.6403f, 157.1481f };
								*uParam3 = 39.5031f;
								break;
							
							case 2:
								*uParam2 = { -1813.683f, 799.5704f, 137.5134f };
								*uParam3 = 188.8774f;
								break;
							
							case 3:
								*uParam2 = { -1912.698f, 509.3147f, 110.6628f };
								*uParam3 = 70.3926f;
								break;
							
							case 4:
								*uParam2 = { -2298.497f, 441.8974f, 173.4667f };
								*uParam3 = 1.8886f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("buzzard"):
			switch (Local_110.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1351.441f, -641.5107f, 83.2342f };
								*uParam3 = 186.1368f;
								break;
							
							case 1:
								*uParam2 = { 636.2282f, -434.6195f, 33.632f };
								*uParam3 = 203.6348f;
								break;
							
							case 2:
								*uParam2 = { 352.4392f, -590.8399f, 83.1657f };
								*uParam3 = 209.917f;
								break;
							
							case 3:
								*uParam2 = { 375.2908f, -1020.433f, 66.5363f };
								*uParam3 = 271.2396f;
								break;
							
							case 4:
								*uParam2 = { 345.1868f, -1426.622f, 85.1742f };
								*uParam3 = 284.6382f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1248.49f, -1131.338f, 37.2874f };
								*uParam3 = 153.8083f;
								break;
							
							case 1:
								*uParam2 = { 1396.414f, -1518.39f, 56.7703f };
								*uParam3 = 134.0967f;
								break;
							
							case 2:
								*uParam2 = { 972.8618f, -1464.828f, 30.3558f };
								*uParam3 = 0.609f;
								break;
							
							case 3:
								*uParam2 = { 935.6596f, -909.6719f, 39.5752f };
								*uParam3 = 271.1971f;
								break;
							
							case 4:
								*uParam2 = { 1156.687f, -768.8879f, 56.4831f };
								*uParam3 = 275.3533f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -137.5082f, -168.3033f, 102.7024f };
								*uParam3 = 160.3978f;
								break;
							
							case 1:
								*uParam2 = { -174.828f, -214.6927f, 156.6312f };
								*uParam3 = 258.2675f;
								break;
							
							case 2:
								*uParam2 = { 404.7129f, -24.3335f, 169.3952f };
								*uParam3 = 95.0683f;
								break;
							
							case 3:
								*uParam2 = { 168.3323f, 668.6285f, 215.7082f };
								*uParam3 = 172.5901f;
								break;
							
							case 4:
								*uParam2 = { -608.792f, 660.9065f, 165.6164f };
								*uParam3 = 207.7868f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -166.1217f, -214.9006f, 45.8637f };
								*uParam3 = 257.5103f;
								break;
							
							case 1:
								*uParam2 = { 33.7482f, -95.8814f, 55.3626f };
								*uParam3 = 73.0413f;
								break;
							
							case 2:
								*uParam2 = { 36.568f, 47.4427f, 71.3139f };
								*uParam3 = 158.1279f;
								break;
							
							case 3:
								*uParam2 = { -501.5253f, -67.3569f, 38.6901f };
								*uParam3 = 155.0279f;
								break;
							
							case 4:
								*uParam2 = { -430.6903f, -423.6864f, 31.7928f };
								*uParam3 = 352.977f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -468.3117f, 2034.281f, 225.8829f };
								*uParam3 = 183.5655f;
								break;
							
							case 1:
								*uParam2 = { -1572.228f, 838.9957f, 193.9097f };
								*uParam3 = 278.9509f;
								break;
							
							case 2:
								*uParam2 = { -175.6009f, -162.3506f, 102.7024f };
								*uParam3 = 12.7537f;
								break;
							
							case 3:
								*uParam2 = { 494.7073f, 706.4063f, 205.6965f };
								*uParam3 = 75.8614f;
								break;
							
							case 4:
								*uParam2 = { 821.3636f, 1308.909f, 372.5396f };
								*uParam3 = 113.467f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -803.5167f, 1295.326f, 257.4832f };
								*uParam3 = 209.5666f;
								break;
							
							case 1:
								*uParam2 = { -925.5961f, 1124.77f, 218.7065f };
								*uParam3 = 215.2912f;
								break;
							
							case 2:
								*uParam2 = { -404.5761f, 833.0574f, 224.6128f };
								*uParam3 = 218.3907f;
								break;
							
							case 3:
								*uParam2 = { -303.0683f, 1010.302f, 232.2905f };
								*uParam3 = 78.2628f;
								break;
							
							case 4:
								*uParam2 = { 56.7959f, 1080.651f, 220.6167f };
								*uParam3 = 18.8188f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 377.1972f, 4405.938f, 71.4024f };
								*uParam3 = 157.1671f;
								break;
							
							case 1:
								*uParam2 = { -210.0587f, 4223.346f, 53.7504f };
								*uParam3 = 206.9778f;
								break;
							
							case 2:
								*uParam2 = { -318.9394f, 3790.772f, 77.5459f };
								*uParam3 = 258.802f;
								break;
							
							case 3:
								*uParam2 = { -236.0281f, 3088.237f, 47.229f };
								*uParam3 = 304.6536f;
								break;
							
							case 4:
								*uParam2 = { 312.2873f, 2783.272f, 54.9498f };
								*uParam3 = 10.4182f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1111.445f, 3430.153f, 33.0281f };
								*uParam3 = 351.5004f;
								break;
							
							case 1:
								*uParam2 = { 940.4324f, 3582.793f, 32.0891f };
								*uParam3 = 71.8698f;
								break;
							
							case 2:
								*uParam2 = { -177.7739f, 3695.669f, 43.0132f };
								*uParam3 = 195.3546f;
								break;
							
							case 3:
								*uParam2 = { -241.2375f, 3905.453f, 37.3939f };
								*uParam3 = 207.658f;
								break;
							
							case 4:
								*uParam2 = { -77.8371f, 3185.706f, 37.1225f };
								*uParam3 = 280.9105f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 815.4335f, 1311.455f, 372.12f };
								*uParam3 = 258.8483f;
								break;
							
							case 1:
								*uParam2 = { 609.2955f, 205.9871f, 146.2221f };
								*uParam3 = 316.1886f;
								break;
							
							case 2:
								*uParam2 = { 1150.014f, 130.2795f, 90.7203f };
								*uParam3 = 340.2898f;
								break;
							
							case 3:
								*uParam2 = { 1876.22f, 285.6447f, 171.779f };
								*uParam3 = 18.4441f;
								break;
							
							case 4:
								*uParam2 = { 2105.892f, 1586.21f, 99.9212f };
								*uParam3 = 107.1124f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1199.866f, 1852.856f, 77.9143f };
								*uParam3 = 147.2836f;
								break;
							
							case 1:
								*uParam2 = { 1526.959f, 1717.267f, 108.9733f };
								*uParam3 = 116.5075f;
								break;
							
							case 2:
								*uParam2 = { 1962.413f, 1297.095f, 166.6211f };
								*uParam3 = 14.5081f;
								break;
							
							case 3:
								*uParam2 = { 958.8857f, 1717.174f, 163.6494f };
								*uParam3 = 280.2715f;
								break;
							
							case 4:
								*uParam2 = { 703.955f, 777.3345f, 204.8183f };
								*uParam3 = 308.1731f;
								break;
							}
					}
					break;
			}
			break;
	}
}

int func_85(int iParam0)
{
	if (Local_110.f_228[iParam0] > 0)
	{
		if (!func_21(&(Local_110.f_207[iParam0 /*2*/])))
		{
			func_19(&(Local_110.f_207[iParam0 /*2*/]), 0, 0);
			return 0;
		}
		else if (!func_18(&(Local_110.f_207[iParam0 /*2*/]), Local_110.f_228[iParam0], 0))
		{
			return 0;
		}
	}
	if (func_21(&(Local_110.f_186[iParam0 /*2*/])))
	{
		if (!func_18(&(Local_110.f_186[iParam0 /*2*/]), 20000, 0))
		{
			return 0;
		}
	}
	return 1;
}

var func_86()
{
	return Local_110.f_291[Local_110.f_279];
}

void func_87(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = -1986200141;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &vVar0, 3, iParam1);
	}
}

int func_88(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_89(iParam0) * 31);
}

int func_89(int iParam0)
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

void func_90(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (UI::DOES_BLIP_EXIST(*uParam0))
	{
		UI::REMOVE_BLIP(uParam0);
		bVar0 = true;
	}
	if (UI::DOES_BLIP_EXIST(uParam0->f_1))
	{
		UI::REMOVE_BLIP(&(uParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7, 0))
		{
			if (UI::DOES_PED_HAVE_AI_BLIP(uParam0->f_7))
			{
				UI::_SET_PED_AI_BLIP(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_91(int iParam0)
{
	if (Local_110.f_27 == joaat("hydra"))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_272[func_89(iParam0)], func_88(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_92(int iParam0)
{
	return func_93(iParam0);
}

int func_93(int iParam0)
{
	var uVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_48[iParam0]), 0))
	{
		return 1;
	}
	uVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_110.f_48[iParam0]), 0);
	if (ENTITY::IS_ENTITY_DEAD(uVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_94(int iParam0)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]));
	if (iVar0 == joaat("savage"))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_110.f_271, iParam0))
		{
			return 1;
		}
	}
	else if (iVar0 == joaat("buzzard"))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_110.f_271, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (Local_110.f_27 != joaat("hydra"))
		{
			return 1;
		}
		if (Local_110.f_27 == joaat("hydra"))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_110.f_271, iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_95(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = 791943758;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &vVar0, 3, iParam1);
	}
}

int func_96()
{
	return Local_110.f_280[Local_110.f_279];
}

void func_97(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = -498670328;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &vVar0, 3, iParam0);
	}
}

int func_98(int iParam0)
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			uVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 0))
			{
				if (NETWORK::_NETWORK_GET_DESROYER_OF_ENTITY(uVar2, NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), &uVar0))
				{
					return 1;
				}
			}
			else if (unk_0x83660B734994124D(uVar2, NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), &uVar0))
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_99(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = 1108012350;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &vVar0, 3, iParam0);
	}
}

bool func_100(int iParam0)
{
	var uVar0;
	
	uVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]));
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(uVar0) || VEHICLE::IS_THIS_MODEL_A_HELI(uVar0))
	{
		return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 0);
	}
	return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_73[iParam0]), 0);
}

int func_101()
{
	int iVar0;
	int iVar1;
	
	switch (Local_110.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_110.f_291[iVar0]);
				iVar0++;
			}
			break;
		
		case joaat("hydra"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_110.f_291[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_102(int iParam0)
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
			if (func_837(iVar2, 0, 0))
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

int func_103()
{
	if (func_737())
	{
		return Global_262145.f_11251;
	}
	return Global_262145.f_10974;
}

void func_104(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_105(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 713068249;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Param0, 14, iParam14);
	}
}

int func_106(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_837(iVar2, 1, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar2), uParam0, 0))
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar2) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || !bParam2)
				{
					if (iVar2 != PLAYER::PLAYER_ID() || iParam1)
					{
						GAMEPLAY::SET_BIT(&uVar0, iVar1);
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_107(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_108(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_108(var uParam0)
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

void func_109()
{
	int iVar0;
	int iVar1;
	
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 20))
	{
		return;
	}
	if (!func_21(&uLocal_3489))
	{
		func_19(&uLocal_3489, 0, 0);
		return;
	}
	if (!func_18(&uLocal_3489, 5000, 0))
	{
		return;
	}
	iVar0 = func_110();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_4(NETWORK::NET_TO_VEH(Local_110.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0))
		{
			func_24(&(Local_110.f_7[iVar1]));
		}
		iVar1++;
	}
	GAMEPLAY::SET_BIT(&(Local_110.f_3), 20);
}

int func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_110.f_12 != 0)
	{
		return Local_110.f_12;
	}
	if (!func_737())
	{
		Local_110.f_12 = 1;
		return Local_110.f_12;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (!func_15(iVar2, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 < func_112())
	{
		Local_110.f_12 = 2;
	}
	else if (iVar1 < func_111())
	{
		Local_110.f_12 = 3;
	}
	else
	{
		Local_110.f_12 = 4;
	}
	return Local_110.f_12;
}

int func_111()
{
	return Global_262145.f_10999;
}

int func_112()
{
	return Global_262145.f_10998;
}

void func_113()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
		{
			func_119(iVar0);
			func_118(iVar0, Local_110.f_256[iVar0], Local_110.f_22[iVar0]);
		}
		else if (Local_110.f_594[iVar0 /*4*/].f_1 != -1)
		{
			func_119(iVar0);
		}
		iVar0++;
	}
	func_117();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			func_116(iVar0);
			if (Local_744[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_744[iVar0 /*18*/].f_9 > -1)
				{
					uVar1 = Local_744[iVar0 /*18*/].f_9;
					func_115(uVar1, Local_744[iVar0 /*18*/].f_8, iVar2);
				}
			}
			else
			{
				func_115(-1, -1, iVar2);
			}
		}
		else if (Local_110.f_465[iVar0 /*4*/].f_1 != -1)
		{
			func_116(iVar0);
		}
		iVar0++;
	}
	func_114();
}

void func_114()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_110.f_465[iVar1 /*4*/].f_1 > Local_110.f_465[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_110.f_465[iVar1 /*4*/].f_1;
					uVar3 = Local_110.f_465[iVar1 /*4*/];
					uVar4 = Local_110.f_465[iVar1 /*4*/].f_2;
					Local_110.f_465[iVar1 /*4*/].f_1 = Local_110.f_465[(iVar1 - 1) /*4*/].f_1;
					Local_110.f_465[iVar1 /*4*/] = Local_110.f_465[(iVar1 - 1) /*4*/];
					Local_110.f_465[iVar1 /*4*/].f_2 = Local_110.f_465[(iVar1 - 1) /*4*/].f_2;
					Local_110.f_465[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_110.f_465[(iVar1 - 1) /*4*/] = uVar3;
					Local_110.f_465[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_115(int iParam0, int iParam1, int iParam2)
{
	Local_110.f_465[iParam2 /*4*/] = iParam0;
	Local_110.f_465[iParam2 /*4*/].f_1 = iParam1;
	Local_110.f_465[iParam2 /*4*/].f_2 = iParam2;
}

void func_116(int iParam0)
{
	Local_110.f_465[iParam0 /*4*/] = -1;
	Local_110.f_465[iParam0 /*4*/].f_2 = -1;
	Local_110.f_465[iParam0 /*4*/].f_1 = -1;
}

void func_117()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 3;
	while (iVar0 >= 0)
	{
		iVar1 = 3;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_110.f_594[iVar1 /*4*/].f_1 > Local_110.f_594[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_110.f_594[iVar1 /*4*/].f_1;
					uVar3 = Local_110.f_594[iVar1 /*4*/];
					uVar4 = Local_110.f_594[iVar1 /*4*/].f_2;
					Local_110.f_594[iVar1 /*4*/].f_1 = Local_110.f_594[(iVar1 - 1) /*4*/].f_1;
					Local_110.f_594[iVar1 /*4*/] = Local_110.f_594[(iVar1 - 1) /*4*/];
					Local_110.f_594[iVar1 /*4*/].f_2 = Local_110.f_594[(iVar1 - 1) /*4*/].f_2;
					Local_110.f_594[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_110.f_594[(iVar1 - 1) /*4*/] = uVar3;
					Local_110.f_594[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_118(int iParam0, var uParam1, var uParam2)
{
	Local_110.f_594[iParam0 /*4*/] = iParam0;
	Local_110.f_594[iParam0 /*4*/].f_1 = uParam1;
	Local_110.f_594[iParam0 /*4*/].f_2 = uParam2;
}

void func_119(int iParam0)
{
	Local_110.f_594[iParam0 /*4*/] = -1;
	Local_110.f_594[iParam0 /*4*/].f_1 = -1;
	Local_110.f_594[iParam0 /*4*/].f_2 = -1;
}

int func_120()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_110();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_121(iVar1))
		{
			func_104(&(Local_110.f_5));
			return 0;
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_13, iVar1))
		{
			func_104(&(Local_110.f_5));
			return 0;
		}
		else if (func_4(NETWORK::NET_TO_VEH(Local_110.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0))
		{
			func_104(&(Local_110.f_5));
			return 0;
		}
		iVar1++;
	}
	if (!func_21(&(Local_110.f_5)))
	{
		func_19(&(Local_110.f_5), 0, 0);
	}
	else if (func_18(&(Local_110.f_5), 1500, 0))
	{
		return 1;
	}
	return 0;
}

int func_121(int iParam0)
{
	if (func_107(Local_110.f_7[iParam0]))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), -1, 0) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_122()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_737())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
		{
			if (func_107(Local_110.f_7[iVar0]))
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < Local_110.f_12)
	{
		Local_110.f_12 = iVar1;
	}
	if (Local_110.f_12 <= 1)
	{
		GAMEPLAY::CLEAR_BIT(&(Local_110.f_3), 8);
		if (!func_107(Local_110.f_7[0]))
		{
			if (func_107(Local_110.f_7[iVar2]))
			{
				func_24(&(Local_110.f_7[0]));
				Local_110.f_7[0] = Local_110.f_7[iVar2];
			}
		}
	}
}

void func_123()
{
	bool bVar0;
	
	if (!func_737())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[0]))
		{
			if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_110.f_15 != false;
			}
			else
			{
				bVar0 = Local_110.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = GAMEPLAY::IS_BIT_SET(Local_110.f_3, 9);
	}
	if (bVar0)
	{
		if (Local_110.f_413 == -1)
		{
			Local_110.f_413 = func_125();
		}
		if (!func_21(&(Local_110.f_326)))
		{
			func_19(&(Local_110.f_326), 0, 0);
		}
		else if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 4))
		{
			if ((Local_110.f_413 - func_124(&(Local_110.f_326), 0, 0)) < 0)
			{
				GAMEPLAY::SET_BIT(&(Local_110.f_3), 4);
			}
		}
	}
	else if (func_21(&(Local_110.f_326)))
	{
		func_104(&(Local_110.f_326));
		Local_110.f_413 = (Local_110.f_413 - func_124(&(Local_110.f_326), 0, 0));
	}
}

int func_124(var uParam0, bool bParam1, bool bParam2)
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

var func_125()
{
	if (func_737())
	{
		return Global_262145.f_11261;
	}
	return Global_262145.f_10981;
}

void func_126()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	bVar5 = false;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_1534[iVar0] = 0;
		iLocal_739[iVar0] = -2;
		iLocal_1539[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	if (Local_110 != 4)
	{
		iLocal_1329 = 0;
		while (iLocal_1329 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_1329)))
			{
				iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_1329));
				if (!func_15(iVar7, 0))
				{
					if (Local_744[iLocal_1329 /*18*/].f_1 != 0)
					{
						iVar2++;
					}
					iVar1++;
					iVar0 = 0;
					while (iVar0 < 4)
					{
						func_133(iLocal_1329, iVar0, iVar7);
						iVar0++;
					}
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_132(iLocal_1329, iVar0);
						iVar0++;
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 14))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_744[iLocal_1329 /*18*/].f_2, 9))
						{
							iVar6++;
						}
					}
					iVar0 = 0;
					while (iVar0 <= 23)
					{
						func_131(iLocal_1329, iVar0);
						iVar0++;
					}
					if (!bVar5)
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_744[iLocal_1329 /*18*/].f_2, 8))
						{
							bVar5 = true;
						}
					}
					func_129(iLocal_1329, iVar7);
					if (func_837(iVar7, 1, 1))
					{
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (Local_110.f_17[iVar0] == func_26())
							{
								if (GAMEPLAY::IS_BIT_SET(Local_744[iLocal_1329 /*18*/].f_2, (0 + iVar0)))
								{
									Local_110.f_17[iVar0] = iVar7;
								}
							}
							else if (Local_110.f_17[iVar0] == iVar7 && Local_110.f_241 == 0)
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_744[iLocal_1329 /*18*/].f_2, (0 + iVar0)))
								{
									Local_110.f_17[iVar0] = func_26();
								}
							}
							iVar0++;
						}
					}
				}
			}
			iLocal_1329++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_13, iVar0))
		{
			if (iLocal_1534[iVar0] == func_128() && func_121(iVar0))
			{
				GAMEPLAY::SET_BIT(&(Local_110.f_13), iVar0);
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_14, iVar0))
			{
				if (iLocal_1534[iVar0] >= 1 && func_121(iVar0))
				{
					GAMEPLAY::SET_BIT(&(Local_110.f_14), iVar0);
				}
			}
			else if (iLocal_1534[iVar0] == 0 || !func_121(iVar0))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_110.f_14, iVar0))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_110.f_14), iVar0);
					if (iLocal_1534[iVar0] == 0)
					{
						if (Local_110.f_241 >= 1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
							{
								func_24(&(Local_110.f_7[iVar0]));
							}
						}
					}
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_15, iVar0) && func_121(iVar0))
			{
				if (iLocal_1534[iVar0] >= 2)
				{
					GAMEPLAY::SET_BIT(&(Local_110.f_15), iVar0);
				}
			}
			else if (iLocal_1534[iVar0] <= 1 || !func_121(iVar0))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_110.f_15, iVar0))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_110.f_15), iVar0);
				}
			}
		}
		else if (iLocal_1534[iVar0] < func_128() || !func_121(iVar0))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_110.f_13), iVar0);
		}
		if (Local_110.f_266[iVar0] != iLocal_1534[iVar0])
		{
			Local_110.f_266[iVar0] = iLocal_1534[iVar0];
			if (Local_110.f_241 == 1)
			{
				if (Local_110.f_266[iVar0] == 0)
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_616, iVar0))
					{
						GAMEPLAY::SET_BIT(&(Local_110.f_616), iVar0);
					}
				}
			}
		}
		if (Local_110.f_241 == 0)
		{
			if (func_737())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
				{
					iVar3 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]));
					if (iLocal_1534[iVar0] >= func_127(iVar3) && func_121(iVar0))
					{
						iLocal_1539[iVar0] = 1;
					}
				}
			}
		}
		if (Local_110.f_241 == 1)
		{
			if (Local_110.f_256[iVar0] != iLocal_739[iVar0])
			{
				if (iLocal_739[iVar0] >= 0)
				{
					if (iLocal_739[iVar0] > Local_110.f_256[iVar0])
					{
						Local_110.f_256[iVar0] = iLocal_739[iVar0];
						bVar4 = true;
					}
					else
					{
						iVar8 = (Local_110.f_256[iVar0] - iLocal_739[iVar0]);
						if (Local_110.f_261[iVar0] != iVar8)
						{
							Local_110.f_261[iVar0] = iVar8;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		func_113();
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 11))
	{
		if (!bVar5)
		{
			GAMEPLAY::SET_BIT(&(Local_110.f_3), 11);
		}
	}
	iVar0 = 0;
	iVar9 = 0;
	if (Local_110.f_241 == 0)
	{
		if (func_737())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (iLocal_1539[iVar0])
				{
					iVar9++;
				}
				iVar0++;
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 9))
			{
				if (iVar9 >= 2)
				{
					GAMEPLAY::SET_BIT(&(Local_110.f_3), 9);
				}
			}
			else if (iVar9 < 2)
			{
				GAMEPLAY::CLEAR_BIT(&(Local_110.f_3), 9);
			}
		}
	}
	if (Local_110.f_241 == 0)
	{
		if (!func_21(&(Local_110.f_360)))
		{
			func_19(&(Local_110.f_360), 0, 0);
		}
		else if (func_18(&(Local_110.f_360), 5000, 0))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 14))
			{
				if (func_737())
				{
					if (Local_110.f_27 == joaat("valkyrie"))
					{
						if (iVar6 < 4)
						{
							GAMEPLAY::SET_BIT(&(Local_110.f_3), 14);
						}
					}
					else if (iVar6 < 2)
					{
						GAMEPLAY::SET_BIT(&(Local_110.f_3), 14);
					}
				}
				else if (Local_110.f_27 == joaat("valkyrie"))
				{
					if (iVar6 < 2)
					{
						GAMEPLAY::SET_BIT(&(Local_110.f_3), 14);
					}
				}
				else if (iVar6 < 1)
				{
					GAMEPLAY::SET_BIT(&(Local_110.f_3), 14);
				}
			}
		}
	}
	if (iVar1 > Local_110.f_614)
	{
		Local_110.f_614 = iVar1;
	}
	else
	{
		Local_110.f_613 = (Local_110.f_614 - iVar1);
	}
	if (iVar2 > Local_110.f_615)
	{
		Local_110.f_615 = iVar2;
	}
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case joaat("rhino"):
			return 1;
		
		case joaat("hydra"):
			return 1;
		
		case joaat("savage"):
			return 1;
		
		case joaat("valkyrie"):
			return 2;
		
		case joaat("buzzard"):
			return 1;
		
		default:
	}
	return 99;
}

int func_128()
{
	return Local_110.f_28;
}

void func_129(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_110.f_16, iParam0))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_744[iParam0 /*18*/].f_2, 12))
		{
			func_130(iParam1, 1);
			GAMEPLAY::SET_BIT(&(Local_110.f_16), iParam0);
		}
		else if (Local_110.f_241 >= 1)
		{
			if (Local_744[iParam0 /*18*/].f_1 == 0)
			{
				func_130(iParam1, 1);
				GAMEPLAY::SET_BIT(&(Local_110.f_16), iParam0);
			}
			else if (Local_744[iParam0 /*18*/].f_17 >= 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar1]))
					{
						if (func_107(Local_110.f_7[iVar1]))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iParam1), NETWORK::NET_TO_VEH(Local_110.f_7[iVar1]), 0))
							{
								bVar0 = true;
							}
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_130(iParam1, 1);
					GAMEPLAY::SET_BIT(&(Local_110.f_16), iParam0);
				}
			}
		}
	}
	else if (Local_110.f_241 < 1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_744[iParam0 /*18*/].f_2, 12))
		{
			func_130(iParam1, 0);
			GAMEPLAY::CLEAR_BIT(&(Local_110.f_16), iParam0);
		}
	}
}

void func_130(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), uParam0, iParam1);
		}
		iVar0++;
	}
}

void func_131(int iParam0, int iParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(Local_110.f_272[func_89(iParam1)], func_88(iParam1)))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_744[iParam0 /*18*/].f_3[func_89(iParam1)], func_88(iParam1)))
		{
			GAMEPLAY::SET_BIT(&(Local_110.f_272[func_89(iParam1)]), func_88(iParam1));
			if (Local_744[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_48[iParam1]))
			{
				if (!func_31(Local_110.f_48[iParam1]))
				{
					if (!func_92(iParam1))
					{
						GAMEPLAY::CLEAR_BIT(&(Local_110.f_272[func_89(iParam1)]), func_88(iParam1));
					}
					else if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_48[iParam1]), 0))
					{
						if (iParam1 >= 20)
						{
							GAMEPLAY::CLEAR_BIT(&(Local_110.f_272[func_89(iParam1)]), func_88(iParam1));
						}
					}
				}
			}
		}
	}
}

void func_132(int iParam0, int iParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(Local_110.f_271, iParam1))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_744[iParam0 /*18*/].f_6, iParam1))
		{
			GAMEPLAY::SET_BIT(&(Local_110.f_271), iParam1);
			if (Local_744[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (GAMEPLAY::IS_BIT_SET(Local_110.f_303, iParam1))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_110.f_253, iParam1))
				{
					Local_110.f_251 = (Local_110.f_251 - 1);
					if (func_96() > 1)
					{
						if (Local_110.f_252 > 0)
						{
							Local_110.f_302++;
							func_95(iParam1, func_102(1));
						}
					}
					GAMEPLAY::SET_BIT(&(Local_110.f_253), iParam1);
				}
				if (func_21(&(Local_110.f_336[iParam1 /*2*/])))
				{
					func_104(&(Local_110.f_336[iParam1 /*2*/]));
				}
				func_24(&(Local_110.f_73[iParam1]));
				GAMEPLAY::CLEAR_BIT(&(Local_110.f_303), iParam1);
			}
		}
	}
}

void func_133(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (GAMEPLAY::IS_BIT_SET(Local_744[iParam0 /*18*/].f_1, iParam1))
	{
		iLocal_1534[iParam1]++;
		if (iLocal_739[iParam1] < 0)
		{
			if (Local_744[iParam0 /*18*/].f_8 >= 0)
			{
				if (Local_110.f_261[iParam1] > 0)
				{
					iLocal_739[iParam1] = Local_110.f_261[iParam1];
				}
				else
				{
					iLocal_739[iParam1] = 0;
				}
			}
		}
		iLocal_739[iParam1] = (iLocal_739[iParam1] + Local_744[iParam0 /*18*/].f_8);
		if (Local_110.f_241 >= 1)
		{
			if (Local_110.f_22[iParam1] == func_26())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iParam1]))
				{
					if (func_107(Local_110.f_7[iParam1]))
					{
						iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[iParam1]), -1, 0);
						if (iVar1 != 0)
						{
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
								if (iVar0 == iParam2)
								{
									Local_110.f_22[iParam1] = iParam2;
									func_113();
								}
							}
						}
					}
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_319, iParam1))
		{
			if (Local_744[iParam0 /*18*/].f_10 > -1)
			{
				GAMEPLAY::SET_BIT(&(Local_110.f_319), iParam1);
				func_19(&(Local_110.f_349[iParam1 /*2*/]), 0, 0);
			}
		}
	}
	if (Local_110.f_22[iParam1] != func_26())
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_110.f_22[iParam1]))
		{
			iVar0 = func_134(iParam1, 1);
			if (iVar0 != func_26())
			{
				Local_110.f_22[iParam1] = iVar0;
			}
			else
			{
				Local_110.f_22[iParam1] = func_26();
			}
		}
		else if (func_15(Local_110.f_22[iParam1], 0))
		{
			Local_110.f_22[iParam1] = func_26();
			func_113();
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Local_110.f_22[iParam1]);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (func_107(Local_110.f_7[iParam1]))
				{
					if (!PED::IS_PED_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_110.f_7[iParam1]), 0))
					{
						iVar0 = func_134(iParam1, 1);
						if (iVar0 != func_26())
						{
							Local_110.f_22[iParam1] = iVar0;
						}
						else
						{
							Local_110.f_22[iParam1] = func_26();
						}
					}
				}
			}
		}
	}
}

int func_134(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = func_26();
	if (iParam0 >= 0)
	{
		iVar3 = 0;
		while (iVar3 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
			{
				if (iVar0 == func_26())
				{
					if (Local_744[iVar3 /*18*/].f_17 == 1)
					{
						if (GAMEPLAY::IS_BIT_SET(Local_744[iVar3 /*18*/].f_1, iParam0))
						{
							if (!bParam1)
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
							}
							else
							{
								iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
								if (func_107(Local_110.f_7[iParam0]))
								{
									uVar2 = PLAYER::GET_PLAYER_PED(iVar1);
									if (!PED::IS_PED_INJURED(uVar2))
									{
										if (PED::IS_PED_IN_VEHICLE(uVar2, NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 0))
										{
											iVar0 = iVar1;
										}
									}
								}
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return iVar0;
}

void func_135(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	
	vVar0.x = -1319724092;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam0;
	iVar3 = func_136(1, 1);
	if (!iVar3 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &vVar0, 3, iVar3);
	}
}

var func_136(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_837(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_15(iVar2, 0))
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_137(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	return -1;
}

int func_138()
{
	func_110();
	if (func_70(Local_110.f_27))
	{
		if (func_139())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_110.f_27);
			return 1;
		}
	}
	return 0;
}

int func_139()
{
	int iVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < Local_110.f_12)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[iVar0]))
		{
			if (func_70(Local_110.f_27))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_110.f_244, iVar0))
				{
					GAMEPLAY::CLEAR_AREA(Local_110.f_30[iVar0 /*3*/], 5f, 1, 0, 0, 1);
					GAMEPLAY::SET_BIT(&(Local_110.f_244), iVar0);
				}
				if (func_82(&(Local_110.f_7[iVar0]), Local_110.f_27, Local_110.f_30[iVar0 /*3*/], Local_110.f_43[iVar0], 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_110.f_7[iVar0]), 1, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1);
					VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1);
					VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0);
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1);
					ROPE::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]));
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1, 1, 0);
					ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1);
					VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0);
					if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_110.f_27) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_110.f_27))
					{
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_110.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_142());
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_110.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_141());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_140());
						}
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), SYSTEM::ROUND(fVar1), 0);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), SYSTEM::ROUND(fVar1));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), fVar1);
						if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_110.f_27))
						{
							VEHICLE::_0xE16142B94664DEFD(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1);
						}
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_110.f_27))
						{
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x4056EA1105F5ABD7(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), fVar1);
							unk_0xFE205F38AAA58E5B(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), fVar1);
						}
					}
					else
					{
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_110.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_142());
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_110.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_141());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_140());
						}
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), SYSTEM::ROUND(fVar1), 0);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), SYSTEM::ROUND(fVar1));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), fVar1);
					}
					VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1);
					if (Local_110.f_27 == joaat("savage"))
					{
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
					{
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
					{
						if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), "MPBitset"))
						{
							uVar2 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), "MPBitset");
						}
						GAMEPLAY::SET_BIT(&uVar2, 10);
						GAMEPLAY::SET_BIT(&uVar2, 15);
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), "MPBitset", uVar2);
					}
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0, iLocal_1531);
					iVar3 = 0;
					while (iVar3 < 32)
					{
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0, Global_1574948[iVar3]);
						iVar3++;
					}
					unk_0x1DDA078D12879EEE(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0, 0);
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0);
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0);
					unk_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_110.f_12)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

var func_140()
{
	if (func_737())
	{
		return Global_262145.f_11255;
	}
	return Global_262145.f_10994;
}

var func_141()
{
	if (func_737())
	{
		return Global_262145.f_11256;
	}
	return Global_262145.f_10995;
}

var func_142()
{
	if (func_737())
	{
		return Global_262145.f_11254;
	}
	return Global_262145.f_10993;
}

int func_143()
{
	int iVar0;
	int iVar1;
	
	if (!func_21(&(Local_110.f_362)))
	{
		func_19(&(Local_110.f_362), 0, 0);
		return 0;
	}
	else if (!func_18(&(Local_110.f_362), 3000, 0))
	{
		return 0;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 10))
	{
		if (func_157(&iVar0))
		{
			if (iVar0 < func_156())
			{
				GAMEPLAY::SET_BIT(&(Local_110.f_3), 10);
			}
			else
			{
				iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
				if ((IntToFloat(iVar1) < (50f * Global_262145.f_11249) && !Global_262145.f_11247) || Global_262145.f_11248)
				{
					GAMEPLAY::SET_BIT(&(Local_110.f_3), 8);
					GAMEPLAY::SET_BIT(&(Local_110.f_3), 10);
				}
				else
				{
					GAMEPLAY::SET_BIT(&(Local_110.f_3), 10);
				}
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 10))
	{
		if (Local_110.f_12 == 0)
		{
			func_110();
			return 0;
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 13))
		{
			if (func_152())
			{
				if (!func_150(129, Local_110.f_1, Local_110.f_2, 0))
				{
					if (func_144())
					{
						GAMEPLAY::SET_BIT(&(Local_110.f_3), 13);
					}
					else
					{
						Local_110.f_29 = -1;
					}
				}
				else
				{
					Local_110.f_29 = -1;
				}
			}
		}
	}
	return GAMEPLAY::IS_BIT_SET(Local_110.f_3, 13);
}

int func_144()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_110();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_145(Local_110.f_30[iVar1 /*3*/], 1125515264))
		{
			return 0;
		}
		if (!func_55(Local_110.f_30[iVar1 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_145(vector3 vParam0, float fParam3)
{
	var uVar0[32];
	int iVar33;
	int iVar34;
	bool bVar35;
	vector3 vVar36;
	vector3 vVar39;
	int iVar42;
	struct<10> Var43;
	int iVar53;
	
	if (Global_2422307.f_291.f_225 == 0)
	{
		return 0;
	}
	iVar33 = 0;
	iVar34 = 0;
	bVar35 = true;
	while (bVar35)
	{
		if (Global_2422307.f_291[iVar34 /*7*/] != -1)
		{
			uVar0[iVar33] = GAMEPLAY::GET_HASH_KEY(&(Global_2422307.f_291[iVar34 /*7*/].f_1));
			iVar33++;
			if (iVar33 == Global_2422307.f_291.f_225)
			{
				bVar35 = false;
			}
		}
		iVar34++;
		if (iVar34 >= 32)
		{
			bVar35 = false;
		}
	}
	if (iVar33 == 0)
	{
		return 0;
	}
	vVar36 = { 0f, 0f, 0f };
	vVar39 = { vParam0 };
	iVar42 = 0;
	Var43.f_1 = -1;
	Var43.f_2 = -1;
	Var43.f_9 = -1;
	iVar53 = 0;
	iVar34 = 0;
	while (iVar34 < Global_1311741)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2359721[iVar34 /*26*/].f_12, 11))
		{
			vVar36 = { Global_2359721[iVar34 /*26*/].f_3 };
			vVar39.z = vVar36.z;
			if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar36, vVar39, 1) < fParam3)
			{
				Var43 = { Global_2359721[iVar34 /*26*/].f_15 };
				iVar53 = func_146(&Var43);
				iVar42 = 0;
				while (iVar42 < iVar33)
				{
					if (iVar53 == uVar0[iVar42])
					{
						return 1;
					}
					iVar42++;
				}
			}
		}
		iVar34++;
	}
	return 0;
}

int func_146(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_147(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar1 /*13*/].f_3;
		
		case 62:
			return Global_917806.f_9405[iVar1 /*13*/].f_3;
		
		default:
	}
	return iVar0;
}

int func_147(var uParam0)
{
	int iVar0;
	
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_149(uParam0->f_1))
	{
		if (func_148(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (GAMEPLAY::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (GAMEPLAY::IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_917806.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_917806.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_939452.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_939452.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_148(var uParam0)
{
	if (Global_2398103)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_149(int iParam0)
{
	return iParam0 == 9999;
}

int func_150(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
			return 0;
		
		default:
	}
	iVar1 = func_151(iParam0);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 < Global_262145.f_7999)
		{
			if (Global_2497633.f_130[iVar0 /*2*/] == iVar1 && Global_2497633.f_130[iVar0 /*2*/].f_1 == func_137(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		default:
	}
	return -1;
}

int func_152()
{
	if (func_154(&(Local_110.f_27)))
	{
		if (Local_110.f_4)
		{
			func_153();
		}
		func_40();
		return 1;
	}
	return 0;
}

void func_153()
{
	Global_1664222 = 1;
	if (!GAMEPLAY::IS_BIT_SET(Global_2533185, 0))
	{
		GAMEPLAY::SET_BIT(&Global_2533185, 0);
		GAMEPLAY::SET_BIT(&Global_1664223, 0);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2533185, 1))
	{
		GAMEPLAY::SET_BIT(&Global_2533185, 1);
		GAMEPLAY::SET_BIT(&Global_1664223, 1);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2533185, 5))
	{
		GAMEPLAY::SET_BIT(&Global_2533185, 5);
		GAMEPLAY::SET_BIT(&Global_1664223, 5);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-355737150))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-355737150, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-580979506))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-580979506, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-1426452475))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1426452475, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(745417724))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(745417724, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-1305304906))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1305304906, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-1543175077))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1543175077, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-811770997))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-811770997, 0, 0, 0);
	}
}

int func_154(var uParam0)
{
	int iVar0;
	
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar0)
	{
		case 0:
			if (!func_155(joaat("rhino")))
			{
				Local_110.f_28 = 1;
				*uParam0 = joaat("rhino");
				return 1;
			}
			break;
		
		case 1:
			if (!func_155(joaat("hydra")))
			{
				Local_110.f_28 = 1;
				*uParam0 = joaat("hydra");
				Local_110.f_4 = 1;
				return 1;
			}
			break;
		
		case 2:
			if (!func_155(joaat("savage")))
			{
				Local_110.f_28 = 4;
				*uParam0 = joaat("savage");
				Local_110.f_4 = 1;
				return 1;
			}
			break;
		
		case 3:
			if (!func_155(joaat("valkyrie")))
			{
				Local_110.f_28 = 4;
				*uParam0 = joaat("valkyrie");
				return 1;
			}
			break;
		
		case 4:
			if (!func_155(joaat("buzzard")))
			{
				Local_110.f_28 = 4;
				*uParam0 = joaat("buzzard");
				return 1;
			}
			break;
	}
	return 0;
}

int func_155(int iParam0)
{
	if (!func_737())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_10983;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_10985;
				break;
			
			case joaat("savage"):
				return Global_262145.f_10984;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_10987;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_10986;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_11263;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_11265;
				break;
			
			case joaat("savage"):
				return Global_262145.f_11264;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_11267;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_11266;
				break;
			}
	}
	return 0;
}

int func_156()
{
	return Global_262145.f_10997;
}

int func_157(var uParam0)
{
	int iVar0;
	
	if (!func_21(&(Local_110.f_334)))
	{
		func_19(&(Local_110.f_334), 0, 0);
	}
	else if (func_18(&(Local_110.f_334), 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				if (!func_15(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)), 0))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_744[iVar0 /*18*/].f_2, 7))
					{
						*uParam0++;
					}
				}
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

int func_158(var uParam0)
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

void func_159(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_19(uParam0, 0, 0);
		}
	}
}

void func_160()
{
	vector3 vVar0;
	
	if (iLocal_3498 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iLocal_3498]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_7[iLocal_3498]))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_110.f_7[iLocal_3498]), 0) };
				if (vVar0.z < -25f)
				{
					func_24(&(Local_110.f_7[iLocal_3498]));
				}
			}
		}
	}
	iLocal_3498++;
	if (iLocal_3498 >= 4)
	{
		iLocal_3498 = 0;
	}
}

void func_161()
{
	if (func_15(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_1322, 13))
		{
			GAMEPLAY::SET_BIT(&uLocal_1322, 13);
			NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1, 0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(uLocal_1322, 13))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
				GAMEPLAY::CLEAR_BIT(&uLocal_1322, 13);
			}
		}
	}
}

void func_162()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_15(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (func_420())
	{
		func_277(0);
	}
	iVar0 = Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_655;
	if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
	}
	if (iVar0 != func_26())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				uVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
				iVar2 = uVar1;
				iVar3 = Local_744[iVar2 /*18*/].f_17;
				switch (iVar3)
				{
					case 0:
						func_194();
						func_191(iVar2);
						break;
					
					case 1:
						func_190();
						func_167();
						func_163(1);
						break;
					
					case 2:
						func_163(0);
						break;
					}
				}
			}
	}
}

void func_163(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (bParam0)
		{
			func_164(Local_110.f_48[iVar0], &(Local_1338[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1);
		}
		else
		{
			func_164(Local_110.f_48[iVar0], &(Local_1338[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, 55, -1, 1);
		}
		if (UI::DOES_BLIP_EXIST(Local_1338[iVar0 /*8*/]))
		{
			UI::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1338[iVar0 /*8*/], "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				UI::SET_BLIP_AS_SHORT_RANGE(Local_1338[iVar0 /*8*/], 1);
			}
		}
		if (UI::DOES_BLIP_EXIST(Local_1338[iVar0 /*8*/].f_1))
		{
			UI::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1338[iVar0 /*8*/].f_1, "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				UI::SET_BLIP_AS_SHORT_RANGE(Local_1338[iVar0 /*8*/].f_1, 1);
			}
		}
		if (Local_110.f_27 != joaat("hydra"))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_110.f_272[func_89(iVar0)], func_88(iVar0)) || GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar0)], func_88(iVar0)))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_48[iVar0]))
				{
					func_90(&(Local_1338[iVar0 /*8*/]));
				}
			}
		}
		else if ((iVar0 % 4) == 0)
		{
			iVar1 = (iVar0 / 4);
			if (GAMEPLAY::IS_BIT_SET(Local_110.f_271, iVar1) || GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_48[iVar0]))
				{
					func_90(&(Local_1338[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_164(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		if (func_166())
		{
			Global_2437022 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_165(NETWORK::NET_TO_PED(uParam0), uParam1, 1, Global_2437022, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_165(NETWORK::NET_TO_PED(uParam0), uParam1, -1, Global_2437022, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (UI::DOES_BLIP_EXIST(*uParam1))
	{
		func_90(uParam1);
	}
}

int func_165(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (!UI::DOES_PED_HAVE_AI_BLIP(uParam0))
		{
			if (iParam8 == -1)
			{
				UI::_SET_PED_AI_BLIP(uParam0, 1);
			}
			else
			{
				unk_0xB13DCB4C6FAAD238(uParam0, 1, iParam8);
			}
			uParam1->f_7 = uParam0;
			UI::_SET_AI_BLIP_TYPE(uParam0, iParam2);
			UI::_SET_AI_BLIP_MAX_DISTANCE(uParam0, fParam6);
			if (UI::DOES_BLIP_EXIST(*uParam1))
			{
				UI::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xFCFACD0DB9D7A57D(uParam0, iParam9);
		}
		UI::_IS_AI_BLIP_ALWAYS_SHOWN(uParam0, uParam4);
		UI::HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(uParam0, uParam5);
		*uParam1 = UI::_0x7CD934010E115C2C(uParam0);
		if (!iParam9 == -1)
		{
			if (UI::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					UI::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam7))
				{
					UI::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam7);
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam7);
					}
					UI::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				UI::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (UI::DOES_BLIP_EXIST(*uParam1))
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 0))
		{
			uParam1->f_1 = UI::_GET_AI_BLIP(uParam0);
			if (!GAMEPLAY::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (UI::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						UI::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam7))
					{
						UI::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam7);
						}
						else
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam7);
						}
						UI::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					UI::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					GAMEPLAY::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!UI::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (UI::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_166()
{
	return Global_1312834;
}

void func_167()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4[4];
	bool bVar9;
	int iVar10[4];
	var uVar15[4];
	int iVar20;
	int iVar21;
	
	iVar2 = (func_34() - func_124(&(Local_110.f_332), 0, 0));
	if (iLocal_3444 == 0)
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_1321, 26))
		{
			if ((GAMEPLAY::IS_BIT_SET(Local_110.f_3, 0) && GAMEPLAY::IS_BIT_SET(Local_110.f_3, 1)) && GAMEPLAY::IS_BIT_SET(Local_110.f_3, 2))
			{
				iLocal_3444 = (func_34() - func_124(&(Local_110.f_332), 0, 0));
				iVar2 = iLocal_3444;
			}
		}
	}
	else
	{
		iVar2 = iLocal_3444;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
	{
		return;
	}
	if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 >= 0)
	{
		return;
	}
	if (func_737())
	{
		iVar0 = (((Local_110.f_256[0] + Local_110.f_256[1]) + Local_110.f_256[2]) + Local_110.f_256[3]);
	}
	else
	{
		iVar0 = Local_110.f_256[0];
	}
	func_189(iVar2);
	if (iVar2 > 30000)
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 6;
	}
	if (func_737())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar21 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_594[iVar1 /*4*/].f_2);
			if (iVar21 != func_26())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar21))
				{
					sVar4[iVar1] = PLAYER::GET_PLAYER_NAME(iVar21);
					iVar10[iVar1] = Local_110.f_594[iVar1 /*4*/].f_1;
					uVar15[iVar1] = Local_110.f_594[iVar1 /*4*/];
					if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 == uVar15[iVar1])
					{
						iVar20 = uVar15[iVar1];
						iVar20++;
					}
					uVar15[iVar1]++;
				}
				else
				{
					sVar4[iVar1] = "";
					iVar10[iVar1] = -1;
				}
			}
			else
			{
				sVar4[iVar1] = "";
				iVar10[iVar1] = -1;
			}
			iVar1++;
		}
		if ((func_34() - func_124(&(Local_110.f_332), 0, 0)) >= 0)
		{
			if (Local_110.f_27 == joaat("rhino") || Local_110.f_27 == joaat("hydra"))
			{
				func_185(sVar4[0], uVar15[0], sVar4[1], uVar15[1], sVar4[2], uVar15[2], sVar4[3], uVar15[3], iVar10[0], iVar10[1], iVar10[2], iVar10[3], iVar2, iVar3, func_186(), iVar20);
			}
			else
			{
				func_183(iVar10[0], uVar15[0], iVar10[1], uVar15[1], iVar10[2], uVar15[2], iVar10[3], uVar15[3], iVar2, iVar3, func_186(), iVar20);
			}
		}
	}
	else if (iVar2 >= 0)
	{
		if (iVar0 > Local_110.f_255)
		{
			iVar0 = Local_110.f_255;
		}
		if (Local_110.f_27 == joaat("rhino") || Local_110.f_27 == joaat("hydra"))
		{
			func_182(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), iVar0, iVar0, Local_110.f_255, iVar2, iVar3, 0, func_186());
		}
		else
		{
			func_168(iVar0, iVar0, Local_110.f_255, iVar2, iVar3, 0, func_186(), 1);
		}
		if (bVar9)
		{
			func_113();
		}
	}
}

void func_168(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, char* sParam6, int iParam7)
{
	struct<8> Var0;
	char* sVar16;
	
	if (func_179(0) == 0)
	{
		return;
	}
	func_178();
	func_177();
	StringCopy(&Var0, "HUD_TEAM", 64);
	if (bParam5)
	{
		func_174(iParam0, &Var0, -1, iParam7, 5, 1, "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1);
	}
	func_173(iParam1, iParam2, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar16 = "HUD_COUNTDOWN";
	if (!func_172(sParam6))
	{
		sVar16 = sParam6;
	}
	func_169(iParam3, sVar16, 0, 0, -1, 0, 3, 0, iParam4, 0, 0, 0, iParam4, 0, 0, 0, 0);
}

void func_169(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_171(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_170(7, iVar0);
		Global_1369750.f_4399[iVar0] = iParam0;
		StringCopy(&(Global_1369750.f_4399.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1369750.f_4399.f_172[iVar0] = iParam2;
		Global_1369750.f_4399.f_216[iVar0] = iParam3;
		Global_1369750.f_4399.f_183[iVar0] = iParam4;
		Global_1369750.f_4399.f_194[iVar0] = iParam5;
		Global_1369750.f_4399.f_249[iVar0] = iParam6;
		Global_1369750.f_4399.f_260[iVar0] = iParam7;
		Global_1369750.f_4399.f_205[iVar0] = iParam8;
		Global_1369750.f_4399.f_314[iVar0] = iParam9;
		Global_1369750.f_4399.f_325[iVar0] = iParam10;
		Global_1369750.f_4399.f_357[iVar0] = iParam11;
		Global_1369750.f_4399.f_238[iVar0] = iParam12;
		Global_1369750.f_4399.f_271[iVar0] = iParam13;
		Global_1369750.f_4399.f_368[iVar0] = iParam14;
		Global_1369750.f_4399.f_379[iVar0] = iParam15;
		Global_1369750.f_4399.f_390[iVar0] = iParam16;
	}
}

void func_170(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1369750.f_6130[iParam0]), iParam1);
}

int func_171(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1369750.f_6130[iParam0], iParam1);
}

int func_172(var uParam0)
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

void func_173(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_171(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_170(4, iVar0);
		Global_1369750.f_3109[iVar0] = iParam0;
		Global_1369750.f_3109.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1369750.f_3109.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1369750.f_3109.f_183[iVar0] = iParam3;
		Global_1369750.f_3109.f_216[iVar0] = iParam5;
		Global_1369750.f_3109.f_194[iVar0] = iParam4;
		Global_1369750.f_3109.f_227[iVar0] = iParam6;
		Global_1369750.f_3109.f_270[iVar0] = iParam7;
		Global_1369750.f_3109.f_281[iVar0] = iParam8;
		Global_1369750.f_3109.f_292[iVar0] = iParam9;
		Global_1369750.f_3109.f_303[iVar0] = iParam10;
		Global_1369750.f_3109.f_314[iVar0] = iParam11;
		Global_1369750.f_3109.f_325[iVar0] = iParam13;
		Global_1369750.f_3109.f_336[iVar0] = iParam14;
		Global_1369750.f_3109.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && GAMEPLAY::IS_PC_VERSION()) && iParam12)
		{
			Global_1369750.f_1088 = 1;
		}
	}
}

void func_174(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)
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
			if (func_171(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_170(6, iVar0);
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
		if (iParam15 == 5 && func_176())
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
			if (func_175())
			{
				Global_1369750.f_1092 = 1;
			}
		}
	}
}

int func_175()
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

int func_176()
{
	if (((unk_0x83D607D7994DEF3A() == 8 || unk_0x83D607D7994DEF3A() == 9) || unk_0x83D607D7994DEF3A() == 10) || unk_0x83D607D7994DEF3A() == 12)
	{
		return 1;
	}
	return 0;
}

void func_177()
{
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2459733 = 1;
}

void func_178()
{
	Global_1369750.f_1088 = 1;
}

int func_179(bool bParam0)
{
	if (func_181())
	{
		return 0;
	}
	if (func_180())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_837(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_180()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_196 != 0;
}

bool func_181()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 12);
}

void func_182(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7)
{
	char* sVar0;
	
	if (func_179(0) == 0)
	{
		return;
	}
	func_177();
	func_178();
	if (bParam6)
	{
		func_174(iParam1, sParam0, -1, 1, 5, 1, "HUD_NUMKILLS", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	func_173(iParam2, iParam3, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_172(sParam7))
	{
		sVar0 = sParam7;
	}
	func_169(iParam4, sVar0, 0, 0, -1, 0, 3, 0, iParam5, 0, 0, 0, iParam5, 0, 0, 0, 0);
}

void func_183(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11)
{
	struct<16> Var0;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	char* sVar20;
	
	if (func_179(0) == 0)
	{
		return;
	}
	func_178();
	func_177();
	if (iParam0 > -1)
	{
		Var0 = { func_184(iParam1) };
		iVar16 = 1;
		if (iParam11 == iParam1)
		{
			iVar16 = 9;
		}
		func_174(iParam0, &Var0, -1, iVar16, 7, 1, "", 0, 0, 0, 0, iVar16, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam2 > -1)
	{
		Var0 = { func_184(iParam3) };
		iVar17 = 1;
		if (iParam11 == iParam3)
		{
			iVar17 = 9;
		}
		func_174(iParam2, &Var0, -1, iVar17, 6, 1, "", 0, 0, 0, 0, iVar17, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam4 > -1)
	{
		Var0 = { func_184(iParam5) };
		iVar18 = 1;
		if (iParam11 == iParam5)
		{
			iVar18 = 9;
		}
		func_174(iParam4, &Var0, -1, iVar18, 5, 1, "", 0, 0, 0, 0, iVar18, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam6 > -1)
	{
		Var0 = { func_184(iParam7) };
		iVar19 = 1;
		if (iParam11 == iParam7)
		{
			iVar19 = 9;
		}
		func_174(iParam6, &Var0, -1, iVar19, 4, 1, "", 0, 0, 0, 0, iVar19, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1);
	}
	sVar20 = "HUD_COUNTDOWN";
	if (!func_172(sParam10))
	{
		sVar20 = sParam10;
	}
	func_169(iParam8, sVar20, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0);
}

struct<16> func_184(int iParam0)
{
	struct<16> Var0;
	
	StringConCat(&Var0, UI::_GET_LABEL_TEXT("HUD_TEAM"), 64);
	StringConCat(&Var0, " ", 64);
	StringIntConCat(&Var0, iParam0, 64);
	return Var0;
}

void func_185(char* sParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, char* sParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	
	if (func_179(0) == 0)
	{
		return;
	}
	func_178();
	func_177();
	if (iParam8 > -1)
	{
		iVar0 = 1;
		if (iParam15 == iParam1)
		{
			iVar0 = 9;
		}
		func_174(iParam8, sParam0, -1, 1, 7, 1, "", 0, 0, 0, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam9 > -1)
	{
		iVar1 = 1;
		if (iParam15 == iParam3)
		{
			iVar1 = 9;
		}
		func_174(iParam9, sParam2, -1, 1, 6, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam10 > -1)
	{
		iVar2 = 1;
		if (iParam15 == iParam5)
		{
			iVar2 = 9;
		}
		func_174(iParam10, sParam4, -1, 1, 5, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam11 > -1)
	{
		iVar3 = 1;
		if (iParam15 == iParam7)
		{
			iVar3 = 9;
		}
		func_174(iParam11, sParam6, -1, 1, 4, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	sVar4 = "HUD_COUNTDOWN";
	if (!func_172(sParam14))
	{
		sVar4 = sParam14;
	}
	func_169(iParam12, sVar4, 0, 0, -1, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0, 0, 0, 0);
}

char* func_186()
{
	return "HUD_COUNTDOWN";
	switch (func_188(PLAYER::PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_187())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_187()
{
	if (func_188(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2524719.f_4804;
	}
	return -1;
}

int func_188(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/];
	}
	return -1;
}

void func_189(int iParam0)
{
	if (IntToFloat(iParam0) < GAMEPLAY::GET_FRAME_TIME())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4720, 0))
		{
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_2524719.f_4722)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2524719.f_4722));
			}
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
			if (Global_2524719.f_4730 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2524719.f_4730);
				Global_2524719.f_4730 = -1;
			}
			Global_2524719.f_4720 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4720, 0))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4720, 4))
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_2524719.f_4720, 2))
				{
					if (AUDIO::_0x109697E2FFBAC8A1())
					{
						if ((!GAMEPLAY::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_2524719.f_4722)))
						{
							StringCopy(&(Global_2524719.f_4722), "", 32);
							AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
							AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
							AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
							GAMEPLAY::SET_BIT(&(Global_2524719.f_4720), 2);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && GAMEPLAY::IS_BIT_SET(Global_2524719.f_4720, 5))
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_2524719.f_4720, 1))
			{
				if (iParam0 < 10000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_20S");
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S");
				}
				AUDIO::START_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
				GAMEPLAY::SET_BIT(&(Global_2524719.f_4720), 1);
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_2524719.f_4720, 4))
			{
				if (iParam0 < 27500)
				{
					if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !AUDIO::_0x0626A247D2405330())
						{
							StringCopy(&(Global_2524719.f_4722), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
							AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
						}
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						GAMEPLAY::SET_BIT(&(Global_2524719.f_4720), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_2524719.f_4720, 3))
				{
					Global_2524719.f_4730 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Global_2524719.f_4730, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					GAMEPLAY::SET_BIT(&(Global_2524719.f_4720), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_2524719.f_4720, 0))
			{
				Global_2524719.f_4720 = 0;
				Global_2524719.f_4730 = -1;
				AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
				AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
				GAMEPLAY::SET_BIT(&(Global_2524719.f_4720), 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || GAMEPLAY::IS_BIT_SET(Global_2524719.f_4720, 2))
				{
					GAMEPLAY::SET_BIT(&(Global_2524719.f_4720), 2);
					GAMEPLAY::SET_BIT(&(Global_2524719.f_4720), 5);
				}
				else
				{
					GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4720), 5);
					GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4720), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2524719.f_4720, 0))
		{
			Global_2524719.f_4720 = 0;
			Global_2524719.f_4730 = -1;
			AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
			GAMEPLAY::SET_BIT(&(Global_2524719.f_4720), 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				GAMEPLAY::SET_BIT(&(Global_2524719.f_4720), 2);
				GAMEPLAY::SET_BIT(&(Global_2524719.f_4720), 5);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4720), 2);
				GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4720), 5);
			}
		}
	}
}

void func_190()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (UI::DOES_BLIP_EXIST(uLocal_1333[iVar0]))
		{
			UI::REMOVE_BLIP(&(uLocal_1333[iVar0]));
		}
		iVar0++;
	}
}

void func_191(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!UI::DOES_BLIP_EXIST(uLocal_1333[iVar0]))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_110.f_13, iVar0))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_744[iParam0 /*18*/].f_1, iVar0))
					{
						uLocal_1333[iVar0] = UI::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]));
						UI::SET_BLIP_SPRITE(uLocal_1333[iVar0], 429);
						func_192(&(uLocal_1333[iVar0]), 29);
						if (func_737())
						{
							UI::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_1333[iVar0], "UW_BLIPC");
						}
						else
						{
							UI::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_1333[iVar0], "UW_BLIP");
						}
						UI::SET_BLIP_PRIORITY(uLocal_1333[iVar0], 9);
					}
					else if (UI::DOES_BLIP_EXIST(uLocal_1333[iVar0]))
					{
						UI::REMOVE_BLIP(&(uLocal_1333[iVar0]));
					}
				}
				else if (UI::DOES_BLIP_EXIST(uLocal_1333[iVar0]))
				{
					UI::REMOVE_BLIP(&(uLocal_1333[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_192(var uParam0, int iParam1)
{
	var uVar0;
	
	if (UI::DOES_BLIP_EXIST(*uParam0))
	{
		uVar0 = func_193(iParam1);
		UI::SET_BLIP_COLOUR(*uParam0, uVar0);
	}
}

int func_193(int iParam0)
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

void func_194()
{
	bool bVar0;
	
	bVar0 = func_269();
	if (bVar0)
	{
		if (Local_110.f_413 > -1)
		{
			if ((Local_110.f_413 - func_124(&(Local_110.f_326), 0, 0)) >= 0)
			{
				if (!func_198())
				{
					func_197((Local_110.f_413 - func_124(&(Local_110.f_326), 0, 0)));
					func_195((Local_110.f_413 - func_124(&(Local_110.f_326), 0, 0)), func_196(-1));
				}
			}
			else
			{
				if (!func_198())
				{
					func_195(0, func_196(-1));
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					GAMEPLAY::SET_BIT(&(Local_110.f_3), 4);
				}
			}
		}
	}
}

void func_195(int iParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_179(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_172(sParam1))
	{
		sVar0 = sParam1;
	}
	func_169(iParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
}

char* func_196(int iParam0)
{
	var uVar0;
	
	uVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	return "HUD_STARTING";
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_197(int iParam0)
{
	if (IntToFloat(iParam0) < GAMEPLAY::GET_FRAME_TIME())
	{
		Global_2524719.f_4720 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2524719.f_4720, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2524719.f_4720 = 0;
			GAMEPLAY::SET_BIT(&(Global_2524719.f_4720), 1);
		}
	}
}

bool func_198()
{
	bool bVar0;
	var uVar1;
	
	if (func_267(8))
	{
		bVar0 = true;
	}
	if (func_267(0))
	{
		bVar0 = true;
	}
	if (!func_259(129, 0, 0))
	{
		bVar0 = true;
	}
	if (!func_205(0, 1, 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				uVar1 = PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(PLAYER::PLAYER_PED_ID());
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uVar1, 0))
				{
					func_203(0, -1);
					GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
				}
			}
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
	}
	if (Global_1654543)
	{
		bVar0 = true;
	}
	if (func_202(PLAYER::PLAYER_ID()))
	{
		bVar0 = true;
	}
	if (func_201(PLAYER::PLAYER_ID(), 2))
	{
		bVar0 = true;
	}
	if (func_199(PLAYER::PLAYER_ID()))
	{
		bVar0 = true;
	}
	return bVar0;
}

int func_199(int iParam0)
{
	if (func_200(iParam0))
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 8);
}

bool func_200(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 2);
}

bool func_201(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_208, iParam1);
}

int func_202(int iParam0)
{
	if (!func_837(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589747[iParam0 /*790*/].f_35;
}

void func_203(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_1589620)
		{
			if (!func_267(0) && !func_267(func_204(iParam1)))
			{
				Global_1589620 = 1;
			}
		}
	}
	else if (Global_1589620)
	{
		Global_1589620 = 0;
	}
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		case 236:
			return 12;
		
		default:
	}
	return Global_262145.f_23493;
}

int func_205(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_258(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_201(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_256(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_255())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_254(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_253())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_252(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_235(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_234(PLAYER::PLAYER_ID()) != func_26() && func_234(PLAYER::PLAYER_ID()) == func_65(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_232(func_233()) && func_188(PLAYER::PLAYER_ID()) != 236)
	{
		return 0;
	}
	if (func_231())
	{
		return 0;
	}
	if (func_180())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_229(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_227())
	{
		return 0;
	}
	if (func_201(PLAYER::PLAYER_ID(), 0) || func_201(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_201(PLAYER::PLAYER_ID(), 12) || func_201(PLAYER::PLAYER_ID(), 14)) || func_201(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_215(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) || func_213(PLAYER::PLAYER_ID()))
	{
		if (!func_212() && !Global_2503913)
		{
			return 0;
		}
	}
	if (func_211(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_210())
	{
		return 0;
	}
	if (Global_1654543)
	{
		return 0;
	}
	if (func_202(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_209())
	{
		return 0;
	}
	if (func_207(PLAYER::PLAYER_ID()) && Global_1589396.f_171)
	{
		return 0;
	}
	if (func_206())
	{
		return 0;
	}
	return 1;
}

bool func_206()
{
	return Global_1668658.f_28;
}

int func_207(int iParam0)
{
	if (func_208(Global_1589747[iParam0 /*790*/].f_273.f_24))
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0)
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

int func_209()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_210()
{
	return Global_93284.f_328 > 0;
}

bool func_211(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_22, 11);
}

bool func_212()
{
	return GAMEPLAY::IS_BIT_SET(Global_1678593, 5);
}

int func_213(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_26())
			{
				return func_214(Global_2423801[iParam0 /*413*/].f_309.f_4) == 5;
			}
		}
	}
	return 0;
}

int func_214(int iParam0)
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

int func_215(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
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
		if (func_226(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_225(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_224(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_223(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_222(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_221(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_220(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_219(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_218(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_217(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_216(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_216(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_214(Global_2423801[iParam0 /*413*/].f_309.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_217(int iParam0, bool bParam1)
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
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_26())
			{
				return func_214(Global_2423801[iParam0 /*413*/].f_309.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_218(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_214(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_219(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_214(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_220(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_26())
			{
				return func_214(Global_2423801[iParam0 /*413*/].f_309.f_4) == 8;
			}
		}
	}
	return 0;
}

int func_221(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_214(Global_2423801[iParam0 /*413*/].f_309.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_222(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_214(Global_2423801[iParam0 /*413*/].f_309.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_223(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_214(Global_2423801[iParam0 /*413*/].f_309.f_4) == 4;
			}
		}
	}
	return 0;
}

int func_224(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_214(Global_2423801[iParam0 /*413*/].f_309.f_4) == 1;
			}
		}
	}
	return 0;
}

int func_225(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_214(Global_2423801[iParam0 /*413*/].f_309.f_4) == 2;
			}
		}
	}
	return 0;
}

int func_226(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_837(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_214(Global_2423801[iParam0 /*413*/].f_309.f_4) == 0;
			}
		}
	}
	return 0;
}

int func_227()
{
	if (func_228() == 0)
	{
		return 1;
	}
	return 0;
}

int func_228()
{
	return Global_1312466.f_18;
}

bool func_229(int iParam0)
{
	return func_230(iParam0);
}

var func_230(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

bool func_231()
{
	return Global_1312857;
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
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

int func_233()
{
	return Global_2437022.f_2704[0 /*80*/].f_1;
}

int func_234(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_35;
}

int func_235(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_251(iParam0) && !func_200(iParam0)) && !GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 8));
	bVar2 = func_252(iParam0);
	bVar3 = func_250();
	uVar4 = func_241();
	if ((bVar1 && (func_240(iParam0) || func_239(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_238(iParam0)) && !func_236(iParam0)))
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

bool func_236(int iParam0)
{
	return func_237(iParam0, 19);
}

var func_237(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_11.f_4, iParam1);
}

int func_238(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_237(iParam0, 9);
	}
	return 0;
}

int func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1625435[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

int func_240(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1625435[iVar0 /*560*/].f_1, 7);
	}
	return 0;
}

int func_241()
{
	if ((func_237(PLAYER::PLAYER_ID(), 21) || func_237(PLAYER::PLAYER_ID(), 22)) || func_247())
	{
		return 1;
	}
	if (func_243())
	{
		func_242(22);
		return 1;
	}
	return 0;
}

void func_242(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_4), iParam0);
}

int func_243()
{
	if (func_246(PLAYER::PLAYER_ID(), 0))
	{
		if ((func_250() && !func_245()) || func_201(PLAYER::PLAYER_ID(), 21))
		{
			return 1;
		}
		else
		{
			func_244(27);
		}
	}
	return 0;
}

void func_244(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_4), iParam0);
}

bool func_245()
{
	return Global_1312416.f_1;
}

int func_246(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_247()
{
	return func_248(306, -1);
}

int func_248(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2566070[iParam0 /*3*/][func_249(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_249(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_17();
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

bool func_250()
{
	return Global_1312416;
}

int func_251(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/] != -1;
	}
	return 0;
}

bool func_252(int iParam0)
{
	return func_237(iParam0, 20);
}

bool func_253()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 5;
}

int func_254(int iParam0)
{
	if (Global_2423801[iParam0 /*413*/].f_261.f_4 != 0 || Global_2423801[iParam0 /*413*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_255()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18, 0);
}

int func_256(int iParam0)
{
	if (func_257(iParam0, 1))
	{
		if (Global_1589747[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_257(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_229(iParam0))
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

bool func_258(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_11.f_5, iParam1);
}

int func_259(int iParam0, bool bParam1, bool bParam2)
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
		if (func_263(PLAYER::PLAYER_ID(), 85))
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
	if (func_262() || func_261())
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
			if (func_260())
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

int func_260()
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
	if (func_262())
	{
		return 1;
	}
	if (func_261())
	{
		return 1;
	}
	uVar0 = Global_1378933[func_249(-1)];
	if (GAMEPLAY::IS_BIT_SET(uVar0, 7))
	{
		GAMEPLAY::SET_BIT(&(Global_2524719.f_1720), 23);
		return 1;
	}
	return 0;
}

bool func_261()
{
	return Global_1312845;
}

bool func_262()
{
	return Global_1312847;
}

int func_263(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (!func_266())
	{
		return 0;
	}
	if (func_265())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_264(iParam1);
	uVar1 = uVar0;
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_645, uVar1);
}

int func_264(int iParam0)
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

bool func_265()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_146, 3);
}

int func_266()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_262())
	{
		return 1;
	}
	if (func_261())
	{
		return 1;
	}
	return func_248(120, -1);
}

bool func_267(int iParam0)
{
	var uVar0;
	
	uVar0 = func_268(2480, -1, 0);
	return GAMEPLAY::IS_BIT_SET(uVar0, iParam0);
}

int func_268(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2535519[iParam0 /*3*/][func_249(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_269()
{
	bool bVar0;
	
	if (!func_737())
	{
		if (Local_110.f_27 == joaat("hydra") || Local_110.f_27 == joaat("rhino"))
		{
			return 0;
		}
	}
	else if (Local_110.f_27 == joaat("hydra") || Local_110.f_27 == joaat("rhino"))
	{
		if (func_110() == 2)
		{
			return 0;
		}
	}
	if (!func_737())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[0]))
		{
			if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_110.f_15 != false;
			}
			else
			{
				bVar0 = Local_110.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = GAMEPLAY::IS_BIT_SET(Local_110.f_3, 9);
	}
	if (!func_15(PLAYER::PLAYER_ID(), 0))
	{
		if (bVar0 && !func_198())
		{
			if (func_737())
			{
				if (!func_276("UW_ABTSC"))
				{
					func_270("UW_ABTSC", 0);
				}
			}
			else if (!func_276("UW_ABTS"))
			{
				func_270("UW_ABTS", 0);
			}
		}
		else if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
		{
			func_8();
		}
	}
	return bVar0;
}

void func_270(char* sParam0, bool bParam1)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (UI::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_274(sParam0))
	{
		return;
	}
	func_9();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312576.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_273();
	func_272(bParam1);
	func_271();
}

void func_271()
{
	GAMEPLAY::SET_BIT(&(Global_1312576.f_59), 1);
}

void func_272(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1312576.f_59), 0);
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_1312576.f_59), 0);
}

void func_273()
{
	Global_1312576.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312576.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_274(var uParam0)
{
	if (!func_14())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_275(uParam0);
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(uParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_12));
}

bool func_275(var uParam0)
{
	if (!func_14())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(uParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_16));
}

int func_276(char* sParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_14())
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
	return func_274(sParam0);
}

void func_277(bool bParam0)
{
	int iVar0;
	struct<4> Var1;
	bool bVar5;
	
	Var1 = { func_419() };
	bVar5 = false;
	if (Local_110.f_27 == joaat("rhino") || Local_110.f_27 == joaat("hydra"))
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_1547[iVar0 /*42*/] = -1;
			Local_1547[iVar0 /*42*/].f_1 = func_26();
			Local_1547[iVar0 /*42*/].f_9 = 0;
			Local_1547[iVar0 /*42*/].f_31 = -1;
			if (Local_110.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_1547[iVar0 /*42*/].f_1 = Local_110.f_465[iVar0 /*4*/].f_2;
				Local_1547[iVar0 /*42*/].f_9 = Local_110.f_465[iVar0 /*4*/].f_1;
			}
			iVar0++;
		}
		if (bParam0)
		{
			if (!func_418())
			{
				if (Local_2892.f_103 != 129)
				{
					Local_2892.f_103 = 129;
				}
				else
				{
					func_203(1, 129);
				}
			}
		}
		else if (Local_2892.f_103 != 129)
		{
			Local_2892.f_103 = 129;
		}
		func_282(&Local_1547, &uLocal_1546, 26, &Local_2892, &uLocal_3008, -1, 0, 0);
		if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			if (Local_1547[0 /*42*/].f_1 != PLAYER::PLAYER_ID())
			{
				if (Local_110.f_465[0 /*4*/].f_1 > 0)
				{
					func_281();
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_1547[iVar0 /*42*/] = -1;
			Local_1547[iVar0 /*42*/].f_1 = func_26();
			Local_1547[iVar0 /*42*/].f_9 = 0;
			Local_1547[iVar0 /*42*/].f_31 = -1;
			Local_1547[iVar0 /*42*/].f_39 = -1;
			if (Local_110.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_1547[iVar0 /*42*/].f_39 = Local_110.f_465[iVar0 /*4*/] + 1;
				Local_1547[iVar0 /*42*/].f_1 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_465[iVar0 /*4*/].f_2);
				Local_1547[iVar0 /*42*/].f_40 = Local_110.f_465[iVar0 /*4*/].f_1;
				Local_1547[iVar0 /*42*/].f_9 = Local_110.f_465[iVar0 /*4*/].f_1;
				Local_1547[iVar0 /*42*/].f_2 = Local_110.f_465[iVar0 /*4*/];
			}
			iVar0++;
		}
		func_278();
		if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			if (Local_110.f_594[0 /*4*/] > 0)
			{
				if (Local_110.f_594[0 /*4*/] != Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9)
				{
					if (Local_110.f_256[Local_110.f_594[0 /*4*/]] > 0)
					{
						func_281();
					}
				}
			}
		}
		func_282(&Local_1547, &uLocal_1546, 26, &Local_2892, &uLocal_3008, -1, 1, 0);
		if (bParam0)
		{
			if (!func_418())
			{
				if (Local_2892.f_103 != 129)
				{
					Local_2892.f_103 = 129;
				}
				else
				{
					func_203(1, 129);
				}
			}
		}
		else if (Local_2892.f_103 != 129)
		{
			Local_2892.f_103 = 129;
		}
	}
}

void func_278()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	
	uLocal_3533[0] = Local_110.f_594[0 /*4*/];
	uLocal_3533[1] = Local_110.f_594[1 /*4*/];
	uLocal_3533[2] = Local_110.f_594[2 /*4*/];
	uLocal_3533[3] = Local_110.f_594[3 /*4*/];
	iVar3 = Local_110.f_594[0 /*4*/];
	iVar4 = Local_110.f_594[1 /*4*/];
	iVar5 = Local_110.f_594[2 /*4*/];
	iVar6 = Local_110.f_594[3 /*4*/];
	if (iVar3 != -1)
	{
		uVar7 = Local_110.f_266[iVar3];
	}
	if (iVar4 != -1)
	{
		uVar8 = Local_110.f_266[iVar4];
	}
	if (iVar5 != -1)
	{
		uVar9 = Local_110.f_266[iVar5];
	}
	if (iVar6 != -1)
	{
		uVar10 = Local_110.f_266[iVar6];
	}
	uLocal_3538[0] = uVar7;
	uLocal_3538[1] = uVar8;
	uLocal_3538[2] = uVar9;
	uLocal_3538[3] = uVar10;
	iVar11 = 0;
	while (iVar11 < NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
	{
		iVar2 = func_280(uLocal_3533[iVar0], iVar11);
		if (iVar2 != -1)
		{
			Local_1547[iVar2 /*42*/].f_9 = Local_110.f_594[iVar0 /*4*/].f_1;
		}
		func_279(iVar2, iVar11);
		iVar1++;
		if (iVar1 >= uLocal_3538[iVar0])
		{
			iVar0++;
			iVar1 = 0;
		}
		if (iVar0 >= 4)
		{
			return;
		}
		iVar11++;
	}
}

void func_279(int iParam0, int iParam1)
{
	struct<42> Var0;
	
	if (iParam0 == -1 || iParam1 == -1)
	{
		return;
	}
	Var0 = { Local_1547[iParam1 /*42*/] };
	Local_1547[iParam1 /*42*/] = { Local_1547[iParam0 /*42*/] };
	Local_1547[iParam0 /*42*/] = { Var0 };
}

int func_280(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = iParam1;
	while (iVar0 <= (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() - 1))
	{
		if (iParam0 == Local_1547[iVar0 /*42*/].f_2)
		{
			iVar1 = iVar0;
			iVar0 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
		}
		iVar0++;
	}
	return iVar1;
}

void func_281()
{
	GAMEPLAY::SET_BIT(&(Global_2524719.f_1723), 19);
}

void func_282(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
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
	
	if (func_417(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_415() || iParam2 == 27)
	{
		if (func_367(uParam1, iParam2, uParam3, Global_1574168, 0, func_420(), iParam7))
		{
			func_366(1);
			if ((!func_364() && !func_362()) || GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 1))
			{
				if (func_361())
				{
					func_358();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_357(1);
						Global_1574168 = 0;
						iVar54 = -1;
						if (Global_1574389 != 1)
						{
							func_356(uParam1, 0, 0);
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
								if (func_837(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_15(iVar35, 0))
									{
										if ((func_355(iVar35) || Global_2423801[iVar35 /*413*/].f_236 != -1) || func_354(iVar35))
										{
											iVar44 = iVar35;
											if (func_353(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_350(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_347(PLAYER::PLAYER_ID(), 0) && func_346(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_345())
							{
								if (func_837(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									iVar35 = func_26();
								}
							}
							else
							{
								iVar35 = (iParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_344(iVar35) && func_341(iVar35, iParam2)) && func_837(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								uVar42 = Global_1589747[iVar44 /*790*/].f_211.f_6;
								Var38 = { func_336(iVar35) };
								if (iVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_66(iVar35) };
								iVar37 = func_330(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
								}
								Global_1574168++;
								if ((iParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (iParam0[iVar52 /*42*/])->f_22;
								}
								if ((iParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (iParam0[iVar52 /*42*/])->f_31;
								}
								if ((iParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (iParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (iParam0[iVar52 /*42*/])->f_9;
								if (((iParam0[iVar52 /*42*/])->f_9 != -1 || (iParam0[iVar52 /*42*/])->f_22 != -1f) || (iParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_345())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_325(&iVar43, &fVar45, (iParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_324(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (iParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								uVar51 = func_319(iVar35, 0);
								if (bVar34)
								{
									if (func_318(iVar35, 1) && iVar1[iVar44] != -1)
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
								if ((iParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (iParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_317(iParam5))
								{
									func_316(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, uVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (iParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_316(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, uVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (iParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
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
							if (func_837(iVar35, 0, 1) && !GAMEPLAY::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								iVar35 = func_26();
							}
							if (func_344(iVar35))
							{
								if (func_837(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									uVar42 = Global_1589747[iVar44 /*790*/].f_211.f_6;
									Var38 = { func_336(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_66(iVar35) };
									iVar37 = func_330(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574168++;
									uVar51 = func_319(iVar35, 1);
									if (bVar34)
									{
										if (func_318(iVar35, 1))
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
									func_295(iVar35, PLAYER::GET_PLAYER_NAME(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, uVar42, uVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_292(uParam3, uParam1);
						}
						func_104(&(uParam3->f_21));
						func_291();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!GAMEPLAY::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_290(uParam3, uParam1);
							func_289(uParam1, 0, 1);
							GAMEPLAY::SET_BIT(&(uParam3->f_33), 7);
						}
						func_290(uParam3, uParam1);
						if (!GAMEPLAY::IS_BIT_SET(uParam3->f_33, 11))
						{
							GAMEPLAY::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_285(uParam3))
						{
							Global_1574389 = 1;
						}
						func_283(uParam3);
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
			func_291();
			func_357(0);
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

void func_283(var uParam0)
{
	if (!func_21(&(uParam0->f_21)))
	{
		func_19(&(uParam0->f_21), 0, 0);
	}
	else if (func_18(&(uParam0->f_21), 250, 0))
	{
		func_104(&(uParam0->f_21));
		func_284(0);
	}
}

void func_284(bool bParam0)
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

int func_285(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar15 != func_26() && func_837(iVar15, 0, 1))
	{
		Var2 = { func_66(iVar15) };
		iVar1 = func_288(uParam0, uParam0->f_37);
		if (func_287(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_286(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_286(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_286(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_286(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_286(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_286(uParam0, iVar0, 0);
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

void func_286(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_287(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_288(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_289(var uParam0, int iParam1, int iParam2)
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

void func_290(var uParam0, var uParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_HIGHLIGHT");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GAMEPLAY::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_291()
{
	if (Global_1574389 != 0)
	{
		Global_1574389 = 0;
	}
}

void func_292(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_26())
		{
			if (func_837(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_294(uParam0->f_38[iVar0 /*2*/], 0);
					func_293(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1589747[iVar0 /*790*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_293(var uParam0, var uParam1, int iParam2, var uParam3)
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

int func_294(int iParam0, bool bParam1)
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

void func_295(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_315() && iParam4 < func_314())
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
				func_313("");
			}
			else
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam10);
			}
			func_313(sParam1);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam11);
			if (uParam3->f_108 == 6)
			{
				func_313("");
			}
			else
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(65);
			}
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-1);
			func_313("");
			if (uParam3->f_108 == 6)
			{
				func_313("");
			}
			else
			{
				func_313(&sParam5);
			}
			func_300(uParam3, iParam0);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			if (func_299(uParam3))
			{
				func_298("DPAD_FRIEND");
			}
			else if (func_297(uParam3))
			{
				func_298("DPAD_FRIEND");
			}
			else if (func_296(uParam3))
			{
				func_298("DPAD_CREW");
			}
			else
			{
				func_298("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_296(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_297(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(uParam0->f_33, 5);
}

void func_298(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_299(var uParam0)
{
	if (func_297(uParam0) && func_296(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_300(var uParam0, int iParam1)
{
	if (func_312(iParam1))
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(121);
	}
	else if (func_305(iParam1))
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(122);
	}
	else if (((GAMEPLAY::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && GAMEPLAY::IS_BIT_SET(Global_2423801[iParam1 /*413*/].f_410, 0))
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(123);
	}
	else
	{
		if (func_301())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(uParam0->f_36);
	}
}

int func_301()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_303() || func_302())
		{
			return 1;
		}
	}
	return 0;
}

var func_302()
{
	return Global_2448386.f_14;
}

int func_303()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_302();
	}
	return func_304(Global_4456448.f_130782);
}

int func_304(int iParam0)
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

int func_305(int iParam0)
{
	if ((func_837(iParam0, 0, 1) && func_309()) && func_306(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_306(int iParam0, bool bParam1)
{
	return func_307(iParam0, bParam1, 1);
}

int func_307(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_26())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_308(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1625435[iParam0 /*560*/].f_11;
	if (iVar0 != func_26() && Global_1625435[iVar0 /*560*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_308(int iParam0, int iParam1)
{
	if (iParam0 != func_26())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_26())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 == iParam0 && Global_1625435[iParam0 /*560*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_309()
{
	if (func_251(PLAYER::PLAYER_ID()) || func_311())
	{
		if (!func_310(PLAYER::PLAYER_ID(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_310(int iParam0, int iParam1)
{
	if (func_188(iParam0) == iParam1)
	{
		return func_240(iParam0);
	}
	return 0;
}

int func_311()
{
	switch (func_346(PLAYER::PLAYER_ID()))
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

int func_312(int iParam0)
{
	if (func_301())
	{
		if (func_837(iParam0, 0, 1))
		{
			return func_353(iParam0);
		}
	}
	if ((func_837(iParam0, 0, 1) && func_309()) && func_308(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_313(char* sParam0)
{
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

int func_314()
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

int func_315()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574170)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_316(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, var uParam9, int iParam10, var uParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, var uParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_315() && iParam3 < func_314())
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
					func_313("");
				}
				else
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam9);
				}
				if (uParam2->f_108 == 6 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_298(sParam16);
				}
				else
				{
					func_313(&(uParam2->f_1));
				}
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam11);
				if (uParam2->f_108 == 6)
				{
					func_313("");
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
				if (func_345())
				{
					func_313("");
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
						func_298(&(uParam2->f_104));
					}
					else
					{
						func_313("");
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
					func_313("");
				}
				if (uParam2->f_108 == 6)
				{
					func_313("");
				}
				else
				{
					func_313(&sParam4);
				}
				func_300(uParam2, iParam0);
				if (iParam12 == 1 || GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_313("");
					func_313("");
				}
				else
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
				}
				if (func_299(uParam2))
				{
					func_298("DPAD_FRIEND");
				}
				else if (func_297(uParam2))
				{
					func_298("DPAD_FRIEND");
				}
				else if (func_296(uParam2))
				{
					func_298("DPAD_CREW");
				}
				else
				{
					func_298("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_317(int iParam0)
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

bool func_318(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_353(iParam0))
		{
			return 0;
		}
	}
	return Global_1625435[iParam0 /*560*/].f_11 != func_26();
}

int func_319(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_251(iParam0)) && !func_252(iParam0))
	{
		iVar0 = func_323();
	}
	iVar1 = func_322(iParam0);
	if (!iVar1 == -1)
	{
		return func_320(iVar1);
	}
	return iVar0;
}

int func_320(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_321(iParam0);
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

var func_321(int iParam0)
{
	return Global_2417554.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_322(int iParam0)
{
	if (!iParam0 == func_26())
	{
		if (func_318(iParam0, 1))
		{
			return Global_2417554.f_2071.f_11[func_65(iParam0)];
		}
	}
	return -1;
}

int func_323()
{
	return 21;
}

char* func_324(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

int func_325(var uParam0, float fParam1, var uParam2, int iParam3)
{
	if (func_329(iParam3))
	{
		*fParam1 = (func_326(iParam3, uParam2) / 10f);
		return 1;
	}
	if (func_317(iParam3))
	{
		*fParam1 = (func_326(iParam3, uParam2) / 1000f);
		return 1;
	}
	*uParam0 = uParam2;
	return 0;
}

float func_326(int iParam0, var uParam1)
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
				return func_328(SYSTEM::TO_FLOAT(uParam1));
			}
			break;
		
		case 2:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(uParam1);
			}
			else
			{
				return func_327(SYSTEM::TO_FLOAT(uParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(uParam1);
}

float func_327(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_328(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_329(int iParam0)
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

int func_330(int iParam0)
{
	int iVar0;
	
	iVar0 = func_333(iParam0);
	if (iVar0 == -1)
	{
		func_331(iParam0, 1);
		return 0;
	}
	Global_1379953[iVar0 /*5*/].f_4 = 1;
	return Global_1379953[iVar0 /*5*/].f_2;
}

void func_331(int iParam0, bool bParam1)
{
	if (!func_837(iParam0, 0, 1))
	{
		return;
	}
	if (func_333(iParam0) != -1)
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
	if (func_332(iParam0))
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

int func_332(int iParam0)
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

int func_333(int iParam0)
{
	int iVar0;
	
	if (!func_837(iParam0, 0, 1))
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
			func_334(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_334(int iParam0)
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
	func_335(&(Global_1379953[iVar32 /*5*/]));
	Global_1380114 = (Global_1380114 - 1);
}

void func_335(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_26();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_336(int iParam0)
{
	struct<4> Var0;
	
	if (func_837(iParam0, 0, 1))
	{
		Global_2503649 = { func_66(iParam0) };
		if (GAMEPLAY::IS_DURANGO_VERSION())
		{
			if (func_287(Global_2503649))
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
		if (func_340(&Global_2503649))
		{
			Global_2503579 = { func_338(iParam0) };
			func_337(&Global_2503579, &Var0);
		}
	}
	return Var0;
}

void func_337(var uParam0, var uParam1)
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, uParam1);
}

struct<35> func_338(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_339(iParam0))
	{
		return Global_1312889[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_66(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_339(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_340(var uParam0)
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

int func_341(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_200(iParam0) || func_343(iParam0)) || func_199(iParam0))
		{
			return 0;
		}
	}
	if (!func_342(iParam0))
	{
		return 0;
	}
	if ((!func_355(iParam0) && Global_2423801[iParam0 /*413*/].f_236 == -1) && !func_354(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_342(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_142, 22);
}

int func_343(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 10) || GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 9));
	}
	return 0;
}

int func_344(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_26())
	{
		return 0;
	}
	if (func_15(iParam0, 0))
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

int func_345()
{
	switch (func_346(PLAYER::PLAYER_ID()))
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
	switch (func_188(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_252(PLAYER::PLAYER_ID()))
	{
		switch (func_346(PLAYER::PLAYER_ID()))
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
	if (func_310(PLAYER::PLAYER_ID(), 236))
	{
		return 1;
	}
	return 0;
}

int func_346(int iParam0)
{
	if (func_246(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_33;
	}
	return -1;
}

int func_347(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 && func_348(Global_1625435[iParam0 /*560*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1)
	{
		if (func_348(Global_1625435[iParam0 /*560*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_348(int iParam0)
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
	return func_349(iParam0, 0);
	return 0;
}

int func_349(int iParam0, int iParam1)
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

void func_350(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_837(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_15(iVar1, 0))
			{
				if ((func_355(iVar1) || Global_2423801[iVar1 /*413*/].f_236 != -1) || func_354(iVar1))
				{
					if (func_351(iVar1, iParam1, 0))
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

int func_351(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_26())
	{
		if (!bParam2)
		{
			if (func_352(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1625435[iParam0 /*560*/].f_11 != func_26())
		{
			return iParam1 == Global_1625435[iParam0 /*560*/].f_11;
		}
	}
	return 0;
}

int func_352(int iParam0, int iParam1)
{
	if (iParam1 != func_26())
	{
		if (iParam0 != func_26())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 != func_26())
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

int func_353(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_26())
		{
			return Global_1625435[iParam0 /*560*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_354(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_196 != 0;
}

int func_355(int iParam0)
{
	if (func_837(iParam0, 0, 1))
	{
		if (func_837(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_346(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_356(var uParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_357(bool bParam0)
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

void func_358()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 1))
	{
		if (func_360())
		{
			func_359();
		}
	}
}

void func_359()
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

bool func_360()
{
	return Global_2437022.f_2704[0 /*80*/].f_1 != 0;
}

int func_361()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 0) && func_360())
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 1) && func_360())
	{
		return 1;
	}
	return 0;
}

int func_362()
{
	if (func_360())
	{
		if (func_363(Global_2437022.f_2704[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_363(int iParam0)
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

int func_364()
{
	if (func_360())
	{
		if (func_365(Global_2437022.f_2704[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_365(int iParam0)
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

void func_366(int iParam0)
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

int func_367(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	char* sVar8;
	int iVar9;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_414(iParam1);
	if (iParam1 == 20)
	{
		bVar5 = true;
	}
	uVar7 = func_413();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_412())
		{
			if (func_411() > 0 && Global_1574170)
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
		if (!func_399())
		{
			func_398(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4577, 26))
	{
		func_398(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_21(&(uParam2->f_19)))
	{
		if (func_411() == 1)
		{
			func_397(bVar6, uParam0, 0);
			func_19(&(uParam2->f_19), 0, 0);
			func_398(uParam0, uParam2, 0);
			GAMEPLAY::SET_BIT(&(Global_2524719.f_4578), 5);
		}
	}
	if (func_21(&(uParam2->f_19)) || bParam5)
	{
		if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			UI::HIDE_HELP_TEXT_THIS_FRAME();
		}
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_18(&(uParam2->f_19), 10000, 0) || (func_411() == 0 && !bParam5))
		{
			func_398(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_396();
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
					func_396();
					if (iParam1 == 26 || iParam1 == 27)
					{
						UI::_0x25F87B30C382FCA7();
					}
					UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				UI::_CLEAR_NOTIFICATIONS_POS(uVar7);
				if (func_397(bVar6, uParam0, 0))
				{
					func_356(uParam0, 0, 0);
					uVar4 = func_394(iParam1, &(Global_4456448.f_130789), bParam4);
					Var0 = { func_392(iParam1) };
					if (bParam4)
					{
						func_389(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_384(uParam0, func_386(uParam2), func_385(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar8 = func_377(uParam2);
						if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam6))
						{
							sVar8 = uParam6;
						}
						func_375(uParam0, sVar8, func_376(), -1);
					}
					else if (func_301())
					{
						uParam2->f_34 = Global_1574169;
						func_389(uParam0, uVar4, &Var0, 1, -1, Global_1574169, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574169;
						func_389(uParam0, uVar4, "", 0, -1, Global_1574169, 1);
					}
					else
					{
						iVar9 = func_368(iParam1);
						func_389(uParam0, uVar4, &Var0, 1, iVar9, -1, 1);
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

int func_368(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_374())
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
			if (func_373(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_372(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_371(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_369())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_369()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_61();
	}
	return func_370(Global_4456448.f_130782);
}

int func_370(int iParam0)
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

bool func_371(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 4;
}

bool func_372(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

bool func_373(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

bool func_374()
{
	return Global_4456448.f_1 == 0;
}

void func_375(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam2))
		{
			func_298(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_298("");
		if (iParam3 != -1)
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_376()
{
	switch (func_346(PLAYER::PLAYER_ID()))
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

char* func_377(var uParam0)
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
	switch (func_346(PLAYER::PLAYER_ID()))
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
			if (func_380())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_379(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_379(1))
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
			if (func_378(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_378(int iParam0)
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

bool func_379(bool bParam0)
{
	return func_306(PLAYER::PLAYER_ID(), bParam0);
}

bool func_380()
{
	return (func_383() && func_381(func_382()));
}

int func_381(int iParam0)
{
	return func_308(iParam0, 1);
}

int func_382()
{
	return Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_35;
}

bool func_383()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 148;
}

void func_384(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam2))
		{
			func_298(uParam1);
		}
		else if (func_188(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_298("");
		if (iParam3 != -1)
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_385(var uParam0)
{
	int iVar0;
	
	iVar0 = func_188(PLAYER::PLAYER_ID());
	if (func_418())
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
			switch (func_187())
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

char* func_386(var uParam0)
{
	int iVar0;
	
	iVar0 = func_188(PLAYER::PLAYER_ID());
	if (func_418())
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
			if (func_388() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_388() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_187())
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
			if (func_387() == 1)
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

int func_387()
{
	return Global_2524719.f_4807;
}

int func_388()
{
	if (func_188(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2524719.f_4802;
	}
	return -1;
}

void func_389(var uParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_313(uParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam1);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_298(uParam1);
		}
		if (func_412() && iParam6)
		{
			if (func_391())
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
			func_298(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam4);
			if (func_390(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(166);
			}
			else if (func_61())
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_390(int iParam0)
{
	if (func_373(iParam0) || func_372(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_391()
{
	return Global_1574170;
}

struct<4> func_392(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_393(PLAYER::PLAYER_ID()) || func_371(PLAYER::PLAYER_ID()))
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
	if (func_301() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_38, 16);
	}
	return Var0;
}

bool func_393(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 5;
}

var func_394(int iParam0, var uParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_301() || GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam1)))
	{
		uVar0 = func_395();
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

char* func_395()
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

void func_396()
{
	Global_37027 = 1;
}

bool func_397(bool bParam0, var uParam1, bool bParam2)
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

void func_398(var uParam0, var uParam1, bool bParam2)
{
	GAMEPLAY::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574168 = 0;
	func_291();
	Global_1574167 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_21(&(uParam1->f_19)))
		{
			func_104(&(uParam1->f_19));
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

int func_399()
{
	if (func_410())
	{
		return 0;
	}
	if (func_253())
	{
		return 0;
	}
	if (!func_408())
	{
		return 0;
	}
	if (!func_227())
	{
		return 0;
	}
	if (func_407(8, -1))
	{
		return 0;
	}
	if (func_411() == 2)
	{
		return 0;
	}
	if (Global_2524719.f_4530)
	{
		return 0;
	}
	if (func_180())
	{
		return 0;
	}
	else if (!func_257(PLAYER::PLAYER_ID(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_406(1) || func_404(1)) || Global_17228.f_124) || Global_17228)
	{
		return 0;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_403() && Global_1686218 == 2)
	{
		return 0;
	}
	if (func_401(PLAYER::PLAYER_ID()) && !func_403())
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
	if (func_400(0))
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

bool func_400(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_39, iParam0);
}

int func_401(int iParam0)
{
	if (func_15(iParam0, 0))
	{
		return 1;
	}
	if (func_402())
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

bool func_402()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

bool func_403()
{
	return (GAMEPLAY::IS_BIT_SET(Global_4456448.f_30, 12) && GAMEPLAY::IS_BIT_SET(Global_1686219, 0));
}

int func_404(bool bParam0)
{
	if (CONTROLS::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_405(PLAYER::PLAYER_PED_ID()))
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

int func_405(var uParam0)
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

bool func_406(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17228.f_4 && Global_17228.f_104 == 4);
	}
	return Global_17228.f_4;
}

bool func_407(int iParam0, int iParam1)
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

int func_408()
{
	if (func_409())
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

bool func_409()
{
	return Global_1312438;
}

bool func_410()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17367.f_5873 + 100;
}

int func_411()
{
	return Global_1368245.f_68;
}

int func_412()
{
	if (Global_1574169 > 16)
	{
		return 1;
	}
	return 0;
}

float func_413()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_414(int iParam0)
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

int func_415()
{
	if (func_420())
	{
		return 1;
	}
	if (func_199(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_418())
	{
		return 1;
	}
	if (func_251(PLAYER::PLAYER_ID()))
	{
		switch (func_188(PLAYER::PLAYER_ID()))
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
				if (!func_416(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_416(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_416(PLAYER::PLAYER_ID()))
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

bool func_416(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 4);
}

int func_417(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_251(PLAYER::PLAYER_ID()) && !func_252(PLAYER::PLAYER_ID())) && !func_310(PLAYER::PLAYER_ID(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_246(PLAYER::PLAYER_ID(), 0) && func_252(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_235(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_418()
{
	return Global_1589620;
}

struct<4> func_419()
{
	struct<4> Var0;
	
	switch (Local_110.f_27)
	{
		case joaat("rhino"):
			StringCopy(&Var0, "UW_TMRHN", 16);
			break;
		
		case joaat("hydra"):
			StringCopy(&Var0, "UW_TMHYD", 16);
			break;
		
		case joaat("savage"):
			StringCopy(&Var0, "UW_TMSAV", 16);
			break;
		
		case joaat("valkyrie"):
			StringCopy(&Var0, "UW_TMVALK", 16);
			break;
		
		case joaat("buzzard"):
			StringCopy(&Var0, "UW_TMBUZ", 16);
			break;
	}
	return Var0;
}

int func_420()
{
	if (func_421(PLAYER::PLAYER_ID()))
	{
		return Global_1316740;
	}
	return 0;
}

int func_421(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_15(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

void func_422()
{
	struct<2> Var0;
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (func_15(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	switch (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17)
	{
		case 0:
			if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
			{
				if (Local_110.f_241 == 0)
				{
					func_742();
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 22))
			{
				if (Local_110.f_27 == joaat("rhino") && Local_110.f_29 == 2)
				{
					func_711(Local_110.f_30[0 /*3*/]);
					GAMEPLAY::SET_BIT(&uLocal_1321, 22);
				}
				else if (!func_69(Local_110.f_30[0 /*3*/], 0f, 0f, 0f, 0))
				{
					func_711(Local_110.f_30[0 /*3*/]);
					GAMEPLAY::SET_BIT(&uLocal_1321, 22);
				}
			}
			func_710();
			func_704();
			if (Local_110.f_241 == 0)
			{
				func_701(1);
			}
			func_700(0);
			if (Local_110.f_241 == 0)
			{
				if (!Local_110.f_27 == joaat("hydra") && !Local_110.f_27 == joaat("rhino"))
				{
					func_194();
				}
				else if (func_737())
				{
					func_194();
				}
				if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_1322, 1))
					{
						func_699(129);
						func_677(1);
						GAMEPLAY::SET_BIT(&uLocal_1322, 1);
						NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 6))
					{
						if (Local_110.f_28 > 1 || (Local_110.f_28 == 1 && func_110() > 1))
						{
							if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 4))
							{
								Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
								GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 6);
							}
						}
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(uLocal_1322, 1))
				{
					GAMEPLAY::CLEAR_BIT(&uLocal_1322, 1);
					func_676(1);
					func_675();
					func_677(0);
				}
			}
			if (Local_110.f_241 == 1)
			{
				func_674(&iVar4, &uVar5);
				iLocal_3434 = iVar4;
				func_673(0);
				if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (!func_672())
					{
						GAMEPLAY::SET_BIT(&uLocal_1322, 19);
					}
					if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
					{
						func_8();
					}
					NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
					if ((func_671("UW_MINV") || func_671("UW_TIMELA")) || func_671("UW_TIMEL"))
					{
						UI::CLEAR_HELP(1);
					}
					func_190();
					func_661(129, 0f, 0f, 1, 1, 1, 0);
					func_654(1);
					func_653();
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
					iLocal_1331 = PLAYER::GET_MAX_WANTED_LEVEL();
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					func_652(1);
					func_651(1);
					if (Local_110.f_27 != joaat("rhino"))
					{
						func_630(1);
					}
					uLocal_1533 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_1531);
					AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
					AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START");
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, 1);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, 0);
					func_629(0);
					Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = iLocal_3434;
					if (!func_737())
					{
						func_628(63, "UW_TITLE", "UW_DESC", func_323(), -1, func_323(), 1);
					}
					else if (Local_110.f_27 == joaat("hydra") || Local_110.f_27 == joaat("rhino"))
					{
						func_628(63, "UW_TITLEC", "UW_DESCC", func_323(), -1, func_323(), 1);
					}
					else
					{
						iVar4++;
						StringCopy(&Var0, "UW_TM", 16);
						StringIntConCat(&Var0, iVar4, 16);
						func_627(63, &Var0, "UW_DESCCT", "UW_TITLE", 15000, -1, -1082130432, "", func_323(), func_323(), -1);
					}
					Local_727.f_9 = NETWORK::_GET_POSIX_TIME();
					func_629(0);
					func_625(0);
					func_19(&uLocal_3472, 0, 0);
					Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 1;
				}
				else
				{
					func_190();
					if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
					{
						func_8();
					}
					if (func_622("UW_HELP1", func_624(), func_623(1)) || func_622("UW_HELP1C", func_624(), func_623(1)))
					{
						UI::CLEAR_HELP(1);
					}
					Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					func_629(0);
					if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
					{
					}
					else if (!func_621())
					{
					}
				}
			}
			else if (Local_110.f_241 == 3)
			{
				func_629(0);
				if (func_622("UW_HELP1", func_624(), func_623(1)) || func_622("UW_HELP1C", func_624(), func_623(1)))
				{
					UI::CLEAR_HELP(1);
				}
				if (!func_620())
				{
				}
				if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
				{
					func_8();
				}
				func_190();
				Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_110.f_241 > 3)
			{
				if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
				{
					func_8();
				}
				func_629(0);
				Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			else
			{
				if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					func_619();
					func_618();
					if (func_120())
					{
						func_653();
					}
				}
				if (func_737())
				{
					if (func_612(2, 0, 1, 0, 0))
					{
						if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
						{
							func_8();
						}
						func_629(0);
						Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
					}
				}
				else if (Local_110.f_27 == joaat("valkyrie"))
				{
					if (func_612(2, 0, 1, 0, 0))
					{
						if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
						{
							func_8();
						}
						func_629(0);
						Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
					}
				}
			}
			break;
		
		case 1:
			func_163(1);
			func_704();
			func_546();
			func_167();
			func_544();
			func_532();
			func_277(0);
			func_528();
			func_525();
			func_619();
			func_618();
			if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 26))
			{
				if (!func_524(55))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
						{
							if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
							{
								if (!func_737())
								{
									if (!func_276("UW_ATTK"))
									{
										func_270("UW_ATTK", 0);
									}
								}
								else if (Local_110.f_27 == joaat("hydra") || Local_110.f_27 == joaat("rhino"))
								{
									if (!func_276("UW_ATTK"))
									{
										func_270("UW_ATTK", 0);
									}
								}
								else if (!func_276("UW_ATTK"))
								{
									func_674(&iVar4, &uVar5);
									iVar4++;
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar4, 16);
									func_270("UW_ATTK", 0);
								}
							}
							else if (func_276("UW_ATTK"))
							{
								func_8();
							}
						}
					}
				}
			}
			func_523();
			if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
				{
					func_653();
				}
			}
			if (!func_837(PLAYER::PLAYER_ID(), 1, 1))
			{
				Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				func_8();
				GAMEPLAY::SET_BIT(&uLocal_1321, 21);
			}
			else if (func_180())
			{
				Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				func_8();
			}
			if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
			{
				if (!func_522())
				{
					GAMEPLAY::SET_BIT(&uLocal_1321, 23);
					func_8();
					if (iLocal_3434 > -1)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iLocal_3434]))
						{
							func_24(&(Local_110.f_7[iLocal_3434]));
						}
					}
					Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				}
			}
			if (Local_110.f_241 == 3)
			{
				func_676(1);
				Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_110.f_241 > 3)
			{
				func_676(1);
				Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			else if (func_737())
			{
				if (func_612(2, 0, 1, 0, 0))
				{
					Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
				}
			}
			break;
		
		case 2:
			if (Local_110.f_241 == 3)
			{
				Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_110.f_241 > 3)
			{
				Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			func_456();
			if (func_620())
			{
				if (func_188(PLAYER::PLAYER_ID()) == 129)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !UI::IS_RADAR_HIDDEN())
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, 0);
						if (GAMEPLAY::IS_BIT_SET(uLocal_1321, 22))
						{
							func_455();
							GAMEPLAY::CLEAR_BIT(&uLocal_1321, 22);
						}
						func_675();
						func_452();
						func_450(0);
						func_448(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, 0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, 1);
						func_677(0);
						func_676(1);
					}
					func_447();
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uLocal_1322, 8))
			{
				GAMEPLAY::SET_BIT(&uLocal_1322, 8);
			}
			if (!func_198())
			{
				func_446();
				func_544();
				func_163(0);
				func_532();
				func_277(1);
				func_528();
				if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
				}
			}
			else
			{
				func_445();
			}
			func_439();
			func_438();
			func_546();
			if (!GAMEPLAY::IS_BIT_SET(uLocal_1322, 7))
			{
				iVar6 = 0;
				while (iVar6 < 24)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_48[iVar6]))
					{
						if (!func_31(Local_110.f_48[iVar6]))
						{
							PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_110.f_48[iVar6]), PLAYER::PLAYER_ID(), 0);
						}
					}
					iVar6++;
				}
				iVar6 = 0;
				while (iVar6 < 4)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_80[iVar6]))
					{
						if (!func_31(Local_110.f_80[iVar6]))
						{
							PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_110.f_80[iVar6]), PLAYER::PLAYER_ID(), 0);
						}
					}
					iVar6++;
				}
				GAMEPLAY::SET_BIT(&uLocal_1322, 7);
			}
			else if (Local_110.f_247 != iLocal_3432)
			{
				iLocal_3432 = Local_110.f_247;
				GAMEPLAY::CLEAR_BIT(&uLocal_1322, 7);
			}
			if (GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 11);
			}
			if (GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_1531)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), uLocal_1533);
			}
			break;
		
		case 3:
			if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 31))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 12))
				{
					func_190();
					GAMEPLAY::SET_BIT(&uLocal_1321, 31);
				}
			}
			func_523();
			func_433();
			if (!func_198())
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 14) && !GAMEPLAY::IS_BIT_SET(Local_110.f_3, 12))
				{
					func_277(1);
				}
				func_532();
				func_544();
				func_528();
				func_424();
			}
			func_456();
			func_438();
			func_546();
			if (Local_110.f_241 > 3)
			{
				Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			break;
		
		case 4:
			func_782();
			break;
	}
	func_423();
}

void func_423()
{
	int iVar0;
	
	if (iLocal_3495 != Local_110.f_616)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (GAMEPLAY::IS_BIT_SET(Local_110.f_616, iVar0))
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_3495, iVar0))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_7[iVar0]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 2);
							func_24(&(Local_110.f_7[iVar0]));
							GAMEPLAY::SET_BIT(&iLocal_3495, iVar0);
						}
					}
					else
					{
						GAMEPLAY::SET_BIT(&iLocal_3495, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_424()
{
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 14))
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_1322, 5))
		{
			if (func_427(0, 1, 1, 1))
			{
				if (func_737())
				{
					func_426("UW_TFEWC", 30000);
				}
				else
				{
					func_426("UW_TFEW", 30000);
				}
				func_425(1);
				GAMEPLAY::SET_BIT(&uLocal_1322, 5);
			}
		}
	}
}

void func_425(int iParam0)
{
	unk_0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
	if (iParam0 && !func_360())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_426(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam1);
}

int func_427(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_432())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_410())
	{
		return 0;
	}
	if (func_255())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_257(PLAYER::PLAYER_ID(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_431(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_430())
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
	if (func_429())
	{
		return 0;
	}
	if (func_428())
	{
		return 0;
	}
	if (func_180())
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

bool func_428()
{
	return Global_2448386.f_580;
}

bool func_429()
{
	return Global_2448386.f_733;
}

bool func_430()
{
	return Global_2437022.f_3028.f_578;
}

int func_431(int iParam0)
{
	if (Global_2423801[iParam0 /*413*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_432()
{
	if (Global_15822 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_433()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (!func_276("UW_EXPL") && !func_276("UW_EXPLC"))
	{
		func_8();
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, (27 + iVar2)))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[iVar2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]), 0))
				{
					GAMEPLAY::SET_BIT(&uLocal_1321, (27 + iVar2));
					uLocal_3435[iVar2] = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_3435[iVar2], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]), "GTAO_FM_Events_Soundset", 0, 0);
					AUDIO::SET_VARIABLE_ON_SOUND(uLocal_3435[iVar2], "Time", 30f);
				}
			}
		}
		iVar2++;
	}
	if (!func_737())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[0]))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_319, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_7[0]), 0))
				{
					if ((func_437() - func_124(&(Local_110.f_324), 0, 0)) >= 0)
					{
						if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || GAMEPLAY::IS_BIT_SET(Local_110.f_3, 14))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_110.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_198())
								{
									func_436();
									func_169((func_437() - func_124(&(Local_110.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
					}
					else
					{
						if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || GAMEPLAY::IS_BIT_SET(Local_110.f_3, 14))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_110.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_198())
								{
									func_436();
									func_169(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
						if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							func_676(1);
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_7[0]))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_110.f_7[0]), 0);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_110.f_7[0]), 1);
							if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_7[0]))))
							{
								unk_0x2A5E0621DD815A9A(NETWORK::NET_TO_VEH(Local_110.f_7[0]), 1, 0, -1);
								func_24(&(Local_110.f_7[0]));
							}
							else
							{
								NETWORK::_0xCD71A4ECAB22709E(NETWORK::NET_TO_VEH(Local_110.f_7[0]), 1, 0, 0);
								func_24(&(Local_110.f_7[0]));
							}
						}
					}
				}
			}
		}
		func_190();
		if (!func_198())
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 12))
			{
				if (func_107(Local_110.f_7[0]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_110.f_7[0])))
						{
							if (!func_737())
							{
								if (!func_276("UW_EXPL"))
								{
									func_270("UW_EXPL", 0);
								}
							}
							else if (!func_276("UW_EXPLC"))
							{
								func_270("UW_EXPLC", 0);
							}
							GAMEPLAY::SET_BIT(&uLocal_1321, 12);
						}
					}
				}
			}
			else if (func_276("UW_EXPL") || func_276("UW_EXPLC"))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						func_8();
					}
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[iVar0]))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_110.f_319, iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0))
					{
						if ((func_437() - func_124(&(Local_110.f_324), 0, 0)) >= 0)
						{
							if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || GAMEPLAY::IS_BIT_SET(Local_110.f_3, 14))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_198())
									{
										if (!bVar1)
										{
											func_436();
											func_169((func_437() - func_124(&(Local_110.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
											bVar1 = true;
										}
									}
								}
							}
						}
						else
						{
							if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || GAMEPLAY::IS_BIT_SET(Local_110.f_3, 14))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_198())
									{
										if (!bVar1)
										{
											func_436();
											func_169(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
											bVar1 = true;
										}
									}
								}
							}
							if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
							{
								func_676(1);
							}
							if (func_434(Local_110.f_7[iVar0]))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_7[iVar0]))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0);
									VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1);
									if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]))))
									{
										unk_0x2A5E0621DD815A9A(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1, 0, -1);
										func_24(&(Local_110.f_7[iVar0]));
									}
									else
									{
										NETWORK::_0xCD71A4ECAB22709E(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 1, 0, 0);
										func_24(&(Local_110.f_7[iVar0]));
									}
								}
							}
						}
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 12))
				{
					if (func_107(Local_110.f_7[iVar0]))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_110.f_7[iVar0])))
							{
								if (!func_198())
								{
									if (!func_737())
									{
										if (!func_276("UW_EXPL"))
										{
											func_270("UW_EXPL", 0);
										}
									}
									else if (!func_276("UW_EXPLC"))
									{
										func_270("UW_EXPLC", 0);
									}
									GAMEPLAY::SET_BIT(&uLocal_1321, 12);
								}
							}
						}
					}
				}
				else if (func_276("UW_EXPL") || func_276("UW_EXPLC"))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							func_8();
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_434(var uParam0)
{
	if (NETWORK::_NETWORK_CAN_NETWORK_ID_BE_SEEN(uParam0))
	{
		return 1;
	}
	if (func_435(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_435(var uParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0))
	{
		return 0;
	}
	if (func_79(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_436()
{
	Global_1369750.f_1089 = 1;
}

int func_437()
{
	if (func_737())
	{
		return Global_262145.f_11262;
	}
	return Global_262145.f_10982;
}

void func_438()
{
	if (!GAMEPLAY::IS_BIT_SET(uLocal_1322, 4))
	{
		if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_676(1);
					GAMEPLAY::SET_BIT(&uLocal_1322, 4);
				}
			}
		}
	}
}

void func_439()
{
	var uVar0;
	int iVar1;
	
	uVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_1330);
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(uVar0))
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(uVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (iLocal_1330 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (!GAMEPLAY::IS_BIT_SET(uLocal_3496, iLocal_1330))
				{
					if (!func_198())
					{
						if (Local_744[iLocal_1330 /*18*/].f_17 == 1)
						{
							GAMEPLAY::SET_BIT(&uLocal_3496, iLocal_1330);
							func_440(iVar1, 55, 1, 0);
						}
					}
				}
				else if (func_198())
				{
					func_440(iVar1, 55, 0, 0);
					GAMEPLAY::CLEAR_BIT(&uLocal_3496, iLocal_1330);
				}
				else if (Local_744[iLocal_1330 /*18*/].f_17 > 1)
				{
					GAMEPLAY::CLEAR_BIT(&uLocal_3496, iLocal_1330);
					func_440(iVar1, 55, 0, 0);
				}
			}
		}
	}
	iLocal_1330++;
	if (iLocal_1330 >= NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iLocal_1330 = 0;
	}
}

void func_440(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_442(iParam0))
	{
		return;
	}
	if (func_441(&(Global_2415861.f_614[iParam0]), &(Global_2415861.f_977[iParam0]), &(Global_2415861.f_386), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2415861.f_449[iParam0] = iParam1;
		}
	}
}

int func_441(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
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

int func_442(int iParam0)
{
	if (iParam0 == func_26())
	{
		return 1;
	}
	if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_443())
	{
		return 1;
	}
	return 0;
}

int func_443()
{
	switch (func_444())
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

int func_444()
{
	return Global_25459;
}

void func_445()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (UI::DOES_BLIP_EXIST(Local_1338[iVar0 /*8*/]))
		{
			UI::REMOVE_BLIP(&(Local_1338[iVar0 /*8*/]));
		}
		if (UI::DOES_BLIP_EXIST(Local_1338[iVar0 /*8*/].f_1))
		{
			UI::REMOVE_BLIP(&(Local_1338[iVar0 /*8*/].f_1));
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_48[iVar0]))
		{
			if (!func_31(Local_110.f_48[iVar0]))
			{
				if (UI::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_110.f_48[iVar0])))
				{
					func_90(&(Local_1338[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_446()
{
	if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 11))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 6))
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 13))
			{
				if (func_188(PLAYER::PLAYER_ID()) != 129)
				{
					if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
					{
						if (!func_524(65) && !func_524(66))
						{
							if (GAMEPLAY::IS_BIT_SET(uLocal_1322, 11))
							{
								if (!GAMEPLAY::IS_BIT_SET(uLocal_1322, 12))
								{
									if (func_427(0, 1, 1, 1))
									{
										if (func_737())
										{
											func_426("UW_HELIMC", -1);
										}
										else
										{
											func_426("UW_HELIM", -1);
										}
										func_425(1);
										GAMEPLAY::SET_BIT(&uLocal_1322, 12);
									}
								}
							}
							else if (!(Local_110.f_27 == joaat("rhino") || Local_110.f_27 == joaat("hydra")))
							{
								if (func_427(0, 1, 1, 1))
								{
									if (!func_737())
									{
										func_426("UW_TAVAIL", 30000);
									}
									else
									{
										func_426("UW_TAVAILC", 30000);
									}
									func_425(1);
									GAMEPLAY::SET_BIT(&uLocal_1321, 11);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_447()
{
	float fVar0;
	
	if (iLocal_3491 != 0)
	{
		return;
	}
	if (func_21(&uLocal_3472))
	{
		iLocal_3491 = func_124(&uLocal_3472, 0, 0);
	}
	fVar0 = SYSTEM::TO_FLOAT(iLocal_3491);
	fVar0 = (fVar0 / 60000f);
	iLocal_3491 = SYSTEM::FLOOR(fVar0);
	if (iLocal_3491 >= 1)
	{
	}
	else
	{
		iLocal_3491 = 1;
	}
	if (iLocal_3491 > Global_262145.f_11322)
	{
		iLocal_3491 = Global_262145.f_11322;
	}
}

void func_448(bool bParam0)
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
		func_449(iVar0);
		iVar0++;
	}
}

void func_449(int iParam0)
{
	Global_93284.f_172[iParam0] = 1;
	Global_93284.f_171 = 1;
}

void func_450(int iParam0)
{
	if (func_451() && iParam0)
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

int func_451()
{
	if ((((Global_968393 != -1 && Global_968393 != 33) && Global_968393 != 35) && Global_968393 != 37) && Global_968393 != 21)
	{
		return 1;
	}
	return 0;
}

void func_452()
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_454();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	GAMEPLAY::CLEAR_BIT(&(Global_1574631.f_1), 8);
	func_453();
}

void func_453()
{
	if (Global_1664222)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1664223, 0))
		{
			GAMEPLAY::CLEAR_BIT(&Global_2533185, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1664223, 1))
		{
			GAMEPLAY::CLEAR_BIT(&Global_2533185, 1);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1664223, 5))
		{
			GAMEPLAY::CLEAR_BIT(&Global_2533185, 5);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-355737150))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-355737150, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-580979506))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-580979506, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-1426452475))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1426452475, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(745417724))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(745417724, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-1305304906))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1305304906, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-1543175077))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1543175077, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-811770997))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-811770997, 1, 0, 0);
		}
		Global_1664223 = 0;
	}
	Global_1664222 = 0;
}

void func_454()
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

void func_455()
{
	Global_2391049 = { 0f, 0f, 0f };
	Global_2391052 = 0;
}

void func_456()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar10;
	
	if (GAMEPLAY::IS_BIT_SET(uLocal_1321, 13))
	{
		return;
	}
	bVar0 = GAMEPLAY::IS_BIT_SET(Local_110.f_3, 6);
	bVar1 = GAMEPLAY::IS_BIT_SET(uLocal_1321, 21);
	bVar2 = GAMEPLAY::IS_BIT_SET(uLocal_1321, 23);
	bVar3 = Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 != -1;
	if (bVar3)
	{
		bVar1 = false;
		bVar2 = false;
	}
	if (func_620())
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_1322, 17))
		{
			if (func_837(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || bVar2)
				{
					if (!func_198())
					{
						if (!func_737())
						{
							if (bVar0)
							{
								func_628(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1);
							}
							else if (bVar1)
							{
								if (Local_110.f_27 == joaat("rhino") || Local_110.f_27 == joaat("hydra"))
								{
									func_628(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1);
								}
								else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[0]) && func_107(Local_110.f_7[0]))
								{
									GAMEPLAY::SET_BIT(&uLocal_1322, 11);
									GAMEPLAY::SET_BIT(&uLocal_1322, 16);
									func_628(66, "UW_BIGE", "UW_LSELIM", 1, 15000, 2, 1);
								}
								else
								{
									func_628(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1);
								}
							}
							else if (bVar2)
							{
								func_628(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1);
							}
							else if (bVar3 || GAMEPLAY::IS_BIT_SET(Local_110.f_3, 16))
							{
								func_628(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1);
							}
						}
						else if (bVar0)
						{
							func_628(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1);
						}
						else if (bVar1)
						{
							if (Local_110.f_27 == joaat("rhino") || Local_110.f_27 == joaat("hydra"))
							{
								if (func_521())
								{
									GAMEPLAY::SET_BIT(&uLocal_1322, 11);
									GAMEPLAY::SET_BIT(&uLocal_1322, 16);
									func_628(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1);
								}
								else
								{
									func_628(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1);
								}
							}
							else if (func_521())
							{
								GAMEPLAY::SET_BIT(&uLocal_1322, 11);
								GAMEPLAY::SET_BIT(&uLocal_1322, 16);
								func_628(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1);
							}
							else
							{
								func_628(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1);
							}
						}
						else if (bVar2)
						{
							if (func_521())
							{
								GAMEPLAY::SET_BIT(&uLocal_1322, 11);
								GAMEPLAY::SET_BIT(&uLocal_1322, 16);
								func_628(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1);
							}
							else
							{
								func_628(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1);
							}
						}
						else if (bVar3 || GAMEPLAY::IS_BIT_SET(Local_110.f_3, 16))
						{
							func_628(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1);
						}
					}
					iVar4 = func_520(1);
					Local_727.f_6 = (Local_727.f_6 + iVar4);
					if (!Global_262145.f_11389)
					{
						if (Local_727.f_6 > 0)
						{
							func_519(19, Local_727.f_6);
						}
					}
					Global_2460387 = iVar4;
					if (iVar4 > 0)
					{
						if (func_518())
						{
							func_506(210955503, iVar4, &uVar5, 0, 1, 0);
						}
						else
						{
							NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar4, "AM_KILL_LIST", &uVar6);
						}
					}
					iVar10 = func_505(1);
					Local_727.f_7 = (Local_727.f_7 + iVar10);
					func_504();
					func_457(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar10, 1, -1, 0, 0, 0);
					Local_727.f_5 = 2;
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, 0);
					if (!GAMEPLAY::IS_BIT_SET(uLocal_1322, 16))
					{
						GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					}
					GAMEPLAY::SET_BIT(&uLocal_1322, 17);
					GAMEPLAY::SET_BIT(&uLocal_1322, 18);
				}
			}
		}
	}
}

int func_457(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_458(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_458(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_468(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				uVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_464(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_459(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_459(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_462(iParam0, 1) };
	if (iParam0 == func_461(PLAYER::PLAYER_PED_ID()))
	{
		func_460(1);
	}
	func_464(vVar0, iParam1, 0, sParam2, uParam3);
}

void func_460(int iParam0)
{
	Global_2437022.f_1886 = iParam0;
}

int func_461(var uParam0)
{
	return uParam0;
}

Vector3 func_462(int iParam0, bool bParam1)
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
	if (iParam0 == func_463(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
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

int func_463(var uParam0)
{
	return uParam0;
}

void func_464(vector3 vParam0, int iParam3, int iParam4, char* sParam5, var uParam6)
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
			Global_2437022.f_1285[iVar1 /*30*/].f_4 = func_467(Global_2437022.f_1285[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437022.f_1285[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2437022.f_1285[iVar1 /*30*/].f_3 = iParam3;
			Global_2437022.f_1285[iVar1 /*30*/].f_8 = iParam4;
			Global_2437022.f_1285[iVar1 /*30*/].f_9 = func_466();
			Global_2437022.f_1285[iVar1 /*30*/].f_10 = func_465();
			StringCopy(&(Global_2437022.f_1285[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2437022.f_1285[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), uParam6);
		}
	}
}

int func_465()
{
	if (Global_2437022.f_1886)
	{
		Global_2437022.f_1886 = 0;
		return 1;
	}
	Global_2437022.f_1886 = 0;
	return 0;
}

var func_466()
{
	var uVar0;
	
	uVar0 = Global_2437022.f_1888;
	Global_2437022.f_1888 = 1;
	return uVar0;
}

float func_467(vector3 vParam0, var uParam3, var uParam4)
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

var func_468(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_469(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_469(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_503(PLAYER::PLAYER_ID()) || func_502(PLAYER::PLAYER_ID()))
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
	else if (func_369() || func_500(PLAYER::PLAYER_ID()))
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
	if (func_172(uParam2))
	{
	}
	if (func_499())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_497(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_496(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_494(0, &iVar1);
					break;
				
				case 3:
					func_494(1, &iVar1);
					break;
				
				case 1:
					func_491(&iVar1);
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
			func_489(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_479((func_488(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_2 != -1)
				{
					func_489(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_474(iVar1);
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
				func_470((func_472(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_470((func_472(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_470(int iParam0)
{
	if (func_499())
	{
		Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_5 = iParam0;
		func_471(joaat("mpply_globalxp"), iParam0);
	}
}

void func_471(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_472(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_837(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_473(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_5;
			}
		}
		else
		{
			return func_473(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_473(int iParam0)
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

void func_474(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_66(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_477(func_478(&Var0));
			if (iVar13 == 0)
			{
				func_476(&Global_1378824, iParam0);
				func_475(joaat("mpply_crew_local_xp_0"), Global_1378824);
			}
			else if (iVar13 == 1)
			{
				func_476(&Global_1378825, iParam0);
				func_475(joaat("mpply_crew_local_xp_1"), Global_1378825);
			}
			else if (iVar13 == 2)
			{
				func_476(&Global_1378826, iParam0);
				func_475(joaat("mpply_crew_local_xp_2"), Global_1378826);
			}
			else if (iVar13 == 3)
			{
				func_476(&Global_1378827, iParam0);
				func_475(joaat("mpply_crew_local_xp_3"), Global_1378827);
			}
			else if (iVar13 == 4)
			{
				func_476(&Global_1378828, iParam0);
				func_475(joaat("mpply_crew_local_xp_4"), Global_1378828);
			}
		}
	}
}

void func_475(int iParam0, int iParam1)
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

void func_476(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_477(int iParam0)
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

int func_478(var uParam0)
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

void func_479(int iParam0, int iParam1, int iParam2)
{
	if (func_499())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9490 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1378945[func_249(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1378945[func_249(-1)])
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
		if (func_487(PLAYER::PLAYER_ID()))
		{
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_1 = iParam0;
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_6 = func_485(iParam0, 1);
		}
		func_484(639, iParam0, -1, 1);
		func_483(640, func_485(iParam0, 1), -1, 1, 0);
		Global_1378945[func_249(-1)] = iParam0;
		func_480(7, 0);
	}
}

void func_480(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_482(iParam0, iParam1))
	{
		iVar0 = func_481();
		Global_2458086[iVar0] = iParam0;
	}
}

int func_481()
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

int func_482(int iParam0, var uParam1)
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

void func_483(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_249(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_484(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2535519[iParam0 /*3*/][func_249(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1378885[func_249(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1378891[func_249(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1378897[func_249(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1378903[func_249(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1378861[func_249(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1378867[func_249(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1378873[func_249(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1378879[func_249(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1378837[func_249(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1378843[func_249(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1378849[func_249(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1378855[func_249(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1378909[func_249(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1378915[func_249(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1378921[func_249(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1378927[func_249(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1378933[func_249(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1378939[func_249(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1378945[func_249(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1378951[func_249(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2568104[0 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2568104[1 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2568104[2 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2568104[3 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_2568229[func_249(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1378957[func_249(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1378963[func_249(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1378969[func_249(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1378975[func_249(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2568165[0 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2568165[1 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2568165[2 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2568165[3 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2568165[4 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2568232[0 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2568232[1 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2568232[2 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2568232[3 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2568232[4 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2568248[0 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2568248[1 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2568248[2 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2568248[3 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2568248[4 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2568165[5 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2568104[4 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2568264[func_249(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2568273[func_249(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2568267[func_249(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2568276[func_249(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2568270[func_249(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2568279[func_249(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2568282[func_249(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2568165[6 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2568104[5 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2568165[7 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2568104[6 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2568165[8 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2568104[7 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2568165[9 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2568104[8 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2568165[10 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2568104[9 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2568165[11 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2568104[10 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2568165[12 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2568104[11 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2568165[13 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2568104[12 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2568165[14 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2568104[13 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2568165[15 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2568104[14 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2568165[16 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2568104[15 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2568165[17 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2568104[16 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2568104[17 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2568104[18 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2568104[19 /*3*/][func_249(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_485(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_486(iParam0, 0);
}

int func_486(int iParam0, int iParam1)
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

int func_487(int iParam0)
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

int func_488(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1378945[func_249(-1)];
			}
			else if (func_487(iParam0))
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1378945[func_249(-1)];
	}
	return 0;
}

void func_489(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_268(iParam0, func_249(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_490(iParam0))
	{
		func_483(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_484(iParam0, iVar0, iParam2, 1);
	}
}

int func_490(int iParam0)
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

void func_491(int iParam0)
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_493(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_67(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_492(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_492(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_492(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(uParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_493(int iParam0, int iParam1, int iParam2)
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

void func_494(bool bParam0, int iParam1)
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
				if (func_837(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_67(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_837(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_495(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_67(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_492(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_492(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_495(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_59(iParam0), func_59(iParam1));
	return 0f;
}

int func_496(int iParam0)
{
	int iVar0;
	
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_492(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_497(int iParam0)
{
	if (iParam0 < 0)
	{
		if (GAMEPLAY::ABSI(iParam0) > func_488(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_488(PLAYER::PLAYER_ID());
		}
	}
	if (func_498(8000, 0, 0) > 0)
	{
		if (func_498(8000, 0, 0) < (iParam0 + func_488(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_498(8000, 0, 0) - func_488(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_498(int iParam0, bool bParam1, int iParam2)
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

int func_499()
{
	return 1;
}

int func_500(int iParam0)
{
	return func_501(func_346(iParam0));
}

int func_501(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_502(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

bool func_503(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

void func_504()
{
	Global_2459729 = 1;
}

int func_505(bool bParam0)
{
	int iVar0;
	
	if (GAMEPLAY::IS_BIT_SET(uLocal_1322, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_737())
		{
			return Global_262145.f_11203;
		}
		else
		{
			return Global_262145.f_11142;
		}
	}
	func_447();
	if (func_737())
	{
		iVar0 = (Global_262145.f_11203 * iLocal_3491);
	}
	else
	{
		iVar0 = (Global_262145.f_11142 * iLocal_3491);
	}
	return iVar0;
}

void func_506(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_518())
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
				func_507(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_507(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -597978445:
			if (iParam1 > 0)
			{
				func_507(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
			func_507(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_507(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_518())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_17()) || unk_0x64BE694244417BDA())
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
			*uParam0 = func_514(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_513(1, iParam4);
			Global_4263477 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_508(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_508(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_509(iParam0);
	}
}

void func_509(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_518())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_512(iParam0))
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
		func_510(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_510(var uParam0)
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
	func_511(&(uParam0->f_13));
	func_511(&(uParam0->f_13.f_13));
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

void func_511(var uParam0)
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

int func_512(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

void func_513(int iParam0, var uParam1)
{
	Global_2460521 = uParam1;
	Global_2460520 = iParam0;
}

int func_514(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61.f_2 == 0)
		{
			if (!func_518())
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
				func_515(Global_4262927[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_515(struct<62> Param0, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, int iParam80)
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
	iVar35 = func_517(vVar0.y);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_516();
		unk_0xA40CC53DF8E50837(1, &vVar0, 35, iVar35);
	}
}

void func_516()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_517(int iParam0)
{
	var uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_518()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

void func_519(int iParam0, int iParam1)
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

int func_520(bool bParam0)
{
	int iVar0;
	
	if (GAMEPLAY::IS_BIT_SET(uLocal_1322, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_737())
		{
			return Global_262145.f_11202;
		}
		else
		{
			return Global_262145.f_11141;
		}
	}
	func_447();
	if (func_737())
	{
		iVar0 = (Global_262145.f_11202 * iLocal_3491);
	}
	else
	{
		iVar0 = (Global_262145.f_11141 * iLocal_3491);
	}
	return iVar0;
}

int func_521()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iLocal_3434]))
	{
		if (func_107(Local_110.f_7[iLocal_3434]))
		{
			bVar0 = true;
		}
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_110.f_256[iVar1] > 0)
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar3 = Local_110.f_256[iLocal_3434];
	if (!bVar0)
	{
		if (Local_110.f_594[0 /*4*/] != iLocal_3434)
		{
			return 0;
		}
		else if (iVar3 > 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (Local_110.f_594[0 /*4*/] == iLocal_3434)
	{
		return 1;
	}
	else
	{
		iVar4 = Local_110.f_256[Local_110.f_594[0 /*4*/]];
		iVar5 = (iVar4 - iVar3);
		iVar6 = (Local_110.f_255 - iVar2);
		if (iVar5 > iVar6)
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

int func_522()
{
	int iVar0;
	var uVar1;
	
	func_674(&iVar0, &uVar1);
	if (iLocal_3434 > -1)
	{
		if (func_107(Local_110.f_7[iLocal_3434]))
		{
			return 1;
		}
	}
	return 0;
}

void func_523()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_110.f_241 == 1)
	{
		if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
		{
			if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
			{
				if (!func_21(&uLocal_3470) || (func_21(&uLocal_3470) && func_18(&uLocal_3470, 5000, 0)))
				{
					if (Local_110.f_27 == joaat("savage") || Local_110.f_27 == joaat("buzzard"))
					{
						iVar1 = iLocal_3434;
						if (iVar1 > -1)
						{
							if (func_107(Local_110.f_7[iVar1]))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[iVar1]), -1, 0);
								if (iVar0 == 0)
								{
									Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (PED::IS_PED_INJURED(iVar0))
								{
									Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (!PED::IS_PED_A_PLAYER(iVar0))
								{
									Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
							}
						}
					}
					else if (Local_110.f_27 == joaat("valkyrie"))
					{
						iVar1 = iLocal_3434;
						if (iVar1 > -1)
						{
							if (func_107(Local_110.f_7[iVar1]))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[iVar1]), -1, 0);
								if (iVar0 == 0)
								{
									Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (PED::IS_PED_INJURED(iVar0))
								{
									Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (!PED::IS_PED_A_PLAYER(iVar0))
								{
									Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
								{
									iVar4 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("valkyrie"));
									iVar2 = 0;
									while (iVar2 < iVar4)
									{
										iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[iVar1]), iVar2, 0);
										if (iVar0 != 0)
										{
											if (!PED::IS_PED_INJURED(iVar0))
											{
												if (PED::IS_PED_A_PLAYER(iVar0))
												{
													iVar3++;
												}
											}
										}
										iVar2++;
									}
									if (iVar3 == 0)
									{
										Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
									}
								}
							}
						}
					}
					func_104(&uLocal_3470);
					func_19(&uLocal_3470, 0, 0);
				}
			}
		}
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_110.f_319, iVar2))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[iVar2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]), 0))
				{
					if ((func_437() - func_124(&(Local_110.f_349[iVar2 /*2*/]), 0, 0)) >= 0)
					{
						if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]), 0))
							{
								if (!func_198())
								{
									func_436();
									func_169((func_437() - func_124(&(Local_110.f_349[iVar2 /*2*/]), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
					}
					else
					{
						if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]), 0))
							{
								if (!func_198())
								{
									func_436();
									func_169(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_7[iVar2]))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]), 0);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]), 1);
							if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]))))
							{
								unk_0x2A5E0621DD815A9A(NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]), 1, 0, -1);
								func_24(&(Local_110.f_7[iVar2]));
							}
							else
							{
								NETWORK::_0xCD71A4ECAB22709E(NETWORK::NET_TO_VEH(Local_110.f_7[iVar2]), 1, 0, 0);
								func_24(&(Local_110.f_7[iVar2]));
							}
						}
					}
				}
			}
			if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == iVar2)
			{
				if (!GAMEPLAY::IS_BIT_SET(uLocal_1322, 6))
				{
					if (func_427(0, 1, 1, 1))
					{
						if (func_737())
						{
							if (!GAMEPLAY::IS_BIT_SET(uLocal_1322, 19))
							{
								func_426("UW_NOPILC", 30000);
							}
							else
							{
								func_426("UW_NOGUN", 30000);
							}
						}
						else
						{
							func_426("UW_NOPIL", 30000);
						}
						func_425(1);
						GAMEPLAY::SET_BIT(&uLocal_1322, 6);
					}
					else if (GAMEPLAY::IS_BIT_SET(uLocal_1322, 19))
					{
						if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							UI::CLEAR_HELP(1);
						}
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iVar5 = Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10;
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar5]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_110.f_7[iVar5])))
						{
							if (!func_737())
							{
								if (!func_276("UW_EXPL"))
								{
									func_270("UW_EXPL", 0);
								}
							}
							else if (!func_276("UW_EXPLC"))
							{
								func_270("UW_EXPLC", 0);
							}
						}
						else if (func_276("UW_EXPL") || func_276("UW_EXPLC"))
						{
							func_8();
						}
					}
					else if (func_276("UW_EXPL") || func_276("UW_EXPLC"))
					{
						func_8();
					}
				}
			}
		}
		iVar2++;
	}
}

bool func_524(int iParam0)
{
	return Global_2437022.f_2704[0 /*80*/].f_1 == iParam0;
}

void func_525()
{
	float fVar0;
	int iVar1;
	var uVar2;
	
	if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		if (Local_110.f_27 == joaat("rhino"))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
				{
					if (!func_21(&uLocal_3466) || (func_21(&uLocal_3466) && func_18(&uLocal_3466, 5000, 0)))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (func_69(vLocal_3492, 0f, 0f, 0f, 0))
							{
								vLocal_3492 = { Local_110.f_30[0 /*3*/] };
							}
							fVar0 = func_527(PLAYER::PLAYER_PED_ID(), vLocal_3492, 1);
							if (fVar0 > 750f)
							{
								GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
							}
						}
						func_104(&uLocal_3466);
						func_19(&uLocal_3466, 0, 0);
					}
				}
				else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!func_276("UW_OOB"))
					{
						func_270("UW_OOB", 0);
					}
					if (!func_21(&uLocal_3468))
					{
						uVar2 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(uVar2, "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_110.f_7[func_526()]), "GTAO_FM_Events_Soundset", 0, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(uVar2, "Time", 30f);
						func_19(&uLocal_3468, 0, 0);
					}
					if (func_21(&uLocal_3468))
					{
						if ((func_437() - func_124(&uLocal_3468, 0, 0)) >= 0)
						{
							func_436();
							func_169((func_437() - func_124(&uLocal_3468, 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
						}
						else
						{
							func_436();
							func_169(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
							func_8();
							GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 11);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
					{
						fVar0 = func_527(PLAYER::PLAYER_PED_ID(), Local_110.f_30[0 /*3*/], 1);
						if (fVar0 < 750f)
						{
							GAMEPLAY::CLEAR_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
							func_104(&uLocal_3468);
							AUDIO::STOP_SOUND(uVar2);
						}
					}
				}
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
	{
		func_676(1);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar1 = func_526();
			if (iVar1 > -1)
			{
				if (func_107(Local_110.f_7[iVar1]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_7[iVar1]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_110.f_7[iVar1]), 0);
						VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_110.f_7[iVar1]), 1);
						unk_0x2A5E0621DD815A9A(NETWORK::NET_TO_VEH(Local_110.f_7[iVar1]), 1, 0, -1);
						func_24(&(Local_110.f_7[iVar1]));
					}
				}
			}
		}
	}
}

int func_526()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar0 == -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar1]))
			{
				if (func_107(Local_110.f_7[iVar1]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_110.f_7[iVar1])))
						{
							iVar0 = iVar1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_527(var uParam0, vector3 vParam1, int iParam4)
{
	vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 0) };
	}
	return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, iParam4);
}

void func_528()
{
	var uVar0;
	int iVar1;
	
	iVar1 = -1;
	if (Local_110.f_27 == joaat("hydra") || Local_110.f_27 == joaat("rhino"))
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 24))
	{
		if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			func_674(&iVar1, &uVar0);
			if (func_531(iVar1))
			{
				if (iVar1 > -1)
				{
					if (Local_110.f_22[iVar1] != func_26())
					{
						fLocal_1332 = NETWORK::NETWORK_GET_TALKER_PROXIMITY();
						NETWORK::NETWORK_SET_TALKER_PROXIMITY(-1f);
						func_530(1, iVar1);
						GAMEPLAY::SET_BIT(&uLocal_1321, 24);
						func_529(1);
					}
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(&uLocal_1321, 24);
				GAMEPLAY::SET_BIT(&uLocal_1321, 25);
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 25))
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_1321, 24))
		{
			if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 > 1)
			{
				NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_1332);
				func_674(&iVar1, &uVar0);
				if (iVar1 > -1)
				{
					func_530(0, iVar1);
					GAMEPLAY::SET_BIT(&uLocal_1321, 25);
					func_529(0);
				}
			}
		}
	}
}

void func_529(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 15);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 4);
	}
}

void func_530(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (func_837(iVar1, 0, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (GAMEPLAY::IS_BIT_SET(Local_744[iVar0 /*18*/].f_1, iParam1) || !bParam0)
				{
					NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, 1);
				}
				else if (bParam0)
				{
					NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_531(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (!bVar0)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (iVar1 != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (GAMEPLAY::IS_BIT_SET(Local_744[iVar1 /*18*/].f_1, iParam0))
					{
						bVar0 = true;
					}
				}
			}
		}
		iVar1++;
	}
	return bVar0;
}

void func_532()
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 15))
	{
		if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 2)
		{
			if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
			{
				if (Local_110.f_22[0] != func_26())
				{
					if (func_427(0, 0, 1, 1))
					{
						if (!func_737())
						{
							if (Local_110.f_27 == joaat("rhino") || Local_110.f_27 == joaat("hydra"))
							{
								if (!func_737())
								{
									func_543("UW_START1P", PLAYER::GET_PLAYER_NAME(Local_110.f_22[0]), 1, 30000);
								}
								else
								{
									func_543("UW_START1PC", PLAYER::GET_PLAYER_NAME(Local_110.f_22[0]), 1, 30000);
								}
								func_425(1);
							}
							else if (GAMEPLAY::IS_BIT_SET(Local_110.f_15, 0))
							{
								if (!GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 14))
								{
									if (!func_737())
									{
										func_426("UW_STARTM", 30000);
									}
									else
									{
										func_426("UW_STARTMC", 30000);
									}
									func_425(1);
								}
							}
							else
							{
								func_543("UW_START1P", PLAYER::GET_PLAYER_NAME(Local_110.f_22[0]), 1, 30000);
								func_425(1);
							}
						}
						else if (!GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 14))
						{
							if (!func_737())
							{
								func_426("UW_STARTM", 30000);
							}
							else
							{
								func_426("UW_STARTMC", 30000);
							}
							func_425(1);
						}
						GAMEPLAY::SET_BIT(&uLocal_1321, 15);
					}
				}
			}
		}
	}
	if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 2)
	{
		if (Local_110.f_241 == 1)
		{
			if (Local_110.f_27 != joaat("hydra") && Local_110.f_27 != joaat("rhino"))
			{
				if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (iLocal_3434 >= 0)
					{
						if (!GAMEPLAY::IS_BIT_SET(uLocal_1322, 10))
						{
							if (!GAMEPLAY::IS_BIT_SET(uLocal_1322, 9))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iLocal_3434]))
								{
									if (func_107(Local_110.f_7[iLocal_3434]))
									{
										GAMEPLAY::SET_BIT(&uLocal_1322, 9);
									}
								}
							}
							else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iLocal_3434]))
							{
								if (!func_107(Local_110.f_7[iLocal_3434]))
								{
									func_542("UW_TEAMV", 1);
									GAMEPLAY::SET_BIT(&uLocal_1322, 10);
								}
							}
						}
					}
				}
			}
		}
	}
	iVar1 = 0;
	if (!func_737())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 6))
			{
				if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, (16 + iVar1)))
				{
					if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 >= 2)
					{
						if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
						{
							if ((GAMEPLAY::IS_BIT_SET(Local_110.f_3, 0) && GAMEPLAY::IS_BIT_SET(Local_110.f_3, 1)) && GAMEPLAY::IS_BIT_SET(Local_110.f_3, 2))
							{
								if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[0]))
								{
									if (func_107(Local_110.f_7[0]))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[0]), -1, 0) != 0)
										{
											iVar0 = func_541(iVar1, 0);
											if (iVar0 != func_26())
											{
												func_533("UW_COMP", iVar0, 1, 0, 0, 0, 1, 1, 0);
											}
											GAMEPLAY::SET_BIT(&uLocal_1321, (16 + iVar1));
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
}

int func_533(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
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
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_539(&Var1));
		if (!bParam5)
		{
			iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
		}
		else
		{
			Global_2503649 = { func_66(iParam1) };
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
						Var1 = { func_538(&Var1) };
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
		func_534(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_534(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_537() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_15(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_535(iParam2);
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

int func_535(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1663381 - 1))
	{
		if (iParam0 > Global_1663381.f_5[iVar0 /*53*/].f_1)
		{
			func_536(iVar0);
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

void func_536(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1663381.f_5[iVar0 /*53*/] = { Global_1663381.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_537()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_538(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_539(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_540(&cVar0);
}

var func_540(char[4] cParam0)
{
	return cParam0;
}

int func_541(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_26();
	iVar2 = (iParam0 - 1);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[iParam1]))
	{
		if (func_107(Local_110.f_7[iParam1]))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[iParam1]), iVar2, 0);
			if (iVar1 != 0)
			{
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
				}
			}
		}
	}
	return iVar0;
}

int func_542(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	func_534(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_543(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		UI::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam1);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam3);
}

void func_544()
{
	if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 9))
	{
		if (Local_110.f_241 == 1)
		{
			if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_START_MUSIC"))
				{
					GAMEPLAY::SET_BIT(&uLocal_1321, 9);
				}
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 10))
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_1321, 9))
		{
			if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 > 1)
			{
				if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FAIL"))
						{
							GAMEPLAY::SET_BIT(&uLocal_1321, 10);
						}
					}
					else if (AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC"))
					{
						GAMEPLAY::SET_BIT(&uLocal_1321, 10);
						func_545();
					}
				}
			}
		}
	}
}

void func_545()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4720, 1))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4720), 1);
	}
	if (Global_2524719.f_4720 > 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
		Global_2524719.f_4720 = 0;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
		if (!GAMEPLAY::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
		{
			if (Global_2524719.f_4730 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2524719.f_4730);
				Global_2524719.f_4730 = -1;
			}
		}
	}
}

void func_546()
{
	struct<2> Var0;
	struct<2> Var4;
	int iVar8;
	var uVar9[2];
	int iVar12;
	int iVar13;
	int iVar14[4];
	int iVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	var uVar27;
	var uVar28;
	var uVar32;
	var uVar33;
	var uVar37;
	var uVar38;
	var uVar42;
	var uVar43;
	var uVar47;
	var uVar48;
	bool bVar52;
	int iVar53;
	char* sVar54;
	var uVar55;
	var uVar56;
	var uVar57;
	var uVar61;
	var uVar62;
	
	iVar20 = 1;
	if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 26))
			{
				if ((((GAMEPLAY::IS_BIT_SET(Local_110.f_3, 0) && GAMEPLAY::IS_BIT_SET(Local_110.f_3, 1)) && GAMEPLAY::IS_BIT_SET(Local_110.f_3, 2)) || (func_737() && GAMEPLAY::IS_BIT_SET(Local_110.f_3, 6))) || (func_737() && GAMEPLAY::IS_BIT_SET(Local_110.f_3, 15)))
				{
					if (!func_21(&uLocal_3487))
					{
						func_19(&uLocal_3487, 0, 0);
					}
					if (func_18(&uLocal_3487, 1000, 0))
					{
						if (func_276("UW_ATTK"))
						{
							func_8();
						}
						func_611();
						if (func_610())
						{
							iVar25 = func_520(1);
							if (iVar25 > 0)
							{
								Local_727.f_6 = (Local_727.f_6 + iVar25);
								if ((!Global_262145.f_11389 && !GAMEPLAY::IS_BIT_SET(Local_110.f_3, 8)) || (!Global_262145.f_11390 && GAMEPLAY::IS_BIT_SET(Local_110.f_3, 8)))
								{
									if (Local_727.f_6 > 0)
									{
										func_519(19, Local_727.f_6);
									}
								}
								Global_2460387 = iVar25;
								if (func_518())
								{
									func_506(210955503, iVar25, &uVar27, 0, 1, 0);
								}
								else
								{
									NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar28);
								}
							}
							iVar23 = func_505(1);
							func_504();
							Local_727.f_7 = (Local_727.f_7 + iVar23);
							func_457(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
							Local_727.f_5 = 2;
							func_628(65, "UW_BIGF", "UW_DRAWZ", 1, 15000, 2, 1);
						}
						else if (!func_737())
						{
							iVar25 = func_623(0);
							func_598(&iVar25, 1);
							iVar25 = (iVar25 + func_520(1));
							if (iVar25 > 0)
							{
								Local_727.f_6 = (Local_727.f_6 + iVar25);
								if (!Global_262145.f_11389)
								{
									if (Local_727.f_6 > 0)
									{
										func_519(19, Local_727.f_6);
									}
								}
								Global_2460387 = iVar25;
								if (func_518())
								{
									func_506(210955503, iVar25, &uVar32, 0, 1, 0);
								}
								else
								{
									NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar33);
								}
							}
							iVar23 = func_505(1);
							iVar23 = (iVar23 + func_597());
							Local_727.f_7 = (Local_727.f_7 + iVar23);
							func_504();
							func_457(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
							Local_727.f_5 = 1;
							func_627(64, "", "UW_BIG_BMEXP", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, -1);
						}
						else if (func_596())
						{
							if (!func_595(1))
							{
								if (!func_276("UW_EXPL") && !func_276("UW_EXPLC"))
								{
									func_8();
								}
								iVar25 = func_623(0);
								func_598(&iVar25, 1);
								iVar25 = (iVar25 + func_520(1));
								Local_727.f_6 = (Local_727.f_6 + iVar25);
								if (!Global_262145.f_11390)
								{
									if (Local_727.f_6 > 0)
									{
										func_519(19, Local_727.f_6);
									}
								}
								Global_2460387 = iVar25;
								if (iVar25 > 0)
								{
									if (func_518())
									{
										func_506(210955503, iVar25, &uVar37, 0, 1, 0);
									}
									else
									{
										NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar38);
									}
								}
								if (Local_110.f_27 == joaat("rhino") || Local_110.f_27 == joaat("hydra"))
								{
									func_627(64, "", "UW_WON1P", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, -1);
								}
								else
								{
									func_627(64, "", "UW_WON", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, -1);
								}
								Local_727.f_5 = 1;
								iVar23 = func_597();
								iVar23 = (iVar23 + func_505(1));
								Local_727.f_7 = (Local_727.f_7 + iVar23);
								func_504();
								func_457(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							}
							else
							{
								iVar25 = func_520(1);
								iVar23 = func_505(1);
								iVar20 = 0;
								iVar22 = 0;
								while (iVar22 <= 3)
								{
									if (Local_110.f_465[iVar22 /*4*/].f_1 == Local_110.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										iVar14[iVar22] = -1;
										if (Local_110.f_27 == joaat("hydra") || Local_110.f_27 == joaat("rhino"))
										{
											if (Local_110.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (Local_110.f_465[iVar22 /*4*/].f_2 != PLAYER::PLAYER_ID())
												{
													if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_465[iVar22 /*4*/].f_2)))
													{
														uVar9[iVar12] = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_465[iVar22 /*4*/].f_2);
														iVar12++;
													}
												}
											}
										}
										else if (iLocal_3434 > -1)
										{
											if (iLocal_3434 != Local_110.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_110.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_110.f_27 == joaat("hydra") || Local_110.f_27 == joaat("rhino"))
								{
									if (iVar20 > 2)
									{
										bVar21 = true;
									}
									else if (uVar9[0] == func_26())
									{
										bVar21 = true;
									}
									else
									{
										func_594(68, "UW_DRAWP", PLAYER::GET_PLAYER_NAME(uVar9[0]), 1, 15000, "UW_BIGO", 2);
									}
								}
								else if (iVar20 > 2)
								{
									bVar21 = true;
								}
								else if (iVar14[0] == -1)
								{
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar14[0] + 1, 16);
									func_627(68, &Var0, "UW_DRAWP", "UW_BIGO", 15000, -1, -1082130432, 0, 1, 2, -1);
								}
								if (bVar21)
								{
									if (!func_737())
									{
										func_628(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1);
									}
									else
									{
										func_628(68, "UW_BIGO", "UW_DRAWC", 1, 15000, 2, 1);
									}
								}
								iVar26 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_623(0)) / SYSTEM::TO_FLOAT(iVar20)));
								iVar24 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_597()) / SYSTEM::TO_FLOAT(iVar20)));
								func_598(&iVar26, 1);
								iVar25 = (iVar25 + iVar26);
								iVar23 = (iVar23 + iVar24);
								Local_727.f_6 = (Local_727.f_6 + iVar25);
								if (!Global_262145.f_11390)
								{
									if (Local_727.f_6 > 0)
									{
										func_519(19, Local_727.f_6);
									}
								}
								Global_2460387 = iVar25;
								if (iVar25 > 0)
								{
									if (func_518())
									{
										func_506(210955503, iVar25, &uVar42, 0, 1, 0);
									}
									else
									{
										NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar43);
									}
								}
								Local_727.f_7 = (Local_727.f_7 + iVar23);
								func_504();
								func_457(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							}
						}
						else
						{
							func_592(1);
							iVar25 = func_520(1);
							iVar23 = func_505(1);
							Local_727.f_6 = (Local_727.f_6 + iVar25);
							if (!Global_262145.f_11390)
							{
								if (Local_727.f_6 > 0)
								{
									func_519(19, Local_727.f_6);
								}
							}
							Global_2460387 = iVar25;
							if (iVar25 > 0)
							{
								if (func_518())
								{
									func_506(210955503, iVar25, &uVar47, 0, 1, 0);
								}
								else
								{
									NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar48);
								}
							}
							Local_727.f_7 = (Local_727.f_7 + iVar23);
							func_504();
							func_457(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							if (!func_595(0))
							{
								iVar13 = Local_110.f_465[0 /*4*/];
								if (!func_276("UW_EXPL") && !func_276("UW_EXPLC"))
								{
									func_8();
								}
								if (Local_110.f_27 == joaat("hydra") || Local_110.f_27 == joaat("rhino"))
								{
									iVar8 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_465[0 /*4*/].f_2);
									if (func_318(iVar8, 1))
									{
										iVar53 = func_322(iVar8);
										if (iVar53 > -1)
										{
											uVar55 = func_320(iVar53);
											sVar54 = func_586(iVar8);
											bVar52 = true;
										}
									}
									if (iVar8 != func_26())
									{
										if (!bVar52)
										{
											if (!func_737())
											{
												func_594(65, "UW_FWONP", PLAYER::GET_PLAYER_NAME(iVar8), 6, 15000, "UW_BIGF", 2);
											}
											else
											{
												func_594(65, "UW_FWONPC", PLAYER::GET_PLAYER_NAME(iVar8), 6, 15000, "UW_BIGF", 2);
											}
										}
										else if (!func_737())
										{
											func_584(66, "PEN_OVR", "UW_FWONG", sVar54, uVar55, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_584(66, "PEN_OVR", "UW_FWONGC", sVar54, uVar55, 0, -1, -1, -1, 2, -1);
										}
									}
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar13 + 1, 16);
									if (!func_737())
									{
										func_627(65, &Var0, "UW_FWONT", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2, -1);
									}
									else
									{
										func_627(65, &Var0, "UW_FWONTC", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2, -1);
									}
								}
							}
							else
							{
								if (!func_276("UW_EXPL") && !func_276("UW_EXPLC"))
								{
									func_8();
								}
								iVar22 = 1;
								while (iVar22 <= 3)
								{
									if (Local_110.f_465[iVar22 /*4*/].f_1 == Local_110.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										if (Local_110.f_27 == joaat("hydra") || Local_110.f_27 == joaat("rhino"))
										{
											if (Local_110.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_465[iVar22 /*4*/].f_2)))
												{
													uVar9[iVar12] = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_465[iVar22 /*4*/].f_2);
													iVar12++;
												}
											}
										}
										else if (iLocal_3434 > -1)
										{
											if (iLocal_3434 != Local_110.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_110.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_110.f_27 == joaat("hydra") || Local_110.f_27 == joaat("rhino"))
								{
									if (iVar20 == 2)
									{
										if (uVar9[0] != func_26() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(uVar9[0]))
										{
											if (uVar9[1] != func_26() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(uVar9[1]))
											{
												func_551(68, func_26(), func_26(), -1, "UW_DRAW2P", "UW_BIGF", func_323(), 15000, func_323(), PLAYER::GET_PLAYER_NAME(uVar9[0]), PLAYER::GET_PLAYER_NAME(uVar9[1]), 0);
											}
											else
											{
												bVar21 = true;
											}
										}
										else
										{
											bVar21 = true;
										}
									}
									else
									{
										bVar21 = true;
									}
								}
								else if (iVar20 == 2)
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar14[0] + 1, 16);
									StringCopy(&Var4, "UW_TM", 16);
									StringIntConCat(&Var4, iVar14[1] + 1, 16);
									func_627(11, &Var0, "UW_DRAW2P", "UW_BIGO", 15000, -1, -1082130432, &Var4, 1, 2, -1);
									bVar21 = true;
								}
								else
								{
									bVar21 = true;
								}
								if (bVar21)
								{
									func_628(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1);
								}
							}
						}
						func_651(0);
						if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
						{
							Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
						}
						GAMEPLAY::SET_BIT(&uLocal_1321, 13);
						GAMEPLAY::SET_BIT(&uLocal_1321, 26);
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 6) || (!func_737() && GAMEPLAY::IS_BIT_SET(Local_110.f_3, 15)))
				{
					if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 != -1)
					{
						func_628(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1);
					}
					else
					{
						func_627(65, "", "UW_FAIL", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2, -1);
					}
					func_651(0);
					GAMEPLAY::SET_BIT(&uLocal_1321, 26);
					iVar25 = func_520(1);
					Local_727.f_6 = (Local_727.f_6 + iVar25);
					if (!Global_262145.f_11389)
					{
						if (Local_727.f_6 > 0)
						{
							func_519(19, Local_727.f_6);
						}
					}
					Global_2460387 = iVar25;
					if (iVar25 > 0)
					{
						if (func_518())
						{
							func_506(210955503, iVar25, &uVar56, 0, 1, 0);
						}
						else
						{
							NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar57);
						}
					}
					iVar23 = func_505(1);
					Local_727.f_7 = (Local_727.f_7 + iVar23);
					func_504();
					func_457(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
					Local_727.f_5 = 2;
					if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 14))
				{
					func_651(0);
					GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 3)
					{
						Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
				{
					func_627(65, "", "UW_FAILD", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2, -1);
					func_651(0);
					GAMEPLAY::SET_BIT(&uLocal_1321, 26);
					GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					iVar25 = func_520(1);
					Local_727.f_6 = (Local_727.f_6 + iVar25);
					if (!Global_262145.f_11389)
					{
						if (Local_727.f_6 > 0)
						{
							func_519(19, Local_727.f_6);
						}
					}
					Global_2460387 = iVar25;
					if (iVar25 > 0)
					{
						if (func_518())
						{
							func_506(210955503, iVar25, &uVar61, 0, 1, 0);
						}
						else
						{
							NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar62);
						}
					}
					iVar23 = func_505(1);
					Local_727.f_7 = (Local_727.f_7 + iVar23);
					func_504();
					func_457(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
					Local_727.f_5 = 2;
					if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 12))
				{
					GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
			{
				if (GAMEPLAY::IS_BIT_SET(uLocal_1321, 26))
				{
					if (func_276("UW_ATTK"))
					{
						func_8();
					}
					if (func_547(&uLocal_3425, 1))
					{
						GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					}
					if (!func_276("UW_EXPL") && !func_276("UW_EXPLC"))
					{
						if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 > -1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9]))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (func_107(Local_110.f_7[Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9]))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_110.f_7[Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9])))
										{
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
	else if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
	{
		GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
	}
}

int func_547(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_360()) && !(func_246(PLAYER::PLAYER_ID(), 0) && (func_238(PLAYER::PLAYER_ID()) || func_236(PLAYER::PLAYER_ID())))) && !func_225(PLAYER::PLAYER_ID()))
	{
		func_550();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_21(&(uParam0->f_3)))
			{
				func_19(&(uParam0->f_3), 0, 0);
			}
			else if (func_18(&(uParam0->f_3), 1000, 0))
			{
				GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 25);
				if (bParam1)
				{
					GAMEPLAY::SET_BIT(&(Global_2524719.f_4574), 0);
					func_19(&(uParam0->f_5), 0, 0);
				}
				func_19(&(uParam0->f_1), 0, 0);
				func_549(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_21(&(uParam0->f_5)))
			{
				if (func_18(&(uParam0->f_5), 3000, 0))
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
				func_548();
				func_549(uParam0, 2);
			}
			break;
		
		case 2:
			func_548();
			if (func_18(&(uParam0->f_1), 15000, 0))
			{
				if (func_671("AMEV_LBD_HELP"))
				{
					UI::CLEAR_HELP(1);
				}
				func_549(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_18(&(uParam0->f_1), 23500, 0))
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4574), 1);
				func_549(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4574), 1);
			return 1;
	}
	return 0;
}

void func_548()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 0))
	{
		if (((((!UI::IS_RADAR_HIDDEN() && !GAMEPLAY::IS_BIT_SET(Global_2524719.f_784, 2)) && func_837(PLAYER::PLAYER_ID(), 1, 1)) && !Global_68494) && !Global_53362) && !CAM::IS_SCREEN_FADED_OUT())
		{
			GAMEPLAY::SET_BIT(&(Global_2524719.f_4574), 1);
			func_426("AMEV_LBD_HELP", -1);
			func_425(1);
			GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4574), 0);
		}
	}
}

void func_549(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_550()
{
	Global_2459730 = 1;
}

int func_551(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
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
	func_583(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = iParam1;
	Var0.f_18 = iParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return func_552(&Var0);
}

int func_552(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437022.f_3026)
		{
			return 0;
		}
	}
	func_562(uParam0, uParam0->f_17);
	func_561(uParam0);
	if (func_61())
	{
		func_561(uParam0);
	}
	if (func_560(uParam0->f_1))
	{
		func_553();
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
				func_553();
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
				if (func_363(Global_2437022.f_2704[iVar0 /*80*/].f_1))
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

void func_553()
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
	func_554();
	if (bVar0)
	{
		Global_71473 = 0;
	}
}

void func_554()
{
	Global_2437022.f_3028 = 0;
	Global_2437022.f_3028.f_578 = 0;
	func_558(&(Global_2437022.f_3028.f_1));
	Global_2437022.f_3028.f_1.f_1 = 0;
	func_555(&(Global_2437022.f_3028.f_1));
}

void func_555(var uParam0)
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_557(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_556(0);
}

void func_556(int iParam0)
{
	Global_71465 = iParam0;
	Global_71466 = iParam0;
}

int func_557(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_71453, 0);
}

void func_558(var uParam0)
{
	func_559(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_559(var uParam0)
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

int func_560(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_561(var uParam0)
{
	if (func_365(uParam0->f_1))
	{
		uParam0->f_72 = func_323();
	}
}

void func_562(var uParam0, int iParam1)
{
	if (func_365(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_26() || !func_837(iParam1, 0, 1))
	{
		return;
	}
	if (func_363(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_563(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_563(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_401(iParam0) && !bParam4)
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
	if (((func_401(PLAYER::PLAYER_ID()) || (func_582() && func_581())) && !GAMEPLAY::IS_BIT_SET(Global_2524719.f_4577, 31)) && !bParam4)
	{
		uVar1 = func_580();
		if (ENTITY::DOES_ENTITY_EXIST(uVar1))
		{
			if (PED::IS_PED_A_PLAYER(uVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1) != -1)
				{
					if (func_837(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_125859[iParam1] != -1)
							{
								return func_578(iParam1, iParam0, 0);
							}
							else
							{
								return func_573(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_573(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_125859[iParam1] != -1)
				{
					return func_578(iParam1, iParam0, 0);
				}
				else
				{
					return func_564(0, -1, 0);
				}
			}
			else
			{
				return func_564(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_125859[iParam1] != -1)
		{
			return func_578(iParam1, iParam0, 0);
		}
		else
		{
			return func_573(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_573(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_564(bool bParam0, int iParam1, bool bParam2)
{
	return func_565(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_565(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (func_571() && Global_1378988.f_1)
	{
		if (bParam1)
		{
			return func_570(iParam2, iVar0);
		}
		else
		{
			return func_570(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_493(iVar0, iParam2, 0) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_569(1);
				}
				else
				{
					return func_569(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_566(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_566(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_569(1);
	}
	return func_569(0);
}

int func_566(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_568(iParam0, iParam1, iParam3);
	if (func_567(Global_4456448.f_130782, 1))
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

int func_567(int iParam0, bool bParam1)
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

int func_568(int iParam0, int iParam1, int iParam2)
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
			if (!func_493(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_569(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_570(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_568(iParam1, iParam0, 4);
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

int func_571()
{
	if (func_572() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

var func_572()
{
	return GAMEPLAY::IS_BIT_SET(Global_4456448.f_146776, 12);
}

int func_573(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_576(1))
			{
				iVar3 = func_322(iParam0);
				if (!iVar3 == -1)
				{
					return func_320(iVar3);
				}
			}
			if ((func_575(iParam1, iParam0, iVar0, 0) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_493(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 23)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_569(1);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_574(1);
			}
			else
			{
				return func_565(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574393 || Global_1574384) || Global_1589747[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574393 == 1 && Global_1574403 == 0))
			{
				return func_569(1);
			}
			else
			{
				return func_565(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574388 && Global_1573886.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_322(iParam0);
	if (!iVar4 == -1)
	{
		return func_320(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_574(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_575(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_576(int iParam0)
{
	if ((func_302() || func_577()) || (func_61() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_577()
{
	return Global_2448386.f_15;
}

int func_578(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969023.f_13[iParam0];
	if (func_576(1))
	{
		iVar2 = func_322(iParam1);
		if (!iVar2 == -1)
		{
			return func_320(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_104[iParam0 /*10693*/].f_5532[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_26())
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
			iVar0 = func_565(iParam1, !bParam2, iParam0, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_579(iParam0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 26) && !func_493(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_574(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_579(int iParam0)
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

var func_580()
{
	return Global_2359302.f_2;
}

var func_581()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 4);
}

var func_582()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18, 14);
}

void func_583(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_26();
	uParam1->f_18 = func_26();
	uParam1->f_19 = func_26();
	uParam1->f_20 = func_26();
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

int func_584(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_26();
	iVar1 = func_26();
	iVar2 = func_26();
	return func_585(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_585(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
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
	func_583(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	return func_552(&Var0);
}

char* func_586(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		uVar0 = func_591(&(Global_1625435[iParam0 /*560*/].f_11.f_99));
		return uVar0;
	}
	if (Global_1625435[iParam0 /*560*/].f_11.f_115 != Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_115)
	{
		uVar0 = func_589(iParam0, 0);
		return uVar0;
	}
	if (((func_237(iParam0, 28) || func_237(PLAYER::PLAYER_ID(), 28)) || func_588(iParam0)) && !func_587(iParam0))
	{
		return func_589(iParam0, 0);
	}
	iVar1 = func_65(iParam0);
	if (iVar1 != func_26())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!GAMEPLAY::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_589(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_26())
	{
		uVar0 = func_591(&(Global_1625435[iVar1 /*560*/].f_11.f_99));
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uVar0))
		{
			return func_589(iVar1, 0);
		}
		else
		{
			return uVar0;
		}
	}
	return "";
}

int func_587(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_66(iParam0) };
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

int func_588(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_26())
	{
		Var0 = { func_66(iParam0) };
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

var func_589(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_306(iParam0, 1))
		{
			return func_590();
		}
	}
	return UI::_GET_LABEL_TEXT("GB_REST_ACC");
}

var func_590()
{
	return UI::_GET_LABEL_TEXT("GB_REST_ACCM");
}

var func_591(var uParam0)
{
	return uParam0;
}

void func_592(bool bParam0)
{
	if (bParam0)
	{
		if (func_593(1))
		{
			GAMEPLAY::SET_BIT(&Global_1574656, 1);
		}
	}
	else if (func_593(2))
	{
		GAMEPLAY::SET_BIT(&Global_1574656, 2);
	}
}

int func_593(int iParam0)
{
	var uVar0;
	
	uVar0 = func_268(2534, -1, 0);
	if (iParam0 == 0)
	{
		if ((GAMEPLAY::IS_BIT_SET(uVar0, 0) && GAMEPLAY::IS_BIT_SET(uVar0, 1)) && GAMEPLAY::IS_BIT_SET(uVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((GAMEPLAY::IS_BIT_SET(uVar0, 3) && GAMEPLAY::IS_BIT_SET(uVar0, 4)) && GAMEPLAY::IS_BIT_SET(uVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((GAMEPLAY::IS_BIT_SET(uVar0, 6) && GAMEPLAY::IS_BIT_SET(uVar0, 7)) && GAMEPLAY::IS_BIT_SET(uVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((GAMEPLAY::IS_BIT_SET(uVar0, 9) && GAMEPLAY::IS_BIT_SET(uVar0, 10)) && GAMEPLAY::IS_BIT_SET(uVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_594(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
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
	func_583(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return func_552(&Var0);
}

int func_595(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		func_674(&iVar1, &iVar2);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar0 != iVar1)
			{
				if (Local_110.f_256[iVar0] == iVar2)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else if (Local_110.f_27 == joaat("rhino") || Local_110.f_27 == joaat("hydra"))
	{
		return Local_110.f_465[0 /*4*/].f_1 == Local_110.f_465[1 /*4*/].f_1;
	}
	else
	{
		return Local_110.f_594[0 /*4*/].f_1 == Local_110.f_594[1 /*4*/].f_1;
	}
	return 0;
}

int func_596()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_674(&iVar1, &iVar2);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iVar1)
		{
			if (Local_110.f_256[iVar0] > iVar2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_597()
{
	if (!func_737())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11138) * Global_262145.f_11328));
	}
	if ((GAMEPLAY::IS_BIT_SET(Local_110.f_3, 0) && GAMEPLAY::IS_BIT_SET(Local_110.f_3, 1)) && GAMEPLAY::IS_BIT_SET(Local_110.f_3, 2))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11199) * Global_262145.f_11330));
	}
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 6))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11199) * Global_262145.f_11330));
	}
	return 0;
}

void func_598(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_609())
		{
			if (func_608(0))
			{
				if (!func_379(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_607()))
					{
						if (func_606() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_606());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_604(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_603("GB_BCUT_TICK1", func_607(), iVar0, 0, 0, 1, 1);
						}
						func_602(20);
						func_599(func_607(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_599(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_837(iParam0, 0, 1))
	{
		Var0 = 2084031113;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_601(iParam0);
		func_600(&(Var0.f_6), &(Var0.f_7));
		unk_0xA40CC53DF8E50837(1, &Var0, 8, func_517(iParam0));
	}
}

void func_600(var uParam0, var uParam1)
{
	*uParam0 = Global_1643357.f_9;
	*uParam1 = Global_1643357.f_10;
}

var func_601(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_491;
}

void func_602(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::SET_BIT(&(Global_2524719.f_4883.f_7[iVar0]), iVar1);
}

int func_603(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
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
		UI::_SET_NOTIFICATION_COLOR_NEXT(func_563(iParam1, -2, 1, 0, 0));
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_539(&Var1));
		if (!iParam3 == 0)
		{
			UI::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
		func_534(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_604(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_605(1);
	}
	else
	{
		iVar1 = func_605(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

var func_605(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12277;
}

int func_606()
{
	return Global_262145.f_12276;
}

int func_607()
{
	return Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11;
}

bool func_608(bool bParam0)
{
	return func_318(PLAYER::PLAYER_ID(), bParam0);
}

bool func_609()
{
	return func_353(PLAYER::PLAYER_ID());
}

int func_610()
{
	int iVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 6) && !GAMEPLAY::IS_BIT_SET(Local_110.f_3, 15))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_110.f_256[iVar0] > 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_611()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_73[iVar0]))
		{
			if (!func_107(Local_110.f_73[iVar0]))
			{
				func_24(&(Local_110.f_73[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_48[iVar0]))
		{
			if (func_31(Local_110.f_48[iVar0]))
			{
				func_24(&(Local_110.f_48[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_612(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_246(PLAYER::PLAYER_ID(), 0) || func_347(PLAYER::PLAYER_ID(), 0))
	{
		if (func_238(PLAYER::PLAYER_ID()) || func_252(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::_0xCF61D4B4702EE9EB() < iParam0)
	{
		if (bParam2)
		{
			func_617(sParam3, sParam4, 1);
		}
		if (func_616(26, -1))
		{
			func_614(26, -1);
		}
		return 1;
	}
	if (func_21(&(Global_1574631.f_18)))
	{
		if (!func_18(&(Global_1574631.f_18), 7500, 0))
		{
			return 0;
		}
		func_104(&(Global_1574631.f_18));
	}
	if (func_613())
	{
		if (bParam2)
		{
			func_617(sParam3, sParam4, 0);
		}
		if (func_616(26, -1))
		{
			func_614(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_617(sParam3, sParam4, 1);
		}
		if (func_616(26, -1))
		{
			func_614(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_613()
{
	return GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 0);
}

void func_614(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_17();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			uVar1 = func_615(iParam1);
			uVar0 = GAMEPLAY::GET_PROFILE_SETTING(uVar1);
			if (GAMEPLAY::IS_BIT_SET(uVar0, iParam0))
			{
				GAMEPLAY::CLEAR_BIT(&uVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(uVar0, iParam1);
			}
			break;
	}
}

int func_615(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_17();
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

bool func_616(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_17();
	}
	uVar0 = func_615(iParam1);
	uVar1 = GAMEPLAY::GET_PROFILE_SETTING(uVar0);
	return GAMEPLAY::IS_BIT_SET(uVar1, iParam0);
}

void func_617(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 2) && !func_200(PLAYER::PLAYER_ID())) && !func_199(PLAYER::PLAYER_ID()))
	{
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_628(66, sParam0, sParam1, 1, -1, 2, 1);
		GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 2);
	}
}

void func_618()
{
	Global_2524719.f_1778.f_56 = 1;
}

void func_619()
{
	Global_2524719.f_1778.f_54 = 1;
}

bool func_620()
{
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_1723, 11);
}

int func_621()
{
	if (iLocal_3434 > -1)
	{
		if (func_107(Local_110.f_7[iLocal_3434]))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_110.f_7[iLocal_3434])))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_622(char* sParam0, var uParam1, var uParam2)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_623(bool bParam0)
{
	if (!func_737())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11137) * Global_262145.f_11327));
	}
	if (bParam0)
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11198) * Global_262145.f_11329));
	}
	if ((GAMEPLAY::IS_BIT_SET(Local_110.f_3, 0) && GAMEPLAY::IS_BIT_SET(Local_110.f_3, 1)) && GAMEPLAY::IS_BIT_SET(Local_110.f_3, 2))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11198) * Global_262145.f_11329));
	}
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 6))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11198) * Global_262145.f_11329));
	}
	return 0;
}

char* func_624()
{
	if (Local_110.f_27 == joaat("rhino"))
	{
		return "ABLIP_TANK";
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_110.f_27))
	{
		return "ABLIP_PLANE";
	}
	return "ABLIP_HELI";
}

void func_625(int iParam0)
{
	if (func_250())
	{
		if (iParam0 == 1)
		{
			if (Global_2524719.f_4382 == -1)
			{
				Global_2524719.f_4382 = 60000;
			}
			func_7(&(Global_2524719.f_4380), 0, 0);
			if (Global_2524719.f_4385 == -1)
			{
				Global_2524719.f_4385 = 10000;
			}
			func_7(&(Global_2524719.f_4383), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_8 = 0;
			func_676(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_626()) && !func_256(PLAYER::PLAYER_ID()))
		{
			Global_968392 = 0;
		}
	}
}

bool func_626()
{
	return Global_2448386.f_729;
}

int func_627(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
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
	func_583(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != -1)
	{
		GAMEPLAY::SET_BIT(&(Var0.f_69), iParam10);
	}
	return func_552(&Var0);
}

int func_628(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	func_583(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	return func_552(&Var0);
}

void func_629(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 4);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 4);
	}
}

void func_630(bool bParam0)
{
	int iVar0;
	
	if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
		PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), func_268(585, -1, 0));
		if (func_650())
		{
			PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), 1931904776);
		}
		else if (func_649())
		{
			PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), -2124524821);
		}
		if (func_646(3610, -1, -1))
		{
		}
		iVar0 = func_268(2040, -1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_645(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0));
		if (func_608(0))
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), func_268(585, -1, 0));
		}
		else
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), func_644(Global_2533469));
		}
		func_643(PLAYER::PLAYER_ID(), iVar0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_636(PLAYER::PLAYER_PED_ID(), iVar0), func_635(PLAYER::PLAYER_PED_ID(), iVar0), 0);
		func_634(func_268(2040, -1, 0), 1);
		Global_2524719.f_276 = 1;
		func_631(PLAYER::PLAYER_ID(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_631(int iParam0, int iParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_633();
		if (iParam2 == -1)
		{
			iParam2 = func_268(2040, -1, 0);
		}
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, func_636(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_635(PLAYER::GET_PLAYER_PED(iParam0), iParam2), 0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(iParam0, func_645(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(iParam0), 5, func_636(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_635(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_645(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_268(585, -1, 0);
		}
		if (func_608(1) && func_632(iParam0))
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, func_644(Global_2533469));
		}
		else
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, iParam1);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_28, 4))
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, Global_1574420);
			PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(iParam0, -1780610292);
		}
		func_643(iParam0, iParam2);
		PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 177, 1);
	}
}

var func_632(int iParam0)
{
	return func_237(iParam0, 10);
}

void func_633()
{
	Global_71178 = 0;
	Global_71179 = -1;
	Global_71180 = -1;
	Global_71181 = -1;
	Global_71182 = -1;
	Global_71183 = -1;
}

void func_634(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_633();
		func_483(2040, iParam0, -1, 1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_636(PLAYER::PLAYER_PED_ID(), iParam0), func_635(PLAYER::PLAYER_PED_ID(), iParam0), 0);
		func_643(PLAYER::PLAYER_ID(), iParam0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_645(PLAYER::PLAYER_PED_ID(), iParam0));
		if ((iParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
		{
			func_631(PLAYER::PLAYER_ID(), -1, -1);
		}
	}
}

int func_635(var uParam0, int iParam1)
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_636(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = PED::GET_PED_DRAWABLE_VARIATION(uParam0, 9) != false;
	iVar1 = DLC1::GET_HASH_NAME_FOR_COMPONENT(uParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(uParam0, 8), PED::GET_PED_TEXTURE_VARIATION(uParam0, 8));
	iVar2 = DLC1::GET_HASH_NAME_FOR_COMPONENT(uParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(uParam0, 11), PED::GET_PED_TEXTURE_VARIATION(uParam0, 11));
	iVar3 = DLC1::GET_HASH_NAME_FOR_COMPONENT(uParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(uParam0, 4), PED::GET_PED_TEXTURE_VARIATION(uParam0, 4));
	if ((((!bVar0 == Global_71178 || !iParam1 == Global_71179) || !iVar1 == Global_71180) || !iVar2 == Global_71181) || !iVar3 == Global_71182)
	{
		Global_71178 = bVar0;
		Global_71179 = iParam1;
		Global_71180 = iVar1;
		Global_71181 = iVar2;
		Global_71182 = iVar3;
		Global_71183 = func_637(uParam0, iParam1);
	}
	return Global_71183;
}

int func_637(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(uParam0, 11);
	if (PED::GET_PED_DRAWABLE_VARIATION(uParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(uParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 69;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	uVar4 = DLC1::GET_HASH_NAME_FOR_COMPONENT(uParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(uParam0, 8), PED::GET_PED_TEXTURE_VARIATION(uParam0, 8));
	if (DLC1::_IS_TAG_RESTRICTED(uVar4, 240476421, 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (DLC1::_IS_TAG_RESTRICTED(uVar4, -1499233212, 8))
			{
				return (2 + iVar3);
			}
			if (DLC1::_IS_TAG_RESTRICTED(uVar4, 350281921, 8))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			if (DLC1::_IS_TAG_RESTRICTED(uVar4, -887141061, 8))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			if (DLC1::_IS_TAG_RESTRICTED(uVar4, -1185371730, 8))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			if (DLC1::_IS_TAG_RESTRICTED(uVar4, -2124629577, 8))
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else
		{
			if (DLC1::_IS_TAG_RESTRICTED(uVar4, -1499233212, 8))
			{
				return (7 + iVar3);
			}
			if (DLC1::_IS_TAG_RESTRICTED(uVar4, 350281921, 8))
			{
				return (8 + iVar3);
			}
			if (DLC1::_IS_TAG_RESTRICTED(uVar4, -887141061, 8))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			if (DLC1::_IS_TAG_RESTRICTED(uVar4, -1185371730, 8))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			if (DLC1::_IS_TAG_RESTRICTED(uVar4, -2124629577, 8))
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		return func_642(uParam0, iParam1);
	}
	if (func_641(uParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = DLC1::GET_HASH_NAME_FOR_COMPONENT(uParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(uParam0, 11));
		if (DLC1::_IS_TAG_RESTRICTED(iVar5, 655081063, 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -530089825, 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -713698407, 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1882920022, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -317649054, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -979468724, 0))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -306768813, 0))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -58412562, 0))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 1536649085, 0) && !DLC1::_IS_TAG_RESTRICTED(iVar5, 350281921, 0))
		{
			iVar6 = func_640(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_639(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_639(iVar5);
						break;
					}
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 248194463, 0))
		{
			if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1347486026, 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 396458410, 0))
		{
			iVar7 = func_638(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_639(iVar5);
					break;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -779835469, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1119232689, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -2102859770, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 1784133476, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1607949555, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 1976716889, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 2099109084, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1488441032, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1719167561, 0) || DLC1::_IS_TAG_RESTRICTED(iVar5, 1431529976, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1274099003, 0) || DLC1::_IS_TAG_RESTRICTED(iVar5, 1723403459, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1407614029, 0))
				{
					return func_642(uParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 912543594, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((DLC1::_IS_TAG_RESTRICTED(iVar5, -1086258388, 0) || DLC1::_IS_TAG_RESTRICTED(iVar5, 103539798, 0)) || DLC1::_IS_TAG_RESTRICTED(iVar5, -994703884, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 2044466679, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -2020757158, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1064262817, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1419806467, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1053842259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1358888880, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -441291342, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -747583185, 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_642(uParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1986415230, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -2088146832, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -785939537, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 700658917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 1714969731, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 745826556, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 1055526375, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 492620493, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -416620954, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -733792105, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 137011325, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -641612092, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1351486939, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -2119756144, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1507532917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 947651647, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1506370874, 0) || DLC1::_IS_TAG_RESTRICTED(iVar5, 1927516484, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1786447517, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1010805287, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1325813684, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -549843760, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -828478571, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 1690933245, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 1360588936, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 2136821028, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 1830529185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -269266203, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 201427653, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 967829025, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -685039259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1266557933, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -979468724, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1813210391, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 263623295, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -309899747, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -89003918, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -747858475, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return func_642(uParam0, iParam1);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 490219883, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 1208450825, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 297865853, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 602650322, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 905042630, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 1204125293, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 310055897, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 606713654, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return func_642(uParam0, iParam1);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 1831422288, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -838136846, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 655638019, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -99064836, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -697656159, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -398213037, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 1380605304, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_642(uParam0, iParam1);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -306768813, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -58412562, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 1711219157, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 1466664110, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1968575702, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 245429010, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 15161247, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 2044923487, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -915352927, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -538378351, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -2139144017, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -435539886, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 695107163, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1499233212, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 350281921, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -2124629577, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 1877382859, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1375878737, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1347486026, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (1 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -540436505, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 1207461955, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return func_642(uParam0, iParam1);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -785939537, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -785939537, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -939525357, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1986415230, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (4 + iVar3);
			}
			else
			{
				return func_642(uParam0, iParam1);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1663871176, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return func_642(uParam0, iParam1);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -939525357, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1);
			}
			else
			{
				return func_642(uParam0, iParam1) + 15;
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 398019854, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_642(uParam0, iParam1) + 15;
			}
			else
			{
				return func_642(uParam0, iParam1);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 1965569012, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, 2026620439, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (DLC1::_IS_TAG_RESTRICTED(iVar5, -1410897066, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((DLC1::_IS_TAG_RESTRICTED(iVar5, -2017999390, 0) || DLC1::_IS_TAG_RESTRICTED(iVar5, 320460654, 0)) || DLC1::_IS_TAG_RESTRICTED(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_639(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 9:
				return (2 + iVar3);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (4 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			}
	}
	return (1 + iVar3);
	return 0;
}

int func_638(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (DLC1::_IS_TAG_RESTRICTED(iParam0, 140732128, iParam1))
	{
		iVar0 = 0;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, 1863955539, iParam1))
	{
		iVar0 = 1;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, 2106216756, iParam1))
	{
		iVar0 = 2;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, -761463976, iParam1))
	{
		iVar0 = 3;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, 1627756587, iParam1))
	{
		iVar0 = 4;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, 684992453, iParam1))
	{
		iVar0 = 5;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, 916636514, iParam1))
	{
		iVar0 = 6;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, -1939378450, iParam1))
	{
		iVar0 = 7;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, 441715397, iParam1))
	{
		iVar0 = 8;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, 264959411, iParam1))
	{
		iVar0 = 9;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, -1127835965, iParam1))
	{
		iVar0 = 10;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, -820724897, iParam1))
	{
		iVar0 = 11;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, 153792394, iParam1))
	{
		iVar0 = 12;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, -672871169, iParam1))
	{
		iVar0 = 13;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, 572416369, iParam1))
	{
		iVar0 = 14;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, -196114988, iParam1))
	{
		iVar0 = 15;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, 1322269404, iParam1))
	{
		iVar0 = 16;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, 548036233, iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_639(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (DLC1::_IS_TAG_RESTRICTED(iParam0, 821147517, 0))
	{
		iVar0 = 0;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, 2055293595, 0))
	{
		iVar0 = 1;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, -1992562672, 0))
	{
		iVar0 = 2;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, 1458930564, 0))
	{
		iVar0 = 3;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, -1046587084, 0))
	{
		iVar0 = 4;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, 1943944625, 0))
	{
		iVar0 = 5;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, -1999870067, 0))
	{
		iVar0 = 6;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, 2048281121, 0))
	{
		iVar0 = 7;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, -109983526, 0))
	{
		iVar0 = 8;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, -1394888785, 0))
	{
		iVar0 = 9;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, -144826511, 0))
	{
		iVar0 = 10;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, 19149565, 0))
	{
		iVar0 = 11;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, 310957510, 0))
	{
		iVar0 = 12;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, 742787396, 0))
	{
		iVar0 = 13;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, -1604914832, 0))
	{
		iVar0 = 14;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(iParam0, -1092211054, 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_640(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (DLC1::_IS_TAG_RESTRICTED(uParam0, -870074461, iParam1))
	{
		iVar0 = 0;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(uParam0, -1174924468, iParam1))
	{
		iVar0 = 1;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(uParam0, -868698159, iParam1))
	{
		iVar0 = 2;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(uParam0, -1177480446, iParam1))
	{
		iVar0 = 3;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(uParam0, -1347486026, iParam1))
	{
		iVar0 = 4;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(uParam0, -1655154167, iParam1))
	{
		iVar0 = 5;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(uParam0, -2105858993, iParam1))
	{
		iVar0 = 6;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(uParam0, 1893564692, iParam1))
	{
		iVar0 = 7;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(uParam0, 1710451520, iParam1))
	{
		iVar0 = 8;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(uParam0, 1416808511, iParam1))
	{
		iVar0 = 9;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(uParam0, 1641506460, iParam1))
	{
		iVar0 = 10;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(uParam0, 699233865, iParam1))
	{
		iVar0 = 11;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(uParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (DLC1::_IS_TAG_RESTRICTED(uParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_641(var uParam0)
{
	if (DLC1::_IS_TAG_RESTRICTED(DLC1::GET_HASH_NAME_FOR_COMPONENT(uParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(uParam0, 4), PED::GET_PED_TEXTURE_VARIATION(uParam0, 4)), 1052059919, 0))
	{
		return 1;
	}
	return 0;
}

int func_642(var uParam0, int iParam1)
{
	if (iParam1 > 69)
	{
		return 69;
	}
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 == 53 || iParam1 == 54)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

void func_643(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, -548227459);
	}
	else if (iParam1 > 51)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1269440357);
	}
	else if (iParam1 > 46)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1766664132);
	}
	else if (iParam1 > 26)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1277738372);
	}
	else if (iParam1 > 0)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1269440357);
	}
	else
	{
		PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
	}
}

int func_644(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 11;
			break;
		
		case 8:
			return 11;
			break;
		
		case 9:
			return 6;
			break;
		
		case 10:
			return 6;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_645(var uParam0, int iParam1)
{
	return 0;
}

int func_646(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_17();
	}
	iVar1 = func_648(iParam0, iParam1);
	uVar2 = func_647(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_647(int iParam0)
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

int func_648(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_17();
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

bool func_649()
{
	return DLC2::IS_DLC_PRESENT(1428761799);
}

bool func_650()
{
	return DLC2::IS_DLC_PRESENT(-1005876368);
}

void func_651(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2524719.f_1723, 11))
		{
			GAMEPLAY::SET_BIT(&(Global_2524719.f_1723), 11);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_1723, 11))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_1723), 11);
	}
}

void func_652(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2524719.f_1723, 9))
		{
			GAMEPLAY::SET_BIT(&(Global_2524719.f_1723), 9);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_1723, 9))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_1723), 9);
	}
}

void func_653()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
}

void func_654(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1, 7))
		{
			if ((!func_252(PLAYER::PLAYER_ID()) && !func_199(PLAYER::PLAYER_ID())) && !func_660(PLAYER::PLAYER_ID()))
			{
				if (func_250())
				{
					func_625(0);
					func_659();
				}
				if (func_267(0))
				{
					iVar0 = func_268(2480, -1, 0);
					GAMEPLAY::CLEAR_BIT(&iVar0, 0);
					func_659();
				}
				if (func_267(func_204(func_188(PLAYER::PLAYER_ID()))))
				{
					iVar0 = func_268(2480, -1, 0);
					GAMEPLAY::CLEAR_BIT(&iVar0, func_204(func_188(PLAYER::PLAYER_ID())));
					func_659();
				}
				if (func_658())
				{
					func_659();
				}
				if (func_188(PLAYER::PLAYER_ID()) > -1)
				{
					GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 7);
					if (func_188(PLAYER::PLAYER_ID()) == 236)
					{
						func_657();
					}
				}
			}
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1, 7))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 7);
		func_655();
	}
}

void func_655()
{
	if (func_656())
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 17);
	}
}

bool func_656()
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1, 17);
}

void func_657()
{
	if (!func_656())
	{
		Global_2524719.f_6234 = NETWORK::GET_NETWORK_TIME();
		GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 17);
	}
}

int func_658()
{
	if (Global_2437022.f_1151.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_659()
{
	if (func_658())
	{
		Global_2437022.f_1151.f_16 = 1;
	}
}

int func_660(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if ((func_250() && !func_245()) || func_201(PLAYER::PLAYER_ID(), 21))
		{
			return 1;
		}
		if (func_21(&(Global_1574631.f_13)))
		{
			if (!func_18(&(Global_1574631.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_104(&(Global_1574631.f_13));
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 10))
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 9);
}

void func_661(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
	}
	Global_2524719.f_4730 = -1;
	bVar0 = (func_246(PLAYER::PLAYER_ID(), 0) && func_238(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_670(21, 1);
	}
	else
	{
		func_669(iParam0, -1);
		if (func_200(PLAYER::PLAYER_ID()))
		{
			Global_1574631.f_3 = iParam0;
		}
		else
		{
			func_699(iParam0);
		}
		Global_1574631.f_4 = -1;
		if (func_200(PLAYER::PLAYER_ID()))
		{
			GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 5);
		}
		if ((func_250() && !func_245()) || func_201(PLAYER::PLAYER_ID(), 21))
		{
			GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 4);
		}
		GAMEPLAY::CLEAR_BIT(&(Global_1574631.f_1), 17);
		GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 20);
		if (func_668(iParam0))
		{
			func_667();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_666(fParam1);
		}
		if (fParam2 != 1f)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
			if (iParam0 == 146)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
		}
		if (func_665(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_450(1);
				if (func_593(0))
				{
					GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 9);
				}
				GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_448(1);
			GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 12);
		}
		if (bParam5)
		{
			func_664();
			GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_662(iParam0))
			{
				GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 21);
			}
		}
	}
	Global_2503540 = 1;
}

int func_662(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
			return 1;
		
		default:
	}
	if (func_663())
	{
		return 1;
	}
	return 0;
}

int func_663()
{
	switch (func_187())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_664()
{
	GAMEPLAY::SET_BIT(&(Global_2524719.f_4721), 0);
}

int func_665(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_239(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_666(float fParam0)
{
	float fVar0;
	
	if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_443())
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

void func_667()
{
	Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_200 = 0;
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4548), 1);
}

int func_668(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_669(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_267(0) || func_267(func_204(iVar0)))
		{
			GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 2);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 2);
		}
	}
}

void func_670(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_208, iParam0))
		{
			GAMEPLAY::SET_BIT(&(Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_208), iParam0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_208, iParam0))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_208), iParam0);
	}
}

bool func_671(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_672()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_110.f_27 != joaat("valkyrie"))
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("valkyrie"));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, iVar2, 0);
		if (iVar4 != 0)
		{
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if (PED::IS_PED_A_PLAYER(iVar4))
				{
					iVar3++;
				}
			}
		}
		iVar2++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_673(bool bParam0)
{
	var uVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uVar0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uVar0, bParam0);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(uVar0, !bParam0);
		}
	}
}

void func_674(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, iVar0))
		{
			*iParam0 = iVar0;
			*uParam1 = Local_110.f_256[iVar0];
		}
		iVar0++;
	}
}

void func_675()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1625435[iVar0 /*560*/] = -1;
	}
}

void func_676(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_250())
		{
			if (func_837(PLAYER::PLAYER_ID(), 1, 0))
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
			if (func_837(PLAYER::PLAYER_ID(), 1, 1))
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

void func_677(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1, 0))
		{
			Global_2460362 = func_188(PLAYER::PLAYER_ID());
			if (Global_2460362 == -1)
			{
				Global_2460362 = Global_1574631.f_4;
			}
			if (func_698(Global_2460362) == 0)
			{
				if (func_697(1) > 0)
				{
					func_696(26, -1);
				}
			}
			if (func_250())
			{
				func_625(0);
				func_659();
			}
			if (func_267(0))
			{
				iVar1 = func_268(2480, -1, 0);
				GAMEPLAY::CLEAR_BIT(&iVar1, 0);
				func_659();
			}
			if (func_267(func_204(func_188(PLAYER::PLAYER_ID()))))
			{
				iVar1 = func_268(2480, -1, 0);
				GAMEPLAY::CLEAR_BIT(&iVar1, func_204(func_188(PLAYER::PLAYER_ID())));
				func_659();
			}
			if (func_658())
			{
				func_659();
			}
			GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1, 0))
	{
		if ((!func_231() && !func_695()) && !func_694())
		{
			Global_2460362 = -1;
			func_614(26, -1);
		}
		else if (func_698(Global_2460362) == 0)
		{
			iVar0 = func_680(1);
			if (iVar0 > 0)
			{
				func_678(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_489(1932, 1, -1);
				func_678(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_616(26, -1))
		{
			Global_2460362 = -1;
			func_614(26, -1);
		}
		GAMEPLAY::CLEAR_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 0);
	}
}

void func_678(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_473(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_679(iParam0))
	{
		func_471(iParam0, iVar0);
	}
	else
	{
		func_475(iParam0, iVar0);
	}
}

int func_679(int iParam0)
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

int func_680(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2459247 == 0)
	{
		return 0;
	}
	if (func_694())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_693() || func_691()))
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
	if (func_690(Global_105098.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2458120)
	{
		iVar0 = 1;
	}
	if (func_689(512))
	{
		iVar0 = 1;
	}
	if (func_688(128))
	{
		iVar0 = 1;
	}
	if (Global_1315708 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_166())
	{
		iVar0 = 0;
	}
	if (Global_2458686)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_686())
		{
			if (Global_4456448.f_131887 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_15(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_685())
	{
		iVar0 = 0;
	}
	if ((Global_2458195 || Global_2458194) || Global_1315684)
	{
		if (func_691())
		{
			iVar0 = 0;
		}
	}
	Global_2458686 = 0;
	Global_2458194 = 0;
	Global_2458195 = 0;
	Global_1315684 = 0;
	Global_2458120 = 0;
	func_683(&(Global_105098.f_1), 32);
	func_682(512);
	func_681(128);
	return iVar0;
}

void func_681(int iParam0)
{
	Global_105155 = (Global_105155 - (Global_105155 && iParam0));
}

void func_682(int iParam0)
{
	Global_105156 = (Global_105156 - (Global_105156 && iParam0));
}

void func_683(var uParam0, int iParam1)
{
	func_684(uParam0, iParam1);
}

void func_684(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_685()
{
	if (((Global_1574410 || Global_1574381) || func_15(PLAYER::PLAYER_ID(), 0)) || func_582())
	{
		return 1;
	}
	return 0;
}

int func_686()
{
	switch (func_687())
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

int func_687()
{
	return Global_2449169.f_1.f_2820;
}

bool func_688(int iParam0)
{
	return (Global_105155 && iParam0) != 0;
}

bool func_689(int iParam0)
{
	return (Global_105156 && iParam0) != 0;
}

bool func_690(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_691()
{
	if (func_698(Global_2460362))
	{
		return 0;
	}
	if (func_692(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	return 0;
}

int func_692(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/] == iParam1)
	{
		return func_239(iParam0);
	}
	return 0;
}

int func_693()
{
	if (func_698(Global_2460362))
	{
		return 0;
	}
	if (func_239(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_694()
{
	return GAMEPLAY::IS_BIT_SET(Global_1312423, 0);
}

bool func_695()
{
	return Global_1312826;
}

void func_696(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_17();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			uVar1 = func_615(iParam1);
			uVar0 = GAMEPLAY::GET_PROFILE_SETTING(uVar1);
			if (!GAMEPLAY::IS_BIT_SET(uVar0, iParam0))
			{
				GAMEPLAY::SET_BIT(&uVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(uVar0, iParam1);
			}
			break;
	}
}

int func_697(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1315708 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_166())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_686())
		{
			if (Global_4456448.f_131887 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_15(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_685())
	{
		iVar0 = 0;
	}
	Global_2459247 = 1;
	return iVar0;
}

int func_698(int iParam0)
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

void func_699(int iParam0)
{
	Global_1625435[PLAYER::PLAYER_ID() /*560*/] = iParam0;
}

void func_700(int iParam0)
{
	Global_2459483 = iParam0;
}

void func_701(int iParam0)
{
	if (func_198())
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 0))
			{
				if ((((func_703(60000) && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_410()) && !UI::IS_PAUSE_MENU_ACTIVE()) && func_427(0, 1, 1, 1))
				{
					if (!func_737())
					{
						func_702("UW_HELP1", func_624(), func_623(1), 30000);
					}
					else
					{
						func_702("UW_HELP1C", func_624(), func_623(1), 30000);
					}
					func_425(0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
					GAMEPLAY::SET_BIT(&uLocal_1321, 0);
				}
			}
			break;
	}
}

void func_702(char* sParam0, var uParam1, var uParam2, int iParam3)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam3);
}

bool func_703(int iParam0)
{
	return GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2413677, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

void func_704()
{
	int iVar0;
	
	GAMEPLAY::CLEAR_BIT(&uLocal_1322, 15);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_705(iVar0);
		iVar0++;
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_1322, 15))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 15))
		{
			GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 15);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 15))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1574631.f_1), 15);
	}
}

void func_705(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[iParam0]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 0))
		{
			if (Local_110.f_241 == 0)
			{
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 0))
		{
			if (!func_198())
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, iParam0))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!GAMEPLAY::IS_BIT_SET(uLocal_1322, 15))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]))
							{
								GAMEPLAY::SET_BIT(&uLocal_1322, 15);
							}
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 0))
						{
							if (func_709("UW_HELP2", func_624()) || func_709("UW_HELP2C", func_624()))
							{
								UI::CLEAR_HELP(1);
							}
							if (!func_416(PLAYER::PLAYER_ID()))
							{
								func_629(1);
							}
							iVar0 = func_708(PLAYER::PLAYER_PED_ID(), 0);
							if (func_622("UW_HELP1", func_624(), func_623(1)) || func_622("UW_HELP1C", func_624(), func_623(1)))
							{
								UI::CLEAR_HELP(1);
							}
							if (Local_110.f_463 != -1)
							{
								if (iVar0 > (Local_110.f_463 - 2))
								{
									iVar0 = (Local_110.f_463 - 2);
									if (iVar0 < -1)
									{
										iVar0 = -1;
									}
								}
							}
							GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iVar0 + 1));
							GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), iParam0);
							Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = iParam0;
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, 1);
							func_190();
							iLocal_3497 = iVar0;
						}
						else if (Local_110.f_241 == 0)
						{
							if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 1))
							{
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_427(0, 1, 1, 1))
										{
											if (!func_737())
											{
												func_707("UW_HELP2", func_624(), 30000);
											}
											else
											{
												func_707("UW_HELP2C", func_624(), 30000);
											}
											func_425(1);
											GAMEPLAY::SET_BIT(&uLocal_1321, 1);
										}
									}
								}
							}
							if (!func_250())
							{
								if (GAMEPLAY::IS_BIT_SET(uLocal_1322, 2))
								{
									GAMEPLAY::CLEAR_BIT(&uLocal_1322, 2);
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
								{
									if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 4))
									{
										if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
										{
											GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
										}
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
										{
											if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 1)) < 2500f)
											{
												if (func_427(0, 1, 1, 1))
												{
													if (!func_737())
													{
														func_426("UW_COPS", 30000);
													}
													else
													{
														func_426("UW_COPSC", 30000);
													}
													func_425(1);
													GAMEPLAY::SET_BIT(&uLocal_1321, 4);
												}
											}
										}
									}
									else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 1)) > 10000f)
									{
										GAMEPLAY::CLEAR_BIT(&uLocal_1321, 4);
									}
								}
								else
								{
									if (GAMEPLAY::IS_BIT_SET(uLocal_1321, 4))
									{
										GAMEPLAY::CLEAR_BIT(&uLocal_1321, 4);
									}
									if (GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
									{
										GAMEPLAY::CLEAR_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
									}
								}
							}
							else
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
								{
									GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
								}
								if (!GAMEPLAY::IS_BIT_SET(uLocal_1322, 2))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_427(0, 1, 1, 1))
										{
											if (!func_737())
											{
												func_426("UW_PASSMD", 30000);
											}
											else
											{
												func_426("UW_PASSMD", 30000);
											}
											func_425(1);
											GAMEPLAY::SET_BIT(&uLocal_1322, 2);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 0))
							{
								iVar2 = 0;
								while (iVar2 < Local_110.f_28)
								{
									if (GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, (0 + iVar2)))
									{
										func_8();
										GAMEPLAY::CLEAR_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iVar2));
									}
									iVar2++;
								}
								if (GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, iParam0))
								{
									GAMEPLAY::CLEAR_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), iParam0);
								}
								if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 != -1)
								{
									Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = -1;
								}
								if (func_671("UW_TIMEL"))
								{
									UI::CLEAR_HELP(1);
								}
								if (func_671("UW_TIMELA"))
								{
									UI::CLEAR_HELP(1);
								}
								if (func_416(PLAYER::PLAYER_ID()))
								{
									func_629(0);
								}
								PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, 0);
							}
							else
							{
								if (Local_110.f_241 == 0 && !GAMEPLAY::IS_BIT_SET(Local_110.f_3, 4))
								{
									iVar0 = func_708(PLAYER::PLAYER_PED_ID(), 0);
									if (Local_110.f_463 != -1)
									{
										if (iVar0 > (Local_110.f_463 - 2))
										{
											iVar0 = (Local_110.f_463 - 2);
										}
									}
									if (iVar0 != iLocal_3497)
									{
										GAMEPLAY::CLEAR_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), iParam0);
										GAMEPLAY::CLEAR_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iLocal_3497 + 1));
									}
								}
								bVar1 = false;
								if (func_269())
								{
									if (Local_110.f_413 > -1)
									{
										iVar3 = (Local_110.f_413 - func_124(&(Local_110.f_326), 0, 0));
										if (iVar3 < 2000)
										{
											bVar1 = true;
										}
									}
								}
								func_706(bVar1);
								if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0])) == joaat("rhino"))
								{
									unk_0x32CAEDF24A583345(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]));
								}
								if (!func_21(&uLocal_1544))
								{
									func_19(&uLocal_1544, 0, 0);
								}
								else if (func_18(&uLocal_1544, 2000, 0))
								{
									if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 9) || !func_737())
									{
										if (func_671("UW_MINV"))
										{
										}
										if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 5))
										{
											if (Local_110.f_28 > 1 || (Local_110.f_28 == 1 && func_110() > 1))
											{
												if (func_21(&(Local_110.f_326)))
												{
													if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
													{
														if (func_110() > 1)
														{
															func_426("UW_TIMELA", 30000);
														}
														else
														{
															func_426("UW_TIMEL", 30000);
														}
														func_425(1);
														GAMEPLAY::SET_BIT(&uLocal_1321, 5);
													}
												}
											}
										}
									}
									else if (func_737())
									{
										if (!GAMEPLAY::IS_BIT_SET(Local_110.f_3, 9))
										{
											if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0])) != joaat("valkyrie"))
											{
												if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 14))
												{
													if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
													{
														func_426("UW_MINV", 30000);
														func_425(1);
														GAMEPLAY::SET_BIT(&uLocal_1321, 14);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_110.f_241 == 0)
					{
						if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0])) == joaat("valkyrie"))
						{
							if (!func_671("UW_VALK") && !func_671("UW_VALKC"))
							{
								UI::CLEAR_ALL_HELP_MESSAGES();
								if (GAMEPLAY::IS_BIT_SET(uLocal_1321, 8))
								{
									GAMEPLAY::CLEAR_BIT(&uLocal_1321, 8);
								}
							}
							if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 8))
							{
								if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									iVar6 = 0;
									iVar4 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0])) + 1;
									iVar5 = 0;
									while (iVar5 < iVar4)
									{
										if (!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), (iVar5 - 1), 0))
										{
											iVar6++;
										}
										iVar5++;
									}
									if (iVar6 == 1)
									{
										if (!func_737())
										{
											func_426("UW_VALK", 30000);
										}
										else
										{
											func_426("UW_VALKC", 30000);
										}
										func_425(1);
										GAMEPLAY::SET_BIT(&uLocal_1321, 8);
									}
									if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 8))
									{
										if (func_737())
										{
											iVar7 = 0;
											iVar7 = 0;
											while (iVar7 < 4)
											{
												if (!bVar8)
												{
													if (iVar7 != iParam0)
													{
														iVar5 = 0;
														iVar6 = 0;
														if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar7]))
														{
															if (func_107(Local_110.f_7[iVar7]))
															{
																iVar5 = 0;
																while (iVar5 < iVar4)
																{
																	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_110.f_7[iVar7]), (iVar5 - 1), 0))
																	{
																		iVar6++;
																	}
																	iVar5++;
																}
																if (iVar6 > 1)
																{
																	bVar8 = true;
																}
															}
														}
													}
												}
												iVar7++;
											}
											if (!bVar8)
											{
												func_426("UW_VALKC", 30000);
												func_425(1);
												GAMEPLAY::SET_BIT(&uLocal_1321, 8);
											}
										}
									}
								}
							}
						}
					}
					if (Local_110.f_241 == 1)
					{
						if (GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, iParam0))
						{
							if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 6))
							{
								if (func_107(Local_110.f_7[iParam0]))
								{
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_110.f_7[iParam0])))
										{
											if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 7))
											{
												if ((CONTROLS::IS_CONTROL_JUST_PRESSED(0, 75) || CONTROLS::IS_CONTROL_PRESSED(0, 75)) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 75))
												{
													GAMEPLAY::SET_BIT(&uLocal_1321, 7);
												}
											}
											if (GAMEPLAY::IS_BIT_SET(uLocal_1321, 7))
											{
												if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
												{
													if (func_737())
													{
														func_426("UW_EXITVC", 30000);
													}
													else
													{
														func_426("UW_EXITV", 30000);
													}
													func_425(1);
													GAMEPLAY::SET_BIT(&uLocal_1321, 6);
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
			else
			{
				iVar10 = 0;
				while (iVar10 < 4)
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[iVar10]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_110.f_7[iVar10]), 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_110.f_7[iVar10]), 0))
							{
								bVar11 = true;
							}
						}
					}
					iVar10++;
				}
				if (bVar11)
				{
					if (func_267(0))
					{
						iVar9 = func_268(2480, -1, 0);
						GAMEPLAY::CLEAR_BIT(&iVar9, 0);
						func_483(2480, iVar9, -1, 1, 0);
						func_659();
						if (GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
						}
					}
					if (func_267(8))
					{
						iVar9 = func_268(2480, -1, 0);
						GAMEPLAY::CLEAR_BIT(&iVar9, 8);
						func_483(2480, iVar9, -1, 1, 0);
						func_659();
						if (GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
						}
					}
				}
				else
				{
					if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
					{
						Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
					{
						GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(uLocal_1322, 14))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (func_107(Local_110.f_7[iParam0]))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_110.f_7[iParam0]), 1)) < 2500f)
							{
								if (func_427(0, 1, 1, 1))
								{
									if (!func_259(129, 0, 0))
									{
										if (!func_737())
										{
											func_426("UW_TUT", -1);
										}
										else
										{
											func_426("UW_TUTC", -1);
										}
										func_425(1);
										GAMEPLAY::SET_BIT(&uLocal_1322, 14);
									}
									else
									{
										if (!func_737())
										{
											func_426("UW_HIDE", -1);
										}
										else
										{
											func_426("UW_HIDEC", -1);
										}
										func_425(1);
										GAMEPLAY::SET_BIT(&uLocal_1322, 14);
									}
								}
							}
						}
					}
				}
			}
			if (func_837(PLAYER::PLAYER_ID(), 1, 1) && Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_2524719.f_4578, 1))
				{
					GAMEPLAY::SET_BIT(&(Global_2524719.f_4578), 1);
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4578, 1))
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4578), 1);
			}
		}
	}
}

void func_706(bool bParam0)
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
	CONTROLS::DISABLE_CONTROL_ACTION(0, 92, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 91, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 74, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 86, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 81, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 82, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 99, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 100, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 65, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 105, 1);
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
	CONTROLS::DISABLE_CONTROL_ACTION(0, 51, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 47, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 24, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 257, 1);
}

void func_707(char* sParam0, var uParam1, int iParam2)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam2);
}

int func_708(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(uVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uVar0, iVar3, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_709(char* sParam0, var uParam1)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_710()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_7[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_7[iVar0]))
		{
			uVar1 = NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]);
			if (ENTITY::DOES_ENTITY_EXIST(uVar1) && !ENTITY::IS_ENTITY_DEAD(uVar1, 0))
			{
				unk_0x15F944730C832252(uVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_711(vector3 vParam0)
{
	Global_2391049 = { vParam0 };
	Global_2391052 = 1;
}

void func_712()
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
				func_728(iVar0);
				break;
			
			case 171:
				func_713(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_713(int iParam0)
{
	int iVar0;
	
	SCRIPT::GET_EVENT_DATA(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case 791943758:
			func_727(iParam0);
			break;
		
		case -1986200141:
			func_726(iParam0);
			break;
		
		case 350833352:
			func_725(iParam0);
			break;
		
		case 1761194714:
			func_724(iParam0);
			break;
		
		case 1037931977:
			func_723(iParam0);
			break;
		
		case 1108012350:
			func_720(iParam0);
			break;
		
		case -498670328:
			func_714(iParam0);
			break;
	}
}

void func_714(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (SCRIPT::GET_EVENT_DATA(1, uParam0, &vVar0, 3))
	{
		iVar6 = vVar0.z;
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_73[iVar6]))
		{
			return;
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar6))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_271, iVar6))
			{
				if (func_98(iVar6))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_73[iVar6]), 0))
					{
						if (NETWORK::_NETWORK_GET_DESROYER_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_110.f_73[iVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (unk_0x83660B734994124D(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_110.f_73[iVar6]), &uVar5))
					{
						bVar8 = true;
					}
				}
				else if (!func_737())
				{
					if (Local_110.f_465[0 /*4*/].f_1 > 0)
					{
						iVar9 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_465[0 /*4*/].f_2);
						if (iVar9 != func_26())
						{
							if (iVar9 == PLAYER::PLAYER_ID())
							{
								bVar8 = true;
							}
						}
					}
					else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[0]))
					{
						if (func_107(Local_110.f_7[0]))
						{
							iVar11 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[0]), -1, 0);
							if (iVar11 != 0)
							{
								if (PED::IS_PED_A_PLAYER(iVar11))
								{
									iVar10 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
									if (iVar10 == PLAYER::PLAYER_ID())
									{
										bVar8 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar8)
		{
			if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
			{
				iVar4 = func_719();
				iVar12 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_73[iVar6]));
				iVar7 = iVar6 * 4;
				if (func_718(iVar12))
				{
					iVar3 = func_42(iVar12);
					iVar14 = iVar7;
					while (iVar14 <= (iVar7 + (iVar3 - 1)))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_48[iVar14]) && !GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar14)], func_88(iVar14)))
						{
							iVar13++;
							GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar14)]), func_88(iVar14));
						}
						iVar14++;
					}
					Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar13);
					iVar4 = (iVar4 * iVar13);
				}
				else
				{
					Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
				}
				if (Local_727.f_11 == 0)
				{
					Local_727.f_11 = NETWORK::_GET_POSIX_TIME();
				}
				if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_717())
				{
					Local_727.f_7 = (Local_727.f_7 + iVar4);
					func_716(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
					func_715();
				}
			}
			GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar6);
		}
	}
}

void func_715()
{
	if (!func_21(&uLocal_3474) || (func_21(&uLocal_3474) && func_18(&uLocal_3474, 2000, 0)))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Kill_List_Counter", "GTAO_FM_Events_Soundset", 0);
		func_104(&uLocal_3474);
		func_19(&uLocal_3474, 0, 0);
	}
}

var func_716(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_468(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_717()
{
	if (func_737())
	{
		return Global_262145.f_11201;
	}
	return Global_262145.f_11140;
}

bool func_718(int iParam0)
{
	return (((iParam0 == joaat("insurgent") || iParam0 == joaat("lazer")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("mesa3"));
}

int func_719()
{
	if (func_737())
	{
		return Global_262145.f_11200;
	}
	return Global_262145.f_11139;
}

void func_720(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (SCRIPT::GET_EVENT_DATA(1, uParam0, &vVar0, 3))
	{
		iVar6 = vVar0.z;
		if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar6))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_271, iVar6))
			{
				if (func_722(iVar6))
				{
					bVar8 = true;
				}
				else if (!func_721(iVar6))
				{
					if (func_98(iVar6))
					{
						if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_110.f_73[iVar6]), 0))
						{
							if (NETWORK::_NETWORK_GET_DESROYER_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_110.f_73[iVar6]), &uVar5))
							{
								bVar8 = true;
							}
						}
						else if (unk_0x83660B734994124D(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_110.f_73[iVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (!func_737())
					{
						if (Local_110.f_465[0 /*4*/].f_1 > 0)
						{
							iVar9 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_465[0 /*4*/].f_2);
							if (iVar9 != func_26())
							{
								if (iVar9 == PLAYER::PLAYER_ID())
								{
									bVar8 = true;
								}
							}
						}
						else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[0]))
						{
							if (func_107(Local_110.f_7[0]))
							{
								iVar11 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[0]), -1, 0);
								if (iVar11 != 0)
								{
									if (PED::IS_PED_A_PLAYER(iVar11))
									{
										iVar10 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
										if (iVar10 == PLAYER::PLAYER_ID())
										{
											bVar8 = true;
										}
									}
								}
							}
						}
					}
				}
				if (bVar8)
				{
					if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						iVar3 = func_42(joaat("savage"));
						iVar7 = iVar6 * 4;
						iVar13 = 0;
						iVar12 = iVar7;
						while (iVar12 <= (iVar7 + (iVar3 - 1)))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_48[iVar12]) && !GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar12)], func_88(iVar12)))
							{
								iVar13++;
								GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar12)]), func_88(iVar12));
							}
							iVar12++;
						}
						Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar13);
						iVar4 = (iVar4 * iVar13);
						if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_717())
						{
							iVar4 = func_719();
							iVar4 = (iVar4 * iVar3);
							Local_727.f_7 = (Local_727.f_7 + iVar4);
							func_716(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
							func_715();
							if (Local_727.f_11 == 0)
							{
								Local_727.f_11 = NETWORK::_GET_POSIX_TIME();
							}
						}
						GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar6);
					}
				}
			}
		}
	}
}

int func_721(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_744[iVar0 /*18*/].f_11[iParam0] > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_722(int iParam0)
{
	int iVar0;
	
	if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[iParam0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (iVar0 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (Local_744[iVar0 /*18*/].f_11[iParam0] > Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[iParam0])
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_723(var uParam0)
{
	vector3 vVar0;
	
	if (SCRIPT::GET_EVENT_DATA(1, uParam0, &vVar0, 3))
	{
		if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("am_kill_list", -1, 0) != func_26())
		{
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			GAMEPLAY::SET_BIT(&(Local_110.f_464), vVar0.z);
		}
	}
}

void func_724(var uParam0)
{
	vector3 vVar0;
	
	if (SCRIPT::GET_EVENT_DATA(1, uParam0, &vVar0, 3))
	{
		GAMEPLAY::SET_BIT(&uLocal_3441, vVar0.z);
	}
}

void func_725(var uParam0)
{
	vector3 vVar0;
	
	if (SCRIPT::GET_EVENT_DATA(1, uParam0, &vVar0, 3))
	{
		GAMEPLAY::SET_BIT(&uLocal_3442, vVar0.z);
	}
}

void func_726(var uParam0)
{
	vector3 vVar0;
	
	if (SCRIPT::GET_EVENT_DATA(1, uParam0, &vVar0, 3))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(vVar0.z)], func_88(vVar0.z)))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(vVar0.z)]), func_88(vVar0.z));
		}
	}
}

void func_727(var uParam0)
{
	vector3 vVar0;
	var uVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, uParam0, &vVar0, 3))
	{
		uVar3 = vVar0.z;
		if (GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, uVar3))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), uVar3);
		}
	}
}

void func_728(int iParam0)
{
	struct<4> Var0;
	int iVar11;
	int iVar12;
	var uVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		iVar11 = 0;
		while (iVar11 < 5)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar11))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_110.f_271, iVar11))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_73[iVar11]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_110.f_73[iVar11])))
								{
									if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_VEH(Local_110.f_73[iVar11]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
										{
											if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
											{
												if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
												{
													if (Var0.f_3)
													{
														iVar14 = ENTITY::GET_ENTITY_MODEL(Var0);
														if (Local_110.f_27 == joaat("hydra"))
														{
															if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
															{
																iVar17 = func_719();
																if (func_718(iVar14))
																{
																	iVar12 = func_42(iVar14);
																	Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar12);
																	iVar17 = (iVar17 * iVar12);
																}
																else
																{
																	Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																}
																if (Local_727.f_11 == 0)
																{
																	Local_727.f_11 = NETWORK::_GET_POSIX_TIME();
																}
																if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_717())
																{
																	Local_727.f_7 = (Local_727.f_7 + iVar17);
																	func_716(0, "", -875716015, 153786435, iVar17, 1, -1, 0);
																	func_715();
																}
															}
															GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar11);
														}
														else if (iVar14 == joaat("buzzard"))
														{
															iVar19 = -1;
															iVar19 = -1;
															while (iVar19 <= 3)
															{
																iVar16 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_73[iVar11]), iVar19, 0);
																if (iVar16 != 0)
																{
																	iVar18 = func_729(iVar16);
																	if (iVar18 > -1)
																	{
																		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_272[func_89(iVar18)], func_88(iVar18)))
																		{
																			if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar18)], func_88(iVar18)))
																			{
																				GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar18)]), func_88(iVar18));
																				iVar17 = func_719();
																				Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																				if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_717())
																				{
																					Local_727.f_7 = (Local_727.f_7 + iVar17);
																					func_716(0, "", -875716015, 153786435, iVar17, 1, -1, 0);
																					func_715();
																				}
																				if (UI::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_110.f_48[iVar18])))
																				{
																					func_90(&(Local_1338[iVar18 /*8*/]));
																				}
																			}
																		}
																	}
																}
																iVar19++;
															}
															GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar11);
														}
													}
													else if (!func_107(Local_110.f_73[iVar11]))
													{
													}
												}
												else if (Var0.f_3)
												{
													if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)))
													{
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
			iVar11++;
		}
		if (Local_110.f_27 != joaat("hydra"))
		{
			iVar11 = 0;
			while (iVar11 <= 19)
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_110.f_272[func_89(iVar11)], func_88(iVar11)))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar11)], func_88(iVar11)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_48[iVar11]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_110.f_48[iVar11])))
									{
										if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_PED(Local_110.f_48[iVar11]))
										{
											if (Var0.f_3)
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar15 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar15))
														{
															if (iVar15 == PLAYER::PLAYER_PED_ID())
															{
																if (Var0.f_3)
																{
																	iVar17 = func_719();
																	if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																	{
																		Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																		if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_717())
																		{
																			func_716(0, "", -875716015, 153786435, iVar17, 1, -1, 0);
																			Local_727.f_7 = (Local_727.f_7 + iVar17);
																			func_715();
																		}
																	}
																	if (Local_727.f_11 == 0)
																	{
																		Local_727.f_11 = NETWORK::_GET_POSIX_TIME();
																	}
																	GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar11)]), func_88(iVar11));
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
				if (iVar11 < 5)
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar11))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_110.f_271, iVar11))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var0))
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_73[iVar11]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_110.f_73[iVar11])))
										{
											if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_VEH(Local_110.f_73[iVar11]))
											{
												if (ENTITY::GET_ENTITY_MODEL(Var0) == joaat("savage"))
												{
													if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar11)], func_88(iVar11)))
													{
														if (Var0.f_3)
														{
															if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
															{
																if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
																{
																	iVar15 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																	if (PED::IS_PED_A_PLAYER(iVar15))
																	{
																		if (iVar15 == PLAYER::PLAYER_PED_ID())
																		{
																			if (Var0.f_3)
																			{
																				if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																				{
																					iVar12 = func_42(joaat("savage"));
																					Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar12);
																					iVar17 = func_719();
																					iVar17 = (iVar17 * iVar12);
																					if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_717())
																					{
																						func_716(0, "", -875716015, 153786435, iVar17, 1, -1, 0);
																						Local_727.f_7 = (Local_727.f_7 + iVar17);
																						func_715();
																						if (Local_727.f_11 == 0)
																						{
																							Local_727.f_11 = NETWORK::_GET_POSIX_TIME();
																						}
																					}
																					iVar20 = iVar11 * 4;
																					GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar20)]), func_88(iVar20));
																					GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar20 + 1)]), func_88(iVar20 + 1));
																					GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar20 + 2)]), func_88(iVar20 + 2));
																					GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar20 + 3)]), func_88(iVar20 + 3));
																					GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar11);
																				}
																			}
																		}
																	}
																	else if (func_722(iVar11))
																	{
																		if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																		{
																			iVar12 = func_42(joaat("savage"));
																			Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar12);
																			if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_717())
																			{
																				iVar17 = func_719();
																				iVar17 = (iVar17 * iVar12);
																				Local_727.f_7 = (Local_727.f_7 + iVar17);
																				func_716(0, "", -875716015, 153786435, iVar17, 1, -1, 0);
																				func_715();
																				if (Local_727.f_11 == 0)
																				{
																					Local_727.f_11 = NETWORK::_GET_POSIX_TIME();
																				}
																			}
																			iVar20 = iVar11 * 4;
																			GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar20)]), func_88(iVar20));
																			GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar20 + 1)]), func_88(iVar20 + 1));
																			GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar20 + 2)]), func_88(iVar20 + 2));
																			GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar20 + 3)]), func_88(iVar20 + 3));
																			GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar11);
																		}
																	}
																	else if (func_721(iVar11))
																	{
																	}
																	else if (unk_0x83660B734994124D(iVar21, Var0, &uVar22))
																	{
																		if (iVar21 == PLAYER::PLAYER_ID())
																		{
																			if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																			{
																				iVar12 = func_42(joaat("savage"));
																				Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar12);
																				if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_717())
																				{
																					iVar17 = func_719();
																					iVar17 = (iVar17 * iVar12);
																					Local_727.f_7 = (Local_727.f_7 + iVar17);
																					func_716(0, "", -875716015, 153786435, iVar17, 1, -1, 0);
																					func_715();
																					if (Local_727.f_11 == 0)
																					{
																						Local_727.f_11 = NETWORK::_GET_POSIX_TIME();
																					}
																				}
																				iVar20 = iVar11 * 4;
																				GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar20)]), func_88(iVar20));
																				GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar20 + 1)]), func_88(iVar20 + 1));
																				GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar20 + 2)]), func_88(iVar20 + 2));
																				GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar20 + 3)]), func_88(iVar20 + 3));
																				GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar11);
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
															{
																if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
																{
																	iVar15 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																	if (PED::IS_PED_A_PLAYER(iVar15))
																	{
																		if (iVar15 == PLAYER::PLAYER_PED_ID())
																		{
																			uVar13 = NETWORK::_GET_POSIX_TIME();
																			Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[iVar11] = uVar13;
																		}
																	}
																}
															}
															if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0), 0))
															{
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
				iVar11++;
			}
			iVar11 = 20;
			while (iVar11 <= 23)
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_110.f_272[func_89(iVar11)], func_88(iVar11)))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar11)], func_88(iVar11)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_48[iVar11]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_110.f_48[iVar11])))
									{
										if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_PED(Local_110.f_48[iVar11]))
										{
											if (Var0.f_3)
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar15 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar15))
														{
															if (iVar15 == PLAYER::PLAYER_PED_ID())
															{
																if (Var0.f_3)
																{
																	if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																	{
																		Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																		if (Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_717())
																		{
																			iVar17 = func_719();
																			Local_727.f_7 = (Local_727.f_7 + iVar17);
																			if (Local_727.f_11 == 0)
																			{
																				Local_727.f_11 = NETWORK::_GET_POSIX_TIME();
																			}
																			func_716(0, "", -875716015, 153786435, iVar17, 1, -1, 0);
																			func_715();
																		}
																	}
																	GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar11)]), func_88(iVar11));
																}
															}
														}
													}
												}
												else
												{
													GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar11)]), func_88(iVar11));
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_48[iVar11]))
				{
				}
				iVar11++;
			}
		}
	}
}

int func_729(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar0 == -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_48[iVar1]))
			{
				if (NETWORK::NET_TO_PED(Local_110.f_48[iVar1]) == iParam0)
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_730()
{
	int iVar0;
	int iVar1;
	
	if (Local_110.f_27 != joaat("hydra"))
	{
		if (iLocal_3499 == 0)
		{
			iLocal_3499 = 20;
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_48[iLocal_3499]))
		{
			if (!func_31(Local_110.f_48[iLocal_3499]))
			{
				iVar0 = unk_0x815F18AD865F057F(NETWORK::NET_TO_PED(Local_110.f_48[iLocal_3499]));
				if (iLocal_3500[iLocal_3499] != iVar0)
				{
					iLocal_3500[iLocal_3499] = iVar0;
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_110.f_48[iLocal_3499], 1);
				}
			}
		}
		iLocal_3499++;
		if (iLocal_3499 == 23)
		{
			iLocal_3499 = 20;
		}
	}
	if (Local_110.f_27 != joaat("hydra") && Local_110.f_27 != joaat("rhino"))
	{
		if (!bLocal_3532)
		{
			if (func_96() == 5)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_73[iVar1]))
					{
						if (func_107(Local_110.f_73[iVar1]))
						{
							if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_110.f_73[iVar1])) == joaat("savage"))
							{
								NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_110.f_73[iVar1], 1);
								bLocal_3532 = true;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_73[iLocal_3525]))
	{
		if (func_107(Local_110.f_73[iLocal_3525]))
		{
			iVar0 = unk_0x815F18AD865F057F(NETWORK::NET_TO_PED(Local_110.f_73[iLocal_3525]));
			if (iLocal_3526[iLocal_3525] != iVar0)
			{
				iLocal_3526[iLocal_3525] = iVar0;
				if (!bLocal_3532)
				{
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_110.f_73[iLocal_3525], 1);
				}
			}
		}
	}
	iLocal_3525++;
	if (iLocal_3525 == 5)
	{
		iLocal_3525 = 0;
	}
}

void func_731()
{
	int iVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	var uVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_3443, iVar0))
		{
			if (Local_110.f_85[iVar0] != 2)
			{
				GAMEPLAY::CLEAR_BIT(&uLocal_3443, iVar0);
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_48[iVar0]))
		{
			func_735(iVar0);
			if (!func_31(Local_110.f_48[iVar0]))
			{
				switch (Local_110.f_85[iVar0])
				{
					case 1:
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_48[iVar0]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), 0))
							{
								uVar2 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), 0);
								uVar1 = ENTITY::GET_ENTITY_MODEL(uVar2);
								if (VEHICLE::IS_THIS_MODEL_A_HELI(uVar1))
								{
									if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), -1273030092) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), -1273030092) != 0)
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar2, -1, 0) == NETWORK::NET_TO_PED(Local_110.f_48[iVar0]))
										{
											iVar9 = func_27();
											if (iVar9 != func_26())
											{
												uVar10 = PLAYER::GET_PLAYER_PED(iVar9);
												if (!PED::IS_PED_INJURED(uVar10))
												{
													if (func_25(uVar2, uVar10, 1) > 250f)
													{
														vVar3 = { ENTITY::GET_ENTITY_COORDS(uVar10, 1) };
														AI::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), uVar2, 0, uVar10, vVar3, 4, 50f, 5f, -1f, 0, 100, -1f, 4096);
													}
												}
											}
										}
									}
								}
								else if (VEHICLE::IS_THIS_MODEL_A_PLANE(uVar1))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar2, -1, 0) == NETWORK::NET_TO_PED(Local_110.f_48[iVar0]))
									{
										iVar15 = 1;
										iVar14 = (iVar0 / 4);
									}
									if ((AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), -1273030092) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), -1273030092) != 0) || ((iVar15 && iVar14 < 5) && iLocal_1323[iVar14] != Local_110.f_110[iVar14]))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar2, -1, 0) == NETWORK::NET_TO_PED(Local_110.f_48[iVar0]))
										{
											iVar13 = Local_110.f_110[iVar14];
											if (iVar13 > -1)
											{
												iVar9 = PLAYER::INT_TO_PLAYERINDEX(iVar13);
												if (iVar9 != func_26())
												{
													uVar10 = PLAYER::GET_PLAYER_PED(iVar9);
													if (!PED::IS_PED_INJURED(uVar10))
													{
														vVar3 = { ENTITY::GET_ENTITY_COORDS(uVar10, 1) };
														AI::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), uVar2, 0, uVar10, vVar3, 4, 50f, 5f, -1f, 100, 50, 1);
														if (iLocal_1323[iVar14] != Local_110.f_110[iVar14])
														{
															iLocal_1323[iVar14] = Local_110.f_110[iVar14];
														}
													}
												}
											}
										}
									}
								}
								else if (((AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), -1273030092) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), -1273030092) != 0) && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), 1306903184) != 0) && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), 1306903184) != 1)
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar2, -1, 0) == NETWORK::NET_TO_PED(Local_110.f_48[iVar0]))
									{
										iVar9 = func_27();
										if (iVar9 != func_26())
										{
											uVar10 = PLAYER::GET_PLAYER_PED(iVar9);
											if (!PED::IS_PED_INJURED(uVar10))
											{
												fVar11 = func_25(uVar2, uVar10, 1);
												if (fVar11 > 500f)
												{
													AI::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), ENTITY::GET_ENTITY_COORDS(uVar10, 1), 2f, uVar2, 1, 786469, -1082130432, 0, 1101004800, 0, 30f, 1082130432);
												}
												else if (fVar11 > 250f)
												{
													AI::TASK_VEHICLE_MISSION_PED_TARGET(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), uVar2, uVar10, 4, 30f, 786469, 5f, 5f, 1);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_48[iVar0]))
						{
							if (!func_22())
							{
								if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), -1442466670) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), -1442466670) != 0)
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), 0))
									{
										if (!GAMEPLAY::IS_BIT_SET(uLocal_3443, iVar0))
										{
											iVar12 = func_734(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), 1133084672);
											if (iVar12 > -1)
											{
												AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), 299f, 0);
											}
											else if (!GAMEPLAY::IS_BIT_SET(uLocal_3443, iVar0))
											{
												func_733(iVar0, func_102(1));
												GAMEPLAY::SET_BIT(&uLocal_3443, iVar0);
											}
										}
									}
									else
									{
										AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), 299f, 0);
									}
								}
							}
						}
						break;
					
					case 3:
						if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), -251125078) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), -251125078) != 0)
						{
							vVar6 = { func_732() };
							AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]));
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), 1);
							AI::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_110.f_48[iVar0]), vVar6, 10000f, 999999, 0, 0);
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

Vector3 func_732()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
		{
			return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0);
		}
		iVar0++;
	}
	return Local_110.f_30[0 /*3*/];
}

void func_733(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = 1037931977;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &vVar0, 3, iParam1);
	}
}

int func_734(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	var uVar7;
	
	iVar0 = -1;
	fVar1 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar3]))
		{
			if (func_107(Local_110.f_7[iVar3]))
			{
				uVar7 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_7[iVar3]), -1, 0);
				if (!PED::IS_PED_INJURED(uVar7))
				{
					if (PED::IS_PED_A_PLAYER(uVar7))
					{
						vVar4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_110.f_7[iVar3]), 1) };
						fVar2 = func_527(uParam0, vVar4, 1);
						if (fVar2 < fVar1)
						{
							if (fVar2 < fParam1)
							{
								fVar1 = fVar2;
								iVar0 = iVar3;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

void func_735(int iParam0)
{
	var uVar0;
	
	return;
	if (!func_31(Local_110.f_48[iParam0]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_48[iParam0]))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_48[iParam0])))
			{
				uVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_110.f_48[iParam0]), 0);
				if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(uVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(uVar0)))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
					{
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_48[iParam0]), 5, 0);
					}
				}
			}
		}
	}
}

void func_736(vector3 vParam0)
{
	Global_1574631.f_6 = { vParam0 };
}

bool func_737()
{
	return GAMEPLAY::IS_BIT_SET(Local_110.f_3, 8);
}

void func_738(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_739("kwUfKUus6EuQyNSL8KpY-w");
					func_739("yMTOFLfO2UKwzKrmgPP7kg");
					func_739("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_739("tP5HSeCA0UiHnkRzakdO2Q");
					func_739("uEkrqoerQEmQ0uZRtp4rkw");
					func_739("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_739("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_739("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_739("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_739("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_739("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_739("uEkrqoerQEmQ0uZRtp4rkw");
					func_739("92t91kL3Wkqvl2Kc82cNSA");
					func_739("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_739("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_739("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_739("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_739("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_739("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_739("fOfm7nzMLkav0ldcSCNAzA");
					func_739("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_739("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_739("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_739("Ma78E44OMkGfYPmCPZXUNA");
					func_739("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_739("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_739("gxmtJHj2OUWQDt8nNMy3TQ");
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_739("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_739("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_739("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_739("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_739("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_739("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_739("3AAj-muvN0iHI5IMyGlboA");
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_739("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_739("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_739("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_739("fOfm7nzMLkav0ldcSCNAzA");
							func_739("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_739("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_739("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_739("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_739("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_739("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_739("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_739("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_739("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_739("fOfm7nzMLkav0ldcSCNAzA");
							func_739("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_739("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_739("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_739("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_739("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_739("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_739("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_739("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_739("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_739("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_739("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_739("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_739("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_739("aGBjo2rKi0yMDLl3a2ATGA");
									func_739("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_739("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_739("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_739("f2lnL6wZPkGWUowu0yLm1Q");
									func_739("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_739("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_739("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_739("W-OJzHlM-0ym9PsIASYZtw");
									func_739("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_739("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_739("TjGz31AMYE6bGCjAIitu6w");
									func_739("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_739("QmlvLMLCwkOvoZlkAstYxw");
									func_739("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_739("BktATxH9R0Wp2x0kWSbqjw");
									func_739("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_739("f2lnL6wZPkGWUowu0yLm1Q");
									break;
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_739("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_739("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_739("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_739("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_739("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_739("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_739("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_739("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_739("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_739(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = GAMEPLAY::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_740(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_13, 26))
				{
					GAMEPLAY::SET_BIT(&(Global_2359721[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_740(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_147(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_741(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_741(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_147(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar13 /*13*/];
		
		case 62:
			return Global_917806.f_9405[iVar13 /*13*/];
		
		default:
	}
	return Var0;
}

void func_742()
{
	int iVar0;
	vector3 vVar1;
	
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 12))
	{
		func_190();
	}
	if (func_737())
	{
		if (iLocal_3433 != Local_110.f_12)
		{
			iLocal_3433 = Local_110.f_12;
			func_190();
		}
	}
	if (!func_198())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!UI::DOES_BLIP_EXIST(uLocal_1333[iVar0]))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
				{
					if (func_107(Local_110.f_7[iVar0]))
					{
						vVar1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0) };
						if (!func_743(iVar0, vVar1))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_110.f_13, iVar0))
							{
								uLocal_1333[iVar0] = UI::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]));
								UI::SET_BLIP_SPRITE(uLocal_1333[iVar0], 429);
								func_192(&(uLocal_1333[iVar0]), 29);
								if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 20))
								{
									UI::SET_BLIP_FLASHES(uLocal_1333[iVar0], 1);
									UI::SET_BLIP_FLASH_TIMER(uLocal_1333[iVar0], 7000);
									GAMEPLAY::SET_BIT(&uLocal_1321, 20);
								}
								UI::SET_BLIP_PRIORITY(uLocal_1333[iVar0], 9);
								if (func_737())
								{
									UI::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_1333[iVar0], "UW_BLIPC");
								}
								else
								{
									UI::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_1333[iVar0], "UW_BLIP");
								}
								if (!GAMEPLAY::IS_BIT_SET(uLocal_1322, 3))
								{
									UI::FLASH_MINIMAP_DISPLAY();
									GAMEPLAY::SET_BIT(&uLocal_1322, 3);
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
			{
				if (!func_107(Local_110.f_7[iVar0]))
				{
					UI::REMOVE_BLIP(&(uLocal_1333[iVar0]));
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_110.f_13, iVar0))
				{
					UI::REMOVE_BLIP(&(uLocal_1333[iVar0]));
				}
			}
			else
			{
				UI::REMOVE_BLIP(&(uLocal_1333[iVar0]));
			}
			iVar0++;
		}
	}
	else
	{
		func_190();
	}
}

int func_743(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iParam0)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_7[iVar0]))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_110.f_7[iVar0]), 0) };
				if (func_69(vParam1, vVar1, 0))
				{
					if (UI::DOES_BLIP_EXIST(uLocal_1333[iVar0]))
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

int func_744()
{
	return Local_110;
}

int func_745(int iParam0)
{
	return Local_744[iParam0 /*18*/];
}

void func_746()
{
	if (GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 6))
	{
		func_452();
		GAMEPLAY::CLEAR_BIT(&(Global_1574631.f_1), 6);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 7))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 4) || GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 16))
		{
			if (((!UI::IS_RADAR_HIDDEN() && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_360()) && func_837(PLAYER::PLAYER_ID(), 1, 1))
			{
				GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 7);
				func_426("FME_PASINT", 30000);
				func_425(1);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 17))
		{
			if (func_250() && !func_245())
			{
				GAMEPLAY::CLEAR_BIT(&(Global_1574631.f_1), 17);
				GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 16);
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 23))
	{
		if (((((!UI::IS_RADAR_HIDDEN() && !GAMEPLAY::IS_BIT_SET(Global_2524719.f_784, 2)) && func_837(PLAYER::PLAYER_ID(), 1, 1)) && !Global_68494) && !Global_53362) && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_768())
			{
				func_426("AMEV_GA_RP", -1);
				if (func_346(PLAYER::PLAYER_ID()) != 200)
				{
					func_425(1);
				}
				GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 23);
			}
		}
	}
	if (UI::IS_PAUSE_MENU_ACTIVE() && UI::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_239(PLAYER::PLAYER_ID()))
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
	if (GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 9))
	{
		if ((((!UI::IS_RADAR_HIDDEN() && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_360()) && func_837(PLAYER::PLAYER_ID(), 1, 1)) && !func_201(PLAYER::PLAYER_ID(), 21))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1574631.f_1), 9);
			func_767(0);
			func_426("FME_TBL00", -1);
			func_425(1);
		}
	}
	if (func_251(PLAYER::PLAYER_ID()))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 18))
		{
			if ((func_201(PLAYER::PLAYER_ID(), 21) && GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 20)) && !GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 19))
			{
				GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 18);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 18))
		{
			if (((((!UI::IS_RADAR_HIDDEN() && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_360()) && func_837(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !Global_2524719.f_4816)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_1574631.f_1), 18);
				GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 19);
				func_426("AMTT_RPAS", -1);
				func_425(1);
			}
		}
	}
	if (((((func_251(PLAYER::PLAYER_ID()) && !func_200(PLAYER::PLAYER_ID())) && func_188(PLAYER::PLAYER_ID()) != 146) && !func_199(PLAYER::PLAYER_ID())) && !func_660(PLAYER::PLAYER_ID())) && !func_757())
	{
		if (func_665(func_188(PLAYER::PLAYER_ID())))
		{
			unk_0xFAC75988A7D078D3(PLAYER::PLAYER_ID());
		}
		if (!GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 22))
		{
			GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 22);
		}
		if (func_240(PLAYER::PLAYER_ID()) || func_663())
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 10))
			{
				if (func_755(func_188(PLAYER::PLAYER_ID())))
				{
					if (func_593(0) && !Global_2391045)
					{
						GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_450(1);
						GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 14);
					}
				}
				GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 10);
			}
		}
		if (func_239(PLAYER::PLAYER_ID()))
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 11))
			{
				if (!Global_93284.f_8)
				{
					GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 12);
					func_448(1);
				}
				if (!func_754())
				{
					GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 13);
					func_664();
				}
				if (!Global_2391045)
				{
					GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 14);
					if (func_593(0) && !Global_2391045)
					{
						GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 9);
					}
					func_450(1);
				}
				GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 11);
			}
		}
		else
		{
			func_752(0);
		}
	}
	else
	{
		func_752(1);
	}
	func_747();
	if (func_662(func_188(PLAYER::PLAYER_ID())) && !GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 21))
	{
		GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 21);
	}
	if ((func_250() && !func_245()) || func_201(PLAYER::PLAYER_ID(), 21))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1, 10))
		{
			GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 10);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1, 10))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 10);
	}
}

void func_747()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_360())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_524(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 26))
				{
					GAMEPLAY::CLEAR_BIT(&(Global_1574631.f_1), 26);
				}
				func_748(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 26))
	{
		func_104(&(Global_1574631.f_22));
		GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 26);
	}
}

void func_748(int iParam0, int iParam1)
{
	if (!func_21(&(Global_1574631.f_22)))
	{
		func_19(&(Global_1574631.f_22), 0, 0);
	}
	else if (func_18(&(Global_1574631.f_22), iParam1, 0))
	{
		if (func_411() > 0)
		{
			func_751(iParam0);
			if (func_671("AMEV_LBD_HELP"))
			{
				UI::CLEAR_HELP(1);
			}
			func_104(&(Global_1574631.f_22));
		}
	}
	else
	{
		func_750(0);
		func_749();
	}
}

void func_749()
{
	Global_2524719.f_4519 = 0;
}

void func_750(int iParam0)
{
	Global_1368245.f_68 = iParam0;
}

void func_751(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437022.f_2704[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2437022.f_2704[iVar0 /*80*/].f_2 = 5;
			GAMEPLAY::SET_BIT(&(Global_2437022.f_2704[iVar0 /*80*/].f_69), 0);
		}
		iVar0++;
	}
}

void func_752(int iParam0)
{
	if ((GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 11) || (GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 10) && iParam0)) || (GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 22) && iParam0))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 12))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1574631.f_1), 12);
			func_448(0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 13))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1574631.f_1), 13);
			func_753();
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 14) && !func_246(PLAYER::PLAYER_ID(), 0))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1574631.f_1), 14);
			func_450(0);
		}
		GAMEPLAY::CLEAR_BIT(&(Global_1574631.f_1), 11);
		GAMEPLAY::CLEAR_BIT(&(Global_1574631.f_1), 10);
		GAMEPLAY::CLEAR_BIT(&(Global_1574631.f_1), 22);
	}
}

void func_753()
{
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4721), 0);
}

bool func_754()
{
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4721, 0);
}

int func_755(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_239(PLAYER::PLAYER_ID());
		
		case 133:
			return (func_663() || func_756(func_187()));
		
		default:
	}
	return 0;
}

int func_756(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_757()
{
	if (((((((((func_766() || func_765()) || func_764()) || func_180()) || (func_763() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_760() && !func_759())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_758() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_758()
{
	return Global_968393;
}

bool func_759()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386.f_2, 27);
}

int func_760()
{
	if (func_762() || func_761())
	{
		return Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_98 == 8;
	}
	return 0;
}

var func_761()
{
	return Global_2448386.f_624;
}

var func_762()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386.f_2, 11);
}

var func_763()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 5);
}

var func_764()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 2);
}

var func_765()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 20);
}

bool func_766()
{
	return Global_2448386.f_587;
}

void func_767(int iParam0)
{
	int iVar0;
	
	iVar0 = func_268(2534, -1, 0);
	if (iParam0 == 0)
	{
		if (!GAMEPLAY::IS_BIT_SET(iVar0, 0))
		{
			GAMEPLAY::SET_BIT(&iVar0, 0);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 1))
		{
			GAMEPLAY::SET_BIT(&iVar0, 1);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 2))
		{
			GAMEPLAY::SET_BIT(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!GAMEPLAY::IS_BIT_SET(iVar0, 3))
		{
			GAMEPLAY::SET_BIT(&iVar0, 3);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 4))
		{
			GAMEPLAY::SET_BIT(&iVar0, 4);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 5))
		{
			GAMEPLAY::SET_BIT(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!GAMEPLAY::IS_BIT_SET(iVar0, 6))
		{
			GAMEPLAY::SET_BIT(&iVar0, 6);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 7))
		{
			GAMEPLAY::SET_BIT(&iVar0, 7);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 8))
		{
			GAMEPLAY::SET_BIT(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!GAMEPLAY::IS_BIT_SET(iVar0, 9))
		{
			GAMEPLAY::SET_BIT(&iVar0, 9);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 10))
		{
			GAMEPLAY::SET_BIT(&iVar0, 10);
		}
		else if (!GAMEPLAY::IS_BIT_SET(iVar0, 11))
		{
			GAMEPLAY::SET_BIT(&iVar0, 11);
		}
	}
	func_483(2534, iVar0, -1, 1, 0);
}

int func_768()
{
	int iVar0;
	
	if (!func_21(&(Global_1574631.f_15)))
	{
		func_19(&(Global_1574631.f_15), 0, 0);
		Global_1574631.f_17 = 0;
	}
	else if (func_18(&(Global_1574631.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1574631.f_17)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1574631.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_837(iVar0, 1, 1) && func_769(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_59(PLAYER::PLAYER_ID()), func_59(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574631.f_17++;
		if (Global_1574631.f_17 >= 32)
		{
			Global_1574631.f_17 = 0;
			func_104(&(Global_1574631.f_15));
		}
	}
	return 0;
}

int func_769(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_487(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1589747[iVar0 /*790*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_770()
{
	return Global_1574631.f_24;
}

bool func_771(int iParam0)
{
	return !func_772(iParam0);
}

int func_772(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6549)
			{
				return 0;
			}
			if (func_201(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 0) || GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6550)
			{
				return 0;
			}
			if (func_201(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 0) || GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6551)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6552)
			{
				return 0;
			}
			if (func_201(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 0) || GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_773(4))
			{
				return 0;
			}
			if (func_201(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 0) || GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_773(4))
			{
				return 0;
			}
			if (func_201(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 0) || GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_773(4))
			{
				return 0;
			}
			if (func_201(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 0) || GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_773(4))
			{
				return 0;
			}
			if (func_201(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 0) || GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_773(4))
			{
				return 0;
			}
			if (func_201(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_773(4))
			{
				return 0;
			}
			if (func_201(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_773(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_837(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2423801[iVar0 /*413*/].f_208, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_774()
{
	var uVar0;
	
	func_778(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_777())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_776())
	{
		return 1;
	}
	if (func_775(157))
	{
		if (!func_766())
		{
			return 1;
		}
	}
	if (func_775(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_443() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_443()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_775(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_776()
{
	return Global_2458191;
}

bool func_777()
{
	return Global_2448386.f_582;
}

void func_778(var uParam0)
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
					func_779(iVar0);
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

void func_779(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_837(vVar0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_780(uVar4, &bVar5))
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

int func_780(var uParam0, var uParam1)
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

void func_781()
{
	SYSTEM::WAIT(0);
}

void func_782()
{
	int iVar0;
	
	func_190();
	if (func_744() == 4 && Local_110.f_27 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_110.f_27, 0);
	}
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4578), 1);
	func_670(19, 0);
	func_652(0);
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_787(129, 0, GAMEPLAY::IS_BIT_SET(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8));
	}
	func_786(129);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, 0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (iLocal_1331 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(iLocal_1331);
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 129)
		{
			Global_1589747[PLAYER::PLAYER_ID() /*790*/] = -1;
		}
	}
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_1531)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), uLocal_1533);
	}
	func_785();
	func_203(0, 129);
	if (GAMEPLAY::IS_BIT_SET(uLocal_1321, 22))
	{
		func_455();
		GAMEPLAY::CLEAR_BIT(&uLocal_1321, 22);
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_1321, 9))
	{
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
		if (!GAMEPLAY::IS_BIT_SET(uLocal_1321, 10))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC");
		}
	}
	if (fLocal_1332 != -100f)
	{
		func_530(0, 0);
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_1332);
	}
	func_529(0);
	if (func_774())
	{
		Local_727.f_5 = 5;
	}
	else if (func_612(2, 0, 0, 0, 0))
	{
		Local_727.f_5 = 6;
	}
	else if (Local_727.f_5 != 1)
	{
		Local_727.f_5 = 2;
	}
	AUDIO::STOP_SOUND(uLocal_3440);
	Local_727 = Local_110.f_611;
	Local_727.f_1 = Local_110.f_612;
	Local_727.f_4 = Local_110.f_613;
	Local_727.f_3 = Local_110.f_615;
	if (Local_727.f_9 > 0)
	{
		Local_727.f_10 = (NETWORK::_GET_POSIX_TIME() - Local_727.f_9);
	}
	if ((!Global_262145.f_11389 && !GAMEPLAY::IS_BIT_SET(Local_110.f_3, 8)) || (!Global_262145.f_11390 && GAMEPLAY::IS_BIT_SET(Local_110.f_3, 8)))
	{
		if (Local_727.f_6 > 0)
		{
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_3, 8))
	{
		iVar0 = 1;
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_1322, 1))
	{
		func_676(1);
		NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
	}
	if (iVar0 == 0)
	{
		func_784(Local_727, Local_110.f_27, Local_110.f_279, iVar0, -1, -1, -1);
	}
	else if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_784(Local_727, Local_110.f_279, Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8, iVar0, -1, -1, -1);
	}
	if (func_416(PLAYER::PLAYER_ID()))
	{
		func_629(0);
	}
	func_651(0);
	func_700(1);
	func_783();
}

void func_783()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_784(struct<12> Param0, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	var uVar0;
	struct<13> Var1;
	struct<14> Var14;
	struct<18> Var28;
	struct<14> Var52;
	struct<13> Var66;
	struct<14> Var79;
	struct<14> Var93;
	struct<16> Var107;
	struct<13> Var123;
	struct<14> Var136;
	struct<14> Var150;
	struct<13> Var164;
	
	uVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_71205)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0xBFAFDB5FAAA5C5AB(&Var1);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = uParam13;
			unk_0xBAA2F0490E146BE8(&Var14);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = uParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0x3DE3AA516FB126A4(&Var28);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = SYSTEM::TO_FLOAT(uParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0x6A60E43998228229(&Var52);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_penned_in"))
		{
			unk_0x1A7CE7CD3E653485(&Param0);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0x419615486BBF1956(&Var66);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = uParam13;
			unk_0x84DFC579C2FC214C(&Var79);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = uParam13;
			unk_0x0A9C7F36E5D7B683(&Var93);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = uParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0x164C5FF663790845(&Var107);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0xEDBF6C9B0D2C65C8(&Var123);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = uParam13;
				unk_0x8C9D11605E59D955(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = uParam13;
				unk_0x6551B1F7F6CD46EA(&Var150);
			}
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x2CD90358F67D0AA8(&Var164);
		}
	}
}

void func_785()
{
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_1532);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1531);
}

void func_786(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_787(int iParam0, bool bParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1, 13))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 13);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1, 14))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 14);
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 21))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1574631.f_1), 21);
	}
	func_822();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_821(func_188(PLAYER::PLAYER_ID()));
		func_670(21, 0);
	}
	else
	{
		if ((uParam2 && PLAYER::PLAYER_ID() != -1) && func_820(PLAYER::PLAYER_ID()) >= 12)
		{
			func_819(2546, -1);
			iVar1 = func_268(2546, -1, 0);
			if (iVar1 == 2)
			{
				GAMEPLAY::SET_BIT(&Global_1574657, 0);
			}
			else if (iVar1 == 4)
			{
				GAMEPLAY::SET_BIT(&Global_1574657, 1);
			}
			else if (iVar1 == 6)
			{
				GAMEPLAY::SET_BIT(&Global_1574657, 2);
			}
			else if (iVar1 == 8)
			{
				GAMEPLAY::SET_BIT(&Global_1574657, 3);
			}
			else if (iVar1 == 10)
			{
				GAMEPLAY::SET_BIT(&Global_1574657, 4);
			}
			else if (iVar1 == 12)
			{
				GAMEPLAY::SET_BIT(&Global_1574657, 5);
			}
		}
		func_675();
		func_818();
		func_817();
		if ((!func_238(PLAYER::PLAYER_ID()) && !func_236(PLAYER::PLAYER_ID())) && !func_816())
		{
			func_796();
		}
		func_795();
		if (!GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 0) && !GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 1))
		{
			func_452();
		}
		func_794();
		GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_1733), 2);
		func_545();
		func_793();
	}
	if (UI::_0x84698AB38D0C6636(1344549371))
	{
		UI::OBJECT_DECAL_TOGGLE(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((PLAYER::PLAYER_ID() != -1 && !func_201(PLAYER::PLAYER_ID(), 21)) && !func_246(PLAYER::PLAYER_ID(), 0))
		{
			func_450(0);
			func_448(0);
			func_792();
		}
	}
	if (uParam2 && !bParam1)
	{
		if (func_616(26, -1))
		{
			Global_2460362 = -1;
			func_614(26, -1);
		}
	}
	if (!func_788())
	{
		Global_2503540 = 1;
	}
}

int func_788()
{
	if (((((!func_390(PLAYER::PLAYER_ID()) && !func_371(PLAYER::PLAYER_ID())) && func_188(PLAYER::PLAYER_ID()) != 146) && !func_791()) && !func_790()) && !func_789(Global_4456448.f_152990))
	{
		return 0;
	}
	return 1;
}

bool func_789(int iParam0)
{
	return iParam0 == 57;
}

int func_790()
{
	if (Global_4456448.f_130782 == Global_262145.f_9483)
	{
		return 1;
	}
	return 0;
}

int func_791()
{
	if ((Global_4456448 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_152990 > 0) || GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 15)) || GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 18)) || GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 19)) || GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 29)) || GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 28)) || GAMEPLAY::IS_BIT_SET(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_792()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2359721[iVar0 /*26*/].f_12, 11))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2359721[iVar0 /*26*/].f_13, 26))
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2359721[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_793()
{
	Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_7 = 0;
}

void func_794()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574631 = { Var0 };
}

void func_795()
{
	var uVar0;
	
	Global_1316740 = uVar0;
}

void func_796()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_24), &Global_2409288, 2);
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_26), &Global_2409290, 18);
	func_814();
	func_799(1, 1, 0);
	func_797();
}

void func_797()
{
	func_798(0, 0);
}

void func_798(int iParam0, int iParam1)
{
	Global_2405070.f_22 = iParam0;
	Global_2405070.f_23 = iParam1;
}

void func_799(bool bParam0, bool bParam1, bool bParam2)
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
		func_813();
	}
	if (!bParam2)
	{
		func_802(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_801(0);
	func_800();
}

void func_800()
{
	struct<6> Var0;
	
	if (Global_2405070.f_484.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405070.f_484 = { Var0 };
	}
}

void func_801(bool bParam0)
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

void func_802(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_812())
		{
			func_811();
		}
		Global_2405070.f_703.f_515 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405070.f_703.f_504 = iParam1;
		Global_2405070.f_703.f_505 = iParam2;
		Global_2405070.f_703.f_506 = iParam10;
		func_809();
		func_806(8, 0, 0, 0, 0);
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
		func_803();
	}
}

void func_803()
{
	if (func_812() && !func_805())
	{
		func_811();
	}
	if (func_805())
	{
		func_804();
	}
	else
	{
		func_809();
		func_806(0, 0, 0, 0, 0);
		Global_2405070.f_1736 = 0;
		Global_2405070.f_1735 = 0;
	}
}

void func_804()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_703), &(Global_2405070.f_1219), 516);
	Global_2405070.f_484 = { Global_2405070.f_490 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_703.f_515)
	{
		Global_2405070.f_1735 = 0;
	}
}

int func_805()
{
	if ((Global_2405070.f_1735 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_1219.f_515) && SCRIPT::IS_THREAD_ACTIVE(Global_2405070.f_1219.f_515))
	{
		return 1;
	}
	return 0;
}

void func_806(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437022.f_1889.f_690.f_16 != func_26())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2423801[Global_2437022.f_1889.f_690.f_16 /*413*/].f_401, 0) && func_807())
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

int func_807()
{
	if (((func_346(PLAYER::PLAYER_ID()) == 229 || func_346(PLAYER::PLAYER_ID()) == 191) || func_808()) || func_816())
	{
		return 0;
	}
	return 1;
}

int func_808()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_809()
{
	if (func_812() && !func_805())
	{
		func_811();
	}
	func_810();
	Global_2405070.f_703 = 0;
}

void func_810()
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

void func_811()
{
	if (func_805())
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

int func_812()
{
	if ((Global_2405070.f_1736 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_703.f_515) && SCRIPT::IS_THREAD_ACTIVE(Global_2405070.f_703.f_515))
	{
		return 1;
	}
	return 0;
}

void func_813()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_362), &Global_2409626, 121);
}

void func_814()
{
	func_815();
	Global_2405070.f_2245 = 0;
}

void func_815()
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

bool func_816()
{
	return Global_1574388;
}

void func_817()
{
	Global_2524719.f_4721 = 0;
}

void func_818()
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1 = 0;
	}
}

void func_819(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_268(iParam0, func_249(iParam1), 0);
	iVar0++;
	if (!func_490(iParam0))
	{
		func_483(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_484(iParam0, iVar0, iParam1, 1);
	}
}

int func_820(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_211.f_6;
}

int func_821(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_239(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_822()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_1724, 3) || GAMEPLAY::IS_BIT_SET(Global_2524719.f_1724, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_1724, 5))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_1724), 5);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_1724, 3))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_1724), 3);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_1724, 4))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_1724), 4);
	}
	func_825(0);
	func_824(0);
	func_823(0);
}

void func_823(int iParam0)
{
	if (Global_2524719.f_4507 != iParam0)
	{
		Global_2524719.f_4507 = iParam0;
	}
}

void func_824(bool bParam0)
{
	if (Global_2524719.f_4506 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2524719.f_4506 = bParam0;
	}
}

void func_825(int iParam0)
{
	if (Global_2524719.f_4504 != iParam0)
	{
		Global_2524719.f_4504 = iParam0;
	}
}

void func_826(struct<21> Param0)
{
	int iVar0;
	
	func_835(func_836(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(24);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(9);
	func_834(0, -1, 0);
	func_832(129);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_110, 617);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_744, 577);
	func_831(1);
	if (!func_830())
	{
		func_782();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_110.f_17[iVar0] = func_26();
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_110.f_22[iVar0] = func_26();
				Local_110.f_256[iVar0] = -1;
				Local_110.f_110[iVar0] = -1;
				iVar0++;
			}
			STATS::_0x6DEE77AFF8C21BD1(&(Local_110.f_611), &(Local_110.f_612));
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_1323[iVar0] = -1;
			iVar0++;
		}
		Local_727.f_2 = NETWORK::_0xCF61D4B4702EE9EB();
		Local_727.f_8 = NETWORK::_GET_POSIX_TIME();
		func_670(19, 1);
		func_827();
		if (func_198())
		{
			GAMEPLAY::SET_BIT(&(Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 7);
		}
		Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = -1;
		Global_2524719.f_4807 = -1;
		Local_744[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 0;
	}
	else
	{
		func_782();
	}
}

void func_827()
{
	int iVar0;
	
	PED::ADD_RELATIONSHIP_GROUP("relUWPlayer", &iLocal_1531);
	PED::ADD_RELATIONSHIP_GROUP("relUWAi", &uLocal_1532);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574948[iVar0], iLocal_1531);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1531, Global_1574948[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574948[iVar0], uLocal_1532);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_1532, Global_1574948[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1531, -1533126372);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, iLocal_1531);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1531, Global_1574996[5]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574996[5], iLocal_1531);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1531, Global_1574981);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574981, iLocal_1531);
		iVar0++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1531, uLocal_1532);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_1532, iLocal_1531);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, uLocal_1532);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, iLocal_1531);
	func_829(1, &uLocal_1532);
	func_828(&uLocal_1532);
	func_828(&iLocal_1531);
}

void func_828(int iParam0)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1865950624);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 296331235, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 296331235);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1166638144);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2037579709, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2037579709);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2017343592);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1821475077, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1821475077);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1782292358);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1033021910);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1285976420, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1285976420);
}

void func_829(int iParam0, var uParam1)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -1533126372, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, -1533126372);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -472287501, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, -472287501);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -183807561, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, -183807561);
}

int func_830()
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
		if (func_777())
		{
			return 0;
		}
		if (func_775(155))
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

void func_831(bool bParam0)
{
	if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_443())
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2415861.f_1307) || Global_2415861.f_1307 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam0)
		{
			Global_2415861.f_1307 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			Global_2415861.f_1307 = -1;
		}
	}
}

void func_832(int iParam0)
{
	func_794();
	func_833();
	func_817();
	Global_1574631.f_4 = iParam0;
	Global_1574631.f_5 = iParam0;
	func_669(iParam0, -1);
	func_7(&(Global_1574631.f_18), 0, 0);
	Global_2524719.f_4574 = 0;
	Global_2459257[0] = func_26();
	Global_2459257[1] = func_26();
	Global_2459257[2] = func_26();
	Global_2459257[3] = func_26();
	Global_2459257[4] = func_26();
	func_793();
	if (!func_232(func_233()))
	{
		func_359();
	}
	if (func_250() && !func_245())
	{
		GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 16);
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_1574631.f_1), 17);
	}
}

void func_833()
{
	var uVar0;
	
	Global_1574656 = uVar0;
}

int func_834(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_783();
			}
			else
			{
				return 0;
			}
		}
		if (!func_166())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_783();
					}
					else
					{
						return 0;
					}
				}
				if (func_777())
				{
					if (!bParam2)
					{
						func_783();
					}
					else
					{
						return 0;
					}
				}
				if (func_775(155))
				{
					if (!bParam2)
					{
						func_783();
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
					func_783();
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
				func_783();
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
			func_783();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_835(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_783();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_836(int iParam0)
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

int func_837(int iParam0, bool bParam1, bool bParam2)
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

