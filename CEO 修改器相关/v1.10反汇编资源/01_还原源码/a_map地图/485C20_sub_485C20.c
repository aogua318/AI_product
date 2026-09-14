// 函数 0x485c20  sub_485C20  size=0x9A  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_485C20(int *this, int a2, int a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  char *v10; // edx
  HWND result; // eax
  int v12; // [esp+Ch] [ebp-10h] BYREF
  int v13; // [esp+10h] [ebp-Ch]
  int v14; // [esp+14h] [ebp-8h]
  char *v15; // [esp+18h] [ebp-4h]

  sub_464B60(&v12);
  sub_484160(this, a2, a3, &a3, &a2);
  v4 = *(this + 8);
  v5 = v4 + a3;
  v6 = a3 - v4;
  v15 = (char *)(a2 + v4);
  v7 = *this;
  v12 = v6;
  v14 = v5;
  v13 = a2;
  if ( v6 < v7 )
  {
    v6 = v7;
    v12 = v7;
  }
  v8 = *(this + 1);
  if ( a2 < v8 )
    v13 = *(this + 1);
  v9 = *(this + 2) + v7;
  if ( v5 >= v9 )
  {
    v5 = v9 - 1;
    v14 = v9 - 1;
  }
  v10 = v15;
  result = (HWND)(v8 + *(this + 3));
  if ( (int)v15 >= (int)result )
  {
    v10 = (char *)result - 1;
    v15 = (char *)result - 1;
  }
  if ( v6 < v5 && v13 < (int)v10 )
    return sub_47C950(&v12);
  return result;
}
