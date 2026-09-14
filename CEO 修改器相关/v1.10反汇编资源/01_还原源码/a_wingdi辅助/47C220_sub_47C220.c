// 函数 0x47c220  sub_47C220  size=0x23F  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_47C220(
        int *this,
        int *a2,
        int *a3,
        const char *a4,
        int a5,
        int Src,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int result; // eax
  int v12; // ecx
  int v13; // esi
  int v14; // eax
  int v15; // edi
  int v16; // esi
  int v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // ebx
  int v25; // eax
  int v26; // kr00_4
  int v27; // eax
  int v28; // esi
  int v29; // kr04_4
  _DWORD v30[4]; // [esp+10h] [ebp-28h] BYREF
  int *v31; // [esp+20h] [ebp-18h]
  int *v32; // [esp+24h] [ebp-14h]
  int v33; // [esp+28h] [ebp-10h]
  int v34; // [esp+34h] [ebp-4h]
  int v35; // [esp+44h] [ebp+Ch]

  v32 = this;
  sub_464B60(v30);
  result = a2[3];
  if ( result == 16 || result == 32 )
  {
    if ( (dword_8EEB54 & 1) == 0 )
    {
      dword_8EEB54 |= 1u;
      v34 = 0;
      sub_464A40(dword_8EEB4C);
      atexit(sub_4A10D0);
      v34 = -1;
    }
    sub_464A60(dword_8EEB4C, ".f3.", 0xFFFFFFFF, 0, 0);
    v12 = *a3;
    if ( *a3 > a2[7] )
      return sub_464B40(dword_8EEB4C);
    if ( a3[1] > a2[8] )
      return sub_464B40(dword_8EEB4C);
    v13 = a3[2];
    v31 = a2 + 5;
    if ( v13 < a2[5] )
      return sub_464B40(dword_8EEB4C);
    v14 = a3[3];
    if ( v14 < a2[6] )
      return sub_464B40(dword_8EEB4C);
    if ( !a8 )
      a8 = *v32;
    v15 = a3[1];
    v35 = v12;
    v16 = v13 - v12;
    v33 = v15;
    v17 = v14 - v15;
    sub_464CE0(v30, a2 + 5);
    if ( v30[0] < *a3 )
      *v31 = *a3;
    v18 = a3[1];
    if ( v30[1] < v18 )
      a2[6] = v18;
    v19 = a3[2];
    if ( v30[2] > v19 )
      a2[7] = v19;
    v20 = a3[3];
    if ( v30[3] > v20 )
      a2[8] = v20;
    if ( Src != -1 )
      sub_468D20(a2, v35, v33, v16, v17, Src);
    v21 = v32[76];
    if ( v21 )
    {
      if ( !v32[77] )
      {
        v24 = a8;
        goto LABEL_27;
      }
    }
    else if ( !v32[77] )
    {
      v22 = a3[2];
      v23 = a3[3];
      v24 = a8;
      dword_8EEAD0 = 1;
      dword_8EEAC8 = v22;
      dword_8EEACC = v23;
      goto LABEL_33;
    }
    v24 = a8;
    v33 += (v17 - a8 + 1) >> 1;
LABEL_27:
    v25 = v21 - 1;
    if ( v25 )
    {
      if ( v25 != 1 )
        goto LABEL_33;
      v26 = strlen(a4);
      v27 = v24 * (v26 >> 1) + (v26 & 1) * ((v24 + 1) >> 1);
      if ( v27 >= v16 )
        goto LABEL_33;
      v28 = (v16 - v27 + 1) >> 1;
    }
    else
    {
      v29 = strlen(a4);
      v28 = v16 - (v29 & 1) * ((v24 + 1) >> 1) - v24 * (v29 >> 1);
    }
    v35 += v28;
LABEL_33:
    sub_47BD70(v32, a2, v35, v33, a4, a5, a7, v24, a9, a10);
    dword_8EEAD0 = 0;
    sub_464CE0(v31, v30);
    return sub_464B40(dword_8EEB4C);
  }
  return result;
}
