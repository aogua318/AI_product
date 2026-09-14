// 函数 0x48f675  _usepowhlp  size=0x1FE  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __usercall usepowhlp@<st0>(int a1@<ebp>, double a2@<st1>, double a3@<st0>)
{
  int v4; // eax
  double result; // st7
  double *v6; // [esp+10h] [ebp-7Ch]
  double v7[15]; // [esp+14h] [ebp-78h] BYREF

  _ESI = v7;
  v6 = v7;
  __asm { fsave   byte ptr [esi+8] }
  v4 = _powhlp(a3, a2, (int)v7);
  __asm { frstor  byte ptr [esi+8] }
  result = v7[0];
  if ( v4 )
    *(_BYTE *)(a1 - 144) = 1;
  return result;
}
