// 函数 0x46d080  sub_46D080  size=0x179  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_46D080(DWORD a1, DWORD a2, DWORD a3)
{
  LONG v3; // eax
  DEVMODEA DevMode; // [esp+4h] [ebp-A0h] BYREF

  memset(&DevMode, 0, sizeof(DevMode));
  DevMode.dmPelsWidth = a1;
  DevMode.dmBitsPerPel = a3;
  DevMode.dmPelsHeight = a2;
  DevMode.dmSize = 156;
  DevMode.dmFields = 1835008;
  if ( ChangeDisplaySettingsA(&DevMode, 2u) )
  {
    DevMode.dmFields = 1572864;
    v3 = ChangeDisplaySettingsA(&DevMode, 2u);
    if ( v3 || (v3 = ChangeDisplaySettingsA(&DevMode, 4u)) != 0 )
    {
      switch ( v3 )
      {
        case -6:
          goto LABEL_7;
        case -4:
LABEL_9:
          MessageBoxA(0, "ChangeDisplaySettings DISP_CHANGE_BADFLAGS", "Error", 0);
          return 0;
        case -2:
LABEL_11:
          MessageBoxA(0, "ChangeDisplaySettings DISP_CHANGE_BADMODE", "Error", 0);
          return 0;
        case -5:
LABEL_13:
          MessageBoxA(0, "ChangeDisplaySettings DISP_CHANGE_BADPARAM", "Error", 0);
          return 0;
      }
LABEL_14:
      if ( v3 == -1 )
      {
        MessageBoxA(0, "ChangeDisplaySettings DISP_CHANGE_FAILED", "Error", 0);
      }
      else if ( v3 == -3 )
      {
        MessageBoxA(0, "ChangeDisplaySettings DISP_CHANGE_NOTUPDATED", "Error", 0);
      }
      else
      {
        MessageBoxA(0, "ChangeDisplaySettings OTHERS", "Error", 0);
      }
      return 0;
    }
    return 1;
  }
  v3 = ChangeDisplaySettingsA(&DevMode, 4u);
  if ( !v3 )
    return 1;
  if ( v3 == -2 )
  {
    DevMode.dmFields = 1572864;
    v3 = ChangeDisplaySettingsA(&DevMode, 4u);
    if ( !v3 )
      return 1;
  }
  if ( v3 != -6 )
  {
    switch ( v3 )
    {
      case -4:
        goto LABEL_9;
      case -2:
        goto LABEL_11;
      case -5:
        goto LABEL_13;
    }
    goto LABEL_14;
  }
LABEL_7:
  MessageBoxA(0, "ChangeDisplaySettings DISP_CHANGE_BADDUALVIEW", "Error", 0);
  return 0;
}
