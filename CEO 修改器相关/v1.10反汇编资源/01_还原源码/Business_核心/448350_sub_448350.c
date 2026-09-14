// 函数 0x448350  sub_448350  size=0x60  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_448350(int a1)
{
  int v1; // edx
  char v2; // cl
  bool v3; // zf
  int v4; // eax

  if ( a1 == 258 )
  {
    v1 = dword_8B1CA8;
    if ( dword_8B1CA8 + 604 + strlen((const char *)(dword_8B1CA8 + 604)) + 1 - (dword_8B1CA8 + 605) > 0xA )
    {
      v3 = *(_BYTE *)(dword_8B1CA8 + 613) >= 0;
      *(_BYTE *)(dword_8B1CA8 + 614) = v2;
      if ( !v3 )
        *(_BYTE *)(v1 + 613) = v2;
      v4 = sub_481F90(dword_8B1CA8 + 576);
      sub_47C950(v4);
    }
  }
}
