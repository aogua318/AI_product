// 函数 0x49cc50  sub_49CC50  size=0x17  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HANDLE sub_49CC50()
{
  HANDLE result; // eax

  result = hObject;
  if ( hObject != (HANDLE)-1 && hObject != (HANDLE)-2 )
    return (HANDLE)CloseHandle(hObject);
  return result;
}
