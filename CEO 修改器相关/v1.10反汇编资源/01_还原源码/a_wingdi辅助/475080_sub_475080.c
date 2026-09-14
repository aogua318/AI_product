// 函数 0x475080  sub_475080  size=0x1A9  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_475080(_DWORD *a1, void *a2, size_t a3, int a4, int a5, _DWORD *a6)
{
  char v7; // bl
  char v8; // al
  int v9; // ebx
  _DWORD *v10; // ecx
  int v11; // edx
  signed int v12; // edi
  int v13; // eax
  char v14; // [esp+0h] [ebp-4h]

  dword_8F61A0 = (int)a1;
  if ( a5 < 4608 )
  {
    sub_4753F0("Not enough output buffer space\n", v14);
    return -1;
  }
  if ( a2 && !sub_474F20(a3, a1, a2) )
    return -1;
  if ( !a1[3] )
  {
    while ( (int)a1[2] >= 4 )
    {
      v7 = sub_474FF0();
      v8 = sub_474FF0();
      if ( v7 == -1 && (v8 & 0xF0) == 0xF0 )
      {
        *(_DWORD *)(a1[1] + 8) -= 2;
        sub_475040((int)a1);
        sub_474BE0(255, a1 + 5, a1[3485]);
        a1[3] = a1[26];
      }
      else
      {
        --*(_DWORD *)(a1[1] + 8);
      }
      if ( a1[3] )
        goto LABEL_13;
    }
    return 1;
  }
LABEL_13:
  if ( a1[26] > a1[2] )
    return 1;
  dword_8F61A8 = &a1[576 * a1[3486] + 155];
  v9 = 0;
  a1[3486] = ((unsigned __int8)a1[3486] - 1) & 1;
  dword_8F61A4 = 0;
  while ( v9 < a1[3] )
  {
    v10 = (_DWORD *)a1[1];
    v11 = v10[2];
    v12 = a1[3] - v9;
    if ( v12 > v10[1] - v11 )
      v12 = v10[1] - v11;
    memcpy((char *)dword_8F61A8 + v9, (const void *)(v11 + *v10), v12);
    *(_DWORD *)(a1[1] + 8) += v12;
    v13 = a1[1];
    a1[2] -= v12;
    v9 += v12;
    if ( *(_DWORD *)(v13 + 8) == *(_DWORD *)(v13 + 4) )
      sub_474FB0(a1);
  }
  *a6 = 0;
  if ( a1[16] )
    sub_474DE0(16);
  switch ( a1[15] )
  {
    case 1:
      sub_47A7B0(a1 + 5, a4, a6);
      break;
    case 2:
      sub_475B80(a1 + 5, a4, a6);
      break;
    case 3:
      sub_4790C0(a1 + 5, a4, a6);
      break;
  }
  a1[4] = a1[3];
  a1[3] = 0;
  return 0;
}
