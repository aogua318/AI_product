// 函数 0x448c10  sub_448C10  size=0x72  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_448C10(int a1, int a2)
{
  int v2; // eax

  if ( !a2 )
  {
    dword_8B4290 = *(_DWORD *)(*(_DWORD *)(a1 + 296) + 52);
    sub_482060(dword_8B55D8);
    sub_448550();
    sub_47FF50(dword_8B42E8 + 40 * dword_8B4290);
    v2 = sub_464D00(273, 457, 619, 518);
    sub_47C950(v2);
  }
}
