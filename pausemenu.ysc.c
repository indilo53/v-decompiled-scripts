#region Local Var
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	switch (ScriptParam_0)
	{
		case 3:
			while (true)
			{
				SYSTEM::WAIT(5000);
			}
			break;
		
		case 2:
			if (ScriptParam_0.f_1 == -1029820160)
			{
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1029819160, 0, 1, "PM_PANE_AUD");
				func_2(1, 1, -1029819160, 1, 0, "PM_PANE_DIS");
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1029820160)
			{
			}
			break;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1(int iParam0)
{
	if (GRAPHICS::_BEGIN_SCALEFORM_MOVIE_METHOD_N("DISPLAY_DATA_SLOT"))
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5)
{
	if (GRAPHICS::_BEGIN_SCALEFORM_MOVIE_METHOD_N("SET_DATA_SLOT"))
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam0);
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
		if (bParam4)
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
		}
		else
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
		}
		func_3(sParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_3(var uParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

