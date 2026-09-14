// 函数 0x419950  sub_419950  size=0x128  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_419950(int this, int a2, int *a3, int *a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  bool v9; // zf
  signed int v10; // eax
  int v13; // [esp+10h] [ebp-4h] BYREF

  v4 = *(__int16 *)(this + 758);
  v5 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(this + 2 * (a2 < 0 ? 0 : a2) + 240);
  v6 = -1;
  if ( v4 == -1 )
    return 0;
  while ( 1 )
  {
    v7 = *(unsigned __int8 *)(v5 + 1257);
    v8 = dword_8703D0 + v4 * dword_8703BC;
    if ( *(char *)(v8 + 31) == v7 )
    {
      if ( v6 == -1 )
        v6 = v4;
      if ( !*(_BYTE *)(v8 + 30) )
        break;
    }
    v4 = *(__int16 *)(v8 + 4);
    if ( v4 == -1 )
    {
      if ( v6 == -1 )
        return 0;
      break;
    }
    if ( *(char *)(v4 * dword_8703BC + dword_8703D0 + 31) == v7 )
    {
      v10 = sub_4640D0() & 0x80000001;
      v9 = v10 == 0;
      if ( v10 < 0 )
        v9 = (((_BYTE)v10 - 1) | 0xFFFFFFFE) == -1;
      if ( !v9 )
        v6 = v4;
    }
  }
  sub_430CA0(&v13, &a2);
  sub_4198B0((_DWORD *)this, v13, a2, a3, a4);
  return 1;
}
