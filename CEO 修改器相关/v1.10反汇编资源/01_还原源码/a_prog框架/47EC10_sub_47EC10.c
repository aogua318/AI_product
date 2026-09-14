// 函数 0x47ec10  sub_47EC10  size=0xAF  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__thiscall sub_47EC10(int *this)
{
  char v2; // al
  int v3; // eax
  __int16 *v4; // edx
  int v5; // eax
  int v6; // ecx
  _DWORD v8[4]; // [esp+4h] [ebp-10h] BYREF

  sub_464B60(v8);
  if ( *(this + 3) <= 1 )
    return sub_464D00(100000, 100000, -100000, -100000);
  v2 = *((_BYTE *)this + 8);
  if ( (v2 & 0x20) != 0 && (v2 & 4) != 0 )
    v3 = *((__int16 *)this + 26);
  else
    v3 = *((__int16 *)this + 25);
  if ( v3 == -1 )
    return sub_464D00(100000, 100000, -100000, -100000);
  v4 = (__int16 *)(**(_DWORD **)(*this + 16) + 24 * v3);
  v5 = *v4 + *((__int16 *)this + 14) + *((__int16 *)this + 31) + *(__int16 *)(*this + 276);
  v6 = *((__int16 *)this + 15) + v4[1] + *((__int16 *)this + 32) + *(__int16 *)(*this + 278);
  return sub_464D00(v5, v6, v5 + v4[2], v6 + v4[3]);
}
