// 函数 0x427a10  sub_427A10  size=0x20  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_427A10(int this)
{
  int result; // eax

  result = *(unsigned __int16 *)(this + 18);
  if ( (result & 1) == 0 && *(_BYTE *)(this + 129) != 0xFF )
  {
    *(_WORD *)(this + 18) = result | 1;
    return sub_426B30((__int16 *)this, 1);
  }
  return result;
}
