// 函数 0x46a390  sub_46A390  size=0xB4  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46A390(FILE **this, int a2, int a3)
{
  FILE *v4; // ecx
  BOOL v6; // ebx
  int v7; // esi
  int v8; // eax
  FILE **v9; // [esp+0h] [ebp-4h]

  v4 = *this;
  v9 = this;
  if ( !v4 )
    return 0;
  if ( *(this + 1) )
    return sub_46F3D0(a2, a3);
  v6 = 0;
  v7 = 0;
  v8 = fgetc(v4);
  if ( v8 == -1 )
    return 0;
  do
  {
    if ( v8 == 10 || v8 == 13 )
    {
      if ( v7 || v6 )
      {
LABEL_9:
        *(_BYTE *)(v7 + a2) = 0;
        *(_BYTE *)(v7 + a2) = 0;
        return 1;
      }
      v6 = v8 == 13;
    }
    else
    {
      *(_BYTE *)(v7 + a2) = v8;
      if ( ++v7 >= a3 )
        goto LABEL_9;
    }
    v8 = fgetc(*v9);
  }
  while ( v8 != -1 );
  *(_BYTE *)(v7 + a2) = 0;
  return 1;
}
