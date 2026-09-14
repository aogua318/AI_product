// 函数 0x46a670  sub_46A670  size=0x34  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

FILE *__thiscall sub_46A670(int this)
{
  FILE *result; // eax

  if ( *(_WORD *)(this + 22) )
  {
    result = sub_465FE0(*(_DWORD *)(this + 18), "a_lib\\a_pic.cpp", 56);
    *(_WORD *)(this + 22) = 0;
    ++dword_8DBCB4;
  }
  *(_DWORD *)(this + 18) = 0;
  *(_DWORD *)(this + 14) = 0;
  return result;
}
