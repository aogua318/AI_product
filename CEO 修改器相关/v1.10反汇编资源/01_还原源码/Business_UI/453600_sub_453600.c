// 函数 0x453600  sub_453600  size=0x6E  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_453600(int a1, int a2)
{
  int v2; // eax
  int result; // eax

  if ( !a2 )
  {
    sub_435570(1, 0);
    v2 = *(_DWORD *)(dword_8BF328 + 52);
    dword_8BE038 = word_8BDAB8[v2];
    dword_8BE034 = v2;
    sub_47FF50((char *)&unk_8BD8D0 + 20 * v2);
    sub_482060(dword_8BF458);
    sub_482060(dword_8BF328);
    return sub_452950(1);
  }
  return result;
}
