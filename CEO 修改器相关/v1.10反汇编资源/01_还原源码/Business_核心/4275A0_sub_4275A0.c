// 函数 0x4275a0  sub_4275A0  size=0x54  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4275A0(char *this)
{
  int result; // eax

  result = *(this + 128);
  if ( result != -1 || (result = *(this + 129), result != -1) )
  {
    result = *(__int16 *)(*(_DWORD *)dword_4D0C94
                        + 68 * *(char *)(388 * *(__int16 *)this + *(_DWORD *)dword_4D0C8C + 78)
                        + 2 * result
                        + 24);
    if ( result != -1 )
      return *(unsigned __int8 *)(116 * result + *(_DWORD *)dword_87081C + 1);
  }
  return result;
}
