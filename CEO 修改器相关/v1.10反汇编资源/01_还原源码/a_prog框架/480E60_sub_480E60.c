// 函数 0x480e60  sub_480E60  size=0xD8  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __thiscall sub_480E60(__int16 *this, int a2, int a3)
{
  int *v4; // eax
  BOOL result; // eax
  __int16 v6; // ax
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  __int16 *v10; // eax
  int *v11; // eax
  _DWORD v12[4]; // [esp+Ch] [ebp-10h] BYREF

  sub_464B60(v12);
  v4 = sub_464D00(
         *(this + 4) + *(__int16 *)(*(_DWORD *)this + 276),
         *(this + 5) + *(__int16 *)(*(_DWORD *)this + 278),
         *(this + 4) + *(__int16 *)(*(_DWORD *)this + 276) + *(this + 6),
         *(this + 5) + *(__int16 *)(*(_DWORD *)this + 278) + *(this + 7));
  sub_464CE0(v12, v4);
  result = 1;
  if ( !sub_464B90(v12, a2, a3) )
  {
    v6 = *(this + 9);
    if ( v6 == -1 )
      return 0;
    v7 = **(_DWORD **)(*(_DWORD *)this + 16);
    v8 = 3 * v6;
    v9 = *(__int16 *)(v7 + 8 * v8);
    v10 = (__int16 *)(v7 + 8 * v8);
    v11 = sub_464D00(
            v9 + *(this + 10),
            *(this + 11) + v10[1],
            v9 + *(this + 10) + v10[2],
            *(this + 11) + v10[1] + v10[3]);
    sub_464CE0(v12, v11);
    if ( !sub_464B90(v12, a2, a3) )
      return 0;
  }
  return result;
}
