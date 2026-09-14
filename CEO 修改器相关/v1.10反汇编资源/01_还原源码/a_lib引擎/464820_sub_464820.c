// 函数 0x464820  sub_464820  size=0x3F  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_464820(int a1, _BYTE *a2, int a3)
{
  int v3; // esi
  _BYTE *v4; // eax
  char v5; // cl

  v3 = 0;
  if ( a3 <= 0 )
    return 1;
  v4 = a2;
  while ( 1 )
  {
    v5 = v4[a1 - (_DWORD)a2];
    if ( v5 != *v4 )
      break;
    if ( v5 || *v4 )
    {
      ++v3;
      ++v4;
      if ( v3 < a3 )
        continue;
    }
    return 1;
  }
  return 0;
}
