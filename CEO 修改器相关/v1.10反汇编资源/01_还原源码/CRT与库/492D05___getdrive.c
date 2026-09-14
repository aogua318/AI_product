// 函数 0x492d05  __getdrive  size=0xCE  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _getdrive()
{
  WCHAR *v0; // ebx
  signed int CurrentDirectoryW; // esi
  WCHAR *v2; // eax
  int v3; // edi
  unsigned int v4; // eax
  int v6; // [esp+10h] [ebp-214h]
  WCHAR Buffer[262]; // [esp+14h] [ebp-210h] BYREF

  v6 = 0;
  v0 = Buffer;
  CurrentDirectoryW = GetCurrentDirectoryW(0x105u, Buffer);
  if ( CurrentDirectoryW > 260 )
  {
    v2 = (WCHAR *)_calloc_crt(CurrentDirectoryW + 1, 2);
    v0 = v2;
    if ( v2 )
    {
      v6 = 1;
      CurrentDirectoryW = GetCurrentDirectoryW(CurrentDirectoryW + 1, v2);
    }
    else
    {
      *_errno() = 12;
      CurrentDirectoryW = 0;
    }
  }
  v3 = 0;
  if ( CurrentDirectoryW )
  {
    if ( v0[1] == 58 )
    {
      v4 = *v0;
      if ( v4 >= 0x61 && v4 <= 0x7A )
        v4 -= 32;
      v3 = v4 - 64;
    }
  }
  else
  {
    *_errno() = 12;
  }
  if ( v6 )
    free(v0);
  return v3;
}
