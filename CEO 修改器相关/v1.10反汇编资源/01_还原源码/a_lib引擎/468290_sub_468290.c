// 函数 0x468290  sub_468290  size=0x6E  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char *__cdecl sub_468290(_BYTE *a1, char *Src, char *a3)
{
  char *result; // eax
  signed int v5; // esi
  int v7; // [esp+0h] [ebp-4h] BYREF

  result = a3;
  v7 = 0;
  if ( (int)a3 > 0 )
  {
    v5 = Size;
    do
    {
      if ( v5 > 0 )
      {
        result = (char *)memcpy(&v7, Src, v5);
        Src += v5;
      }
      if ( v7 == dword_8DBD0C )
      {
        a1 += v5;
      }
      else
      {
        result = 0;
        if ( v5 > 0 )
        {
          do
          {
            *a1 = *((_BYTE *)&v7 + (_DWORD)result);
            v5 = Size;
            ++result;
            ++a1;
          }
          while ( (int)result < (int)Size );
        }
      }
      --a3;
    }
    while ( a3 );
  }
  return result;
}
