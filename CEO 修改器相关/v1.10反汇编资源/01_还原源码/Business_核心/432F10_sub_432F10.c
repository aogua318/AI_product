// 函数 0x432f10  sub_432F10  size=0xB1  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_432F10()
{
  int v0; // ebx
  _WORD *v1; // esi
  _WORD *v2; // edi
  int result; // eax
  int v4; // [esp+4h] [ebp-4h]

  v0 = 0;
  v4 = 0;
  if ( dword_870818 > 0 )
  {
    do
    {
      v1 = (char *)dword_870824 + v0;
      v2 = (char *)dword_870824 + v0 + 20;
      memcpy_0((char *)dword_870824 + v0 + 22, v2, 0xAu);
      *v2 = v1[2];
      v1[2] = 0;
      memcpy_0(v1 + 17, v1 + 16, 0xAu);
      v1[16] = v1[3];
      v1[3] = 0;
      memcpy_0(v1 + 23, v1 + 22, 0xAu);
      v1[22] = v1[4];
      memcpy_0(v1 + 29, v1 + 28, 0xAu);
      result = v4 + 1;
      v1[28] = *((char *)v1 + 10);
      *((_BYTE *)v1 + 10) = 0;
      v0 += 112;
      v4 = result;
    }
    while ( result < dword_870818 );
  }
  return result;
}
