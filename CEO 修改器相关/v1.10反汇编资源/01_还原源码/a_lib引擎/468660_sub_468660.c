// 函数 0x468660  sub_468660  size=0xBE  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char __cdecl sub_468660(int a1, unsigned __int8 *a2, int a3)
{
  int v3; // eax
  int v5; // edx
  int v6; // ebx
  int v7; // ecx
  int v9; // [esp+4h] [ebp-4h]
  int v10; // [esp+18h] [ebp+10h]

  LOBYTE(v3) = a3;
  if ( a3 > 0 )
  {
    v9 = a3;
    do
    {
      v5 = a2[3];
      v6 = a2[2];
      v10 = *a2;
      LOBYTE(v7) = a2[1];
      LOBYTE(v3) = (_BYTE)a2 + 4;
      a2 += 4;
      if ( v5 )
      {
        if ( v5 == 255 )
        {
          LOBYTE(v3) = v10;
        }
        else
        {
          v6 = (((unsigned __int8)BYTE2(*(_DWORD *)a1) << 8) + ++v5 * (v6 - (unsigned __int8)BYTE2(*(_DWORD *)a1))) >> 8;
          v7 = (v5 * ((unsigned __int8)v7 - (unsigned __int8)BYTE1(*(_DWORD *)a1))
              + ((unsigned __int8)BYTE1(*(_DWORD *)a1) << 8)) >> 8;
          v3 = (((unsigned __int8)*(_DWORD *)a1 << 8) + v5 * (v10 - (unsigned __int8)*(_DWORD *)a1)) >> 8;
          LOBYTE(v5) = v5 - 1;
        }
        *(_BYTE *)a1 = v3;
        *(_BYTE *)(a1 + 1) = v7;
        *(_BYTE *)(a1 + 2) = v6;
        if ( *(_BYTE *)(a1 + 3) < (unsigned __int8)v5 )
          *(_BYTE *)(a1 + 3) = v5;
      }
      a1 += 4;
      --v9;
    }
    while ( v9 );
  }
  return v3;
}
