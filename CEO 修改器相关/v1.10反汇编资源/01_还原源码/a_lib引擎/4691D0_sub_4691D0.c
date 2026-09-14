// 函数 0x4691d0  sub_4691D0  size=0x196  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4691D0(
        int *this,
        int a2,
        int a3,
        int *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int (__cdecl *a9)(int, int, int))
{
  int result; // eax
  int v10; // ebx
  int v11; // esi
  int v12; // ebx
  int v13; // edx
  int v14; // esi
  int v15; // esi
  int v16; // ebx
  int v17; // esi
  int v18; // edi
  int v19; // [esp+4h] [ebp-Ch]
  int v20; // [esp+8h] [ebp-8h]
  int v21; // [esp+Ch] [ebp-4h]
  int v22; // [esp+1Ch] [ebp+Ch]
  int v23; // [esp+1Ch] [ebp+Ch]

  result = *(this + 3);
  if ( (result & 7) == 0 )
  {
    v10 = a4[3];
    if ( (v10 & 7) == 0 )
    {
      v20 = result / 8;
      v21 = v10 / 8;
      result = a5;
      v11 = a2;
      if ( a5 < 0 )
      {
        a7 += a5;
        v11 = a2 - a5;
        a2 -= a5;
        result = 0;
      }
      v12 = a6;
      v13 = a3;
      if ( a6 < 0 )
      {
        a8 += a6;
        v13 = a3 - a6;
        v12 = 0;
        a6 = 0;
      }
      if ( v11 < *(this + 5) )
      {
        result += *(this + 5) - v11;
        a7 += v11 - *(this + 5);
        v12 = a6;
        v11 = *(this + 5);
        a2 = v11;
      }
      if ( v13 < *(this + 6) )
      {
        v12 += *(this + 6) - v13;
        v11 = a2;
        a8 += v13 - *(this + 6);
        a6 = v12;
        v13 = *(this + 6);
      }
      if ( a7 > 0 && a8 > 0 )
      {
        v19 = *a4;
        if ( result < *a4 )
        {
          v22 = a4[1];
          if ( v12 < v22 && v11 < *(this + 7) && v13 < *(this + 8) )
          {
            if ( v12 + a8 > v22 )
              a8 = v22 - v12;
            v14 = *(this + 8);
            if ( v13 + a8 > v14 )
              a8 = v14 - v13;
            if ( result + a7 > v19 )
              a7 = v19 - result;
            v15 = *(this + 7);
            if ( a2 + a7 > v15 )
              a7 = v15 - a2;
            v16 = a4[2];
            v23 = *(this + 2);
            v17 = a4[9] + a6 * v16 + result * v21;
            v18 = *(this + 9) + a2 * v20 + v13 * v23;
            Size = v21;
            result = a8;
            dword_8DBCFC = v20;
            if ( a8 > 0 )
            {
              do
              {
                result = a9(v18, v17, a7);
                v18 += v23;
                v17 += v16;
                --a8;
              }
              while ( a8 );
            }
          }
        }
      }
    }
  }
  return result;
}
