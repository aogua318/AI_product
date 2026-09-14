// 函数 0x468560  sub_468560  size=0xF5  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int __cdecl sub_468560(__int16 *a1, unsigned __int8 *a2, int a3)
{
  unsigned int result; // eax
  __int16 *v4; // esi
  int v6; // ebx
  int v7; // ecx
  int v8; // edx
  int v9; // esi
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  bool v14; // zf

  result = a3;
  if ( a3 > 0 )
  {
    v4 = a1;
    do
    {
      v6 = a2[3];
      v7 = *a2;
      result = a2[1];
      v8 = a2[2];
      a2 += 4;
      if ( v6 > 15 )
      {
        if ( v6 == 255 )
        {
          result &= 0xF8u;
          *v4 = (v7 >> 3) | (4 * (result | (32 * (v8 & 0xF8))));
        }
        else
        {
          v9 = *v4;
          v10 = v6 + 1;
          v11 = (((v9 >> 2) & 0xF8) << 8) + v10 * (result - ((v9 >> 2) & 0xF8));
          v12 = ((v9 & 0x1F) << 11) + v10 * (v7 - 8 * (v9 & 0x1F));
          v13 = (((v9 >> 7) & 0xF8) << 8) + v10 * (v8 - ((v9 >> 7) & 0xF8));
          v4 = a1;
          result = *a1 & 0xFFFF8000 | (v13 >> 1) & 0x7C00 | (v12 >> 11) & 0x1F | (v11 >> 6) & 0x3E0;
          *a1 = result;
        }
      }
      ++v4;
      v14 = a3-- == 1;
      a1 = v4;
    }
    while ( !v14 );
  }
  return result;
}
