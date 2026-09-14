// 函数 0x4664f0  sub_4664F0  size=0xD4  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4664F0(_DWORD *this, char *a2, size_t a3, void (__cdecl *a4)(char *))
{
  size_t v5; // edi
  _DWORD *v7; // ebx
  char *v8; // esi
  size_t Size; // [esp+8h] [ebp-8h] BYREF
  int v10; // [esp+Ch] [ebp-4h] BYREF
  char *v11; // [esp+18h] [ebp+8h]

  if ( *(this + 3) == 2 )
  {
    sub_466380(this, (int)&Size);
    sub_466380(this, (int)&v10);
    v5 = Size;
    if ( Size == a3 )
    {
      sub_466380(this, (int)a2);
      return 1;
    }
    v7 = sub_465E40(Size * v10, "a_lib\\a_loadsave.cpp", 145);
    Size = (size_t)v7;
    sub_466380(this, (int)v7);
    if ( v10 > 0 )
    {
      v8 = a2;
      v11 = (char *)v10;
      do
      {
        if ( a4 )
          a4(v8);
        else
          memset(v8, 0, a3);
        memcpy(v8, v7, v5);
        v8 += a3;
        v7 = (_DWORD *)((char *)v7 + v5);
        --v11;
      }
      while ( v11 );
      v7 = (_DWORD *)Size;
    }
    sub_465FE0((int)v7, "a_lib\\a_loadsave.cpp", 160);
  }
  return 0;
}
