// 函数 0x483a60  sub_483A60  size=0xD3  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

FILE *__thiscall sub_483A60(_DWORD *this, int a2, int a3, int a4)
{
  FILE *result; // eax

  *(this + a2 + 26) = a3;
  result = (FILE *)*(this + a2 + 30);
  if ( !a3 )
  {
    if ( result )
    {
      result = sub_465FE0((int)result, "a_map\\a_map.cpp", 1094);
      *(this + a2 + 30) = 0;
    }
    return result;
  }
  if ( result )
  {
    result = (FILE *)sub_4658C0(*(this + a2 + 30));
    if ( (int)result >= 2 * *(this + 6) * *(this + 7) )
      goto LABEL_9;
    sub_465FE0(*(this + a2 + 30), "a_map\\a_map.cpp", 1100);
    result = (FILE *)sub_465E40(2 * *(this + 6) * *(this + 7), "a_map\\a_map.cpp", 1101);
  }
  else
  {
    result = (FILE *)sub_465E40(2 * *(this + 6) * *(this + 7), "a_map\\a_map.cpp", 1104);
  }
  *(this + a2 + 30) = result;
LABEL_9:
  if ( a4 )
    return (FILE *)memset((void *)*(this + a2 + 30), -1, 2 * *(this + 6) * *(this + 7));
  return result;
}
