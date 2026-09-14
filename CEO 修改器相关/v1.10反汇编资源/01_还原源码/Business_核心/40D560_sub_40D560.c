// 函数 0x40d560  sub_40D560  size=0x132  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_40D560@<eax>(int *a1@<eax>)
{
  int v1; // ecx
  int v2; // edi
  int v4; // esi
  int v5; // edx
  int v6; // ebx
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  __int16 *v10; // edx
  _DWORD *v11; // esi
  __int16 v12; // cx
  int v13; // [esp+0h] [ebp-14h]
  int v14; // [esp+4h] [ebp-10h]
  int v15; // [esp+8h] [ebp-Ch]
  signed int v16; // [esp+Ch] [ebp-8h]
  unsigned int v17; // [esp+10h] [ebp-4h]

  v14 = *a1;
  if ( *a1 <= 0 )
    return 0;
  v1 = a1[1];
  if ( v1 <= 0 )
    return 0;
  v2 = a1[2];
  v16 = v2;
  if ( v2 >= dword_4D0E80 - 1 )
    return 0;
  v4 = a1[3];
  v13 = v4;
  if ( v4 < dword_4D0E84 - 1 )
  {
    v5 = a1[1];
    v17 = v5;
    if ( v1 > v4 )
      return 1;
    v6 = dword_4D0EE4;
    v7 = v1 * dword_4D0E80;
    v15 = v5 * dword_4D0E80;
    while ( 1 )
    {
      v8 = v14;
      if ( v14 <= v2 )
        break;
LABEL_21:
      v7 += dword_4D0E80;
      v17 = ++v5;
      v15 = v7;
      if ( v5 > v4 )
        return 1;
    }
    v9 = v14 + v7;
    v10 = (__int16 *)(v6 + 2 * v9);
    v11 = (_DWORD *)(dword_4D0EF4 + 4 * v9);
    while ( *v11 == -1 )
    {
      v12 = v8 >= dword_4D0E80 || v17 >= dword_4D0E84 ? -1 : *(__int16 *)((char *)v10 + dword_4D0EE0 - v6);
      if ( (unsigned __int16)word_870870[v12] != dword_870918 || v8 < dword_4D0E80 && v17 < dword_4D0E84 && *v10 > 0 )
        break;
      ++v8;
      ++v11;
      ++v10;
      if ( (int)v8 > v16 )
      {
        v6 = dword_4D0EE4;
        v4 = v13;
        v7 = v15;
        v2 = v16;
        v5 = v17;
        goto LABEL_21;
      }
    }
  }
  return 0;
}
