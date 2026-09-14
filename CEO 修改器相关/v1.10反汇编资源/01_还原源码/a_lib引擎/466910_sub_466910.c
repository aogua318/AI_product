// 函数 0x466910  sub_466910  size=0x10C  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_466910(__int16 *a1, int a2, int a3)
{
  __int16 *v3; // esi
  int v4; // eax
  __int16 v5; // di
  int v6; // [esp+Ch] [ebp-4h]
  __int16 v7; // [esp+20h] [ebp+10h]

  if ( a3 > 0 )
  {
    v3 = a1;
    v4 = a2 - (_DWORD)a1;
    v6 = a3;
    while ( 1 )
    {
      v5 = *(__int16 *)((char *)v3 + v4);
      v7 = *v3;
      *v3++ = (dword_8DBD00 * (v5 & 0x7C00) / 256 + (256 - dword_8DBD00) * (v7 & 0x7C00) / 256) & 0x7C00
            | ((unsigned __int8)(dword_8DBD00 * (v5 & 0x1F) / 256)
             + (unsigned __int8)((256 - dword_8DBD00) * (v7 & 0x1F) / 256))
            & 0x1F
            | (dword_8DBD00 * (v5 & 0x3E0) / 256 + (256 - dword_8DBD00) * (v7 & 0x3E0) / 256) & 0x3E0;
      if ( !--v6 )
        break;
      v4 = a2 - (_DWORD)a1;
    }
  }
}
