// 函数 0x4649b0  sub_4649B0  size=0x65  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4649B0(int *this, char *a2, int *a3)
{
  char String[1024]; // [esp+4h] [ebp-404h] BYREF

  if ( !sub_4648C0(this, a2, String) )
    return 0;
  *a3 = atoi(String);
  return 1;
}
