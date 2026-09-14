// 函数 0x411940  sub_411940  size=0x73  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_411940(int a1, int a2)
{
  char Buffer[100]; // [esp+4h] [ebp-68h] BYREF

  if ( a2 )
  {
    sprintf(Buffer, "%s\nline%d", "ceo_tasks.cpp", 50);
    MessageBoxA(hWnd, Buffer, aScriptErrorFac, 0);
    exit(1);
  }
  return 189880 * dword_8703A0;
}
