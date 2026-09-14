// 函数 0x4868e0  sub_4868E0  size=0x93  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4868E0(int *this, int a2, int a3)
{
  int v3; // edx
  int v4; // esi
  __int16 *v5; // edi
  int v6; // ebx
  int *v8; // [esp+8h] [ebp-4h]

  v3 = a2;
  v4 = a3;
  v5 = (__int16 *)(*(this + 45) + a2 * *(this + 40));
  v8 = this;
  if ( v5[3] == a3 )
    return 0;
  v6 = *(unsigned __int8 *)(*(this + 37) + 10 * *v5 + 7);
  if ( a3 < 0 )
  {
    do
      v4 += v6;
    while ( v4 < 0 );
  }
  for ( ; v4 >= v6; v4 -= v6 )
    ;
  if ( *(this + 16) )
  {
    sub_485B90(this, a2);
    v3 = a2;
    this = v8;
  }
  if ( v4 >= (unsigned int)v6 )
    v5[3] = v6 - 1;
  else
    v5[3] = v4;
  if ( *(this + 16) )
    sub_485B90(this, v3);
  return 1;
}
