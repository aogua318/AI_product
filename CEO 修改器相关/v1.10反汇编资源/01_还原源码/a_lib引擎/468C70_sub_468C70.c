// 函数 0x468c70  sub_468C70  size=0xA3  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_468C70(int *this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // ecx
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  int v12; // [esp+Ch] [ebp-4h]
  int v13; // [esp+18h] [ebp+8h]

  v7 = a3;
  v8 = a2 + a4 - 1;
  v12 = a2;
  v13 = a3;
  v9 = a3 + a5 - 1;
  if ( v12 < 0 )
    v12 = 0;
  if ( a3 < 0 )
  {
    v13 = 0;
    v7 = 0;
  }
  if ( v8 >= *this )
    v8 = *this - 1;
  v10 = *(this + 1);
  if ( v9 >= v10 )
    v9 = v10 - 1;
  sub_468A40(this, v12, v7, v8, v7, a6);
  sub_468A40(this, v12, v13, v12, v9, a6);
  sub_468A40(this, v8, v13, v8, v9, a6);
  return sub_468A40(this, v12, v9, v8, v9, a6);
}
