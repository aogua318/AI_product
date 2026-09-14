// 函数 0x481500  sub_481500  size=0x136  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

__int16 *__thiscall sub_481500(int this, HWND a2)
{
  __int16 *result; // eax
  int v4; // edi
  int v5; // eax
  int *v6; // eax
  int v7; // edx
  bool v8; // zf
  __int16 v9; // cx
  __int16 v10; // cx
  int *v11; // eax
  int v12; // ebx
  int v13; // edx
  int v14; // edx
  _DWORD v15[4]; // [esp+8h] [ebp-14h] BYREF
  __int16 *v16; // [esp+18h] [ebp-4h]

  result = (__int16 *)sub_464B60(v15);
  v4 = (int)a2;
  if ( *(HWND *)(this + 16) != a2 )
  {
    v5 = *(_DWORD *)(this + 12);
    if ( (int)a2 >= v5 )
    {
      a2 = (HWND)(v5 - 1);
      v4 = v5 - 1;
    }
    if ( v4 < 0 )
    {
      a2 = 0;
      v4 = 0;
    }
    result = (__int16 *)sub_47EC10((int *)this);
    if ( result )
    {
      v6 = sub_47EC10((int *)this);
      sub_47C950(v6);
      v7 = *(_DWORD *)(this + 12);
      v8 = *(_WORD *)(this + 20) == 0;
      *(_DWORD *)(this + 16) = v4;
      if ( v8 )
      {
        v10 = *(_WORD *)(this + 34);
        *(_WORD *)(this + 62) = v10;
        if ( v7 > 1 )
          *(_WORD *)(this + 62) = v10 + v4 * (*(__int16 *)(this + 38) - v10) / (v7 - 1);
      }
      else
      {
        v9 = *(_WORD *)(this + 36);
        *(_WORD *)(this + 64) = v9;
        if ( v7 > 1 )
          *(_WORD *)(this + 64) = v9 + v4 * (*(__int16 *)(this + 40) - v9) / (v7 - 1);
      }
      v11 = sub_47EC10((int *)this);
      sub_47C950(v11);
      result = (__int16 *)sub_47F970((int *)this);
      if ( result )
      {
        result = *(__int16 **)this;
        v12 = 0;
        v16 = 0;
        if ( result[146] > 0 )
        {
          do
          {
            v13 = *(_DWORD *)(*(_DWORD *)this + 296);
            if ( *(_WORD *)(v13 + v12 + 4) == 6
              && *(_WORD *)(v12 + *(_DWORD *)(*(_DWORD *)this + 296) + 8) == (unsigned __int16)((this - v13) / 0x120u) )
            {
              sub_480880(v13 + v12, a2);
            }
            v14 = *(__int16 *)(*(_DWORD *)this + 292);
            result = (__int16 *)((char *)v16 + 1);
            v12 += 288;
            v16 = result;
          }
          while ( (int)result < v14 );
        }
      }
    }
  }
  return result;
}
