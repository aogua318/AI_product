// 函数 0x466630  sub_466630  size=0x5F  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_466630(int a1, __int16 *a2, int a3)
{
  int v3; // ebx
  __int16 *v4; // esi
  int result; // eax

  v3 = a3;
  if ( a3 > 0 )
  {
    v4 = a2;
    do
    {
      result = ((*v4 & 0x1F) + 3 * (((*v4 >> 5) & 0x1F) + 2 * ((*v4 >> 10) & 0x1F))) / 10;
      *(__int16 *)((char *)v4++ + a1 - (_DWORD)a2) = result | (32 * (result | (32 * result)));
      --v3;
    }
    while ( v3 );
  }
  return result;
}
