// 函数 0x4117d0  sub_4117D0  size=0x7C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_4117D0(int a1, int a2)
{
  char Buffer[100]; // [esp+4h] [ebp-68h] BYREF

  if ( a2 != 1 )
  {
    sprintf(Buffer, "%s\nline%d", "ceo_tasks.cpp", 31);
    MessageBoxA(hWnd, Buffer, aScriptError_2, 0);
    exit(1);
  }
}
