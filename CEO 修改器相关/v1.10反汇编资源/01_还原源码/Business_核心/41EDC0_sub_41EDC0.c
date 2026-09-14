// 函数 0x41edc0  sub_41EDC0  size=0x8C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_41EDC0(int *a1)
{
  int v1; // esi
  int v2; // ebx
  int v3; // edi
  int v4; // eax

  v1 = 0;
  if ( dword_870818 > 0 )
  {
    v2 = 0;
    do
    {
      if ( *(_BYTE *)(v2 + *(_DWORD *)dword_870814 + 13) )
      {
        v3 = v2 + *(_DWORD *)dword_870814;
        dbl_4CD4B0[v1] = (double)sub_412490(a1, v1) / 10000.0 / (double)*(int *)(v3 + 24) + dbl_4CD4B0[v1];
      }
      v4 = 0;
      while ( v1 != dword_4B10E4[v4] )
      {
        if ( ++v4 >= 7 )
          goto LABEL_10;
      }
      dbl_4CD800[v1] = (double)a1[v4 + 1498] + dbl_4CD800[v1];
LABEL_10:
      ++v1;
      v2 += 72;
    }
    while ( v1 < dword_870818 );
  }
}
