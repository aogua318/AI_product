// 函数 0x491729  ?setSBCS@@YAXPAUthreadmbcinfostruct@@@Z  size=0x64  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __usercall setSBCS(char *a1@<eax>)
{
  _BYTE *v2; // eax
  int v3; // ecx
  int v4; // edi
  _BYTE *v5; // eax
  int v6; // esi

  memset(a1 + 28, 0, 0x101u);
  *((_DWORD *)a1 + 1) = 0;
  *((_DWORD *)a1 + 2) = 0;
  *((_DWORD *)a1 + 3) = 0;
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 5) = 0;
  *((_DWORD *)a1 + 6) = 0;
  v2 = a1 + 28;
  v3 = (char *)dword_4B8890 - a1;
  v4 = 257;
  do
  {
    *v2 = v2[v3];
    ++v2;
    --v4;
  }
  while ( v4 );
  v5 = a1 + 285;
  v6 = 256;
  do
  {
    *v5 = v5[v3];
    ++v5;
    --v6;
  }
  while ( v6 );
}
