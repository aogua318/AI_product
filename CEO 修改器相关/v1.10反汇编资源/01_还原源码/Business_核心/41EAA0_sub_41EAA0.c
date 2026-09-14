// 函数 0x41eaa0  sub_41EAA0  size=0xC9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char sub_41EAA0()
{
  int v0; // ebx
  char *v1; // esi
  int v2; // eax
  bool v3; // zf
  int v4; // edi
  char Buffer[256]; // [esp+Ch] [ebp-104h] BYREF

  v0 = 0;
  v1 = &byte_4FF671;
  do
  {
    LOBYTE(v2) = *v1;
    if ( (*v1 & 2) == 0 && dword_4CDF1C[v0] != 1949 && dword_4CDF1C[v0] - 1950 <= dword_4CD128 && (v2 & 1) != 0 )
    {
      LOBYTE(v2) = v2 | 2;
      v3 = dword_4C2D18 == 0;
      *v1 = v2;
      if ( v3 )
      {
        v4 = *(_DWORD *)dword_4D1088;
        sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 8), v1 + 15);
        sub_42B930(-1, -1, v0 + 1, Buffer, v4);
        v2 = sub_436F10(0, *(v1 - 1));
        if ( v2 )
          LOBYTE(v2) = sub_437150(v2, *(v1 - 1), -1, -1);
      }
    }
    v1 += 189880;
    ++v0;
  }
  while ( (int)v1 < (int)&unk_6158C1 );
  return v2;
}
