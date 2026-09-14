// 函数 0x464a60  sub_464A60  size=0xD6  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_464A60(volatile LONG *this, char *Format, unsigned int a3, int (__cdecl *a4)(int), int a5)
{
  volatile LONG *v5; // ebx
  DWORD TickCount; // [esp+Ch] [ebp-10h]
  DWORD v8; // [esp+10h] [ebp-Ch]
  int v9; // [esp+14h] [ebp-8h]

  v5 = this + 1;
  v9 = 1;
  sub_464A20(this + 1);
  TickCount = GetTickCount();
  v8 = TickCount;
  while ( !*this )
  {
LABEL_10:
    sub_464A20(this);
    if ( *this == 1 )
      goto LABEL_13;
    sub_464A30(this);
  }
  while ( 1 )
  {
    if ( a3 != -1 )
    {
      if ( GetTickCount() - TickCount > a3 )
        break;
      if ( GetTickCount() - v8 > 0x3E8 )
      {
        printf(Format);
        v8 = GetTickCount();
      }
    }
    Sleep(*v5 / 10 + 1);
    if ( a4 )
    {
      if ( !a4(a5) )
        break;
    }
    if ( !*this )
      goto LABEL_10;
  }
  v9 = 0;
LABEL_13:
  sub_464A30(v5);
  return v9;
}
