// 函数 0x46d3d0  sub_46D3D0  size=0x105  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __cdecl sub_46D3D0(HDC hdc, LPCSTR lpchText, int a3, LPRECT lprc, COLORREF a5, COLORREF color, UINT format)
{
  HPEN Pen; // [esp+Ch] [ebp-Ch]
  HFONT FontA; // [esp+Ch] [ebp-Ch]
  HGDIOBJ h; // [esp+10h] [ebp-8h]
  HBRUSH ho; // [esp+14h] [ebp-4h]
  HGDIOBJ v12; // [esp+28h] [ebp+10h]
  HGDIOBJ colora; // [esp+34h] [ebp+1Ch]

  if ( color != -1 )
  {
    Pen = CreatePen(0, 1, color);
    h = SelectObject(hdc, Pen);
    ho = CreateSolidBrush(color);
    colora = SelectObject(hdc, ho);
    Rectangle(hdc, lprc->left, lprc->top, lprc->right, lprc->bottom);
    SelectObject(hdc, colora);
    DeleteObject(ho);
    SelectObject(hdc, h);
    DeleteObject(Pen);
  }
  SetBkMode(hdc, 1);
  SetTextColor(hdc, a5);
  FontA = CreateFontA(-a3, 0, 0, 0, 0, 0, 0, 0, iCharSet, 0, 0, 0, 1u, &pszFaceName);
  v12 = SelectObject(hdc, FontA);
  DrawTextA(hdc, lpchText, strlen(lpchText), lprc, format);
  SelectObject(hdc, v12);
  return DeleteObject(FontA);
}
