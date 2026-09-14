// 函数 0x482e20  sub_482E20  size=0xF0  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__thiscall sub_482E20(int this)
{
  int v2; // edi
  int v3; // eax
  int v4; // ecx
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  int v10; // ecx
  int *v11; // eax
  int v12; // eax
  int v14; // [esp+Ch] [ebp-10h]
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+14h] [ebp-8h]
  int v17; // [esp+18h] [ebp-4h]

  v2 = *(__int16 *)(this + 276);
  if ( *(_WORD *)(this + 280) == 0xFFFF )
  {
    v9 = *(__int16 *)(this + 278);
    v16 = v2 + *(__int16 *)(this + 284);
    v8 = *(__int16 *)(this + 286);
  }
  else
  {
    v3 = **(_DWORD **)(this + 16);
    v4 = *(__int16 *)(v3 + 24 * *(__int16 *)(this + 280));
    v5 = *(__int16 *)(v3 + 24 * *(__int16 *)(this + 280) + 2);
    v6 = v3 + 24 * *(__int16 *)(this + 280);
    v2 += v4;
    v7 = *(__int16 *)(v6 + 4);
    v8 = *(__int16 *)(v6 + 6);
    v9 = *(__int16 *)(this + 278) + v5;
    v16 = v2 + v7;
  }
  v17 = v9 + v8;
  v14 = 0;
  if ( *(__int16 *)(this + 292) > 0 )
  {
    v15 = 0;
    do
    {
      v10 = v15 + *(_DWORD *)(this + 296);
      if ( !*(_BYTE *)(v10 + 6) )
      {
        v11 = sub_481F90((_WORD *)v10);
        if ( *v11 < v2 )
          v2 = *v11;
        if ( v11[1] < v9 )
          v9 = v11[1];
        if ( v11[2] > v16 )
          v16 = v11[2];
        v12 = v11[3];
        if ( v12 > v17 )
          v17 = v12;
      }
      v15 += 288;
      ++v14;
    }
    while ( v14 < *(__int16 *)(this + 292) );
  }
  return sub_464D00(v2, v9, v16, v17);
}
