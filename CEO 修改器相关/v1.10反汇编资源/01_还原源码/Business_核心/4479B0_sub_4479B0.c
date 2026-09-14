// 函数 0x4479b0  sub_4479B0  size=0x8A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4479B0()
{
  int v0; // ebx
  int result; // eax
  int v2; // edi
  int v3; // esi
  int v4; // [esp-8h] [ebp-1Ch]
  int v5; // [esp-4h] [ebp-18h]
  int i; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  v0 = 0;
  v7 = 0;
  do
  {
    result = v7;
    v2 = byte_8AA658[v7];
    v3 = 0;
    for ( i = v2; v3 < i; v2 -= 2 )
    {
      v5 = word_8AA77E + v0 + 131;
      v4 = word_8AA77C + 14 * ((unsigned int)v3 >> 1) + 82;
      if ( v2 <= 1 )
        sub_467680(14);
      else
        sub_467680(13);
      result = sub_466CA0(&dword_8EEDEC, v4, v5);
      v3 += 2;
    }
    ++v7;
    v0 += 17;
  }
  while ( v0 < 85 );
  return result;
}
