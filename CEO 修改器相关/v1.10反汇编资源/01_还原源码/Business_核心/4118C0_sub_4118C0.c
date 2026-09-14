// 函数 0x4118c0  sub_4118C0  size=0x73  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4118C0(double *a1, int a2)
{
  int result; // eax
  char Buffer[100]; // [esp+0h] [ebp-68h] BYREF

  if ( a2 != 1 )
  {
    sprintf(Buffer, "%s\nline%d", "ceo_tasks.cpp", 41);
    MessageBoxA(hWnd, Buffer, aScriptError_3, 0);
    exit(1);
  }
  result = 189880 * dword_8703A0;
  dbl_4D10C0[23735 * dword_8703A0] = *a1;
  return result;
}
