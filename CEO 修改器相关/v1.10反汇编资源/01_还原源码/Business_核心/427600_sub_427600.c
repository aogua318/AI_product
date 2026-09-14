// 函数 0x427600  sub_427600  size=0x6E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_427600(_DWORD *this, int a2)
{
  int v4; // ecx
  int v5; // eax
  int v6; // esi

  if ( a2 == -1 )
    return 0;
  v4 = *(char *)(*(_DWORD *)dword_4D0C8C + 388 * *(__int16 *)this + a2 + 120);
  v5 = (dword_4CD11C - *(this + 2)) / 55296;
  if ( v5 > 0 )
  {
    v6 = v5;
    do
    {
      v4 = 99 * v4 / 100;
      --v6;
    }
    while ( v6 );
  }
  return v4;
}
