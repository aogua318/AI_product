// 函数 0x45d530  sub_45D530  size=0x260  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double *sub_45D530()
{
  int v0; // eax
  double *result; // eax
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  const char *v7; // eax
  int v8; // eax
  int v9; // eax
  double *v10; // [esp+Ch] [ebp-108h]
  char Buffer[256]; // [esp+10h] [ebp-104h] BYREF

  v0 = sub_47C740("fonts\\12ns");
  sub_47D310(v0, 12, 512);
  result = (double *)&unk_8D08E0;
  v2 = 104;
  v10 = (double *)&unk_8D08E0;
  do
  {
    if ( *(_BYTE *)result )
    {
      sub_47B910(2, 1);
      v3 = sub_464D00(108, v2, 216, v2 + 12);
      sub_47C220((int)&dword_8EEDEC, v3, (int)v10, 32736, -1, 0, 0, 0, 255);
      v4 = sub_464D00(269, v2, 329, v2 + 12);
      sub_47C220((int)&dword_8EEDEC, v4, (int)(v10 + 5), 32736, -1, 0, 0, 0, 255);
      v5 = sub_464D00(352, v2, 436, v2 + 12);
      sub_47C220((int)&dword_8EEDEC, v5, (int)v10 + 60, 32736, -1, 0, 0, 0, 255);
      sub_47B910(1, 1);
      _itoa(*((_DWORD *)v10 + 20), Buffer, 10);
      v6 = sub_464D00(454, v2, 514, v2 + 12);
      sub_47C220((int)&dword_8EEDEC, v6, (int)Buffer, 32736, -1, 0, 0, 0, 255);
      v7 = (const char *)sub_4646A0(0, 52);
      sprintf(Buffer, "%d %s", 10 * *((_DWORD *)v10 + 21), v7);
      v8 = sub_464D00(552, v2, 612, v2 + 12);
      sub_47C220((int)&dword_8EEDEC, v8, (int)Buffer, 32736, -1, 0, 0, 0, 255);
      sub_438340((unsigned __int64)v10[11], Buffer);
      v9 = sub_464D00(649, v2, 739, v2 + 12);
      sub_47C220((int)&dword_8EEDEC, v9, (int)Buffer, 32736, -1, 0, 0, 0, 255);
      result = v10;
    }
    result += 12;
    v2 += 46;
    v10 = result;
  }
  while ( (int)result < (int)&unk_8D0CA0 );
  return result;
}
