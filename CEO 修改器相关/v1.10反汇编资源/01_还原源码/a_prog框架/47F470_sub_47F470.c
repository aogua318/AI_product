// 函数 0x47f470  sub_47F470  size=0xB3  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__thiscall sub_47F470(__int16 *this)
{
  int v1; // edi
  int v2; // eax
  int v3; // esi
  int v4; // edx
  int v6; // [esp+Ch] [ebp-4h]

  v1 = *(this + 15) + *(__int16 *)(*(_DWORD *)this + 278);
  v2 = *(this + 16);
  v3 = *(this + 14) + *(__int16 *)(*(_DWORD *)this + 276);
  v6 = v2 + v3;
  v4 = *(this + 17);
  if ( *(this + 10) )
  {
    if ( v4 <= 2 * v2 )
      return sub_464D00(v3, v1, v6, v1 + v4 / 2);
    else
      return sub_464D00(v3, v1, v6, v2 + v1);
  }
  else if ( v2 <= 2 * v4 )
  {
    return sub_464D00(v3, v1, v3 + v2 / 2, v4 + v1);
  }
  else
  {
    return sub_464D00(v3, v1, v4 + v3, v4 + v1);
  }
}
