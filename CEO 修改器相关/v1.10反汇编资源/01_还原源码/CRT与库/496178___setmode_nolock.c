// 函数 0x496178  __setmode_nolock  size=0xBB  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _setmode_nolock(int a1, int a2)
{
  int *v2; // edx
  int v3; // esi
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  _BYTE *v7; // ecx
  char v8; // dl

  v2 = &dword_8F61C0[a1 >> 5];
  v3 = (a1 & 0x1F) << 6;
  v4 = v3 + *v2;
  v5 = *(_BYTE *)(v4 + 4) & 0x80;
  v6 = (char)(2 * *(_BYTE *)(v4 + 36)) >> 1;
  if ( a2 == 0x4000 )
  {
    *(_BYTE *)(v4 + 4) |= 0x80u;
    *(_BYTE *)(*v2 + v3 + 36) &= 0x80u;
  }
  else if ( a2 == 0x8000 )
  {
    *(_BYTE *)(v4 + 4) &= ~0x80u;
  }
  else
  {
    if ( a2 == 0x10000 || a2 == 0x20000 )
    {
      *(_BYTE *)(v4 + 4) |= 0x80u;
      v7 = (_BYTE *)(*v2 + v3 + 36);
      v8 = *v7 & 0x80 | 2;
    }
    else
    {
      if ( a2 != 0x40000 )
        goto LABEL_11;
      *(_BYTE *)(v4 + 4) |= 0x80u;
      v7 = (_BYTE *)(*v2 + v3 + 36);
      v8 = *v7 & 0x80 | 1;
    }
    *v7 = v8;
  }
LABEL_11:
  if ( v5 )
    return v6 != 0 ? 0x10000 : 0x4000;
  else
    return 0x8000;
}
