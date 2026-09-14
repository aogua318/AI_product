// 函数 0x415d70  sub_415D70  size=0x9F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_415D70(__int16 *this, int a2)
{
  int result; // eax
  int v4; // esi
  __int16 v5; // ax

  result = *((unsigned __int8 *)this + 1256);
  if ( result != a2 )
  {
    if ( *(this + 13) > 0 )
    {
      for ( result = *(__int16 *)(dword_4CCA98 * *(this + 1) + dword_4CCAAC + 754);
            result != -1;
            result = *(__int16 *)(v4 + 6) )
      {
        v4 = dword_4C4378 + result * dword_4C4364;
        v5 = *(_WORD *)(v4 + 2);
        if ( v5 != -1
          && *(unsigned __int8 *)(dword_4D0B98 * v5 + dword_4D0BAC) == *(char *)this
          && *(char *)(v4 + 10) == *((unsigned __int8 *)this + 1256) )
        {
          sub_40C4D0((__int16 *)v4, a2);
        }
      }
    }
    *((_BYTE *)this + 1256) = a2;
  }
  return result;
}
