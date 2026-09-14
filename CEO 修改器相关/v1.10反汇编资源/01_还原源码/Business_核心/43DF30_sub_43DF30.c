// 函数 0x43df30  sub_43DF30  size=0xC2  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_43DF30()
{
  int v0; // esi
  char *v1; // ebx
  __int16 *v2; // edi
  char *v3; // ecx
  _BYTE *v4; // edx
  char v5; // al
  int v7; // [esp+4h] [ebp-4h]

  v0 = *(_DWORD *)dword_4D0C94 + 68 * *(char *)(388 * dword_4B35D0 + *(_DWORD *)dword_4D0C8C + 78);
  sub_481AC0(&unk_4B34E0, 12, *(__int16 *)(v0 + 64), 0);
  v7 = 0;
  if ( *(__int16 *)(v0 + 64) > 0 )
  {
    v1 = (char *)&unk_4B34E0;
    v2 = (__int16 *)(v0 + 24);
    do
    {
      v3 = (char *)(*(_DWORD *)dword_870814 + 72 * *(unsigned __int8 *)(116 * *v2 + *(_DWORD *)dword_87081C + 1));
      v4 = v1;
      do
      {
        v5 = *v3;
        *v4++ = *v3++;
      }
      while ( v5 );
      ++v2;
      v1 += 12;
      ++v7;
    }
    while ( v7 < *(__int16 *)(v0 + 64) );
  }
  dword_8A1B18 = *(__int16 *)(v0 + 64);
  return sub_481A70(dword_8A1B18);
}
