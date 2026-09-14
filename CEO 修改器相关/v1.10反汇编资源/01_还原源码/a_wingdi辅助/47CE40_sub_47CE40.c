// 函数 0x47ce40  sub_47CE40  size=0xE6  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_47CE40(const char *a1, int a2)
{
  int v2; // edi
  int result; // eax
  const char *v4; // esi
  char v5[256]; // [esp+0h] [ebp-104h] BYREF

  strcpy(v5, a1);
  sub_464100(v5);
  v2 = -1;
  result = 0;
  v4 = (const char *)&unk_8EEF78;
  do
  {
    if ( *((_DWORD *)v4 - 3) )
    {
      if ( !strcmp(v4, v5) )
        return result;
    }
    else if ( v2 == -1 )
    {
      v2 = result;
    }
    v4 += 568;
    ++result;
  }
  while ( (int)v4 < (int)byte_8F12F8 );
  if ( v2 == -1 || !sub_47B750((char *)&unk_8EEE40 + 568 * v2, v5, a2) )
    return -1;
  else
    return v2;
}
