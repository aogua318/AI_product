// 函数 0x415c20  sub_415C20  size=0x51  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double *__thiscall sub_415C20(int this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx
  double *result; // eax

  v2 = *(__int16 *)(this + 2);
  *(_DWORD *)(this + 1244) += a2;
  v3 = dword_4CCAAC + dword_4CCA98 * v2;
  v4 = a2 * *(_DWORD *)(this + 16);
  *(_DWORD *)(v3 + 1412) += v4;
  result = (double *)((char *)&unk_4D10B8 + 189880 * *(char *)(v3 + 224));
  result[1430] = (double)v4 + result[1430];
  return result;
}
