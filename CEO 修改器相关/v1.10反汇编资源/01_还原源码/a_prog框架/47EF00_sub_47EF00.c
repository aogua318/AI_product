// 函数 0x47ef00  sub_47EF00  size=0x10C  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char __thiscall sub_47EF00(int this, _DWORD *a2, _DWORD *a3)
{
  int v3; // eax
  char v4; // dl
  char v5; // dl

  if ( *(_WORD *)(this + 272) )
  {
    LOBYTE(v3) = (_BYTE)a2;
    *a2 = *(__int16 *)(this + 278);
    *a3 = -1;
    v5 = *(_BYTE *)(this + 9);
    if ( (v5 & 1) != 0 )
    {
      LOBYTE(v3) = (v5 & 8) != 0;
      if ( (v5 & 8) != 0 && (v5 & 4) != 0 )
      {
        *a3 = *(__int16 *)(this + 282);
      }
      else if ( (v5 & 2) != 0 )
      {
        *a3 = *(__int16 *)(this + 284);
      }
      else if ( (v5 & 8) != 0 || (v5 & 4) == 0 )
      {
        *a3 = *(__int16 *)(this + 276);
      }
      else
      {
        v3 = *(__int16 *)(this + 280);
        *a3 = v3;
      }
    }
    else
    {
      *a3 = *(__int16 *)(this + 286);
    }
  }
  else
  {
    v3 = *(__int16 *)(this + 276);
    *a3 = v3;
    *a2 = -1;
    v4 = *(_BYTE *)(this + 9);
    if ( (v4 & 1) != 0 )
    {
      LOBYTE(v3) = (v4 & 8) != 0;
      if ( (v4 & 8) != 0 && (v4 & 4) != 0 )
      {
        v3 = *(__int16 *)(this + 282);
        *a2 = v3;
      }
      else if ( (v4 & 2) != 0 )
      {
        *a2 = *(__int16 *)(this + 284);
      }
      else if ( (v4 & 8) != 0 || (v4 & 4) == 0 )
      {
        v3 = *(__int16 *)(this + 278);
        *a2 = v3;
      }
      else
      {
        *a2 = *(__int16 *)(this + 280);
      }
    }
    else
    {
      *a2 = *(__int16 *)(this + 286);
    }
  }
  return v3;
}
