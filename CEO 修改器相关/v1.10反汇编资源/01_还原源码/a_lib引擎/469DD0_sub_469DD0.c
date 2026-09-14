// 函数 0x469dd0  sub_469DD0  size=0x13F  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HANDLE __cdecl sub_469DD0(LPCSTR lpPathName)
{
  HANDLE result; // eax
  void *v2; // esi
  struct _WIN32_FIND_DATAA FindFileData; // [esp+Ch] [ebp-248h] BYREF
  CHAR Buffer[260]; // [esp+14Ch] [ebp-108h] BYREF

  GetCurrentDirectoryA(0x104u, Buffer);
  result = (HANDLE)SetCurrentDirectoryA(lpPathName);
  if ( result )
  {
    result = FindFirstFileA("*.*", &FindFileData);
    v2 = result;
    if ( result != (HANDLE)-1 )
    {
      do
      {
        if ( (FindFileData.dwFileAttributes & 0x10) != 0 )
        {
          if ( strcmp(FindFileData.cFileName, ".") )
          {
            if ( strcmp(FindFileData.cFileName, "..") )
              sub_469DD0(FindFileData.cFileName);
          }
        }
        else
        {
          sub_469D90(FindFileData.cFileName);
        }
      }
      while ( FindNextFileA(v2, &FindFileData) );
      FindClose(v2);
      SetCurrentDirectoryA("..");
      RemoveDirectoryA(lpPathName);
      return (HANDLE)SetCurrentDirectoryA(Buffer);
    }
  }
  return result;
}
