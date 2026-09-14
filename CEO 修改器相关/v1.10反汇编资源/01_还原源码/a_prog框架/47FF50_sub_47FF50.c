// 函数 0x47ff50  sub_47FF50  size=0x5E  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_47FF50(int this, const char *a2)
{
  HWND result; // eax
  char v3; // dl
  int *v4; // eax

  result = (HWND)a2;
  if ( strcmp((const char *)(this + 28), a2) )
  {
    do
    {
      v3 = *(_BYTE *)result;
      *((_BYTE *)result + this + 28 - (_DWORD)a2) = *(_BYTE *)result;
      result = (HWND)((char *)result + 1);
    }
    while ( v3 );
    v4 = sub_47F9F0((__int16 *)this);
    return sub_47C950(v4);
  }
  return result;
}
