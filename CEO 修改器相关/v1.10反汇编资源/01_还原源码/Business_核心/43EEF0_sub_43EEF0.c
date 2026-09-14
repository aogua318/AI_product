// 函数 0x43eef0  sub_43EEF0  size=0x11A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_43EEF0()
{
  int v0; // esi
  int v1; // ebx
  int v2; // edi
  int v3; // eax
  char *v4; // eax
  int v5; // edx
  char v6; // cl
  _WORD *v8; // [esp+Ch] [ebp-Ch]
  __int16 *v9; // [esp+10h] [ebp-8h]
  char *v10; // [esp+14h] [ebp-4h]

  v0 = *(_DWORD *)dword_4D0C8C + 388 * dword_8A48C0;
  v1 = *(_DWORD *)dword_4D0C94 + 68 * *(char *)(v0 + 78);
  v2 = 0;
  sub_481AC0(&unk_4B36D8, 12, *(__int16 *)(v1 + 64), 0);
  dword_8A48C4 = 0;
  if ( *(__int16 *)(v1 + 64) > 0 )
  {
    v10 = (char *)&unk_4B36D8;
    v8 = (_WORD *)(v0 + 80);
    v9 = (__int16 *)(v1 + 24);
    do
    {
      v3 = *(_DWORD *)dword_87081C + 116 * *v9;
      if ( *v8 != 0xFFFF && (*(_BYTE *)(v0 + 78) != 2 || *(unsigned __int8 *)(v3 + 1) == dword_4B11A4) )
      {
        dword_8A4870[dword_8A48C4] = v2;
        v4 = (char *)(v3 + 8);
        v5 = v10 - v4;
        do
        {
          v6 = *v4;
          v4[v5] = *v4;
          ++v4;
        }
        while ( v6 );
        ++dword_8A48C4;
        v10 += 12;
      }
      ++v9;
      ++v8;
      ++v2;
    }
    while ( v2 < *(__int16 *)(v1 + 64) );
  }
  sub_481A70(dword_8A48C4);
  return sub_482120(*(__int16 *)(dword_8A5CE0 + 7498), *(__int16 *)(dword_8A5CE0 + 1164) - 10);
}
