// 函数 0x4420b0  sub_4420B0  size=0x14F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4420B0(int a1, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  __int16 *v9; // esi

  result = a2 - 16;
  switch ( a2 )
  {
    case 16:
      v3 = dword_4CC8D0 + dword_4B37E0 * dword_4CC8BC;
      v4 = *(char *)(v3 + 10) + 1;
      if ( v4 > 2 )
        LOBYTE(v4) = 0;
      v5 = dword_4CD11C;
      *(_BYTE *)(v3 + 8) &= ~1u;
      *(_DWORD *)(v3 + 36) = v5;
      *(_BYTE *)(v3 + 10) = v4;
      return sub_4418B0();
    case 17:
      v9 = (__int16 *)(dword_4CC8D0 + dword_4B37E0 * dword_4CC8BC);
      if ( sub_415A00(v9) )
        sub_415A60(v9);
      else
        sub_415B70(v9);
      return sub_4418B0();
    case 18:
      v6 = dword_4CC8D0 + dword_4B37E0 * dword_4CC8BC;
      v7 = *(char *)(v6 + 9) + 1;
      if ( v7 > 2 )
        LOBYTE(v7) = 0;
      v8 = dword_4CD11C;
      *(_BYTE *)(v6 + 8) &= ~1u;
      *(_DWORD *)(v6 + 36) = v8;
      *(_BYTE *)(v6 + 9) = v7;
      return sub_4418B0();
    case 19:
      if ( !dword_8A6828 )
        return sub_4830A0(&unk_8A6708);
      dword_4B37DC = 1;
      sub_482F10(724, 270);
      return sub_4830C0(&unk_8A6708);
    case 20:
      if ( !dword_8A6828 )
        return sub_4830A0(&unk_8A6708);
      dword_4B37DC = 2;
      sub_482F10(724, 295);
      return sub_4830C0(&unk_8A6708);
    case 46:
      result = dword_4B37E0 * dword_4CC8BC;
      *(_BYTE *)(dword_4B37E0 * dword_4CC8BC + dword_4CC8D0 + 11) = *(_BYTE *)(dword_8A6960 + 13284);
      return result;
    case 51:
      return sub_43F830(-1, dword_4B37C8);
    default:
      return result;
  }
}
