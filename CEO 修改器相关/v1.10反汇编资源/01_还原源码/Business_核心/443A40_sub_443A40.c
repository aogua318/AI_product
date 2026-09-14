// 函数 0x443a40  sub_443A40  size=0x7D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_443A40()
{
  int result; // eax
  char Buffer[256]; // [esp+0h] [ebp-104h] BYREF

  result = 0;
  if ( dword_8A7580 )
  {
    dword_8A757C = 0;
    dword_8A7578 = 0;
    sub_464ED0(sub_4439E0);
    sprintf(Buffer, "%d/%d", dword_8A757C, dword_8A7578);
    return sub_47FF50(Buffer);
  }
  return result;
}
