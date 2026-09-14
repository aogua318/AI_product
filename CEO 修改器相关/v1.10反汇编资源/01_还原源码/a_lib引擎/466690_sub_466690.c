// 函数 0x466690  sub_466690  size=0xEC  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_466690(_WORD *a1, unsigned __int16 *a2, int a3)
{
  int result; // eax
  _WORD *v4; // ebx
  int v6; // esi
  int v7; // ecx
  __int16 v8; // di
  int v9; // esi
  int v10; // ebx
  __int16 v11; // cx
  int v12; // edx
  bool v13; // zf
  unsigned __int16 *v14; // [esp+Ch] [ebp+Ch]

  result = a3;
  if ( a3 > 0 )
  {
    v4 = a1;
    do
    {
      v6 = *((unsigned __int8 *)a2 + 2);
      v7 = (*a2 & 0x1F) + 3 * ((((int)*a2 >> 5) & 0x1F) + 2 * (((int)*a2 >> 10) & 0x1F));
      a2 = (unsigned __int16 *)((char *)a2 + 3);
      result = v7 / 10;
      v14 = a2;
      if ( v6 > 15 )
      {
        if ( v6 == 255 )
        {
          *v4 = result | (32 * (result | (32 * result)));
        }
        else
        {
          v8 = *v4;
          v9 = v6 + 1;
          v10 = ((v8 & 0x3E0) << 8) + v9 * (result - (v8 & 0x3E0));
          v11 = v8;
          v12 = ((v8 & 0x1F) << 8) + v9 * (result - (v8 & 0x1F));
          a2 = v14;
          result = ((((v11 & 0x7C00) << 8) + v9 * (result - (v11 & 0x7C00))) >> 8) & 0x7C00
                 | (v12 >> 8) & 0x1F
                 | (v10 >> 8) & 0x3E0;
          v4 = a1;
          *a1 = result;
        }
      }
      ++v4;
      v13 = a3-- == 1;
      a1 = v4;
    }
    while ( !v13 );
  }
  return result;
}
