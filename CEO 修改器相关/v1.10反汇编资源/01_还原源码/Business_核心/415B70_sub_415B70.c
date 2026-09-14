// 函数 0x415b70  sub_415B70  size=0xA1  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

__int16 *__thiscall sub_415B70(__int16 *this)
{
  __int16 *result; // eax
  int v3; // edi
  __int16 *v4; // esi
  __int16 *i; // [esp+8h] [ebp-Ch]
  int v6; // [esp+Ch] [ebp-8h] BYREF
  int v7; // [esp+10h] [ebp-4h] BYREF

  result = (__int16 *)(dword_4CCAAC + dword_4CCA98 * *(this + 1));
  v3 = result[380];
  for ( i = result; v3 != -1; v3 = v4[2] )
  {
    v4 = (__int16 *)(dword_870868 + v3 * dword_870854);
    if ( v4[4] == *(char *)this && v4[6] == -1 )
    {
      result = (__int16 *)(result[233] - result[235]);
      if ( (int)result <= 0 )
        return result;
      sub_434550(&v6, &v7);
      sub_418490(*(this + 1), v3, v6, v7);
      sub_43CAB0();
      result = i;
    }
  }
  return result;
}
