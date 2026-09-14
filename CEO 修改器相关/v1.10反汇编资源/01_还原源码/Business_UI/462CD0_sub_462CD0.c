// 函数 0x462cd0  sub_462CD0  size=0x26  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_462CD0(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = a1[1];
  v3 = a2[1];
  if ( v2 >= v3 )
    return (v2 <= v3) - 1;
  else
    return 1;
}
