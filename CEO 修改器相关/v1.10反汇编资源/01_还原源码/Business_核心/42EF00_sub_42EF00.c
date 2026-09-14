// 函数 0x42ef00  sub_42EF00  size=0x9D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_42EF00(__int16 *this, int a2)
{
  int v2; // eax
  int v3; // ebx
  int v4; // esi
  int v5; // eax
  int v6; // edi
  double v8; // [esp+4h] [ebp-Ch]
  int v9; // [esp+Ch] [ebp-4h]

  v2 = *(this + 44);
  v8 = 0.0;
  v3 = 0;
  if ( v2 == -1 )
    return 0;
  do
  {
    v4 = dword_4CCAAC + v2 * dword_4CCA98;
    v5 = *(__int16 *)(v4 + 2 * a2 + 240);
    if ( v5 != -1 )
    {
      v6 = dword_4CC8D0 + v5 * dword_4CC8BC;
      if ( sub_415AC0((__int16 *)v6) )
      {
        v9 = *(_DWORD *)(v6 + 20);
        v3 += v9;
        v8 = (double)*(int *)(v6 + 16) * (double)v9 + v8;
      }
    }
    v2 = *(__int16 *)(v4 + 1618);
  }
  while ( v2 != -1 );
  if ( !v3 )
    return 0;
  else
    return (int)(v8 / (double)v3);
}
