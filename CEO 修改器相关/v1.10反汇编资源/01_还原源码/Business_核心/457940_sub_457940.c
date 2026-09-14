// 函数 0x457940  sub_457940  size=0x56  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char *sub_457940()
{
  int v0; // edi
  int i; // esi
  char *result; // eax
  int v3; // edx
  char v4; // cl

  v0 = 0;
  *(_DWORD *)dword_8C5A34 = sub_465E40(120, (int)"face_freeplay.cpp", 63);
  for ( i = 0; i < 120; i += 20 )
  {
    result = (char *)sub_4646A0(2, v0);
    v3 = i - (_DWORD)result + *(_DWORD *)dword_8C5A34;
    do
    {
      v4 = *result;
      result[v3] = *result;
      ++result;
    }
    while ( v4 );
    ++v0;
  }
  return result;
}
