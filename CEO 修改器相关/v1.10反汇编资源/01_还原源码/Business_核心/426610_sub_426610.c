// 函数 0x426610  sub_426610  size=0xD3  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_426610(int a1)
{
  __int16 *v1; // ecx
  char v2; // dl
  int v3; // esi
  _DWORD *v4; // ebx
  __int16 *v5; // eax
  int v6; // eax
  int v7; // edi
  bool v8; // zf
  int v9; // [esp+0h] [ebp-4h]
  __int16 *v10; // [esp+Ch] [ebp+8h]

  v1 = (__int16 *)(dword_4D0C84 + a1 * dword_4D0C70);
  v2 = *((_BYTE *)v1 + 128);
  if ( v2 != -1 )
  {
    v3 = dword_4CCAAC + dword_4CCA98 * v1[1];
    v4 = v1 + 66;
    v5 = (__int16 *)(*(_DWORD *)dword_87081C
                   + 116
                   * *(__int16 *)(*(_DWORD *)dword_4D0C94
                                + 2 * (v2 + 34 * *(char *)(388 * *v1 + *(_DWORD *)dword_4D0C8C + 78))
                                + 24)
                   + 20);
    v10 = v5;
    v9 = 4;
    do
    {
      v6 = *v5;
      if ( v6 != -1 )
      {
        v7 = *(__int16 *)(v3 + 2 * v6 + 240);
        if ( v7 != -1 )
          sub_415C20(dword_4CC8D0 + v7 * dword_4CC8BC, *v4 / 100);
      }
      v5 = v10 + 1;
      ++v4;
      v8 = v9-- == 1;
      ++v10;
    }
    while ( !v8 );
  }
}
