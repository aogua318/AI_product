// 函数 0x42ecc0  sub_42ECC0  size=0x9B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_42ECC0(__int16 *this)
{
  int i; // eax
  int v3; // esi
  __int16 v4; // dx
  int v5; // ecx
  int result; // eax
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF

  if ( *(this + 45) <= 0 )
  {
    *(this + 46) = dword_4D0E80 / 2;
    result = dword_4D0E84 / 2;
    *(this + 47) = dword_4D0E84 / 2;
  }
  else
  {
    *((_DWORD *)this + 23) = 0;
    for ( i = *(this + 44); i != -1; i = *(__int16 *)(v3 + 1618) )
    {
      v3 = dword_4CCAAC + i * dword_4CCA98;
      sub_419920((_DWORD *)v3, &v8, &v7);
      v4 = v7;
      *(this + 46) += v8;
      *(this + 47) += v4;
    }
    v5 = *(this + 45);
    *(this + 46) /= *(this + 45);
    result = *(this + 47) / v5;
    *(this + 47) = result;
  }
  return result;
}
