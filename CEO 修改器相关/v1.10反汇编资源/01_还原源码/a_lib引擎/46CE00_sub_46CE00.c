// 函数 0x46ce00  sub_46CE00  size=0x42  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46CE00(int this, int a2)
{
  int result; // eax

  if ( *(_DWORD *)(this + 182210) )
    return (*(int (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 182210) + 60))(
             *(_DWORD *)(this + 182210),
             2000 * a2 / 100 - 2000);
  return result;
}
