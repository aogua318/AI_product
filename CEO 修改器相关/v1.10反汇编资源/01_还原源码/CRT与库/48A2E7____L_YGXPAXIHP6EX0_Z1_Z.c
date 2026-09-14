// 函数 0x48a2e7  ??_L@YGXPAXIHP6EX0@Z1@Z  size=0x65  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __stdcall `eh vector constructor iterator'(
        char *a1,
        unsigned int a2,
        int a3,
        void (__thiscall *a4)(void *),
        void (__thiscall *a5)(void *))
{
  int i; // [esp+14h] [ebp-1Ch]

  for ( i = 0; i < a3; ++i )
  {
    a4(a1);
    a1 += a2;
  }
}
