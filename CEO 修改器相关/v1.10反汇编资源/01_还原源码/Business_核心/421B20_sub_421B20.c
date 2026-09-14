// 函数 0x421b20  sub_421B20  size=0xAD  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int __thiscall sub_421B20(int this, int a2, __int16 a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned int result; // eax
  int v7; // edx
  unsigned int v8; // eax
  int v9; // ecx

  v3 = *(_DWORD *)(dword_4CCA98 * *(__int16 *)(this + 4) + dword_4CCAAC + 180)
     + a2 * *(_DWORD *)(dword_4CCA98 * *(__int16 *)(this + 4) + dword_4CCAAC + 160);
  *(_BYTE *)(this + 11) = *(_BYTE *)(v3 + 11);
  *(_WORD *)(this + 14) = *(_WORD *)(v3 + 12);
  v4 = *(char *)(this + 11) - 3;
  *(_WORD *)(this + 28) = a3;
  if ( v4 )
  {
    v5 = v4 - 3;
    if ( v5 )
    {
      result = v5 - 1;
      if ( !result )
      {
        result = sub_420D50((void *)this);
        *(_WORD *)(v7 + 10) = result;
        *(_BYTE *)(v7 + 15) = 0;
      }
    }
    else
    {
      v8 = sub_420D50((void *)this);
      return sub_430AA0(v8);
    }
  }
  else
  {
    result = sub_420D50((void *)this);
    *(_WORD *)(dword_4C4364 * *(__int16 *)(v9 + 14) + dword_4C4378 + 2) = result;
  }
  return result;
}
