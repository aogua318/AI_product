// 函数 0x481220  sub_481220  size=0x141  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__thiscall sub_481220(__int16 *this)
{
  __int16 v2; // ax
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  __int16 *v6; // eax
  int v7; // edx
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // esi
  int v12; // edi
  int v13; // eax
  int *v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int *v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int *v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // ebx
  int v26; // eax
  int v28; // [esp+Ch] [ebp-18h] BYREF
  int v29; // [esp+10h] [ebp-14h]
  int v30; // [esp+14h] [ebp-10h]
  int v31; // [esp+18h] [ebp-Ch]
  int v32; // [esp+1Ch] [ebp-8h]
  int v33; // [esp+20h] [ebp-4h]

  sub_464B60(&v28);
  v2 = *(this + 16);
  if ( v2 == -1 )
  {
    v11 = 100000;
    v13 = -100000;
    v12 = 100000;
    v32 = -100000;
  }
  else
  {
    v3 = **(_DWORD **)(*(_DWORD *)this + 16);
    v4 = 3 * v2;
    v5 = *(__int16 *)(v3 + 8 * v4 + 2);
    v6 = (__int16 *)(v3 + 8 * v4);
    v7 = *v6;
    v8 = v5 + *(__int16 *)(*(_DWORD *)this + 278);
    v9 = v6[2];
    v10 = v6[3];
    v11 = v7 + *(this + 14) + *(__int16 *)(*(_DWORD *)this + 276);
    v12 = *(this + 15) + v8;
    v32 = v11 + v9;
    v13 = v12 + v10;
  }
  v33 = v13;
  v14 = sub_47E990(this);
  v15 = *v14;
  v28 = v15;
  v29 = v14[1];
  v16 = v14[2];
  v30 = v16;
  v17 = v14[3];
  v31 = v17;
  if ( v15 < v11 )
    v11 = v15;
  if ( v29 < v12 )
    v12 = v29;
  if ( v16 > v32 )
    v32 = v16;
  if ( v17 > v33 )
    v33 = v17;
  v18 = sub_47EAD0(this);
  v19 = *v18;
  v28 = v19;
  v29 = v18[1];
  v20 = v18[2];
  v30 = v20;
  v21 = v18[3];
  v31 = v21;
  if ( v19 < v11 )
    v11 = v19;
  if ( v29 < v12 )
    v12 = v29;
  if ( v20 > v32 )
    v32 = v20;
  if ( v21 > v33 )
    v33 = v21;
  v22 = sub_47EC10((int *)this);
  v23 = *v22;
  v28 = v23;
  v24 = v22[1];
  v29 = v24;
  v25 = v22[2];
  v30 = v25;
  v26 = v22[3];
  v31 = v26;
  if ( v23 < v11 )
    v11 = v23;
  if ( v24 < v12 )
    v12 = v24;
  if ( v25 > v32 )
    v32 = v25;
  if ( v26 > v33 )
    v33 = v26;
  return sub_464D00(v11, v12, v32, v33);
}
