// 函数 0x45ada0  sub_45ADA0  size=0x164  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_45ADA0()
{
  unsigned int v0; // eax
  unsigned int v1; // [esp+4h] [ebp-8h] BYREF
  unsigned int v2; // [esp+8h] [ebp-4h] BYREF

  if ( dword_8CB0A8 )
  {
    sub_484120(dword_8EED88, dword_8EED8C, &v2, &v1);
    v0 = *(_DWORD *)(dword_4C2D38 + 24);
    if ( v2 < v0 && v1 < *(_DWORD *)(dword_4C2D38 + 28) )
    {
      switch ( *(_DWORD *)(dword_8CB1D8 + 340) )
      {
        case 0:
          if ( *(_WORD *)(dword_4D0E50 + 2 * *(__int16 *)(*(_DWORD *)(dword_4C2D38 + 120) + 2 * (v2 + v1 * v0))) )
            goto LABEL_14;
          break;
        case 1:
          if ( *(_WORD *)(dword_4D0E50 + 2 * *(__int16 *)(*(_DWORD *)(dword_4C2D38 + 120) + 2 * (v2 + v1 * v0))) != 1 )
            goto LABEL_8;
          break;
        case 2:
          if ( *(_WORD *)(dword_4D0E2C + 2 * *(__int16 *)(*(_DWORD *)(dword_4C2D38 + 124) + 2 * (v2 + v1 * v0))) != 2 )
            sub_488230(v2, v1, 2, 1);
          break;
        case 3:
          if ( *(_WORD *)(dword_4D0E2C + 2 * *(__int16 *)(*(_DWORD *)(dword_4C2D38 + 124) + 2 * (v2 + v1 * v0))) != 1 )
LABEL_8:
            sub_488230(v2, v1, 1, 1);
          break;
        case 4:
          if ( *(_WORD *)(dword_4D0E2C + 2 * *(__int16 *)(*(_DWORD *)(dword_4C2D38 + 124) + 2 * (v2 + v1 * v0))) )
LABEL_14:
            sub_488230(v2, v1, 0, 1);
          break;
        default:
          return;
      }
    }
  }
}
