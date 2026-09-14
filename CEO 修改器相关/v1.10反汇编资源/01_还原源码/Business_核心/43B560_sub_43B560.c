// 函数 0x43b560  sub_43B560  size=0x8EC  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_43B560()
{
  int result; // eax
  __int16 *v1; // esi
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  char v5; // al
  int i; // ebx
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // ebx
  int v14; // eax
  char v15; // al
  __int16 *v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  char *v20; // edx
  char v21; // cl
  int v22; // ecx
  int v23; // edx
  unsigned int v24; // eax
  int v25; // edi
  int v26; // edi
  __int16 *v27; // ebx
  int v28; // eax
  int v29; // eax
  int v30; // [esp+14h] [ebp-114h]
  int *v31; // [esp+14h] [ebp-114h]
  int v32; // [esp+18h] [ebp-110h]
  __int16 *v33; // [esp+18h] [ebp-110h]
  int v34; // [esp+1Ch] [ebp-10Ch]
  unsigned int v35; // [esp+1Ch] [ebp-10Ch]
  int v36; // [esp+20h] [ebp-108h]
  int v37; // [esp+20h] [ebp-108h]
  _DWORD *v38; // [esp+20h] [ebp-108h]
  int v39; // [esp+20h] [ebp-108h]
  char Buffer[256]; // [esp+24h] [ebp-104h] BYREF

  result = dword_4B1198;
  if ( dword_4B1198 != -1 )
  {
    v1 = (__int16 *)(dword_4D0C84 + dword_4B1198 * dword_4D0C70);
    v2 = *(_DWORD *)dword_4D0C8C + 388 * *v1;
    v3 = *(_DWORD *)dword_4D0C94 + 68 * *(char *)(v2 + 78);
    v30 = v3;
    sub_47FF50(v2 + 56);
    _itoa(*((char *)v1 + 22), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*(char *)(v2 + 14), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*((char *)v1 + 23), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*(char *)(v2 + 15), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*((_DWORD *)v1 + 2) / 55296 + 1950, Buffer, 10);
    sub_47FF50(Buffer);
    sub_438320(*(_DWORD *)(v2 + 220), Buffer, 7);
    sub_47FF50(Buffer);
    sub_480A80(*((_DWORD *)v1 + 49) / 0x3E8u);
    if ( (v1[9] & 1) == 0 || *(_BYTE *)(v2 + 78) == 2 )
    {
      sub_47FF50("---");
    }
    else
    {
      v4 = sub_427600(v1, *((char *)v1 + 129));
      _itoa(v4, Buffer, 10);
      sub_47FF50(Buffer);
    }
    v5 = *((_BYTE *)v1 + 128);
    v36 = -1;
    if ( v5 != -1 )
      v36 = *(__int16 *)(v3 + 2 * v5 + 24);
    sub_47FF50(byte_4A2869);
    sub_47FF50(byte_4A2869);
    sub_47FF50(byte_4A2869);
    sub_480A80(0);
    for ( i = 9792; i < 10944; i += 288 )
    {
      sub_47FF50(byte_4A2869);
      sub_47FF50(byte_4A2869);
      sub_480A80(0);
    }
    if ( v36 >= 0 )
    {
      v7 = *(_DWORD *)dword_87081C + 116 * v36;
      v8 = v1[1];
      v34 = *(_DWORD *)dword_870814 + 72 * *(unsigned __int8 *)(v7 + 1);
      v32 = v7;
      v9 = *(unsigned __int8 *)(v7 + 1);
      v37 = dword_4CCAAC + dword_4CCA98 * v8;
      v10 = *(__int16 *)(v37 + 2 * v9 + 240);
      if ( v10 == -1 )
      {
        v10 = sub_414D20(v8, v9);
        v11 = dword_4CD11C;
        v12 = dword_4CC8D0 + v10 * dword_4CC8BC;
        *(_BYTE *)(v12 + 8) &= ~1u;
        *(_DWORD *)(v12 + 36) = v11;
        LOBYTE(v11) = *(_BYTE *)(v12 + 8);
        *(_BYTE *)(v12 + 9) = 2;
        *(_DWORD *)(v12 + 36) = dword_4CD11C;
        *(_BYTE *)(v12 + 8) = v11 & 0xFE;
        *(_BYTE *)(v12 + 10) = 0;
      }
      v13 = dword_4CC8D0 + v10 * dword_4CC8BC;
      sub_47E650(*(unsigned __int8 *)(v13 + 1256) + 14);
      _itoa(*(__int16 *)(v37 + 2 * *(unsigned __int8 *)(v13 + 1256) + 768), Buffer, 10);
      sub_47FF50(Buffer);
      v14 = sub_4413A0(*(unsigned __int8 *)(v13 + 1256));
      _itoa(v14, Buffer, 10);
      sub_47FF50(Buffer);
      v15 = *((_BYTE *)v1 + 129);
      if ( v15 != -1 )
      {
        sub_47FF50(116 * *(__int16 *)(v30 + 2 * v15 + 24) + *(_DWORD *)dword_87081C + 8);
        sub_47FF50(v32 + 8);
        sub_438320(*(_DWORD *)(v34 + 24), Buffer, 6);
        sub_47FF50(Buffer);
      }
      v16 = (__int16 *)(v32 + 20);
      v17 = 10944;
      v38 = v1 + 66;
      v31 = (int *)(v32 + 28);
      v33 = (__int16 *)(v32 + 20);
      do
      {
        v18 = *v16;
        if ( v18 >= 0 )
        {
          v19 = *(_DWORD *)dword_870814 + 72 * v18;
          v20 = &Buffer[-v19];
          do
          {
            v21 = *(_BYTE *)v19;
            v20[v19] = *(_BYTE *)v19;
            ++v19;
          }
          while ( v21 );
          sub_47FF50(Buffer);
          sprintf(
            Buffer,
            "%.2f",
            (double)*(__int16 *)(v2 + 2 * *((char *)v1 + 128) + 140)
          * (double)*v31
          / (double)*(int *)(*(_DWORD *)dword_870814 + 72 * *v33 + 24)
          / 100.0);
          sub_47FF50(Buffer);
          sub_480A50(100 * *v31);
          sub_480A80(*v38);
        }
        ++v31;
        ++v38;
        v16 = v33 + 1;
        v17 += 288;
        ++v33;
      }
      while ( v17 < 12096 );
      if ( v1[65] == -1 )
      {
        v22 = *(__int16 *)(v2 + 2 * *((char *)v1 + 128) + 80);
        v23 = v22 * *(char *)(v2 + 51);
        v35 = ((int)((unsigned __int64)(1717986919LL * v22 * *(char *)(v2 + 50)) >> 32) >> 2)
            + ((int)((unsigned __int64)(1717986919LL * v23) >> 32) >> 2)
            + ((int)((unsigned __int64)(1717986919LL * v22 * *(char *)(v2 + 52)) >> 32) >> 2)
            + ((int)((unsigned __int64)(1717986919LL * v22 * *(char *)(v2 + 53)) >> 32) >> 2)
            + ((int)((unsigned __int64)(1717986919LL * v22 * *(char *)(v2 + 54)) >> 32) >> 2)
            + v22 * *(char *)(v2 + 55) / 10
            + ((unsigned int)((unsigned __int64)(1717986919LL * v22 * *(char *)(v2 + 54)) >> 32) >> 31)
            + ((unsigned int)((unsigned __int64)(1717986919LL * v22 * *(char *)(v2 + 53)) >> 32) >> 31)
            + ((unsigned int)((unsigned __int64)(1717986919LL * v22 * *(char *)(v2 + 52)) >> 32) >> 31)
            + ((unsigned int)((unsigned __int64)(1717986919LL * v23) >> 32) >> 31)
            + ((unsigned int)((unsigned __int64)(1717986919LL * v22 * *(char *)(v2 + 50)) >> 32) >> 31);
        v24 = ((int)((unsigned __int64)(1717986919LL * v22 * *(char *)(v2 + 49)) >> 32) >> 2)
            + v35
            + ((unsigned int)((unsigned __int64)(1717986919LL * v22 * *(char *)(v2 + 49)) >> 32) >> 31)
            + ((int)((unsigned __int64)(1717986919LL * v22 * *(char *)(v2 + 28)) >> 32) >> 2)
            + ((int)((unsigned __int64)(1717986919LL * v22 * *(char *)(v2 + 29)) >> 32) >> 2)
            + ((int)((unsigned __int64)(1717986919LL * v22 * *(char *)(v2 + 30)) >> 32) >> 2)
            + v22 * *(char *)(v2 + 31) / 10
            + ((unsigned int)((unsigned __int64)(1717986919LL * v22 * *(char *)(v2 + 30)) >> 32) >> 31)
            + ((unsigned int)((unsigned __int64)(1717986919LL * v22 * *(char *)(v2 + 29)) >> 32) >> 31)
            + ((unsigned int)((unsigned __int64)(1717986919LL * v22 * *(char *)(v2 + 28)) >> 32) >> 31)
            + v22 * *(char *)(v2 + 48) / 10;
        v25 = v1[57] + v1[58] + v1[59] + v1[60] + v1[61] + v1[62] + v1[63] + v1[52] + v1[53] + v1[54] + v1[55] + v1[56];
      }
      else
      {
        v24 = 100;
        v25 = 100;
      }
      sub_480A50(v24);
      sub_480A80(v25);
    }
    v39 = 0;
    v26 = 14688;
    v27 = v1 + 94;
    do
    {
      v28 = dword_4B1120 - v39;
      if ( dword_4B1120 - v39 < 1 )
        v28 += 12;
      _itoa(v28, Buffer, 10);
      sub_47FF50(Buffer);
      _itoa(*v27, Buffer, 10);
      sub_47FF50(Buffer);
      ++v39;
      v26 -= 288;
      ++v27;
    }
    while ( v26 > 13536 );
    if ( *(char *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 224) == dword_8703A0 )
    {
      if ( (v1[9] & 1) != 0 && *((char *)v1 + 22) + *((char *)v1 + 23) > 0 )
        sub_483040(dword_8A10A0 + 16128);
      else
        sub_4820C0(dword_8A10A0 + 16128);
    }
    v29 = sub_482E20(&unk_8A0F78);
    return sub_47C950(v29);
  }
  return result;
}
