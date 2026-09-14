// 函数 0x44a070  sub_44A070  size=0xA5  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_44A070(int a1, int a2)
{
  int v2; // esi
  int v3; // edx
  char *v4; // ecx
  int i; // eax
  int v6; // esi
  int result; // eax

  if ( dword_8B8A34 >= (unsigned int)dword_8B8A30 )
    v2 = 0;
  else
    v2 = dword_8B7900[11 * dword_8B8A34];
  v3 = 0;
  v4 = (char *)&unk_8B72F8;
  for ( i = 0; i < 1216; i += 304 )
  {
    if ( (char *)v2 == v4 )
      break;
    ++v3;
    v4 += 304;
  }
  v6 = *(__int16 *)(*(_DWORD *)dword_87081C
                  + 2 * (v3 + 58 * *(__int16 *)(*(_DWORD *)dword_870814 + 2 * (dword_8B72B4 + 36 * dword_8B72B0) + 16))
                  + 20);
  if ( a2 == 6 )
  {
    sub_435570(1, 0);
    return sub_449BE0(v6);
  }
  else
  {
    result = a2 - 7;
    if ( a2 == 7 )
    {
      sub_435570(1, 0);
      return sub_44A120(v6, dword_8B72B4);
    }
  }
  return result;
}
