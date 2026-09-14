// 函数 0x411750  sub_411750  size=0x7D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_411750(int a1, int a2)
{
  char Buffer[100]; // [esp+4h] [ebp-68h] BYREF

  if ( a2 != 2 )
  {
    sprintf(Buffer, "%s\nline%d", "ceo_tasks.cpp", 26);
    MessageBoxA(hWnd, Buffer, aScriptError_1, 0);
    exit(1);
  }
}
