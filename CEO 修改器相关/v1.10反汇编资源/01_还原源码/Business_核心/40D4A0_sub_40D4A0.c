// 函数 0x40d4a0  sub_40D4A0  size=0xB1  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_40D4A0@<eax>(_DWORD *a1@<eax>)
{
  int v1; // edx
  int v3; // ebx
  int v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  _DWORD *v8; // edx
  __int16 *v9; // ecx
  int v10; // [esp+0h] [ebp-Ch]
  int v11; // [esp+4h] [ebp-8h]
  int v12; // [esp+8h] [ebp-4h]

  v1 = a1[1] - 1;
  if ( v1 < 0 )
    return 1;
  v11 = *a1 - 1;
  if ( v11 < 0 )
    return 1;
  v3 = dword_4D0E80;
  v4 = a1[2] + 1;
  if ( v4 >= dword_4D0E80 )
    return 1;
  v5 = a1[3] + 1;
  v10 = v5;
  if ( v5 >= dword_4D0E84 )
    return 1;
  v12 = a1[1] - 1;
  if ( v1 > v5 )
    return 0;
  v6 = v1 * dword_4D0E80;
  while ( 1 )
  {
    v7 = v11;
    if ( v11 <= v4 )
      break;
LABEL_15:
    ++v1;
    v6 += v3;
    v12 = v1;
    if ( v1 > v5 )
      return 0;
  }
  v8 = (_DWORD *)(dword_4D0EF4 + 4 * (v6 + v11));
  v9 = (__int16 *)(dword_4D0EE4 + 2 * (v6 + v11));
  while ( *v9 <= 0 && *v8 == -1 )
  {
    ++v7;
    ++v9;
    ++v8;
    if ( v7 > v4 )
    {
      v1 = v12;
      v3 = dword_4D0E80;
      v5 = v10;
      goto LABEL_15;
    }
  }
  return 1;
}
