// 函数 0x4334d0  sub_4334D0  size=0x71  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4334D0(int this)
{
  int v2; // eax
  int v3; // ecx
  int i; // eax
  int v6; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+8h] [ebp-4h] BYREF

  if ( !sub_4334C0((_DWORD *)this) )
    return 0;
  sub_4332E0((_DWORD *)this, (int)&v7, (int)&v6);
  v2 = *(_DWORD *)dword_4C5DF4 + 9208 * ((v7 >> 5) + (v6 >> 5) * dword_4C5DEC);
  v7 >>= 5;
  v6 >>= 5;
  v3 = 0;
  for ( i = v2 + 6088; *(_WORD *)i != *(_WORD *)(this + 4); i += 12 )
  {
    if ( ++v3 >= 10 )
      return 0;
  }
  return *(_DWORD *)(i + 4);
}
