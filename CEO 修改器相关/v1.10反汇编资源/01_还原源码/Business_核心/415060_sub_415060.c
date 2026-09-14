// 函数 0x415060  sub_415060  size=0xDD  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_415060(char *this, int a2, int a3, int a4)
{
  int v4; // eax
  int v6; // ebx
  bool v7; // zf
  int v8; // ebx
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  int result; // eax
  bool v13; // sf
  int v14; // edx
  int v15; // [esp+10h] [ebp-4h]

  v4 = dword_4CD11C;
  v6 = *((_DWORD *)this + 5);
  *(this + 8) &= ~1u;
  v15 = v6;
  v7 = a2 + v6 == 0;
  v8 = a2 + v6;
  *((_DWORD *)this + 9) = v4;
  if ( v7 )
    *(this + 1) = 0;
  else
    *(this + 1) = (int)(((double)v15 * (double)*(this + 1) + (double)(a3 * a2)) / (double)v8);
  *((_DWORD *)this + 5) = v8;
  if ( v8 < 0 )
    *((_DWORD *)this + 5) = 0;
  v9 = *this;
  v10 = *(_DWORD *)(*(_DWORD *)dword_870814 + 72 * v9 + 24);
  if ( a2 <= 0 )
    v11 = a2 - v10 + 1;
  else
    v11 = v10 + a2 - 1;
  result = v11 / v10;
  v13 = (__int16)(result + *((_WORD *)this + 12)) < 0;
  *((_WORD *)this + 12) += result;
  if ( v13 )
  {
    result = 0;
    *((_WORD *)this + 12) = 0;
  }
  if ( *(this + 1) < 0 )
    *(this + 1) = 0;
  if ( a4 )
  {
    v14 = *((__int16 *)this + 1);
    *((_DWORD *)this + 10) += a2;
    result = (int)&unk_4D10B8 + 189880 * *(char *)(dword_4CCA98 * v14 + dword_4CCAAC + 224);
    *(_DWORD *)(result + 4 * v9 + 36472) += a2;
  }
  *((_DWORD *)this + 11) += a2;
  return result;
}
