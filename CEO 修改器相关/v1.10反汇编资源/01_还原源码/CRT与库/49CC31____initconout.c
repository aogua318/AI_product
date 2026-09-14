// 函数 0x49cc31  ___initconout  size=0x1F  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HANDLE __initconout()
{
  HANDLE result; // eax

  result = CreateFileW(L"CONOUT$", 0x40000000u, 3u, 0, 3u, 0, 0);
  hObject = result;
  return result;
}
