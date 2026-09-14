// 函数 0x468a40  sub_468A40  size=0x22F  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_468A40(int *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx
  signed int v8; // ecx
  int v9; // esi
  int v10; // edx
  int result; // eax
  int v12; // ebx
  int v13; // esi
  int v14; // ecx
  int v15; // kr00_4
  int v16; // edx
  int v17; // ecx
  int v18; // ebx
  int v19; // esi
  int v20; // kr04_4
  int v21; // [esp+Ch] [ebp-18h] BYREF
  int v22; // [esp+10h] [ebp-14h]
  int v23; // [esp+14h] [ebp-10h]
  int Src; // [esp+18h] [ebp-Ch] BYREF
  int v25; // [esp+1Ch] [ebp-8h]
  int v26; // [esp+20h] [ebp-4h]
  unsigned int v27; // [esp+2Ch] [ebp+8h]
  unsigned int v28; // [esp+2Ch] [ebp+8h]
  int v29; // [esp+30h] [ebp+Ch]
  int v30; // [esp+30h] [ebp+Ch]
  int v31; // [esp+34h] [ebp+10h]
  int v32; // [esp+38h] [ebp+14h]

  v6 = a4 - a2;
  Src = *(this + 2);
  v8 = abs32(a4 - a2);
  v25 = a5 - a3;
  v9 = abs32(a5 - a3);
  if ( v8 < v9 )
  {
    v16 = a3;
    if ( a3 > a5 )
    {
      a2 = a4;
      v16 = a5;
      a5 = a3;
      a3 = v16;
      v6 = -v6;
    }
    v22 = 2 * v8;
    result = 2 * v8 - v9;
    v26 = result;
    v23 = -2 * v9;
    if ( v8 )
    {
      v16 = a3;
      v25 = v6 / v8;
      result = v26;
    }
    else
    {
      v25 = 0;
    }
    v17 = a2;
    v30 = a2;
    v18 = v16;
    if ( v16 <= a5 )
    {
      v28 = *(this + 1) * Src;
      v19 = v16 * Src;
      v31 = v16 * Src;
      do
      {
        if ( v17 + v19 < v28 )
        {
          v21 = a6;
          if ( v17 >= *(this + 5) && v18 >= *(this + 6) && v17 < *(this + 7) && v18 < *(this + 8) )
          {
            v20 = *(this + 3);
            if ( v20 / 8 > 0 )
              memcpy((void *)(*(_DWORD *)(*(this + 10) + 4 * v18) + v30 * (v20 / 8)), &v21, v20 / 8);
            v17 = v30;
            result = v26;
          }
        }
        if ( result > 0 )
        {
          result += v23;
          v17 += v25;
          v30 = v17;
        }
        result += v22;
        v19 = Src + v31;
        ++v18;
        v26 = result;
        v31 += Src;
      }
      while ( v18 <= a5 );
    }
  }
  else
  {
    v10 = a2;
    result = a4;
    if ( a2 > a4 )
    {
      result = a2;
      a3 = a5;
      v10 = a4;
      a4 = a2;
      a2 = v10;
      v25 = -v25;
    }
    v21 = 2 * v9;
    v12 = 2 * v9 - v8;
    v26 = v12;
    v23 = -2 * v8;
    if ( v9 )
    {
      v10 = a2;
      v25 /= v9;
      result = a4;
    }
    else
    {
      v25 = 0;
    }
    v32 = a3;
    v13 = v10;
    if ( v10 <= result )
    {
      result = Src;
      v27 = *(this + 1) * Src;
      v14 = a3 * Src;
      v29 = a3 * Src;
      v22 = Src * v25;
      do
      {
        if ( v13 + v14 < v27 )
        {
          Src = a6;
          if ( v13 >= *(this + 5) )
          {
            result = v32;
            if ( v32 >= *(this + 6) && v13 < *(this + 7) && v32 < *(this + 8) )
            {
              v15 = *(this + 3);
              result = v15 / 8;
              if ( v15 / 8 > 0 )
                result = (int)memcpy((void *)(*(_DWORD *)(*(this + 10) + 4 * v32) + v13 * (v15 / 8)), &Src, v15 / 8);
              v12 = v26;
            }
          }
        }
        if ( v12 <= 0 )
        {
          v14 = v29;
        }
        else
        {
          v32 += v25;
          v12 += v23;
          v14 = v22 + v29;
          v29 += v22;
        }
        v12 += v21;
        ++v13;
        v26 = v12;
      }
      while ( v13 <= a4 );
    }
  }
  return result;
}
