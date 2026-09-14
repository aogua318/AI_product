// 函数 0x41f420  sub_41F420  size=0x72  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_41F420(int a1, int a2)
{
  int v2; // edi
  __int16 *v3; // esi
  int result; // eax

  if ( a2 > dword_4CD4A8 )
    dword_4CD4A8 = a2;
  v2 = 4;
  v3 = (__int16 *)(*(_DWORD *)dword_87081C + 116 * *(__int16 *)(*(_DWORD *)dword_870814 + 72 * a1 + 16) + 20);
  do
  {
    result = *v3;
    if ( result != -1 && *((int *)dword_870824 + 28 * result + 4) <= 0 )
      result = sub_41F420(result, a2 + 1);
    ++v3;
    --v2;
  }
  while ( v2 );
  return result;
}
