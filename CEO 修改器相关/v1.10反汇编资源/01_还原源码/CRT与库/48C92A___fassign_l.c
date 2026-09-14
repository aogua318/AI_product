// 函数 0x48c92a  __fassign_l  size=0x42  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__cdecl _fassign_l(int a1, int *a2, int a3, struct localeinfo_struct *a4)
{
  int *result; // eax
  int v5[2]; // [esp+0h] [ebp-8h] BYREF

  if ( a1 )
  {
    sub_498662((int)v5, a3, a4);
    result = a2;
    *a2 = v5[0];
    result[1] = v5[1];
  }
  else
  {
    sub_49870A((int)&a1, a3, a4);
    result = a2;
    *a2 = a1;
  }
  return result;
}
