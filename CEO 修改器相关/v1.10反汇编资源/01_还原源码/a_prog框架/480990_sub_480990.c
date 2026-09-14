// 函数 0x480990  sub_480990  size=0xB2  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__thiscall sub_480990(__int16 *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // edi
  __int16 v4; // dx
  __int16 *v5; // edx
  int v6; // ebx
  int v7; // edx
  __int16 v8; // cx
  int v9; // edx
  int v10; // ebx
  int v11; // ecx
  int v12; // eax
  int v14; // [esp+Ch] [ebp-8h]

  v1 = *(_DWORD *)this;
  v2 = *(this + 4) + *(__int16 *)(*(_DWORD *)this + 276);
  v3 = *(this + 5) + *(__int16 *)(*(_DWORD *)this + 278);
  v4 = *(this + 13);
  if ( v4 != -1 || (v4 = *(this + 12), v4 != -1) )
  {
    v5 = (__int16 *)(**(_DWORD **)(v1 + 16) + 24 * v4);
    v2 += *v5;
    v3 += v5[1];
  }
  v6 = *(this + 6);
  v7 = *(this + 7);
  v8 = *(this + 9);
  v9 = v3 + v7;
  v10 = v2 + v6;
  if ( v8 != -1 )
  {
    v14 = **(_DWORD **)(v1 + 16) + 24 * v8;
    v11 = *(__int16 *)(v14 + 4) / 2;
    v12 = *(__int16 *)(v14 + 6) / 2;
    v2 -= v11;
    v3 -= v12;
    v10 += v11;
    v9 += v12;
  }
  return sub_464D00(v2, v3, v10, v9);
}
