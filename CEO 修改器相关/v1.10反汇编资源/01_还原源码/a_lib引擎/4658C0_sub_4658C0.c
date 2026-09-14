// 函数 0x4658c0  sub_4658C0  size=0x6B  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4658C0(int a1)
{
  CHAR Text[256]; // [esp+0h] [ebp-104h] BYREF

  if ( *(_DWORD *)(a1 - 8) == 43690 )
    return *(_DWORD *)(a1 - 4);
  sprintf(Text, "ptr:%x", a1);
  MessageBoxA(0, Text, "unknown memory block", 0);
  return 0;
}
