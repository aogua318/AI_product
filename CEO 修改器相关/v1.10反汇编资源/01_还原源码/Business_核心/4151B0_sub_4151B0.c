// 函数 0x4151b0  sub_4151B0  size=0x76  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __fastcall sub_4151B0(int a1)
{
  int v1; // esi
  int v2; // edx
  int v3; // edi
  char v4; // bl
  int v5; // eax
  int v7; // [esp+8h] [ebp-4h]

  v1 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(a1 + 2);
  v2 = *(__int16 *)(v1 + 238);
  v3 = 0;
  v7 = a1;
  if ( v2 != -1 )
  {
    v4 = *(_BYTE *)(a1 + 1256);
    do
    {
      v5 = dword_4CC8D0 + v2 * dword_4CC8BC;
      if ( *(_BYTE *)(v5 + 1256) == v4 )
      {
        v3 += *(__int16 *)(v5 + 34) + *(__int16 *)(v5 + 24);
        a1 = v7;
      }
      v2 = *(__int16 *)(v5 + 6);
    }
    while ( v2 != -1 );
  }
  return *(__int16 *)(v1 + 2 * *(unsigned __int8 *)(a1 + 1256) + 768) - v3;
}
