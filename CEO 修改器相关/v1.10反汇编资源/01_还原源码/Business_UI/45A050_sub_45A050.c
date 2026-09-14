// 函数 0x45a050  sub_45A050  size=0x105  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_45A050()
{
  int v0; // eax
  int v1; // ebx
  int v2; // edi
  __int16 *v3; // esi
  int v4; // esi
  int *v6; // [esp+30h] [ebp-4h]

  v0 = sub_47C740("face\\lose_face.fce");
  sub_481C90(&unk_8C9B50, v0, 1);
  v1 = 0;
  v2 = 0;
  v6 = dword_4CDF1C;
  v3 = (__int16 *)&unk_4FF6AC;
  do
  {
    if ( *v6 != -1 )
    {
      sub_47E650(*(v3 - 29) + 29);
      sub_47FF50(v3);
      ++v1;
      v2 += 576;
    }
    ++v6;
    v3 += 94940;
  }
  while ( (int)v3 < (int)word_6158FC );
  if ( v1 < 6 )
  {
    v4 = 576 * v1;
    do
    {
      sub_482060(v4 + dword_8C9C78 + 4032);
      sub_482060(v4 + dword_8C9C78 + 4320);
      v4 += 576;
    }
    while ( v4 < 3456 );
  }
  sub_47D1A0(&unk_8C9B50, sub_45A020, sub_459F70, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  return 1;
}
