// 函数 0x47f5b0  sub_47F5B0  size=0x14E  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__thiscall sub_47F5B0(int *this)
{
  int v2; // esi
  int v3; // edx
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // ebx
  int v9; // edi
  int v10; // ebx
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // esi
  int v15; // eax
  int v16; // ebx
  int v17; // edx
  int v18; // [esp+0h] [ebp-8h]
  int v19; // [esp+0h] [ebp-8h]
  int v20; // [esp+4h] [ebp-4h]
  int v21; // [esp+4h] [ebp-4h]

  if ( *(this + 3) < 2 )
    return sub_464D00(100000, 100000, -100000, -100000);
  v2 = *((__int16 *)this + 14) + *(__int16 *)(*this + 276);
  v3 = *((__int16 *)this + 16);
  v4 = *((__int16 *)this + 15) + *(__int16 *)(*this + 278);
  v20 = v3 + v2;
  v5 = *((__int16 *)this + 17);
  v6 = v5 + v4;
  v18 = v5 + v4;
  if ( *((_WORD *)this + 10) )
  {
    if ( v5 > 2 * v3 )
    {
      v7 = *((__int16 *)this + 16);
      v8 = v6 - v7;
      v9 = v7 + v4;
      v19 = v8;
      if ( v8 - v9 >= 4 )
      {
        v10 = (v8 - v9) / *(this + 3);
        if ( v10 < 4 )
          v10 = 4;
        v11 = *(this + 3);
        if ( v11 > 1 )
          v9 += *(this + 4) * (v19 - v10 - v9) / (v11 - 1);
        return sub_464D00(v2, v9, v20, v9 + v10);
      }
    }
    return sub_464D00(100000, 100000, -100000, -100000);
  }
  if ( v3 <= 2 * v5 )
    return sub_464D00(100000, 100000, -100000, -100000);
  v12 = *((__int16 *)this + 17);
  v13 = v20 - v12;
  v14 = v12 + v2;
  v15 = v20 - v12 - v14;
  v21 = v13;
  if ( v15 < 4 )
    return sub_464D00(100000, 100000, -100000, -100000);
  v16 = v15 / *(this + 3);
  if ( v16 < 4 )
    v16 = 4;
  v17 = *(this + 3);
  if ( v17 > 1 )
    v14 += *(this + 4) * (v21 - v16 - v14) / (v17 - 1);
  return sub_464D00(v14, v4, v14 + v16, v18);
}
