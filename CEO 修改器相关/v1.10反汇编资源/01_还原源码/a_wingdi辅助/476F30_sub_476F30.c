// 函数 0x476f30  sub_476F30  size=0xF0  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_476F30@<eax>(_DWORD *a1@<eax>, int *a2@<ecx>, int a3)
{
  unsigned int v4; // ecx
  _BYTE *v5; // esi
  char v6; // bl
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int v11; // [esp+Ch] [ebp-10h]
  int v12; // [esp+10h] [ebp-Ch]
  unsigned int v13; // [esp+14h] [ebp-8h]
  int v14; // [esp+18h] [ebp-4h]
  int v15; // [esp+24h] [ebp+8h]

  v14 = 0;
  if ( a3 )
    v4 = dword_8EA9D0[a1[3] >> 1];
  else
    v4 = dword_8ECBA0[a1[3]];
  a1[19] = (v4 >> 15) & 1;
  v15 = 0;
  if ( a1[4] == 2 )
  {
    v15 = 1;
    if ( a1[5] )
      v15 = 2;
  }
  v5 = (char *)&unk_4B7D28 + 24 * v15 + 4 * ((v4 >> 12) & 7);
  v11 = 4;
  do
  {
    v6 = v4;
    v4 >>= 3;
    v7 = v6 & 7;
    v13 = v4;
    if ( v7 )
    {
      v12 = 0;
      if ( *v5 )
      {
        do
        {
          *a2++ = sub_474E40(v7);
          ++v12;
        }
        while ( v12 < (unsigned __int8)*v5 );
        v4 = v13;
      }
      v14 += v7 * (unsigned __int8)*v5;
    }
    else
    {
      v8 = 0;
      if ( *v5 )
      {
        do
        {
          *a2 = 0;
          ++v8;
          ++a2;
        }
        while ( v8 < (unsigned __int8)*v5 );
      }
    }
    ++v5;
    --v11;
  }
  while ( v11 );
  v9 = 2 * v15 + 1;
  if ( v9 > 0 )
    memset(a2, 0, 4 * v9);
  return v14;
}
