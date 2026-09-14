// 函数 0x415f50  sub_415F50  size=0xCB  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char __thiscall sub_415F50(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax

  v2 = *(_DWORD *)(this + 40);
  *(_DWORD *)(this + 112) += v2;
  v3 = *(_DWORD *)(this + 48);
  *(_DWORD *)(this + 136) += v3;
  v4 = *(_DWORD *)(this + 1244);
  *(_DWORD *)(this + 56) = v2;
  *(_DWORD *)(this + 60) = *(_DWORD *)(this + 44);
  *(_DWORD *)(this + 64) = v3;
  *(_DWORD *)(this + 68) = *(_DWORD *)(this + 52);
  *(_DWORD *)(this + 1248) = v4;
  *(_DWORD *)(this + 40) = 0;
  *(_DWORD *)(this + 44) = 0;
  *(_DWORD *)(this + 48) = 0;
  *(_DWORD *)(this + 52) = 0;
  *(_DWORD *)(this + 1244) = 0;
  memcpy_0((void *)(this + 1284), (const void *)(this + 1280), 8u);
  *(_DWORD *)(this + 1280) = *(_DWORD *)(this + 1272);
  *(_DWORD *)(this + 1272) = 0;
  memcpy_0((void *)(this + 1296), (const void *)(this + 1292), 8u);
  *(_DWORD *)(this + 1292) = *(_DWORD *)(this + 1276);
  LOBYTE(v5) = 2;
  *(_DWORD *)(this + 1276) = 0;
  if ( *(_BYTE *)(this + 9) == 2 && *(_BYTE *)(this + 10) == 2 )
  {
    v5 = sub_415A00((__int16 *)this);
    if ( !v5 && !*(_WORD *)(this + 26) && !*(_WORD *)(this + 34) && dword_4CD11C - *(_DWORD *)(this + 36) > 1536 )
      *(_BYTE *)(this + 8) |= 1u;
  }
  return v5;
}
