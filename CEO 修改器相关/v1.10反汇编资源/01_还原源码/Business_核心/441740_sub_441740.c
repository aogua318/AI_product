// 函数 0x441740  sub_441740  size=0xA3  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_441740(int a1, unsigned int a2)
{
  int v2; // esi

  v2 = dword_4CC8D0 + dword_4B37E0 * dword_4CC8BC;
  if ( a2 <= 7 )
  {
    sub_4830A0(&unk_8A6708);
    if ( dword_4B37DC == 1 )
    {
      sub_415D70((__int16 *)v2, a2);
      sub_4830A0(a1);
      sub_47E650(*(unsigned __int8 *)(v2 + 1256) + 25);
LABEL_4:
      sub_43FB00();
      return;
    }
    if ( dword_4B37DC == 2 )
    {
      *(_BYTE *)(v2 + 1257) = a2;
      sub_4830A0(a1);
      sub_47E650(*(unsigned __int8 *)(v2 + 1257) + 25);
      goto LABEL_4;
    }
  }
}
