// 函数 0x48ffbd  _write_string  size=0x74  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__usercall write_string@<eax>(_DWORD *a1@<eax>, int a2@<ecx>, int a3@<edi>, _BYTE *a4)
{
  int *result; // eax
  int v7; // eax
  int *v8; // eax
  int *v9; // [esp+8h] [ebp-4h]

  result = (int *)*_errno();
  v9 = result;
  if ( (*(_BYTE *)(a3 + 12) & 0x40) == 0 || *(_DWORD *)(a3 + 8) )
  {
    *_errno() = 0;
    while ( a2 > 0 )
    {
      v7 = (int)a4;
      LOBYTE(v7) = *a4;
      --a2;
      write_char((FILE *)a3, v7, a1);
      ++a4;
      if ( *a1 == -1 )
      {
        v8 = _errno();
        if ( *v8 != 42 )
          break;
        LOBYTE(v8) = 63;
        write_char((FILE *)a3, (int)v8, a1);
      }
    }
    result = _errno();
    if ( !*result )
    {
      result = _errno();
      *result = (int)v9;
    }
  }
  else
  {
    *a1 += a2;
  }
  return result;
}
