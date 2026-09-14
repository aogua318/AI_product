// 函数 0x47f2c0  sub_47F2C0  size=0x13E  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_47F2C0(int this, HWND a2)
{
  HWND result; // eax
  int *v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // ebx
  int v8; // eax
  __int16 *v9; // edi
  __int16 v10; // ax
  __int16 *v11; // ecx
  int *v12; // eax
  int *v13; // eax
  int v14; // [esp+8h] [ebp-4h]
  int v15; // [esp+14h] [ebp+8h]
  int v16; // [esp+14h] [ebp+8h]

  result = (HWND)((*(unsigned __int8 *)(this + 9) >> 1) & 1);
  if ( result != a2 && *(_BYTE *)(this + 8) != 0xFF )
  {
    v4 = sub_47EEA0((__int16 *)this);
    sub_47C950(v4);
    v5 = *(__int16 *)(*(_DWORD *)this + 292);
    v6 = *(_DWORD *)(*(_DWORD *)this + 296);
    v15 = 0;
    v7 = ((unsigned __int8)~*(_BYTE *)(this + 9) >> 1) & 1;
    if ( v5 > 0 )
    {
      v8 = v6 + 4;
      v14 = *(__int16 *)(*(_DWORD *)this + 292);
      do
      {
        if ( (*(_WORD *)v8 == 3 || *(_WORD *)v8 == 1) && *(_BYTE *)(v8 + 4) == *(_BYTE *)(this + 8) )
          ++v15;
        v8 += 288;
        --v14;
      }
      while ( v14 );
      if ( v15 == 1 )
      {
        *(_BYTE *)(this + 9) ^= (*(_BYTE *)(this + 9) ^ (2 * ((~*(_BYTE *)(this + 9) & 2) != 0))) & 2;
LABEL_26:
        v13 = sub_47EEA0((__int16 *)this);
        return sub_47C950(v13);
      }
      v6 = *(_DWORD *)(*(_DWORD *)this + 296);
    }
    if ( v7 )
    {
      v16 = 0;
      if ( v5 > 0 )
      {
        v9 = (__int16 *)(v6 + 4);
        do
        {
          v10 = *v9;
          if ( (*v9 == 3 || v10 == 1) && *((_BYTE *)v9 + 4) == *(_BYTE *)(this + 8) )
          {
            *((_BYTE *)v9 + 5) &= ~2u;
            if ( v9 - 2 != (__int16 *)this )
            {
              v11 = v9 - 2;
              if ( v10 == 3 )
                v12 = sub_47EEA0(v11);
              else
                v12 = sub_47E590(v11);
              sub_47C950(v12);
            }
          }
          v9 += 144;
          ++v16;
        }
        while ( v16 < *(__int16 *)(*(_DWORD *)this + 292) );
      }
      *(_BYTE *)(this + 9) ^= (*(_BYTE *)(this + 9) ^ (2 * v7)) & 2;
    }
    goto LABEL_26;
  }
  return result;
}
