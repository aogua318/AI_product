// 函数 0x468790  sub_468790  size=0x9D  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_468790(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // eax

  v4 = sub_465E40(a4 != 8 ? 40 : 1064, "a_lib\\a_graph.cpp", 38);
  *(_DWORD *)a1 = v4;
  if ( !v4 )
    return 0;
  *v4 = 40;
  *(_DWORD *)(*(_DWORD *)a1 + 4) = a2;
  *(_DWORD *)(*(_DWORD *)a1 + 8) = a3;
  *(_WORD *)(*(_DWORD *)a1 + 12) = 1;
  *(_WORD *)(*(_DWORD *)a1 + 14) = a4;
  *(_DWORD *)(*(_DWORD *)a1 + 16) = 0;
  *(_DWORD *)(*(_DWORD *)a1 + 20) = a3 * ((a4 * a2 / 8 + 3) & 0xFFFFFFFC);
  *(_DWORD *)(*(_DWORD *)a1 + 24) = 0;
  *(_DWORD *)(*(_DWORD *)a1 + 28) = 0;
  *(_DWORD *)(*(_DWORD *)a1 + 32) = 0;
  *(_DWORD *)(*(_DWORD *)a1 + 36) = 0;
  return 1;
}
