// 函数 0x4123e0  sub_4123E0  size=0xAC  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4123E0(void *this, int a2)
{
  int v2; // edx
  int v3; // ebx
  int v4; // esi
  int result; // eax
  int v6; // edx
  int v7; // [esp+10h] [ebp-4h]

  v2 = dword_870840 + a2 * dword_87082C;
  v3 = -1;
  v4 = 0;
  v7 = 1000000;
  result = (int)this + 6092;
  while ( *(_DWORD *)result && *(_WORD *)(result - 4) != *(_WORD *)(v2 + 4) )
  {
    if ( *(_DWORD *)result < v7 )
    {
      v7 = *(_DWORD *)result;
      v3 = v4;
    }
    ++v4;
    result += 12;
    if ( v4 >= 10 )
    {
      result = (int)this + 12 * v3 + 6088;
      *(_WORD *)result = *(_WORD *)(v2 + 4);
      *(_WORD *)(result + 2) = a2;
      *(_DWORD *)(result + 8) = dword_4CD11C;
      *(_DWORD *)(result + 4) = 1;
      return result;
    }
  }
  *(_WORD *)(result - 4) = *(_WORD *)(v2 + 4);
  *(_WORD *)(result - 2) = a2;
  v6 = dword_4CD11C;
  ++*(_DWORD *)result;
  *(_DWORD *)(result + 4) = v6;
  return result;
}
