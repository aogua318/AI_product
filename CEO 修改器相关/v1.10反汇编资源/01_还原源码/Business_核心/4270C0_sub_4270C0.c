// 函数 0x4270c0  sub_4270C0  size=0x12A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __thiscall sub_4270C0(__int16 *this)
{
  int v2; // ebx
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // [esp+4h] [ebp-8h]
  __int16 *v12; // [esp+8h] [ebp-4h]

  if ( (*(_BYTE *)(this + 9) & 1) != 0 )
  {
    v2 = *(_DWORD *)dword_87081C
       + 116
       * *(__int16 *)(*(_DWORD *)dword_4D0C94
                    + 2 * (*((char *)this + 128) + 34 * *(char *)(388 * *this + *(_DWORD *)dword_4D0C8C + 78))
                    + 24);
    v3 = dword_4CCAAC + dword_4CCA98 * *(this + 1);
    v12 = (__int16 *)(v2 + 20);
    v11 = 4;
    do
    {
      v4 = *v12;
      if ( v4 != -1 && *(_WORD *)(v3 + 2 * v4 + 240) == 0xFFFF )
      {
        v5 = dword_4CC8D0 + sub_414D20(*(this + 1), *v12) * dword_4CC8BC;
        v6 = dword_4CD11C;
        *(_BYTE *)(v5 + 8) &= ~1u;
        *(_DWORD *)(v5 + 36) = v6;
        LOBYTE(v6) = *(_BYTE *)(v5 + 8);
        *(_BYTE *)(v5 + 9) = 0;
        *(_DWORD *)(v5 + 36) = dword_4CD11C;
        *(_BYTE *)(v5 + 8) = v6 & 0xFE;
        *(_BYTE *)(v5 + 10) = 2;
      }
      ++v12;
      --v11;
    }
    while ( v11 );
    v7 = *(unsigned __int8 *)(v2 + 1);
    if ( *(_WORD *)(v3 + 2 * v7 + 240) == 0xFFFF )
    {
      v8 = sub_414D20(*(this + 1), v7);
      v9 = dword_4CD11C;
      v10 = dword_4CC8D0 + v8 * dword_4CC8BC;
      *(_BYTE *)(v10 + 8) &= ~1u;
      LOBYTE(v8) = *(_BYTE *)(v10 + 8);
      *(_DWORD *)(v10 + 36) = v9;
      *(_BYTE *)(v10 + 9) = 2;
      *(_DWORD *)(v10 + 36) = dword_4CD11C;
      *(_BYTE *)(v10 + 8) = v8 & 0xFE;
      *(_BYTE *)(v10 + 10) = 0;
    }
  }
}
