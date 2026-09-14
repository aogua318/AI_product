// 函数 0x413720  sub_413720  size=0xBC  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_413720()
{
  char *v0; // eax
  __int16 *v1; // edi
  int v2; // esi
  int v3; // ebx
  _BYTE v5[16]; // [esp+10h] [ebp-24h] BYREF
  __int16 *v6; // [esp+20h] [ebp-14h]
  int v7; // [esp+24h] [ebp-10h]
  int v8; // [esp+30h] [ebp-4h]

  sub_464410(v5);
  v8 = 0;
  v0 = (char *)sub_47C740("data\\mur.csv");
  if ( sub_464420(v0) )
  {
    v7 = 0;
    v6 = word_4C70C0;
    do
    {
      v1 = v6;
      v2 = 0;
      v3 = v7 + 2;
      do
      {
        *v1 = sub_4646D0(v2 + 2, v3);
        ++v2;
        v1 += 106;
      }
      while ( v2 < 106 );
      ++v7;
      ++v6;
    }
    while ( (int)v6 < (int)word_4C7194 );
    sub_464650(v5);
  }
  v8 = -1;
  return sub_464B50(v5);
}
