// 函数 0x41ec30  sub_41EC30  size=0x87  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_41EC30(int a1, double a2)
{
  int v2; // eax
  int v3; // eax
  int *v4; // edi
  __int16 *v5; // esi
  int v6; // ebx
  int result; // eax
  double v8; // st7

  v2 = 116 * *(__int16 *)(*(_DWORD *)dword_870814 + 72 * a1 + 16);
  dbl_4CD158[a1] = dbl_4CD158[a1] + a2;
  v3 = *(_DWORD *)dword_87081C + v2;
  v4 = (int *)(v3 + 28);
  v5 = (__int16 *)(v3 + 20);
  v6 = 4;
  do
  {
    result = *v5;
    if ( result != -1 )
    {
      v8 = (double)*v4 / (double)*(int *)(*(_DWORD *)dword_870814 + 72 * result + 24) * a2;
      dbl_4CD158[result] = dbl_4CD158[result] + v8;
      result = sub_41EC30(result, v8);
    }
    ++v5;
    ++v4;
    --v6;
  }
  while ( v6 );
  return result;
}
