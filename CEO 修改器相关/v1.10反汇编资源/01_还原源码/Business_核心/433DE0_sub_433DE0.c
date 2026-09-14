// 函数 0x433de0  sub_433DE0  size=0x8B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_433DE0(int this, int a2, int a3)
{
  int v4; // ecx
  __int16 v5; // di
  __int16 v6; // bx
  int v7; // eax
  unsigned int v9; // [esp-20h] [ebp-30h]
  int v10; // [esp-1Ch] [ebp-2Ch]
  int v11; // [esp-18h] [ebp-28h]
  unsigned int v12; // [esp+Ch] [ebp-4h] BYREF

  if ( sub_4334C0((_DWORD *)this) )
    sub_433470(v4);
  v5 = a3;
  v6 = a2;
  if ( !sub_433320(a2, a3, &v12, (unsigned int *)&a2, &a3) )
    return 0;
  v11 = a3;
  v10 = a2;
  v9 = v12;
  *(_WORD *)this = v6;
  *(_WORD *)(this + 2) = v5;
  v7 = sub_486480(141, v9, v10, v11, 0, 0, 0, 0, 0);
  *(_DWORD *)(this + 24) = v7;
  if ( v7 == -1 )
    return 0;
  sub_433710(this);
  return 1;
}
