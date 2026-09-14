// 函数 0x4828a0  sub_4828A0  size=0x182  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__thiscall sub_4828A0(int this)
{
  int *result; // eax
  int *v3; // eax
  int *v4; // eax
  int *v5; // eax
  int *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  int v10; // eax
  int v11; // ebx
  int v12; // edi
  int v13; // ecx
  bool v14; // sf
  int v15; // ecx
  int v16; // ecx
  int *v17; // eax
  int v18; // edx
  int v19; // edx
  _DWORD v20[4]; // [esp+4h] [ebp-34h] BYREF
  int v21; // [esp+14h] [ebp-24h] BYREF
  int v22; // [esp+18h] [ebp-20h]
  int v23; // [esp+1Ch] [ebp-1Ch]
  int v24; // [esp+20h] [ebp-18h]
  _DWORD v25[2]; // [esp+24h] [ebp-14h] BYREF
  int v26; // [esp+2Ch] [ebp-Ch]
  int v27; // [esp+30h] [ebp-8h]
  int v28; // [esp+34h] [ebp-4h]

  sub_464B60(v25);
  sub_464B60(&v21);
  sub_464B60(v20);
  result = sub_47F5B0((int *)this);
  if ( result )
  {
    v3 = sub_47F5B0((int *)this);
    sub_47C950(v3);
    v4 = sub_47F470((__int16 *)this);
    v25[0] = *v4;
    v25[1] = v4[1];
    v26 = v4[2];
    v27 = v4[3];
    v5 = sub_47F530((__int16 *)this);
    v21 = *v5;
    v22 = v5[1];
    v23 = v5[2];
    v24 = v5[3];
    v6 = sub_47F5B0((int *)this);
    v7 = *v6;
    v20[0] = *v6;
    v8 = v6[1];
    v20[1] = v8;
    v9 = v6[2];
    v20[2] = v9;
    v10 = v6[3];
    v11 = 0;
    v20[3] = v10;
    if ( *(_WORD *)(this + 20) )
    {
      v12 = v22 + v8 - v10 - v27;
      if ( !v12 )
        v12 = 1;
      v13 = *(__int16 *)(this + 26) - v27;
      v14 = dword_8EED8C + v13 < 0;
      v15 = dword_8EED8C + v13;
    }
    else
    {
      v12 = v21 + v7 - v9 - v26;
      if ( !v12 )
        v12 = 1;
      v16 = *(__int16 *)(this + 24) - v26;
      v14 = dword_8EED88 + v16 < 0;
      v15 = dword_8EED88 + v16;
    }
    if ( v14 )
      v15 = 0;
    if ( v15 > v12 - 1 )
      v15 = v12 - 1;
    sub_481940((int *)this, (HWND)(v15 * *(_DWORD *)(this + 12) / v12));
    v17 = sub_47F5B0((int *)this);
    sub_47C950(v17);
    result = (int *)sub_47F970((int *)this);
    if ( result )
    {
      result = *(int **)this;
      v28 = 0;
      if ( *((__int16 *)result + 146) > 0 )
      {
        do
        {
          v18 = result[74];
          if ( *(_WORD *)(v18 + v11 + 4) == 6
            && *(_WORD *)(v11 + result[74] + 8) == (unsigned __int16)((this - v18) / 0x120u) )
          {
            sub_480880(v18 + v11, *(HWND *)(this + 16));
          }
          result = *(int **)this;
          v19 = *(__int16 *)(*(_DWORD *)this + 292);
          v11 += 288;
          ++v28;
        }
        while ( v28 < v19 );
      }
    }
  }
  return result;
}
