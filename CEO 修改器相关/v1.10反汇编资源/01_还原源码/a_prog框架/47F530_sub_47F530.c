// 函数 0x47f530  sub_47F530  size=0x7A  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__thiscall sub_47F530(__int16 *this)
{
  int v1; // edi
  int v2; // eax
  int v3; // esi
  int v4; // edx
  int v5; // ebx
  int v7; // [esp+Ch] [ebp-4h]

  v1 = *(this + 15) + *(__int16 *)(*(_DWORD *)this + 278);
  v2 = *(this + 16);
  v3 = *(this + 14) + *(__int16 *)(*(_DWORD *)this + 276);
  v7 = v2 + v3;
  v4 = *(this + 17);
  v5 = v4 + v1;
  if ( *(this + 10) )
  {
    if ( v4 <= 2 * v2 )
      v2 = v4 / 2;
    v1 = v5 - v2;
  }
  else if ( v2 <= 2 * v4 )
  {
    v3 = v7 - v2 / 2;
  }
  else
  {
    v3 = v7 - v4;
  }
  return sub_464D00(v3, v1, v7, v5);
}
