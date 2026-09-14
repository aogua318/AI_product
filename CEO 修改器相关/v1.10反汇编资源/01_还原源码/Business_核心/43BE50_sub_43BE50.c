// 函数 0x43be50  sub_43BE50  size=0x137  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_43BE50()
{
  __int16 *v0; // esi
  int v1; // edi
  int v2; // ebx
  int v3; // ecx
  int v4; // esi
  __int16 *v5; // edi
  char *v6; // eax
  int v7; // edx
  char v8; // cl
  _WORD *v10; // [esp+Ch] [ebp-8h]
  char *v11; // [esp+10h] [ebp-4h]

  v0 = (__int16 *)(dword_4D0C84 + dword_4B1198 * dword_4D0C70);
  v1 = *(_DWORD *)dword_4D0C8C + 388 * *v0;
  v2 = *(_DWORD *)dword_4D0C94 + 68 * *(char *)(v1 + 78);
  sub_481AC0(byte_4B33F0, 12, *(__int16 *)(v2 + 64), 0);
  sub_4801E0(*((char *)v0 + 129));
  v3 = 0;
  v4 = 0;
  dword_8A0E40 = 0;
  if ( *(__int16 *)(v2 + 64) > 0 )
  {
    v10 = (_WORD *)(v1 + 80);
    v11 = byte_4B33F0;
    v5 = (__int16 *)(v2 + 24);
    do
    {
      if ( *v10 != 0xFFFF )
      {
        v6 = (char *)(*(_DWORD *)dword_87081C + 116 * *v5 + 8);
        dword_8A0DF0[v3] = v4;
        v7 = v11 - v6;
        do
        {
          v8 = *v6;
          v6[v7] = *v6;
          ++v6;
        }
        while ( v8 );
        ++dword_8A0E40;
        v11 += 12;
        v3 = dword_8A0E40;
      }
      ++v10;
      ++v4;
      ++v5;
    }
    while ( v4 < *(__int16 *)(v2 + 64) );
  }
  sub_481A70(v3);
  return sub_482120(*(__int16 *)(dword_8A10A0 + 16714), *(__int16 *)(dword_8A10A0 + 8364) - 18 * dword_8A0E40 - 10);
}
