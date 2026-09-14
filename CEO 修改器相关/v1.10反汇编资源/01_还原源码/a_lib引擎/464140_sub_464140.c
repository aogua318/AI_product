// 函数 0x464140  sub_464140  size=0xCC  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char *__cdecl sub_464140(int a1, int a2, int a3)
{
  int v3; // eax
  int v4; // edi
  int v5; // esi
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v10; // [esp+Ch] [ebp-4h]
  int v11; // [esp+18h] [ebp+8h]

  v3 = a1;
  v4 = 0;
  if ( a1 < 0 )
  {
    v5 = 1;
    v3 = -a1;
    --a2;
    v10 = 1;
    byte_8DB7E4[0] = 32;
    a3 = 0;
  }
  else
  {
    v10 = 0;
    v5 = 0;
  }
  v6 = v3;
  v7 = a2 - 1;
  v8 = 1;
  if ( a2 - 1 > 0 )
  {
    do
    {
      v8 *= 10;
      --v7;
    }
    while ( v7 );
  }
  v11 = 0;
  if ( a2 > 0 )
  {
    while ( !(v6 / v8) && v4 != a2 - 1 )
    {
      if ( v11 || a3 )
        goto LABEL_10;
      byte_8DB7E4[v5] = 32;
LABEL_13:
      v6 %= v8;
      ++v5;
      ++v4;
      v8 /= 10;
      byte_8DB7E4[v5] = 0;
      if ( v4 >= a2 )
        return byte_8DB7E4;
    }
    v11 = 1;
LABEL_10:
    byte_8DB7E4[v5] = v6 / v8 + 48;
    if ( v10 && byte_8DB7E3[v5] == 32 )
      byte_8DB7E3[v5] = 45;
    goto LABEL_13;
  }
  return byte_8DB7E4;
}
