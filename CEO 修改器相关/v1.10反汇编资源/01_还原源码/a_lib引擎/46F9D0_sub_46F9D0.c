// 函数 0x46f9d0  sub_46F9D0  size=0x90  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_46F9D0(int a1, int *a2, int a3, int a4)
{
  int v4; // eax
  int result; // eax
  int v6; // esi
  _DWORD v7[14]; // [esp+4h] [ebp-38h] BYREF

  v7[1] = a4;
  v7[0] = a3;
  v4 = *a2;
  v7[3] = a1;
  v7[4] = v4;
  v7[8] = 0;
  v7[9] = 0;
  result = sub_470DD0(v7, "1.1.3", 56);
  if ( !result )
  {
    v6 = sub_470DF0(v7, 4);
    if ( v6 == 1 )
    {
      *a2 = v7[5];
      return sub_470C80(v7);
    }
    else
    {
      sub_470C80(v7);
      result = -5;
      if ( v6 )
        return v6;
    }
  }
  return result;
}
