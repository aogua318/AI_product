// 函数 0x42c450  sub_42C450  size=0x75  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_42C450(__int16 *this, unsigned int a2, unsigned int a3, char a4, int a5)
{
  int v6; // ecx
  int v7; // eax

  v6 = *(this + 7);
  v7 = dword_4CCAAC + dword_4CCA98 * v6;
  if ( a2 >= *(_DWORD *)(v7 + 24) )
    return 0;
  if ( a3 >= *(_DWORD *)(v7 + 28) || !sub_42BC50(v6, a2, a3) )
    return 0;
  *this = a2;
  *(this + 1) = a3;
  *((_BYTE *)this + 8) = -1;
  sub_42C3E0((int)this, a5, 1);
  *((_BYTE *)this + 13) = a4;
  return 1;
}
