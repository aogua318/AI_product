// 函数 0x45d160  sub_45D160  size=0x23E  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double *sub_45D160()
{
  int v0; // eax
  double *result; // eax
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  double *v9; // [esp+Ch] [ebp-108h]
  char Buffer[256]; // [esp+10h] [ebp-104h] BYREF

  v0 = sub_47C740("fonts\\12ns");
  sub_47D310(v0, 12, 512);
  result = (double *)&unk_8CF178;
  v2 = 104;
  v9 = (double *)&unk_8CF178;
  do
  {
    if ( *(_BYTE *)result )
    {
      sub_47B910(2, 1);
      v3 = sub_464D00(108, v2, 216, v2 + 12);
      sub_47C220((int)&dword_8EEDEC, v3, (int)v9, 32736, -1, 0, 0, 0, 255);
      v4 = sub_464D00(269, v2, 329, v2 + 12);
      sub_47C220((int)&dword_8EEDEC, v4, (int)(v9 + 5), 32736, -1, 0, 0, 0, 255);
      v5 = sub_464D00(352, v2, 436, v2 + 12);
      sub_47C220((int)&dword_8EEDEC, v5, (int)v9 + 60, 32736, -1, 0, 0, 0, 255);
      sub_47B910(1, 1);
      _itoa(*((_DWORD *)v9 + 20), Buffer, 10);
      v6 = sub_464D00(454, v2, 514, v2 + 12);
      sub_47C220((int)&dword_8EEDEC, v6, (int)Buffer, 32736, -1, 0, 0, 0, 255);
      sub_438190((unsigned __int64)v9[11], Buffer, 10);
      v7 = sub_464D00(537, v2, 597, v2 + 12);
      sub_47C220((int)&dword_8EEDEC, v7, (int)Buffer, 32736, -1, 0, 0, 0, 255);
      sub_47B910(2, 1);
      v8 = sub_464D00(619, v2, 725, v2 + 12);
      sub_47C220((int)&dword_8EEDEC, v8, (int)(v9 + 12), 32736, -1, 0, 0, 0, 255);
      result = v9;
    }
    result += 15;
    v2 += 46;
    v9 = result;
  }
  while ( (int)result < (int)&unk_8CF628 );
  return result;
}
