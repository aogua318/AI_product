// 函数 0x4816c0  sub_4816C0  size=0x220  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4816C0(int this)
{
  int *v2; // eax
  char v3; // bl
  unsigned int v4; // eax
  char v6; // bl
  BOOL v7; // eax
  char v8; // bl
  int v9[4]; // [esp+4h] [ebp-20h] BYREF
  int v10; // [esp+14h] [ebp-10h] BYREF
  int v11; // [esp+18h] [ebp-Ch] BYREF
  int v12; // [esp+1Ch] [ebp-8h] BYREF
  int v13; // [esp+20h] [ebp-4h] BYREF

  sub_464B60(v9);
  if ( (*(_BYTE *)(this + 9) & 1) == 0 )
    return 0;
  v2 = sub_47EEA0((__int16 *)this);
  v9[0] = *v2;
  v9[1] = v2[1];
  v9[2] = v2[2];
  v9[3] = v2[3];
  if ( dword_8F2AB8 )
  {
    if ( dword_8F2AB8 != 1 )
    {
      if ( dword_8F2AB8 == 2 )
      {
        v3 = *(_BYTE *)(this + 9);
        if ( (v3 & 8) != 0 )
        {
          sub_47EF00(this, &v13, &v11);
          *(_BYTE *)(this + 9) = v3 & 0xF7;
          dword_8EED70 = 0;
          v4 = *(unsigned __int8 *)(this + 9);
          if ( (v4 & 4) != 0 )
          {
            LOBYTE(v4) = ~(_BYTE)v4;
            *(_BYTE *)(this + 7) = 1;
            sub_47F2C0(this, (HWND)((v4 >> 1) & 1));
          }
          sub_47EF00(this, &v12, &v10);
          if ( v13 != v12 || v11 != v10 )
          {
            sub_47C950(v9);
            return 0;
          }
        }
      }
      return 0;
    }
    v6 = *(_BYTE *)(this + 9);
    if ( (v6 & 4) != 0 )
    {
      if ( *(_WORD *)(this + 282) == 0xFFFF )
      {
        dword_8EED70 = 0;
        *(_BYTE *)(this + 7) = 1;
        return 0;
      }
      else
      {
        sub_47EF00(this, &v13, &v11);
        *(_BYTE *)(this + 9) = v6 | 8;
        sub_47EF00(this, &v12, &v10);
        if ( v13 != v12 || v11 != v10 )
          sub_47C950(v9);
        dword_8EED70 = 0;
        return 0;
      }
    }
    return 0;
  }
  v7 = sub_464B90(v9, dword_8EED88, dword_8EED8C);
  v8 = *(_BYTE *)(this + 9);
  if ( !v7 )
  {
    if ( (v8 & 4) != 0 )
    {
      sub_47EF00(this, &v13, &v11);
      *(_BYTE *)(this + 9) = v8 & 0xFB;
      sub_47EF00(this, &v12, &v10);
      if ( v13 != v12 || v11 != v10 )
        sub_47C950(v9);
    }
    return 0;
  }
  if ( (v8 & 4) == 0 )
  {
    sub_47EF00(this, &v13, &v11);
    *(_BYTE *)(this + 9) = v8 | 4;
    sub_47EF00(this, &v12, &v10);
    if ( v13 != v12 || v11 != v10 )
      sub_47C950(v9);
  }
  *(_WORD *)(*(_DWORD *)this + 300) = (this - *(_DWORD *)(*(_DWORD *)this + 296)) / 0x120u;
  return 0;
}
