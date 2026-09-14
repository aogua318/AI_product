// 函数 0x43e9d0  sub_43E9D0  size=0xE6  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_43E9D0()
{
  int v0; // esi
  int v1; // ebx
  int v2; // ecx
  int v3; // edi
  __int16 *v4; // esi
  char *v5; // eax
  int v6; // edx
  char v7; // cl
  _WORD *v9; // [esp+Ch] [ebp-8h]
  char *v10; // [esp+10h] [ebp-4h]

  v0 = *(_DWORD *)dword_4D0C8C + 388 * dword_4B35E0;
  v1 = *(_DWORD *)dword_4D0C94 + 68 * *(char *)(v0 + 78);
  sub_481AC0(&unk_4B35E8, 12, *(__int16 *)(v1 + 64), 0);
  v2 = 0;
  v3 = 0;
  dword_8A4738 = 0;
  if ( *(__int16 *)(v1 + 64) > 0 )
  {
    v9 = (_WORD *)(v0 + 80);
    v10 = (char *)&unk_4B35E8;
    v4 = (__int16 *)(v1 + 24);
    do
    {
      v5 = (char *)(*(_DWORD *)dword_870814 + 72 * *(unsigned __int8 *)(116 * *v4 + *(_DWORD *)dword_87081C + 1));
      if ( *v9 != 0xFFFF )
      {
        dword_8A46E8[v2] = v3;
        v6 = v10 - v5;
        do
        {
          v7 = *v5;
          v5[v6] = *v5;
          ++v5;
        }
        while ( v7 );
        ++dword_8A4738;
        v10 += 12;
        v2 = dword_8A4738;
      }
      ++v9;
      ++v3;
      ++v4;
    }
    while ( v3 < *(__int16 *)(v1 + 64) );
  }
  return sub_481A70(v2);
}
