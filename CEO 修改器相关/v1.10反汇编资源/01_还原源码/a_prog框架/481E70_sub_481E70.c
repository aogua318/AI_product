// 函数 0x481e70  sub_481E70  size=0x11A  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_481E70(int this, int a2, int a3)
{
  __int16 v5; // ax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ebx
  int i; // edi
  _BYTE *v11; // ecx
  _DWORD v12[4]; // [esp+4h] [ebp-10h] BYREF

  sub_464B60(v12);
  if ( *(_DWORD *)(this + 288) )
    return 0;
  v5 = *(_WORD *)(this + 280);
  if ( v5 == -1 )
  {
    v6 = *(__int16 *)(this + 278);
    v7 = *(__int16 *)(this + 276) + *(__int16 *)(this + 284);
    v12[0] = *(__int16 *)(this + 276);
    v8 = v6 + *(__int16 *)(this + 286);
    v12[1] = v6;
    v12[2] = v7;
    v12[3] = v8;
    if ( sub_464B90(v12, a2, a3) )
      return 1;
  }
  else if ( sub_467130(
              (__int16 *)(**(_DWORD **)(this + 16) + 24 * v5),
              *(__int16 *)(this + 276),
              *(__int16 *)(this + 278),
              a2,
              a3) )
  {
    return 1;
  }
  v9 = 0;
  if ( *(__int16 *)(this + 292) <= 0 )
    return 0;
  for ( i = 0; ; i += 288 )
  {
    v11 = (_BYTE *)(i + *(_DWORD *)(this + 296));
    if ( !v11[6] )
    {
      if ( sub_481080(v11, a2, a3) )
        break;
    }
    if ( ++v9 >= *(__int16 *)(this + 292) )
      return 0;
  }
  return 1;
}
