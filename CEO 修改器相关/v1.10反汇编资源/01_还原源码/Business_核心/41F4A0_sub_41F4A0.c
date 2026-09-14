// 函数 0x41f4a0  sub_41F4A0  size=0x52  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_41F4A0()
{
  int v0; // ebx
  int v1; // esi
  int *v2; // edi
  bool v3; // zf
  bool v4; // sf
  int result; // eax

  v0 = dword_870818;
  v1 = 0;
  if ( dword_870818 > 0 )
  {
    v2 = (int *)((char *)dword_870824 + 16);
    do
    {
      v3 = *v2 == 0;
      v4 = *v2 < 0;
      dword_4CD4A8 = 0;
      if ( v4 || v3 )
        sub_41F420(v1, 0);
      result = dword_4CD4A8;
      dword_4D08B0[v1++] = dword_4CD4A8;
      v2 += 28;
    }
    while ( v1 < v0 );
  }
  return result;
}
