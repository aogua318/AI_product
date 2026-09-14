// 函数 0x468f70  sub_468F70  size=0x60  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __thiscall sub_468F70(int *this, int *a2, int a3, int a4)
{
  int v4; // eax
  int *v5; // esi
  bool v6; // zf

  if ( a3 > 0 )
  {
    v4 = 8 * a3 - 8;
    v5 = a2;
    do
    {
      sub_468A40(this, *v5, v5[1], *(int *)((char *)a2 + v4), *(int *)((char *)a2 + v4 + 4), a4);
      v5 += 2;
      v6 = a3-- == 1;
      v4 = (int)v5 - 8 - (_DWORD)a2;
    }
    while ( !v6 );
  }
}
