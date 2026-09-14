// 函数 0x42b900  sub_42B900  size=0x2E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_42B900()
{
  int result; // eax

  result = *(_DWORD *)dword_4D1088;
  if ( *(_DWORD *)dword_4D1088 )
  {
    result = sub_465FE0(dword_4D1088[0], (int)"news.cpp", 63);
    *(_DWORD *)dword_4D1088 = 0;
    dword_4D108C = 0;
  }
  return result;
}
