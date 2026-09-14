// 函数 0x45a800  sub_45A800  size=0xA5  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_45A800(int a1)
{
  int v1; // eax
  char v2; // cl
  int v3; // edx
  unsigned int v4; // ecx
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // edx
  unsigned int v8; // ecx

  v1 = dword_4C43DC + a1 * dword_4C43C8;
  v2 = *(_BYTE *)(v1 + 3);
  if ( v2 >= 4 && v2 <= 6 )
  {
    v3 = *(_DWORD *)(v1 + 24);
    *(_DWORD *)(v1 + 16) = *(_DWORD *)(v1 + 16) & 0xFC000000 | 0xF423F;
    v4 = *(_DWORD *)(v1 + 32) & 0xFC000000 | 0xF423F;
    *(_DWORD *)(v1 + 24) = v3 & 0xFC000000 | 0xF423F;
    v5 = *(_DWORD *)(v1 + 40);
    *(_DWORD *)(v1 + 32) = v4;
    v6 = *(_DWORD *)(v1 + 48) & 0xFC000000 | 0xF423F;
    *(_DWORD *)(v1 + 40) = v5 & 0xFC000000 | 0xF423F;
    v7 = *(_DWORD *)(v1 + 56);
    *(_DWORD *)(v1 + 48) = v6;
    v8 = *(_DWORD *)(v1 + 64) & 0xFC000000 | 0xF423F;
    *(_DWORD *)(v1 + 56) = v7 & 0xFC000000 | 0xF423F;
    *(_DWORD *)(v1 + 64) = v8;
  }
  return 0;
}
