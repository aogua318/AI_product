// 函数 0x426b30  sub_426B30  size=0xBE  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_426B30(__int16 *this, int a2)
{
  int result; // eax
  int v4; // [esp-10h] [ebp-18h]

  if ( (*(_BYTE *)(this + 9) & 1) != 0 )
  {
    if ( a2 && *(this + 65) != -1 )
    {
      v4 = 0;
LABEL_9:
      result = sub_486530(*(this + 8), *(__int16 *)(388 * *this + *(_DWORD *)dword_4D0C8C), v4, 0, 0, 0);
      goto LABEL_10;
    }
    result = sub_486530(*(this + 8), *(__int16 *)(388 * *this + *(_DWORD *)dword_4D0C8C + 2), 0, 1, 0, 0);
  }
  else
  {
    if ( *(this + 65) == -1 )
    {
      v4 = 1;
      goto LABEL_9;
    }
    result = sub_486530(*(this + 8), *(__int16 *)(388 * *this + *(_DWORD *)dword_4D0C8C), 0, 0, 0, 0);
  }
LABEL_10:
  *(this + 9) ^= (*(this + 9) ^ (2 * a2)) & 2;
  return result;
}
