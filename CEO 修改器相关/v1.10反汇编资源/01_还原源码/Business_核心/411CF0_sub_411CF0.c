// 函数 0x411cf0  sub_411CF0  size=0x94  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_411CF0(double *a1, int a2)
{
  char Buffer[100]; // [esp+0h] [ebp-68h] BYREF

  if ( a2 != 1 )
  {
    sprintf(Buffer, "%s\nline%d", "ceo_tasks.cpp", 128);
    MessageBoxA(hWnd, Buffer, aScriptError_5, 0);
    exit(1);
  }
  return dword_4C43C8 * (int)*a1;
}
