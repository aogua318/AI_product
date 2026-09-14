// 函数 0x43fc60  sub_43FC60  size=0x1F2  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43FC60(int a1)
{
  int v1; // esi
  int result; // eax
  int v3; // edx
  int i; // ecx
  char *v5; // eax
  __int16 v6; // cx
  int v7; // edi
  char *v8; // ebx
  __int16 *v9; // edx
  int v10; // esi
  char *v11; // eax
  char *v12; // edx
  char v13; // cl
  int v14; // eax
  int v15; // edx
  int v16; // [esp+4h] [ebp-10Ch]
  __int16 *v17; // [esp+8h] [ebp-108h]
  _BYTE v18[256]; // [esp+Ch] [ebp-104h] BYREF

  v1 = *(_DWORD *)(dword_8A6488 + 52);
  v16 = v1;
  result = sub_4830C0(&unk_8A6360);
  if ( a1 )
    dword_4B37D4 = -1;
  if ( v1 != -1 )
  {
    if ( dword_4B37D4 != v1 )
    {
      memset(v18, 0, sizeof(v18));
      v3 = dword_4CCAAC + dword_4B1028 * dword_4CCA98;
      for ( i = *(__int16 *)(v3 + 238); i != -1; i = *((__int16 *)v5 + 3) )
      {
        v5 = (char *)(dword_4CC8D0 + i * dword_4CC8BC);
        v18[*v5] = 1;
      }
      v6 = 0;
      v7 = 0;
      word_8A5F58 = 0;
      byte_8A5F60[0] = 0;
      if ( dword_870818 > 0 )
      {
        v8 = *(char **)dword_870814;
        v9 = (__int16 *)(v3 + 240);
        v17 = v9;
        do
        {
          if ( v8[12] == v1 && (!v18[v7] || (*(_BYTE *)(dword_4CC8BC * *v9 + dword_4CC8D0 + 8) & 1) != 0) )
          {
            v10 = v6;
            v11 = v8;
            v12 = &byte_8A5F60[12 * v6 - (_DWORD)v8];
            do
            {
              v13 = *v11;
              v11[(_DWORD)v12] = *v11;
              ++v11;
            }
            while ( v13 );
            v6 = ++word_8A5F58;
            word_8A6050[v10] = v7;
            v1 = v16;
          }
          ++v7;
          v9 = v17 + 1;
          v8 += 72;
          ++v17;
        }
        while ( v7 < dword_870818 );
      }
      sub_481A70(v6);
      sub_481AC0(byte_8A5F60, 12, word_8A5F58, 0);
      sub_4830C0(&unk_8A6230);
      sub_4801E0(0);
      v14 = *(__int16 *)(dword_8A6488 + 12) + 18 * v1;
      v15 = *(__int16 *)(dword_8A6358 + 16);
      if ( v15 + v14 > 500 )
        v14 = 500 - v15;
      result = sub_482120(*(__int16 *)(dword_8A6358 + 10), v14);
    }
    dword_4B37D4 = v1;
  }
  return result;
}
