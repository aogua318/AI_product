// 函数 0x46efb0  sub_46EFB0  size=0xCD  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_46EFB0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  char *v8; // edx
  char v11; // al
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  char v17; // cl
  unsigned int v18; // [esp+14h] [ebp+14h]

  if ( !a4 )
    return 0;
  v8 = (char *)(a3 + 8);
  v18 = a4 + a3;
  if ( a3 + 8 >= (unsigned int)(a4 + a3) )
    return 0;
  while ( 1 )
  {
    v11 = *v8;
    v12 = *v8++ & 0xC0;
    if ( v12 == 64 )
    {
      if ( (v11 & 0x20) != 0 )
      {
        v13 = (unsigned __int8)*v8++;
        v14 = ((v11 & 0xF) << 8) | v13;
        if ( (v11 & 8) != 0 )
          v14 |= 0xFFFFF000;
      }
      else
      {
        v14 = v11 & 0xF;
      }
      v15 = v14 + 1;
      if ( (v11 & 0x10) != 0 )
      {
        a2 += v15;
        if ( a2 > a6 )
          return 0;
      }
      else
      {
        a1 += v15;
      }
      goto LABEL_24;
    }
    v16 = (v11 & 0x3F) + 1;
    if ( v12 )
    {
      if ( v12 == 128 )
      {
        v8 += 2;
      }
      else if ( v12 == 192 )
      {
        v17 = *v8;
        v8 += 2;
        if ( v17 < 0 )
          ++v8;
      }
    }
    else
    {
      v8 += 2 * v16;
    }
    if ( a2 == a6 && a1 <= a5 && v16 + a1 > a5 )
      return 1;
    a1 += v16;
LABEL_24:
    if ( (unsigned int)v8 >= v18 )
      return 0;
  }
}
