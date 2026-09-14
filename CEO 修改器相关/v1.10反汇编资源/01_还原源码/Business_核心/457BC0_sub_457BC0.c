// 函数 0x457bc0  sub_457BC0  size=0x59  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char *sub_457BC0()
{
  int v0; // edi
  int i; // esi
  char *result; // eax
  int v3; // edx
  char v4; // cl

  v0 = 0;
  *(_DWORD *)dword_8C59AC = sub_465E40(140, (int)"face_freeplay.cpp", 109);
  for ( i = 0; i < 140; i += 20 )
  {
    result = (char *)sub_4646A0(1, v0);
    v3 = i - (_DWORD)result + *(_DWORD *)dword_8C59AC;
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
