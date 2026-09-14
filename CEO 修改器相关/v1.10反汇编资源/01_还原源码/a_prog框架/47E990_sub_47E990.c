// 函数 0x47e990  sub_47E990  size=0x131  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__thiscall sub_47E990(__int16 *this)
{
  __int16 v2; // ax
  int v3; // ebx
  __int16 *v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // edx
  __int16 v9; // ax
  __int16 *v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  int v14; // edx
  _DWORD v16[4]; // [esp+Ch] [ebp-1Ch] BYREF
  int v17; // [esp+1Ch] [ebp-Ch]
  int v18; // [esp+20h] [ebp-8h]
  int v19; // [esp+24h] [ebp-4h]

  sub_464B60(v16);
  v18 = -100000;
  v19 = -100000;
  v2 = *(this + 22);
  v3 = 100000;
  v17 = 100000;
  if ( v2 != -1 )
  {
    v4 = (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * v2);
    v5 = *v4 + *(this + 14) + *(this + 27) + *(__int16 *)(*(_DWORD *)this + 276);
    v6 = *(this + 15) + *(this + 28) + v4[1] + *(__int16 *)(*(_DWORD *)this + 278);
    v7 = v5 + v4[2];
    v8 = v6 + v4[3];
    if ( v5 < 100000 )
      v3 = v5;
    if ( v6 < 100000 )
      v17 = v6;
    if ( v7 > -100000 )
      v18 = v7;
    if ( v8 > -100000 )
      v19 = v8;
  }
  v9 = *(this + 21);
  if ( v9 != -1 )
  {
    v10 = (__int16 *)(**(_DWORD **)(*(_DWORD *)this + 16) + 24 * v9);
    v11 = *v10 + *(this + 14) + *(this + 27) + *(__int16 *)(*(_DWORD *)this + 276);
    v12 = *(this + 15) + *(this + 28) + v10[1] + *(__int16 *)(*(_DWORD *)this + 278);
    v13 = v11 + v10[2];
    v14 = v12 + v10[3];
    if ( v11 < v3 )
      v3 = v11;
    if ( v12 < v17 )
      v17 = v12;
    if ( v13 > v18 )
      v18 = v13;
    if ( v14 > v19 )
      v19 = v14;
  }
  return sub_464D00(v3, v17, v18, v19);
}
