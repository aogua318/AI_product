// 函数 0x430e70  sub_430E70  size=0xD1  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_430E70(__int16 *this)
{
  int v1; // edx
  __int16 *v2; // esi
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // esi
  __int16 *v7; // edi

  v1 = 0;
  v2 = this + 8;
  do
  {
    if ( *v2 != -1 && !*(_BYTE *)(dword_4D1094 * *v2 + dword_4D10A8 + 12) )
      return *(this + v1 + 8);
    ++v1;
    ++v2;
  }
  while ( v1 < 4 );
  v3 = *(__int16 *)(dword_4CCA98 * *this + dword_4CCAAC + 758);
  if ( v3 == -1 )
    return -1;
  v4 = *(this + 16);
  while ( 1 )
  {
    v5 = dword_8703D0 + v3 * dword_8703BC;
    if ( v3 != v4 && *(_BYTE *)(v5 + 31) == *((_BYTE *)this + 31) )
      break;
LABEL_13:
    v3 = *(__int16 *)(v5 + 4);
    if ( v3 == -1 )
      return -1;
  }
  v6 = 0;
  v7 = (__int16 *)(v5 + 16);
  while ( *v7 == -1 || *(_BYTE *)(dword_4D1094 * *v7 + dword_4D10A8 + 12) )
  {
    ++v6;
    ++v7;
    if ( v6 >= 4 )
      goto LABEL_13;
  }
  return *(__int16 *)(v5 + 2 * v6 + 16);
}
