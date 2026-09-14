// 函数 0x4648c0  sub_4648C0  size=0xEA  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4648C0(int *this, char *a2, _BYTE *a3)
{
  int *v3; // ebx
  int result; // eax
  int v5; // edi
  int v6; // esi
  int v7; // ebx
  int v8; // esi
  char *v10; // eax
  char v11; // cl
  _BYTE v13[1024]; // [esp+Ch] [ebp-404h] BYREF

  v3 = this;
  result = sub_4647C0(v13, a2);
  if ( result )
  {
    v5 = v3[2];
    v6 = 0;
    if ( v5 > 0 )
    {
      v7 = *v3;
      do
      {
        if ( sub_464820(v7 + v6 + 4, v13, 9999) )
          break;
        v6 += *(_DWORD *)(v7 + v6);
      }
      while ( v6 < v5 );
      v3 = this;
    }
    if ( v6 >= v5 )
      return 0;
    v8 = v6 + 4;
    if ( v8 >= v5 )
      return 0;
    while ( 1 )
    {
      ++v8;
      if ( !*(_BYTE *)(*v3 + v8) )
        break;
      if ( v8 >= v5 )
        goto LABEL_13;
    }
    ++v8;
LABEL_13:
    if ( v8 < v5 )
    {
      v10 = (char *)(v8 + *v3);
      do
      {
        v11 = *v10;
        *a3++ = *v10++;
      }
      while ( v11 );
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
