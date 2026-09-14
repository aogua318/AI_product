// 函数 0x47c950  sub_47C950  size=0x1BD  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __cdecl sub_47C950(int *a1)
{
  int *v1; // ebx
  HWND result; // eax
  int v3; // ecx
  int v4; // edi
  LONG *p_right; // esi
  BOOL v6; // eax
  RECT *v7; // eax
  RECT *v8; // edi
  LONG bottom; // eax
  RECT *v10; // edi
  LONG v11; // edx
  LONG v12; // [esp+Ch] [ebp-1Ch]
  int v13; // [esp+10h] [ebp-18h]
  int v14; // [esp+14h] [ebp-14h]
  int v15; // [esp+18h] [ebp-10h]
  int v16; // [esp+1Ch] [ebp-Ch]
  int v17; // [esp+20h] [ebp-8h]
  int v18; // [esp+24h] [ebp-4h]

  v1 = a1;
  while ( 1 )
  {
    result = GetFocus();
    if ( result != (HWND)dword_8EED7C )
    {
      dword_8EED7C = (int)result;
      if ( dword_8EEDA0 )
      {
        if ( result == hWnd )
          result = (HWND)sub_46D080(0x320u, 0x258u, 0x10u);
      }
    }
    if ( !a1 )
    {
      Rect.left = 0;
      Rect.top = 0;
      Rect.right = dword_8EEDEC;
      Rect.bottom = cy;
      dword_8EEDA8 = 1;
      return result;
    }
    if ( *a1 >= a1[2] )
      return result;
    result = (HWND)a1[1];
    if ( (int)result >= a1[3] )
      return result;
    v18 = a1[3];
    v3 = dword_8EEDA8;
    v15 = *a1;
    v16 = a1[1];
    v17 = a1[2];
    while ( 1 )
    {
      v4 = 0;
      if ( v3 > 0 )
      {
        p_right = &Rect.right;
        do
        {
          v1 = (int *)*(p_right - 2);
          v12 = *p_right;
          v13 = *(p_right - 1);
          v14 = p_right[1];
          v6 = sub_464BC0(p_right - 2, a1);
          v3 = dword_8EEDA8;
          if ( v6 )
            break;
          ++v4;
          p_right += 4;
        }
        while ( v4 < dword_8EEDA8 );
      }
      if ( v4 == v3 )
        break;
      --v3;
      v7 = &Rect + v3;
      v8 = &Rect + v4;
      v8->left = v7->left;
      v8->top = v7->top;
      v8->right = v7->right;
      bottom = v7->bottom;
      dword_8EEDA8 = v3;
      v8->bottom = bottom;
      if ( v15 > (int)v1 )
        v15 = (int)v1;
      if ( v16 > v13 )
        v16 = v13;
      if ( v17 < v12 )
        v17 = v12;
      if ( v18 < v14 )
        v18 = v14;
    }
    if ( v3 < 100 )
      break;
    a1 = 0;
  }
  result = (HWND)sub_464D00(v15, v16, v17, v18);
  v10 = &Rect + v4;
  v10->left = *(_DWORD *)result;
  v10->top = (int)result[1];
  v10->right = (int)result[2];
  v11 = *((_DWORD *)result + 3);
  ++dword_8EEDA8;
  v10->bottom = v11;
  return result;
}
