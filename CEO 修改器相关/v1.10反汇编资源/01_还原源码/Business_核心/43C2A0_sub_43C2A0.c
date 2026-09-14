// 函数 0x43c2a0  sub_43C2A0  size=0x91  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43C2A0(int a1, unsigned int a2)
{
  int result; // eax
  int v3; // esi

  result = sub_4275A0((char *)(dword_4D0C84 + dword_4B1198 * dword_4D0C70));
  v3 = dword_4CC8D0
     + dword_4CC8BC * *(__int16 *)(dword_4CCAAC + dword_4B1028 * dword_4CCA98 + 2 * (result < 0 ? 0 : result) + 240);
  if ( a2 <= 7 )
  {
    sub_4830A0(&unk_8A0E48);
    sub_415D70((__int16 *)v3, a2);
    sub_4830A0(a1);
    return sub_47E650(*(unsigned __int8 *)(v3 + 1256) + 14);
  }
  return result;
}
