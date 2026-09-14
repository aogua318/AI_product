// 函数 0x46def0  sub_46DEF0  size=0x25  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_46DEF0(int a1, __int16 a2)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax

  v2 = dword_8DBDE0;
  v3 = dword_8DBDF4;
  *(_DWORD *)(dword_8DBDF4 + 8 * dword_8DBDE0) = a1;
  *(_WORD *)(v3 + 8 * v2 + 4) = a2;
  result = v2 + 1;
  dword_8DBDE0 = result;
  return result;
}
