// 函数 0x480590  sub_480590  size=0x1B3  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_480590(__int16 *this)
{
  int v2; // ecx
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v8; // ecx
  unsigned int v9; // edi
  int v10; // eax
  int v11; // [esp+8h] [ebp-24h] BYREF
  int v12; // [esp+Ch] [ebp-20h]
  int v13; // [esp+10h] [ebp-1Ch]
  int v14; // [esp+14h] [ebp-18h]
  int v15; // [esp+18h] [ebp-14h] BYREF
  int v16; // [esp+1Ch] [ebp-10h]
  int v17; // [esp+20h] [ebp-Ch]
  int v18; // [esp+24h] [ebp-8h]
  int v19; // [esp+28h] [ebp-4h]

  sub_464B60(&v15);
  sub_464B60(&v11);
  v2 = *(_DWORD *)this;
  v3 = *(this + 6);
  v15 = *(this + 5) + *(__int16 *)(*(_DWORD *)this + 276);
  v4 = v3 + *(__int16 *)(v2 + 278);
  v5 = v15 + *(this + 7);
  v6 = v4 + *(this + 8);
  v16 = v4;
  v17 = v5;
  v18 = v6;
  if ( sub_464B90(&v15, dword_8EED88, dword_8EED8C) )
  {
    v11 = v15;
    v8 = *((unsigned __int8 *)this + 21);
    v9 = *((_DWORD *)this + 12);
    v13 = v17;
    v12 = v16;
    v14 = v8 + v16 + 1;
    v19 = 0;
    if ( (signed int)v9 < *((_DWORD *)this + 11) )
    {
      while ( !sub_464B90(&v11, dword_8EED88, dword_8EED8C) )
      {
        v10 = *((unsigned __int8 *)this + 20) + *((unsigned __int8 *)this + 21);
        v12 += v10;
        v14 += v10;
        if ( v14 > v18 )
          v14 = v18;
        if ( v12 < v18 && (signed int)++v9 < *((_DWORD *)this + 11) )
          continue;
        goto LABEL_12;
      }
      v19 = 1;
    }
LABEL_12:
    if ( v9 == -1 && *((_DWORD *)this + 14) != -1 )
    {
      *((_DWORD *)this + 14) = -1;
      sub_47C950(&v15);
      return 0;
    }
    if ( dword_8F2AB8 )
    {
      if ( dword_8F2AB8 == 1 && *((_DWORD *)this + 14) != -1 && v19 )
      {
        *((_DWORD *)this + 13) = v9;
        sub_47C950(&v15);
        dword_8EED70 = 0;
        *((_BYTE *)this + 7) = 1;
        return 0;
      }
    }
    else
    {
      if ( v9 < *((_DWORD *)this + 11) && *((_DWORD *)this + 14) != v9 && v19 )
      {
        *((_DWORD *)this + 14) = v9;
        sub_47C950(&v15);
      }
      if ( *((_DWORD *)this + 14) != -1 )
        *(_WORD *)(*(_DWORD *)this + 300) = ((unsigned int)this - *(_DWORD *)(*(_DWORD *)this + 296)) / 0x120;
    }
  }
  else if ( *((_DWORD *)this + 14) != -1 )
  {
    *((_DWORD *)this + 14) = -1;
    sub_47C950(&v15);
    return 0;
  }
  return 0;
}
