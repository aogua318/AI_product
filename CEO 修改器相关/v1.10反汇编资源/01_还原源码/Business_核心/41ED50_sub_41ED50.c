// 函数 0x41ed50  sub_41ED50  size=0x64  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void *sub_41ED50()
{
  void *result; // eax
  int v1; // edi
  int i; // esi

  memset(dbl_4CD158, 0, sizeof(dbl_4CD158));
  result = memset(dbl_4CDB58, 0, sizeof(dbl_4CDB58));
  v1 = dword_870818;
  for ( i = 0; i < v1; ++i )
  {
    sub_41EC30(i, dbl_4CD4B0[i]);
    result = (void *)sub_41ECC0(i, dbl_4CD800[i]);
  }
  return result;
}
