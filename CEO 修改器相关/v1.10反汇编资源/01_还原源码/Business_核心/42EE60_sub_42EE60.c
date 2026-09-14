// 函数 0x42ee60  sub_42EE60  size=0x9C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_42EE60(__int16 *this, int a2)
{
  int v2; // eax
  double v3; // st7
  int v4; // ebx
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // edx

  v2 = *(this + 44);
  v3 = 0.0;
  v4 = 0;
  if ( v2 == -1 )
    return 0;
  do
  {
    v5 = dword_4CCAAC + v2 * dword_4CCA98;
    v6 = *(__int16 *)(v5 + 2 * a2 + 240);
    if ( v6 != -1 )
    {
      v7 = dword_4CC8D0 + v6 * dword_4CC8BC;
      if ( *(_BYTE *)(v7 + 10) != 2 )
      {
        v8 = *(__int16 *)(v7 + 28);
        v4 += v8;
        v3 = v3 + (double)(*(_DWORD *)(v7 + 12) / 4) * (double)v8;
      }
    }
    v2 = *(__int16 *)(v5 + 1618);
  }
  while ( v2 != -1 );
  if ( !v4 )
    return 0;
  else
    return (int)(v3 / (double)v4);
}
