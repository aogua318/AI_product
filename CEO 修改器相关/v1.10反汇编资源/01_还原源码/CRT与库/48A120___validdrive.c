// 函数 0x48a120  __validdrive  size=0x5A  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __cdecl _validdrive(int a1)
{
  BOOL result; // eax
  WCHAR RootPathName; // [esp+0h] [ebp-Ch] BYREF
  wchar_t v3[3]; // [esp+2h] [ebp-Ah] BYREF

  result = 1;
  if ( a1 )
  {
    RootPathName = a1 + 64;
    wcscpy(v3, L":\\");
    if ( GetDriveTypeW(&RootPathName) <= 1 )
      return 0;
  }
  return result;
}
