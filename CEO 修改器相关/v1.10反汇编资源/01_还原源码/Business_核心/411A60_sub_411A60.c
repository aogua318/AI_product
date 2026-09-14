// 函数 0x411a60  sub_411A60  size=0x76  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_411A60(int a1, int a2)
{
  char Buffer[100]; // [esp+0h] [ebp-68h] BYREF

  if ( a2 )
  {
    sprintf(Buffer, "%s\nline%d", "ceo_tasks.cpp", 80);
    MessageBoxA(hWnd, Buffer, aScriptErrorCom, 0);
    exit(1);
  }
  return byte_4CE045 + 23735 * dword_8703A0;
}
