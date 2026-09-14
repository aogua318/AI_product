// 函数 0x43e000  sub_43E000  size=0xC1  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_43E000()
{
  int v0; // ebx
  const char *v1; // esi
  char *v2; // edi
  int v4; // [esp+4h] [ebp-4h]

  v0 = 0;
  if ( dword_870818 > 0 )
  {
    v1 = *(const char **)dword_870814;
    v2 = (char *)&unk_4B34E0;
    v4 = dword_870818;
    do
    {
      if ( v1[dword_4B35D4 + 48] )
      {
        strcpy(v2, v1);
        ++v0;
        v2 += 12;
      }
      v1 += 72;
      --v4;
    }
    while ( v4 );
  }
  dword_8A1B18 = v0;
  sub_481AC0(&unk_4B34E0, 12, v0, 0);
  sub_481A70(dword_8A1B18);
  if ( dword_8A1B18 >= 19 )
    return sub_4808E0(-80, 265 - 12 * dword_8A1B18);
  else
    return sub_4808E0(-80, 37);
}
