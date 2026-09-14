// 函数 0x47fd50  sub_47FD50  size=0x15B  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_47FD50(int this)
{
  int *v2; // eax
  int *v4; // eax
  int v5[4]; // [esp+8h] [ebp-10h] BYREF

  sub_464B60(v5);
  v2 = sub_47F9F0((__int16 *)this);
  v5[0] = *v2;
  v5[1] = v2[1];
  v5[2] = v2[2];
  v5[3] = v2[3];
  if ( !dword_8F2AB8 )
  {
    if ( sub_464B90(v5, dword_8EED88, dword_8EED8C) )
      *(_WORD *)(*(_DWORD *)this + 300) = (this - *(_DWORD *)(*(_DWORD *)this + 296)) / 0x120u;
    return 0;
  }
  if ( dword_8F2AB8 != 1 )
  {
    if ( dword_8F2AB8 == 5 && dword_8F2AC8 == this && !*(_BYTE *)(dword_8F2AC8 + 26) )
    {
      if ( !*(_WORD *)(*(_DWORD *)this + 302) )
      {
        dword_8F2AC8 = 0;
        sub_47C950(v5);
      }
      dword_8EED70 = 0;
      *(_BYTE *)(this + 7) = 1;
      return 0;
    }
    return 0;
  }
  if ( !sub_464B90(v5, dword_8EED88, dword_8EED8C) )
  {
    if ( dword_8F2AC8 == this && !*(_WORD *)(*(_DWORD *)this + 302) )
    {
      dword_8F2AC8 = 0;
      sub_47C950(v5);
      return 0;
    }
    return 0;
  }
  if ( dword_8F2AC8 == this || (*(_BYTE *)(this + 27) & 1) == 0 )
    return 0;
  if ( dword_8F2AC8 )
  {
    v4 = sub_47F9F0((__int16 *)dword_8F2AC8);
    sub_47C950(v4);
  }
  dword_8F2AC8 = this;
  sub_47C950(v5);
  dword_8EED70 = 0;
  return 0;
}
