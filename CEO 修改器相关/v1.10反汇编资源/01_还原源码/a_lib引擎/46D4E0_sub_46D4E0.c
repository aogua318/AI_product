// 函数 0x46d4e0  sub_46D4E0  size=0x202  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void *__cdecl sub_46D4E0(
        HDC hdc,
        int *a2,
        LPCSTR lpchText,
        HGDIOBJ a4,
        LPRECT lprc,
        COLORREF a6,
        COLORREF color,
        UINT format)
{
  LONG left; // edx
  LONG top; // ebx
  LONG bottom; // ecx
  LONG v13; // ecx
  LONG v14; // eax
  LONG v15; // ecx
  int v16; // ebx
  int v17; // ecx
  int v18; // ebx
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v23[12]; // [esp+10h] [ebp-68h] BYREF
  LONG v24; // [esp+40h] [ebp-38h] BYREF
  LONG v25; // [esp+44h] [ebp-34h]
  LONG right; // [esp+48h] [ebp-30h]
  LONG v27; // [esp+4Ch] [ebp-2Ch]
  LONG v28; // [esp+50h] [ebp-28h] BYREF
  LONG v29; // [esp+54h] [ebp-24h]
  LONG v30; // [esp+58h] [ebp-20h]
  LONG v31; // [esp+5Ch] [ebp-1Ch]
  int v32; // [esp+60h] [ebp-18h]
  int v33; // [esp+64h] [ebp-14h]
  int v34; // [esp+68h] [ebp-10h]
  int v35; // [esp+74h] [ebp-4h]
  int v36; // [esp+84h] [ebp+Ch]
  LPRECT lprca; // [esp+90h] [ebp+18h]

  sub_468830(v23);
  v35 = 0;
  sub_464B60(&v24);
  sub_464B60(&v28);
  if ( lprc->left < a2[7] && lprc->top < a2[8] && lprc->right > a2[5] && lprc->bottom > a2[6] )
  {
    left = lprc->left;
    top = lprc->top;
    bottom = lprc->bottom;
    right = lprc->right;
    v27 = bottom;
    lprca = (LPRECT)(right - left);
    v36 = bottom - top;
    v13 = lprc->right;
    v32 = 0;
    v33 = 0;
    v14 = left;
    v30 = v13;
    v15 = lprc->bottom;
    v24 = left;
    v25 = top;
    v28 = left;
    v29 = top;
    v31 = v15;
    if ( left < a2[5] )
    {
      v14 = a2[5];
      v32 = v14 - left;
      v28 = v14;
    }
    if ( top < a2[6] )
    {
      v33 = a2[6] - top;
      v29 = a2[6];
    }
    v16 = v30;
    if ( v30 > a2[7] )
    {
      v16 = a2[7];
      v30 = v16;
    }
    if ( v15 > a2[8] )
    {
      v15 = a2[8];
      v31 = v15;
    }
    v17 = v15 - v29;
    v18 = v16 - v14;
    v34 = v17;
    if ( v18 < (int)lprca || v17 < v36 )
    {
      sub_469880(v23, (int)lprca, v36, a2[3], 0);
      sub_469640(v23, 0, 0, a2, v24, v25, (int)lprca, v36);
    }
    sub_46D3D0(hdc, lpchText, (int)a4, lprc, a6, color, format);
    if ( v18 < (int)lprca || v34 < v36 )
    {
      sub_469640(v23, v32, v33, a2, v32 + v24, v33 + v25, v18, v34);
      v19 = a2[6];
      v20 = a2[7];
      v28 = a2[5];
      v21 = a2[8];
      v29 = v19;
      v30 = v20;
      v31 = v21;
      sub_4689C0(a2, 0);
      sub_469640(a2, v24, v25, v23, 0, 0, (int)lprca, v36);
      sub_4689C0(a2, &v28);
      sub_4688B0(v23);
    }
  }
  v35 = -1;
  return sub_469860(v23);
}
