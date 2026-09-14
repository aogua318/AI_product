// 函数 0x461040  sub_461040  size=0xB6  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_461040()
{
  int v0; // ebx
  int v1; // esi
  int v2; // edi
  char *v4; // [esp+8h] [ebp-4h]

  v0 = 0;
  v1 = 0;
  if ( dword_870818 > 0 )
  {
    v2 = *(_DWORD *)dword_870814;
    v4 = (char *)&unk_8D7708;
    do
    {
      if ( *(char *)(v2 + 12) == word_4CE038 )
      {
        strcpy(v4, (const char *)v2);
        word_8D7898[v0++] = v1;
        v4 += 20;
      }
      ++v1;
      v2 += 72;
    }
    while ( v1 < dword_870818 );
  }
  sub_481AC0(&unk_8D7708, 20, v0, 0);
  sub_481A70(v0);
  sub_4801E0(word_4CE03A);
  return sub_47FF50((char *)&unk_8D7708 + 20 * word_4CE03A);
}
