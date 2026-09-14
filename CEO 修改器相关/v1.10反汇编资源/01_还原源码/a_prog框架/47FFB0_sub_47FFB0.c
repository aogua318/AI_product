// 函数 0x47ffb0  sub_47FFB0  size=0x22C  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__thiscall sub_47FFB0(__int16 *this)
{
  int v2; // edi
  int v3; // ebx
  int *v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // eax
  int v10; // edx
  int v11; // ecx
  int *v12; // eax
  unsigned int v13; // edx
  int *v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int *v20; // eax
  int v22; // [esp-4h] [ebp-54h]
  int v23; // [esp-4h] [ebp-54h]
  _DWORD v24[3]; // [esp+Ch] [ebp-44h] BYREF
  int v25; // [esp+18h] [ebp-38h]
  int v26; // [esp+1Ch] [ebp-34h] BYREF
  int v27; // [esp+20h] [ebp-30h]
  int v28; // [esp+24h] [ebp-2Ch]
  int v29; // [esp+28h] [ebp-28h]
  int v30; // [esp+2Ch] [ebp-24h] BYREF
  int v31; // [esp+30h] [ebp-20h]
  int v32; // [esp+34h] [ebp-1Ch]
  int v33; // [esp+38h] [ebp-18h]
  int v34; // [esp+3Ch] [ebp-14h]
  unsigned int v35; // [esp+40h] [ebp-10h]
  unsigned int v36; // [esp+44h] [ebp-Ch]
  int v37; // [esp+48h] [ebp-8h]
  int v38; // [esp+4Ch] [ebp-4h]

  sub_464B60(v24);
  sub_464B60(&v26);
  sub_464B60(&v30);
  v2 = *(this + 5) + *(__int16 *)(*(_DWORD *)this + 276);
  v3 = *(this + 6) + *(__int16 *)(*(_DWORD *)this + 278);
  v22 = v3 + *(this + 8);
  v38 = v2 + *(this + 7);
  v37 = v22;
  v4 = sub_464D00(v2, v3, v38, v22);
  sub_464CE0(v24, v4);
  v5 = *((unsigned __int8 *)this + 21);
  v28 = v38;
  v6 = *(_DWORD *)this;
  v26 = v2;
  v27 = v3;
  v29 = v5 + v3 + 1;
  v7 = *(_DWORD *)(v6 + 16);
  if ( v7 )
  {
    v8 = *(this + 32);
    v9 = *(_DWORD *)(v7 + 8);
    v36 = v9;
    if ( v8 < v9 || *(this + 33) < v9 || *(this + 34) < v9 )
    {
      v34 = v5 + *((unsigned __int8 *)this + 20);
      sub_464CE0(&v30, &v26);
      if ( *(this + 32) < v36 )
      {
        v10 = v26 + *(this + 30);
        v11 = *(__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * *(this + 32) + 6);
        v35 = **(_DWORD **)(*(_DWORD *)this + 16) + 24 * *(this + 32);
        v12 = sub_467100((__int16 *)v35, v10, v27 + *(this + 31) - v11 - *(__int16 *)(v35 + 2));
        sub_464CE0(&v30, v12);
        if ( v30 < v2 )
          v2 = v30;
        if ( v31 < v3 )
          v3 = v31;
        if ( v32 > v38 )
          v38 = v32;
        if ( v33 > v37 )
          v37 = v33;
      }
      v13 = *(this + 33);
      if ( v13 < v36 )
      {
        v14 = sub_467100(
                (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * v13),
                v26 + *(this + 30),
                v27 + *(this + 31));
        sub_464CE0(&v30, v14);
        if ( v30 < v2 )
          v2 = v30;
        if ( v31 < v3 )
          v3 = v31;
        if ( v32 > v38 )
          v38 = v32;
        if ( v33 > v37 )
          v37 = v33;
      }
      v35 = *(this + 34);
      if ( v35 < v36 )
      {
        v15 = v29;
        v16 = v27;
        do
        {
          v16 += v34;
          v15 += v34;
          if ( v15 > v25 )
            v15 = v25;
        }
        while ( v16 < v25 );
        v17 = *(this + 31);
        v29 = v15;
        v18 = v26 + *(this + 30);
        v23 = v16 + v17;
        v19 = *(_DWORD *)this;
        v27 = v16;
        v20 = sub_467100((__int16 *)(**(_DWORD **)(v19 + 16) + 24 * v35), v18, v23);
        sub_464CE0(&v30, v20);
        if ( v30 < v2 )
          v2 = v30;
        if ( v31 < v3 )
          v3 = v31;
        if ( v32 > v38 )
          v38 = v32;
        if ( v33 > v37 )
          v37 = v33;
      }
    }
  }
  return sub_464D00(v2, v3, v38, v37);
}
