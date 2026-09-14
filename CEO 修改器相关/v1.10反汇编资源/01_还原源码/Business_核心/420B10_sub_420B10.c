// 函数 0x420b10  sub_420B10  size=0x218  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_420B10(int a1)
{
  unsigned __int8 *v1; // esi
  unsigned __int8 v2; // al
  int v3; // edi
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  __int16 v7; // ax

  if ( !sub_464E10(a1) )
    return 0;
  v1 = (unsigned __int8 *)(dword_4D0BAC + a1 * dword_4D0B98);
  sub_433170((char)v1[2]);
  v2 = v1[3];
  if ( v2 != 5 )
  {
    v3 = dword_4CCAAC + dword_4CCA98 * *((__int16 *)v1 + 2);
    v4 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v3 + 2 * *v1 + 240);
    if ( v2 == 2 )
    {
      v5 = dword_4CD11C;
      *(_BYTE *)(v4 + 8) &= ~1u;
      --*(_WORD *)(v4 + 26);
      *(_DWORD *)(v4 + 36) = v5;
      v6 = v1[10] == 3
         ? *(char *)(dword_4C4364 * *((__int16 *)v1 + 6) + dword_4C4378 + 10)
         : *(unsigned __int8 *)(v4 + 1256);
      --*(_WORD *)(v3 + 766);
      --*(_WORD *)(v3 + 2 * v6 + 784);
      if ( *((_DWORD *)v1 + 5) == *(_DWORD *)(*(_DWORD *)dword_870814 + 72 * *v1 + 24) )
        --*(_WORD *)(v4 + 28);
    }
    if ( v1[3] <= 2u )
      sub_415060((char *)v4, -*((_DWORD *)v1 + 5), (char)v1[2], 0);
    switch ( v1[10] )
    {
      case 0u:
        *(_WORD *)(dword_4D0C84 + dword_4D0C70 * *((__int16 *)v1 + 6) + 130) = -1;
        sub_426B30(1);
        break;
      case 1u:
        *(_WORD *)(dword_4D10A8 + dword_4D1094 * *((__int16 *)v1 + 6) + 20) = -1;
        sub_42C3E0(0, 1);
        break;
      case 3u:
        *(_WORD *)(dword_4C4364 * *((__int16 *)v1 + 6) + dword_4C4378 + 2) = -1;
        break;
      case 6u:
        sub_430AF0(a1);
        break;
      default:
        break;
    }
    switch ( v1[11] )
    {
      case 3u:
        *(_WORD *)(dword_4C4364 * *((__int16 *)v1 + 7) + dword_4C4378 + 2) = -1;
        break;
      case 6u:
        sub_430AF0(a1);
        break;
      case 7u:
        *(_WORD *)(dword_870854 * *((__int16 *)v1 + 7) + dword_870868 + 10) = -1;
        break;
    }
    v7 = *((_WORD *)v1 + 3);
    if ( v7 != -1 )
    {
      sub_4864E0(v7);
      sub_4864E0(*((__int16 *)v1 + 4));
    }
  }
  return 1;
}
