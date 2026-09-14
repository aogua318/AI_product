// 函数 0x48a3aa  ??_M@YGXPAXIHP6EX0@Z@Z  size=0x63  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __stdcall `eh vector destructor iterator'(char *a1, unsigned int a2, int a3, void (__thiscall *a4)(void *))
{
  char *i; // [esp+34h] [ebp+8h]

  for ( i = &a1[a3 * a2]; --a3 >= 0; a4(i) )
    i -= a2;
}
