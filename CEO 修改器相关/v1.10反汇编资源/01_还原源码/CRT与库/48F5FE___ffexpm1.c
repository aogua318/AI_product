// 函数 0x48f5fe  __ffexpm1  size=0x43  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

// positive sp value has been detected, the output may be wrong!
void __usercall _ffexpm1(int a1@<ebp>, long double a2@<st0>)
{
  bool v2; // c0
  char v3; // c2
  bool v4; // c3
  long double v5; // st6
  __int16 v6; // fps
  bool v7; // c0
  char v8; // c2
  bool v9; // c3
  __int16 v10; // fps
  bool v13; // c0
  char v14; // c2
  bool v15; // c3
  __int16 v16; // fps
  long double v17; // st6
  bool v18; // c0
  char v19; // c2
  bool v20; // c3

  v5 = fabs(a2);
  v7 = v5 > NAN;
  v8 = 0;
  v9 = NAN == v5;
  *(_WORD *)(a1 - 160) = v6;
  if ( (*(_BYTE *)(a1 - 159) & 0x41) != 0 )
  {
    v2 = a2 < 0.0;
    v3 = 0;
    v4 = a2 == 0.0;
    *(_WORD *)(a1 - 160) = v6;
    if ( (*(_BYTE *)(a1 - 159) & 1) != 0 )
    {
      *(_BYTE *)(a1 - 144) = 4;
      JUMPOUT(0x48F7B6);
    }
    expbigret();
  }
  else
  {
    _ST6 = a2;
    __asm { frndint }
    v13 = _ST6 < 0.0;
    v14 = 0;
    v15 = _ST6 == 0.0;
    *(_WORD *)(a1 - 160) = v10;
    v17 = a2 - _ST6;
    v18 = v17 < 0.0;
    v19 = 0;
    v20 = v17 == 0.0;
    *(_WORD *)(a1 - 160) = v16;
  }
}
