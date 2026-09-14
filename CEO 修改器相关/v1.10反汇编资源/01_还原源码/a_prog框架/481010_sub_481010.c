// 函数 0x481010  sub_481010  size=0x63  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_481010(_DWORD *this, int a2)
{
  HWND result; // eax
  int *v4; // eax
  int *v5; // eax

  result = (HWND)(288 * a2 + *(this + 74));
  if ( (HWND)dword_8F2AC8 != result && *((_WORD *)result + 2) == 5 && (*((_BYTE *)result + 27) & 1) != 0 )
  {
    if ( dword_8F2AC8 )
    {
      v4 = sub_47F9F0((__int16 *)dword_8F2AC8);
      sub_47C950(v4);
    }
    dword_8F2AC8 = 288 * a2 + *(this + 74);
    v5 = sub_47F9F0((__int16 *)dword_8F2AC8);
    return sub_47C950(v5);
  }
  return result;
}
