// 函数 0x42a840  sub_42A840  size=0x32  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_BYTE *__thiscall sub_42A840(_BYTE *this, char a2)
{
  bool v3; // zf

  v3 = (*(this + 4) & 1) == 0;
  *(_DWORD *)this = &CCallbackImpl<24>::`vftable';
  if ( !v3 )
    SteamAPI_UnregisterCallback(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
