// 函数 0x48a34c  ?__ArrayUnwind@@YGXPAXIHP6EX0@Z@Z  size=0x5E  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __stdcall __ArrayUnwind(char *a1, unsigned int a2, int a3, void (*a4)(void))
{
  while ( --a3 >= 0 )
  {
    a1 -= a2;
    a4();
  }
}
