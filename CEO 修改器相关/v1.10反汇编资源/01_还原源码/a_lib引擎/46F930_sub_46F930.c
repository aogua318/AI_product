// 函数 0x46f930  sub_46F930  size=0x9B  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_46F930(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  int result; // eax
  int v6; // esi
  _DWORD v7[14]; // [esp+4h] [ebp-38h] BYREF

  v7[1] = a4;
  v7[3] = a1;
  v7[0] = a3;
  v7[4] = *a2;
  memset(&v7[8], 0, 12);
  result = sub_470C00(v7, a5, "1.1.3", 56);
  if ( !result )
  {
    v6 = sub_46FAE0(v7, 4);
    if ( v6 == 1 )
    {
      *a2 = v7[5];
      return sub_46FD50(v7);
    }
    else
    {
      sub_46FD50(v7);
      result = -5;
      if ( v6 )
        return v6;
    }
  }
  return result;
}
