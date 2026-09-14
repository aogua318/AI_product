// 函数 0x460cb0  sub_460CB0  size=0x80  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_460CB0(int a1, int a2)
{
  int result; // eax
  int v3; // ecx

  result = a2;
  if ( !a2 )
  {
    if ( !dword_4C2D3C )
      return result;
    sub_435570(1, 0);
    sub_485EF0(dword_4C2D38);
    goto LABEL_5;
  }
  result = a2 - 1;
  if ( a2 == 1 && dword_4C2D3C )
  {
    sub_435570(1, 0);
    sub_485E60(dword_4C2D38);
LABEL_5:
    result = sub_461900(v3);
    if ( result )
    {
      sub_486D40(0, 0);
      sub_486D40(1, 1);
      return sub_487220(&unk_4C42A0);
    }
  }
  return result;
}
