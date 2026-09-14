// 函数 0x407b90  sub_407B90  size=0x55  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

signed int __usercall sub_407B90@<eax>(int a1@<esi>)
{
  signed int result; // eax
  __int16 *v2; // edx
  size_t v3; // ecx

  result = word_4C2CE4;
  if ( a1 != word_4C2CE4 && a1 != -1 )
  {
    result = 0;
    if ( (int)dword_4C2CE8 <= 0 )
    {
LABEL_7:
      result = (signed int)Base + 12 * dword_4C2CE8;
      v3 = dword_4C2CE8 + 1;
      *(_WORD *)result = a1;
      *(_WORD *)(result + 2) = 0;
      *(_WORD *)(result + 4) = 0;
      *(_DWORD *)(result + 8) = 0;
      dword_4C2CE8 = v3;
    }
    else
    {
      v2 = (__int16 *)Base;
      while ( *v2 != a1 )
      {
        ++result;
        v2 += 6;
        if ( result >= (int)dword_4C2CE8 )
          goto LABEL_7;
      }
    }
  }
  return result;
}
