// 函数 0x466380  sub_466380  size=0x11B  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_466380(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // edi
  size_t ElementCount; // [esp+8h] [ebp-20010h] BYREF
  int Buffer; // [esp+Ch] [ebp-2000Ch] BYREF
  size_t Size; // [esp+10h] [ebp-20008h] BYREF
  _BYTE Src[65536]; // [esp+14h] [ebp-20004h] BYREF
  _BYTE v9[65536]; // [esp+10014h] [ebp-10004h] BYREF

  if ( *(this + 3) != 2 )
    return 0;
  v2 = 0;
  sub_46A320(&Buffer, 4u);
  v3 = 0;
  if ( Buffer <= 0 )
    return 1;
  while ( sub_46A320(&ElementCount, 4u) == 4 )
  {
    sub_46A320(v9, ElementCount);
    Size = 0x10000;
    sub_46D7E0(Src, &Size, v9, ElementCount);
    memcpy((void *)(v2 + a2), Src, Size);
    v2 += Size;
    if ( ++v3 >= Buffer )
      return 1;
  }
  return 0;
}
