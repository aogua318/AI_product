// 函数 0x48953b  _sprintf  size=0x84  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sprintf(char *const Buffer, const char *const Format, ...)
{
  int v3; // eax
  bool v4; // sf
  int v5; // esi
  FILE File; // [esp+8h] [ebp-20h] BYREF
  va_list va; // [esp+38h] [ebp+10h] BYREF

  va_start(va, Format);
  memset(&File, 0, sizeof(File));
  if ( Format && Buffer )
  {
    File._base = Buffer;
    File._ptr = Buffer;
    File._cnt = 0x7FFFFFFF;
    File._flag = 66;
    v3 = _output_l(&File, (int)Format, 0, (int)va);
    v4 = --File._cnt < 0;
    v5 = v3;
    if ( v4 )
      _flsbuf(0, &File);
    else
      *File._ptr = 0;
    return v5;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
}
