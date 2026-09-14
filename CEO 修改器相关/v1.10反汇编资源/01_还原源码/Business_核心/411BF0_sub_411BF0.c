// 函数 0x411bf0  sub_411BF0  size=0x61  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_411BF0(int a1, int a2)
{
  char Buffer[100]; // [esp+0h] [ebp-68h] BYREF

  if ( a2 )
  {
    sprintf(Buffer, "%s\nline%d", "ceo_tasks.cpp", 110);
    MessageBoxA(hWnd, Buffer, aScriptErrorSel, 0);
    exit(1);
  }
}
