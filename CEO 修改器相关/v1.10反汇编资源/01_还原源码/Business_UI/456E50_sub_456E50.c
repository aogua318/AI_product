// 函数 0x456e50  sub_456E50  size=0x1E5  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void *sub_456E50()
{
  int v0; // esi
  int v1; // ebx
  void *result; // eax
  int v3; // eax
  char *v4; // esi
  double *v5; // edi
  int v6; // ecx
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  int v10; // ecx
  __int16 *v11; // eax
  int v12; // [esp+8h] [ebp-Ch]
  int v13; // [esp+Ch] [ebp-8h]
  void *v14; // [esp+10h] [ebp-4h]

  v0 = dword_8C462C;
  v1 = 0;
  result = memset(dword_8C4628, 0, 56 * dword_8C462C);
  v14 = 0;
  if ( v0 > 0 )
  {
    v13 = 0;
    while ( 1 )
    {
      v3 = dword_8C4630[(_DWORD)v14];
      v4 = (char *)dword_8C4628 + v13;
      *(_DWORD *)((char *)dword_8C4628 + v13) = v3;
      v5 = (double *)((char *)&unk_4D10B8 + 189880 * v3);
      *((_QWORD *)v4 + 2) = (unsigned __int64)v5[1];
      *((_DWORD *)v4 + 10) = *((__int16 *)v5 + 45);
      *((_QWORD *)v4 + 1) = (unsigned __int64)sub_42EB70(v5);
      *((_DWORD *)v4 + 6) = 0;
      *((_DWORD *)v4 + 7) = 0;
      *((_DWORD *)v4 + 8) = 0;
      *((_DWORD *)v4 + 9) = 0;
      do
      {
        v6 = byte_4CE046 - v1;
        if ( v6 > 24 )
          v6 += -24 - 24 * ((v6 - 25) / 0x18u);
        if ( v6 < 0 )
          v6 += 24 * ((-1 - v6) / 0x18u) + 24;
        *((_QWORD *)v4 + 3) += (unsigned __int64)v5[v6 + 1208];
        v7 = byte_4CE046 - v1;
        if ( v7 > 24 )
          v7 += -24 - 24 * ((v7 - 25) / 0x18u);
        if ( v7 < 0 )
          v7 += 24 * ((-1 - v7) / 0x18u) + 24;
        *((_QWORD *)v4 + 4) += (unsigned __int64)v5[v7 + 1455];
        ++v1;
      }
      while ( v1 < 12 );
      v8 = *((__int16 *)v5 + 44);
      if ( v8 != -1 )
      {
        v9 = *((_DWORD *)v4 + 12);
        v10 = *((_DWORD *)v4 + 11);
        v12 = *((_DWORD *)v4 + 13);
        do
        {
          v11 = (__int16 *)(dword_4CCAAC + v8 * dword_4CCA98);
          v9 += v11[370];
          *((_DWORD *)v4 + 12) = v9;
          v10 += v11[233] + v11[241] + v11[232];
          *((_DWORD *)v4 + 11) = v10;
          v12 += v11[374];
          *((_DWORD *)v4 + 13) = v12;
          v8 = v11[809];
        }
        while ( v8 != -1 );
      }
      v13 += 56;
      result = (char *)v14 + 1;
      v14 = result;
      if ( (int)result >= (int)dword_8C462C )
        break;
      v1 = 0;
    }
  }
  return result;
}
