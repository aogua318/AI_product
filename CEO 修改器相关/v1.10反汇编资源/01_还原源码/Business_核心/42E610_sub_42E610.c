// 函数 0x42e610  sub_42E610  size=0xFD  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_42E610()
{
  char *v0; // edi
  int v1; // ebx
  char *v2; // esi
  char *v3; // eax
  int v4; // edi
  char v5; // cl
  char *i; // eax
  char *v7; // eax
  char v8; // cl
  char v9; // dl
  char *v11; // [esp+Ch] [ebp-4h]

  memset(&unk_4D10B8, 0, 0x39F260u);
  v0 = (char *)&unk_4FF5EE;
  v1 = 0;
  v11 = (char *)&unk_4FF5EE;
  do
  {
    v2 = v0 - 189750;
    if ( v1 > 0 )
    {
      *(_WORD *)v0 = v1;
      v3 = (char *)sub_4646A0(1, v1);
      v4 = v0 - v3;
      do
      {
        v5 = *v3;
        v3[v4 - 189734] = *v3;
        ++v3;
      }
      while ( v5 );
      for ( i = &v2[strlen(v2 + 16) + 15]; *i == 32 || *i == 9; i[1] = 0 )
        --i;
      v7 = v2 + 16;
      do
      {
        v8 = *v7;
        v7[44] = *v7;
        ++v7;
      }
      while ( v8 );
      v0 = v11;
    }
    v9 = v2[1] & 0xFD;
    *((double *)v2 + 1) = 100000000.0;
    *v2 = v1;
    v2[1] = v9 | 1;
    if ( v1 >= 8 )
      *((_WORD *)v2 + 1) = 7;
    else
      *((_WORD *)v2 + 1) = v1;
    v0 += 189880;
    *((_WORD *)v2 + 44) = -1;
    ++v1;
    *((_WORD *)v2 + 94876) = -1;
    *((_WORD *)v2 + 94877) = -1;
    *((_WORD *)v2 + 94878) = -1;
    v11 = v0;
  }
  while ( (int)v0 < (int)((char *)&dword_89E84C + 2) );
  return 1;
}
