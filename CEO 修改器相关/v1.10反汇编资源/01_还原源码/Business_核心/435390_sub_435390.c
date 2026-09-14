// 函数 0x435390  sub_435390  size=0x101  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __thiscall sub_435390(void *this)
{
  _DWORD *v1; // edi
  int v2; // ebx
  __int16 *v3; // esi
  __int16 v4; // ax
  int v5; // [esp+0h] [ebp-8h] BYREF
  int v6; // [esp+4h] [ebp-4h] BYREF

  if ( dword_4C2D3C && !dword_4CE034 && sub_461900(this) && dword_4B1028 != -1 && (_DWORD *)dword_4C2D38 == dword_4D0E68 )
  {
    v1 = (_DWORD *)(dword_4CCAAC + dword_4B1028 * dword_4CCA98);
    v2 = 10;
    v3 = (__int16 *)v1 + 853;
    do
    {
      v4 = *(v3 - 41);
      if ( v4 > 0 )
        sub_487270(v4, *(v3 - 40), 226, 2);
      if ( *v3 > 0 )
        sub_487270(*(v3 - 1), *v3, 164, 2);
      v3 += 4;
      --v2;
    }
    while ( v2 );
    sub_419920(v1, &v5, &v6);
    sub_487270(v5, v6, 224, 5);
    sub_487270(v5, v6, 0, 3);
  }
}
