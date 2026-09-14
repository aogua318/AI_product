// 函数 0x481b10  sub_481B10  size=0x166  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_481B10(int this)
{
  int result; // eax
  char v3; // al
  bool v4; // zf
  char v5; // al
  char v6; // al
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // edi
  int v13; // ebx
  int *v14; // eax
  _DWORD v15[5]; // [esp+4h] [ebp-14h] BYREF

  sub_464B60(v15);
  if ( !dword_8F2AB8 )
    goto LABEL_7;
  if ( dword_8F2AB8 == 1 )
  {
    v3 = *(_BYTE *)(this + 17);
    if ( (v3 & 2) == 0 )
      return 0;
    *(_BYTE *)(this + 17) = v3 | 4;
LABEL_7:
    v4 = !sub_480E60((__int16 *)this, dword_8EED88, dword_8EED8C);
    v5 = *(_BYTE *)(this + 17);
    if ( v4 )
    {
      if ( (v5 & 2) != 0 )
        *(_BYTE *)(this + 17) = v5 & 0xFD;
    }
    else
    {
      if ( (v5 & 2) == 0 )
        *(_BYTE *)(this + 17) = v5 | 2;
      *(_WORD *)(*(_DWORD *)this + 300) = (this - *(_DWORD *)(*(_DWORD *)this + 296)) / 0x120u;
    }
    v6 = *(_BYTE *)(this + 17);
    if ( (v6 & 4) != 0 && (v6 & 1) != 0 )
    {
      v7 = *(__int16 *)(this + 8) + *(__int16 *)(*(_DWORD *)this + 276);
      v8 = *(__int16 *)(this + 10) + *(__int16 *)(*(_DWORD *)this + 278);
      switch ( *(_BYTE *)(this + 16) )
      {
        case 0:
          v9 = *(__int16 *)(this + 12);
          v10 = dword_8EED88 - v7;
          goto LABEL_17;
        case 1:
          v12 = *(__int16 *)(this + 14);
          v13 = v8 + v12 - dword_8EED8C;
          goto LABEL_19;
        case 2:
          v9 = *(__int16 *)(this + 12);
          v10 = v7 + v9 - dword_8EED88;
LABEL_17:
          v11 = (*(_DWORD *)(this + 32) * v10 + v9 / 2) / v9;
          break;
        case 3:
          v12 = *(__int16 *)(this + 14);
          v13 = dword_8EED8C - v8;
LABEL_19:
          v11 = (*(_DWORD *)(this + 32) * v13 + v12 / 2) / v12;
          break;
        default:
          v11 = v15[4];
          break;
      }
      if ( v11 < 0 )
        v11 = 0;
      if ( v11 > *(_DWORD *)(this + 32) )
        v11 = *(_DWORD *)(this + 32);
      if ( *(_DWORD *)(this + 36) != v11 )
      {
        *(_DWORD *)(this + 36) = v11;
        v14 = sub_480990((__int16 *)this);
        sub_47C950(v14);
        dword_8EED70 = 0;
        *(_BYTE *)(this + 7) = 1;
      }
    }
    return 0;
  }
  result = dword_8F2AB8 - 2;
  if ( dword_8F2AB8 == 2 )
  {
    *(_BYTE *)(this + 17) &= ~4u;
    return result;
  }
  return 0;
}
