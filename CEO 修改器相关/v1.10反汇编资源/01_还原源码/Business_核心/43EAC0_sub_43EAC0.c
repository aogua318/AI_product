// 函数 0x43eac0  sub_43EAC0  size=0x323  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_43EAC0()
{
  int v0; // esi
  int v1; // eax
  int v2; // ecx
  int v3; // eax
  int v4; // edx
  __int16 *v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  _WORD *v10; // edi
  int v11; // eax
  char Buffer[256]; // [esp+8h] [ebp-104h] BYREF

  sub_43E9D0();
  v0 = *(_DWORD *)dword_4D0C8C + 388 * dword_4B35E0;
  sub_47FF50(v0 + 56);
  v1 = sub_42A0F0((_DWORD *)v0);
  _itoa(v1, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(*(_DWORD *)(v0 + 220), Buffer, 10);
  sub_47FF50(Buffer);
  v2 = 0;
  while ( 1 )
  {
    v3 = *(char *)(v0 + v2 + 120);
    if ( v3 != -1 )
      break;
    v3 = *(char *)(v2 + v0 + 121);
    if ( v3 != -1 )
      break;
    v3 = *(char *)(v2 + v0 + 122);
    if ( v3 != -1 )
      break;
    v3 = *(char *)(v2 + v0 + 123);
    if ( v3 != -1 )
      break;
    v3 = *(char *)(v2 + v0 + 124);
    if ( v3 != -1 )
      break;
    v2 += 5;
    if ( v2 >= 20 )
    {
      strcpy(Buffer, "---");
      goto LABEL_9;
    }
  }
  _itoa(v3, Buffer, 10);
LABEL_9:
  sub_47FF50(Buffer);
  v4 = 0;
  v5 = (__int16 *)(v0 + 142);
  while ( 1 )
  {
    v6 = *(v5 - 1);
    if ( v6 != -1 )
      break;
    v6 = *v5;
    if ( v6 != -1 )
      break;
    v6 = v5[1];
    if ( v6 != -1 )
      break;
    v6 = v5[2];
    if ( v6 != -1 )
      break;
    v6 = v5[3];
    if ( v6 != -1 )
      break;
    v4 += 5;
    v5 += 5;
    if ( v4 >= 20 )
    {
      strcpy(Buffer, "---");
      goto LABEL_17;
    }
  }
  _itoa(v6, Buffer, 10);
LABEL_17:
  sub_47FF50(Buffer);
  v7 = 0;
  if ( *(char *)(v0 + 28) > 0 )
    v7 = *(char *)(v0 + 28);
  if ( v7 < *(char *)(v0 + 29) )
    v7 = *(char *)(v0 + 29);
  if ( v7 < *(char *)(v0 + 30) )
    v7 = *(char *)(v0 + 30);
  if ( v7 < *(char *)(v0 + 31) )
    v7 = *(char *)(v0 + 31);
  if ( v7 < *(char *)(v0 + 48) )
    v7 = *(char *)(v0 + 48);
  if ( v7 < *(char *)(v0 + 49) )
    v7 = *(char *)(v0 + 49);
  if ( v7 < *(char *)(v0 + 50) )
    v7 = *(char *)(v0 + 50);
  if ( v7 < *(char *)(v0 + 51) )
    v7 = *(char *)(v0 + 51);
  if ( v7 < *(char *)(v0 + 52) )
    v7 = *(char *)(v0 + 52);
  if ( v7 < *(char *)(v0 + 53) )
    v7 = *(char *)(v0 + 53);
  if ( v7 < *(char *)(v0 + 54) )
    v7 = *(char *)(v0 + 54);
  if ( v7 < *(char *)(v0 + 55) )
    v7 = *(char *)(v0 + 55);
  v8 = 10;
  v9 = 0;
  v10 = (_WORD *)(v0 + 80);
  while ( *v10 == 0xFFFF )
  {
    ++v9;
    ++v10;
    if ( v9 >= 20 )
      goto LABEL_48;
  }
  v8 = *(__int16 *)(v0 + 2 * v9 + 80);
LABEL_48:
  _itoa(v7 * v8 / 10, Buffer, 10);
  sub_47FF50(Buffer);
  sprintf(Buffer, "%d+%d", *(char *)(v0 + 14), *(char *)(v0 + 15));
  sub_47FF50(Buffer);
  sub_47FF50(v0 + 228);
  v11 = sub_464D00(430, 184, 513, 239);
  return sub_47C950(v11);
}
