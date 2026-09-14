// 函数 0x422a40  sub_422A40  size=0x85  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __usercall sub_422A40@<eax>(int a1@<eax>)
{
  int v1; // eax
  bool v2; // cc
  int *v3; // eax

  v1 = 9 * a1;
  v2 = *(_DWORD *)(*(_DWORD *)dword_4C4434 + 8 * v1 + 16) <= 0;
  v3 = (int *)(*(_DWORD *)dword_4C4434 + 8 * v1);
  return (v2 || *((int *)dword_870824 + 424) > 0)
      && (v3[5] <= 0 || *((int *)dword_870824 + 396) > 0)
      && (v3[2] <= 0 || *((int *)dword_870824 + 256) > 0)
      && (v3[6] <= 0 || *((int *)dword_870824 + 816) > 0)
      && (v3[3] <= 0 || *((int *)dword_870824 + 60) > 0)
      && (v3[7] <= 0 || *((int *)dword_870824 + 340) > 0)
      && (v3[1] <= 0 || *((int *)dword_870824 + 228) > 0);
}
