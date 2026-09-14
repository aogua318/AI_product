// 函数 0x475040  sub_475040  size=0x38  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_475040@<eax>(int a1@<eax>)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ebx
  int result; // eax

  v2 = sub_474FF0() << 8;
  v3 = (v2 | sub_474FF0()) << 8;
  v4 = (v3 | sub_474FF0()) << 8;
  result = v4 | sub_474FF0();
  *(_DWORD *)(a1 + 13940) = result;
  return result;
}
