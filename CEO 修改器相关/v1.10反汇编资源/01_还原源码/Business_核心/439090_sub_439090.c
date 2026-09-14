// 函数 0x439090  sub_439090  size=0x9F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_439090(__int16 *this)
{
  int v1; // eax
  _DWORD *v3; // esi
  unsigned int v4; // eax
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // [esp+0h] [ebp-8h] BYREF
  unsigned int v8; // [esp+4h] [ebp-4h] BYREF

  if ( (*((_BYTE *)this + 19) & 0xF) != 0 )
  {
    if ( (*((_BYTE *)this + 19) & 0xF) != 1 || !*((_BYTE *)this + 18) )
      return -1;
    v1 = *(this + 3);
  }
  else
  {
    v1 = *(this + 2);
  }
  if ( v1 == -1 )
    return -1;
  v3 = (_DWORD *)(dword_4CCAAC + v1 * dword_4CCA98);
  sub_4198F0(v3, *this, *(this + 1), &v8, (int *)&v7);
  v4 = v3[6];
  if ( v8 <= v4
    && v7 <= v3[7]
    && (v5 = *(_DWORD *)(v3[35] + 4 * (v8 + v7 * v4)), v5 >= 0)
    && (v6 = v3[45] + v5 * v3[40], *(_BYTE *)(v6 + 11) == 6) )
  {
    return *(__int16 *)(v6 + 12);
  }
  else
  {
    return -1;
  }
}
