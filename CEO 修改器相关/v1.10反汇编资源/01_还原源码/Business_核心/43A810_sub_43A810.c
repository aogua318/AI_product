// 函数 0x43a810  sub_43A810  size=0x631  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_43A810()
{
  __int16 v0; // ax
  unsigned __int8 *v1; // ebx
  int v2; // esi
  int v3; // ecx
  char *v4; // esi
  _DWORD *v5; // edi
  int v6; // eax
  char *v7; // eax
  char *v8; // edi
  char v9; // cl
  int *v10; // edi
  double v11; // st7
  double v12; // st7
  int v13; // eax
  int i; // esi
  int v15; // [esp-14h] [ebp-11Ch]
  int v16; // [esp-14h] [ebp-11Ch]
  int v17; // [esp+0h] [ebp-108h]
  char Buffer[256]; // [esp+4h] [ebp-104h] BYREF

  if ( dword_89E588 )
  {
    v0 = *(_WORD *)(dword_4C4378 + dword_4B101C * dword_4C4364 + 2);
    if ( v0 == -1 )
    {
      for ( i = 12096; i > 10656; i -= 288 )
        sub_47FF50(byte_4A2869);
      sub_47FF50(byte_4A2869);
      sub_47FF50(byte_4A2869);
      sub_47FF50(byte_4A2869);
      sub_47FF50(byte_4A2869);
      sub_47FF50(byte_4A2869);
      sub_47FF50(byte_4A2869);
      sub_47FF50(byte_4A2869);
      sub_47FF50(byte_4A2869);
      sub_47FF50(byte_4A2869);
      sub_482060(dword_89E6D0 + 6912);
      sub_482060(dword_89E6D0 + 7200);
      sub_466C70(&unk_89E58C);
    }
    else
    {
      v1 = (unsigned __int8 *)(dword_4D0BAC + dword_4D0B98 * v0);
      v2 = dword_4CCAAC + dword_4CCA98 * *((__int16 *)v1 + 2);
      v3 = dword_89E6D0 + 6912;
      if ( (char)(2 * v1[1]) >> 1 == *(_BYTE *)(v2 + 224) )
      {
        sub_482FE0(v3);
        sub_482060(dword_89E6D0 + 7200);
      }
      else
      {
        sub_482060(v3);
        sub_482FE0(dword_89E6D0 + 7200);
      }
      v4 = (char *)(dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v2 + 2 * *v1 + 240));
      v17 = 12096;
      v5 = v4 + 72;
      do
      {
        sprintf(Buffer, "%d..%d", *v5, v5[1]);
        sub_47FF50(Buffer);
        v5 += 2;
        v17 -= 288;
      }
      while ( v17 > 10656 );
      _itoa(*((__int16 *)v4 + 16), Buffer, 10);
      sub_47FF50(Buffer);
      _itoa(*((__int16 *)v4 + 17), Buffer, 10);
      sub_47FF50(Buffer);
      sprintf(Buffer, "%d/%d", *((_DWORD *)v4 + 311), *((_DWORD *)v4 + 312));
      sub_47FF50(Buffer);
      v15 = *(__int16 *)(*(_DWORD *)dword_870814 + 72 * *v1 + 14);
      v6 = sub_47C740("pics\\items");
      sub_4674F0(&unk_89E58C, v6, v15, 0);
      v7 = (char *)(*(_DWORD *)dword_870814 + 72 * *v1);
      v8 = Buffer;
      do
      {
        v9 = *v7;
        *v8++ = *v7++;
      }
      while ( v9 );
      sub_47FF50(Buffer);
      _itoa((char)v1[2], Buffer, 10);
      sub_47FF50(Buffer);
      sub_438320(*((__int16 *)v4 + 13), Buffer, 8);
      sub_47FF50(Buffer);
      _itoa((*((_DWORD *)v1 + 4) + 128) / 256, Buffer, 10);
      sub_47FF50(Buffer);
      v10 = (int *)((char *)dword_870824 + 112 * *v4);
      v11 = (double)*v10 * 0.00390625 * (double)*(int *)(*(_DWORD *)dword_870814 + 72 * *((__int16 *)v10 + 7) + 24);
      if ( *(_BYTE *)(*(_DWORD *)dword_870814 + 72 * *((__int16 *)v10 + 7) + 13) )
        v11 = v11 * 0.8;
      sprintf(Buffer, "%d%%", (int)((double)(100 * ((*((_DWORD *)v1 + 4) + 128) / 256)) / v11));
      sub_47FF50(Buffer);
      if ( v4[10] == 2 )
      {
        sub_47FF50("-----");
        sub_47FF50(byte_4A2869);
      }
      else
      {
        sprintf(Buffer, "%d", *((_DWORD *)v4 + 3) / 4);
        sub_47FF50(Buffer);
        v12 = (double)*v10 * 0.00390625 * (double)*(int *)(*(_DWORD *)dword_870814 + 72 * *((__int16 *)v10 + 7) + 24);
        if ( *(_BYTE *)(*(_DWORD *)dword_870814 + 72 * *((__int16 *)v10 + 7) + 13) )
          v12 = v12 * 0.8;
        sprintf(Buffer, "%d%%", (int)((double)(100 * (*((_DWORD *)v4 + 3) / 4)) / v12));
        sub_47FF50(Buffer);
      }
      if ( sub_415A00((__int16 *)v4) )
      {
        sprintf(Buffer, "%d", *((_DWORD *)v4 + 4));
        sub_47FF50(Buffer);
        sprintf(Buffer, "%d%%", (int)((double)(100 * *((_DWORD *)v4 + 4)) / ((double)*v10 * 0.00390625)));
        sub_47FF50(Buffer);
      }
      else
      {
        sub_47FF50("-----");
        sub_47FF50(byte_4A2869);
      }
      v16 = *(__int16 *)(*(_DWORD *)dword_870814 + 72 * *v1 + 14);
      v13 = sub_47C740("pics\\items");
      sub_4674F0(&unk_89E58C, v13, v16, 0);
      sub_47EEE0(&unk_89E58C);
    }
  }
}
