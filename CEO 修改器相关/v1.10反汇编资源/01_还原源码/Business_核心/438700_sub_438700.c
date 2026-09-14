// 函数 0x438700  sub_438700  size=0x112  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int __cdecl sub_438700(unsigned int *a1, unsigned int *a2, int *a3)
{
  int *v3; // eax
  unsigned int *v4; // ebx
  unsigned int *v5; // edi
  int v6; // esi
  int v7; // ecx
  unsigned int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // esi
  unsigned int v13; // edx
  unsigned int result; // eax
  int v15; // [esp+14h] [ebp-4h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  while ( 1 )
  {
    v6 = *v3;
    v15 = *v3;
    v7 = *v3 - 2 + (*v3 - 2 < 0 ? 4 : 0);
    v8 = *v5;
    v9 = *v4;
    v10 = v8 + dword_4B32D0[2 * v7];
    v11 = v9 + dword_4B32D4[2 * v7];
    if ( v10 >= dword_4D0E80 || v11 >= dword_4D0E84 )
      goto LABEL_6;
    if ( *(__int16 *)(dword_4D0EE4 + 2 * (v10 + v11 * dword_4D0E80)) > 0 )
      break;
    v6 = v15;
LABEL_6:
    v12 = v6 - 1 + (v6 - 1 < 0 ? 4 : 0);
    v13 = v9 + dword_4B32D4[2 * v12];
    result = v8 + dword_4B32D0[2 * v12];
    if ( result >= dword_4D0E80
      || v13 >= dword_4D0E84
      || *(__int16 *)(dword_4D0EE4 + 2 * (result + v13 * dword_4D0E80)) <= 0 )
    {
      v12 = v15 + 1;
      if ( v15 + 1 > 3 )
        v12 = v15 - 3;
      v13 = v9 + dword_4B32D4[2 * v12];
      result = v8 + dword_4B32D0[2 * v12];
      if ( result >= dword_4D0E80
        || v13 >= dword_4D0E84
        || *(__int16 *)(dword_4D0EE4 + 2 * (result + v13 * dword_4D0E80)) <= 0 )
      {
        return result;
      }
    }
    v5 = a1;
    v4 = a2;
    *a1 = result;
    *a2 = v13;
    v3 = a3;
    *a3 = v12 - 2 + (v12 - 2 < 0 ? 4 : 0);
  }
  *a1 = v10;
  *a2 = v11;
  return (unsigned int)a2;
}
