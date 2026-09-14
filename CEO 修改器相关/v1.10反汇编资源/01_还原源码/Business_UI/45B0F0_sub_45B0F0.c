// 函数 0x45b0f0  sub_45B0F0  size=0xE2  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_45B0F0()
{
  unsigned int v0; // ecx
  int v1; // esi
  int v2; // eax
  int v3; // eax
  int v4; // eax
  unsigned int v5; // [esp+0h] [ebp-8h] BYREF
  unsigned int v6; // [esp+4h] [ebp-4h] BYREF

  if ( dword_8CB1E4 )
  {
    if ( dword_4B385C != -1 )
    {
      sub_484120(dword_8EED88, dword_8EED8C, &v5, &v6);
      v0 = v5;
      if ( v5 < *(_DWORD *)(dword_4C2D38 + 24) && v6 < *(_DWORD *)(dword_4C2D38 + 28) )
      {
        v1 = dword_4B385C;
        if ( dword_4B385C >= 100 )
        {
          v4 = sub_4640D0(v5) % 4;
          sub_410230(v1 - 100, v5, v6, v4, 1);
        }
        else
        {
          if ( dword_4B385C >= 66 )
          {
            v2 = sub_4640D0(v5);
            v0 = 23;
            v1 = v2 % 23 + 66;
          }
          else if ( dword_8CB1E0 )
          {
            v1 = dword_8CB1E0 + dword_4B385C;
          }
          v3 = sub_4640D0(v0) % 4;
          sub_410230(v1, v5, v6, v3, 0);
        }
      }
    }
  }
}
