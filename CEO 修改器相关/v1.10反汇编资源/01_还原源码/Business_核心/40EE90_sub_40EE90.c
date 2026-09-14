// 函数 0x40ee90  sub_40EE90  size=0x141  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_40EE90(_DWORD *this)
{
  int v2; // esi
  int v3; // ebx
  int result; // eax
  __int16 v5; // ax
  int v6; // [esp+Ch] [ebp-14h] BYREF
  int v7; // [esp+10h] [ebp-10h] BYREF
  int v8; // [esp+14h] [ebp-Ch]
  int v9; // [esp+18h] [ebp-8h] BYREF
  int v10; // [esp+1Ch] [ebp-4h] BYREF

  sub_40D7C0(this, (int)&v9, (int)&v10);
  sub_483890(v9, v10, &v6, &v7);
  v2 = *(_DWORD *)dword_4C5DF4 + 9208 * ((v9 >> 5) + dword_4C5DEC * (v10 >> 5));
  v3 = *(char *)(sub_4640D0() % 5 + v2 + 6020);
  if ( v3 == -1
    || (2 * sub_412490(v3) <= 10000 ? (v8 = 10000) : (v8 = 2 * sub_412490(v3)),
        (double)v8 >= *(double *)(v2 + 8 * v3 + 24)) )
  {
    result = *(this + 22);
    if ( result != -1 )
    {
      result = sub_4864E0(*(this + 22));
      *(this + 22) = -1;
    }
  }
  else
  {
    if ( *(this + 22) == -1 )
      *(this + 22) = sub_486310(143, v6, v7, 0, 22, 0, 0, 0, 0);
    result = *(this + 22);
    if ( result != -1 )
    {
      sub_486530(result, 143, *(__int16 *)(*(_DWORD *)dword_870814 + 72 * v3 + 14), 0, 0, 0);
      v5 = sub_40EB30(this);
      return sub_483BD0(*(this + 22), 7, v5);
    }
  }
  return result;
}
