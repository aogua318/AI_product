// 函数 0x48f925  __fload_withFB  size=0x43  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __fastcall _fload_withFB(int a1, _DWORD *a2)
{
  double result; // st7

  if ( (a2[1] & 0x7FF00000) != 0x7FF00000 )
    return *(double *)a2;
  *(_QWORD *)&result = *(_QWORD *)a2 << 11;
  return result;
}
