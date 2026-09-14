// 函数 0x43cab0  sub_43CAB0  size=0x570  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_43CAB0()
{
  int result; // eax
  __int16 *v1; // esi
  int v2; // ebx
  __int16 v3; // ax
  __int16 v4; // ax
  unsigned __int8 *v5; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  int v10; // [esp+18h] [ebp-108h]
  int v11; // [esp+18h] [ebp-108h]
  char Buffer[256]; // [esp+1Ch] [ebp-104h] BYREF

  result = dword_4B32BC;
  if ( dword_4B32BC == -1 )
    return result;
  v1 = (__int16 *)(dword_870868 + dword_4B32BC * dword_870854);
  v2 = dword_4CCAAC + dword_4CCA98 * *v1;
  _itoa(*((_DWORD *)v1 + 4) / 55296 + 1950, Buffer, 10);
  sub_47FF50(Buffer);
  sub_4820C0(dword_8A1B00 + 7776);
  if ( *(char *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 224) == dword_8703A0 )
  {
    if ( v1[6] == -1 )
    {
LABEL_7:
      sub_47FF50(&unk_4A3818);
      goto LABEL_8;
    }
    sub_483040(dword_8A1B00 + 9216);
  }
  if ( v1[6] == -1 )
    goto LABEL_7;
  sub_47FF50(&unk_4A381C);
LABEL_8:
  sub_47FF50((char *)&unk_870788 + 20 * (*((unsigned __int8 *)v1 + 14) >> 3));
  v3 = v1[4];
  if ( v3 == -1 )
    sub_47FF50(byte_4A2869);
  else
    sub_47FF50(*(_DWORD *)dword_870814 + 72 * v3);
  v4 = v1[5];
  if ( v4 == -1 )
  {
    if ( v1[4] < 0 )
    {
      sub_47FF50(byte_4A2869);
      sub_47FF50(byte_4A2869);
      sub_47FF50(byte_4A2869);
      sub_47FF50(byte_4A2869);
    }
    else
    {
      v8 = v1[4];
      v9 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v2 + 2 * v8 + 240);
      v11 = *(_DWORD *)dword_870814 + 72 * v8;
      sprintf(Buffer, "%d", *(__int16 *)(v9 + 26));
      sub_47FF50(Buffer);
      _itoa(*(_DWORD *)(v11 + 24), Buffer, 10);
      sub_47FF50(Buffer);
      _itoa(*(_DWORD *)(v9 + 16), Buffer, 10);
      sub_47FF50(Buffer);
      _itoa(
        (int)((double)*(int *)(v9 + 16) / ((double)*((int *)dword_870824 + 28 * v1[4]) * 0.00390625) * 100.0),
        Buffer,
        10);
      sub_47FF50(Buffer);
      sprintf(
        Buffer,
        "%.2f",
        (double)(*((_DWORD *)v1 + 5)
               + *((_DWORD *)v1 + 6)
               + *((_DWORD *)v1 + 7)
               + *((_DWORD *)v1 + 8)
               + *((_DWORD *)v1 + 9)
               + *((_DWORD *)v1 + 10)
               + *((_DWORD *)v1 + 11))
      / 7.0
      / (double)*(int *)(v11 + 24));
      sub_47FF50(Buffer);
    }
    sub_47FF50(byte_4A2869);
    sub_47FF50(byte_4A2869);
    return sub_47FF50(byte_4A2869);
  }
  else
  {
    v5 = (unsigned __int8 *)(dword_4D0BAC + dword_4D0B98 * v4);
    v6 = *v5;
    v7 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v2 + 2 * v6 + 240);
    v10 = *(_DWORD *)dword_870814 + 72 * v6;
    sub_47FF50(v10);
    sprintf(Buffer, "%d", *(__int16 *)(v7 + 26));
    sub_47FF50(Buffer);
    _itoa(*((_DWORD *)v5 + 5), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*(_DWORD *)(v10 + 24), Buffer, 10);
    sub_47FF50(Buffer);
    sub_438320((int)((double)*((int *)v5 + 4) * 0.00390625 / (double)*((int *)v5 + 5) + 0.9), Buffer, 6);
    sub_47FF50(Buffer);
    _itoa(*(_DWORD *)(v7 + 16), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(
      (int)((double)*(int *)(v7 + 16) / ((double)*((int *)dword_870824 + 28 * *v5) * 0.00390625) * 100.0),
      Buffer,
      10);
    sub_47FF50(Buffer);
    sprintf(
      Buffer,
      "%.2f",
      (double)(*((_DWORD *)v1 + 5)
             + *((_DWORD *)v1 + 6)
             + *((_DWORD *)v1 + 7)
             + *((_DWORD *)v1 + 8)
             + *((_DWORD *)v1 + 9)
             + *((_DWORD *)v1 + 10)
             + *((_DWORD *)v1 + 11))
    / 7.0
    / (double)*(int *)(v10 + 24));
    return sub_47FF50(Buffer);
  }
}
