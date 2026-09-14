// 函数 0x42f130  sub_42F130  size=0x8F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __thiscall sub_42F130(double *this, double a2)
{
  int v3; // edi
  int v4; // eax
  char Buffer[256]; // [esp+10h] [ebp-104h] BYREF

  *(this + 9) = *(this + 9) - a2;
  sub_42EDA0((char *)this, -a2);
  v3 = *(_DWORD *)dword_4D1088 + 2552;
  v4 = (int)sub_42E710();
  sprintf(Buffer, (const char *const)(v3 + 8), this + 2, (int)a2, v4);
  sub_42B930(-1, -1, *(char *)this, Buffer, v3);
}
