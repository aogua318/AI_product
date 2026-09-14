// 函数 0x481940  sub_481940  size=0x128  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__thiscall sub_481940(int *this, HWND a2)
{
  int *result; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  int v7; // ebx
  unsigned int v8; // edi
  int *v9; // eax
  char *v10; // ecx
  int *v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  int v15[4]; // [esp+8h] [ebp-14h] BYREF
  int *v16; // [esp+18h] [ebp-4h]

  result = sub_464B60(v15);
  v4 = (int)a2;
  if ( (HWND)*(this + 4) != a2 )
  {
    v5 = *(this + 3);
    if ( (int)a2 >= v5 )
    {
      a2 = (HWND)(v5 - 1);
      v4 = v5 - 1;
    }
    v6 = 0;
    if ( v4 < 0 )
    {
      a2 = 0;
      v4 = 0;
    }
    result = sub_47F5B0(this);
    if ( result )
    {
      result = sub_47F5B0(this);
      v15[0] = *result;
      v15[1] = result[1];
      v15[2] = result[2];
      v15[3] = result[3];
      v6 = 1;
    }
    *(this + 4) = v4;
    v7 = 0;
    if ( v6 )
    {
      v8 = 16;
      v9 = sub_47F5B0(this);
      v10 = (char *)((char *)v15 - (char *)v9);
      while ( *(int *)((char *)v9 + (_DWORD)v10) == *v9 )
      {
        v8 -= 4;
        ++v9;
        if ( v8 < 4 )
          goto LABEL_14;
      }
      sub_47C950(v15);
      v11 = sub_47F5B0(this);
      sub_47C950(v11);
LABEL_14:
      result = (int *)sub_47F970(this);
      if ( result )
      {
        v12 = *this;
        v16 = 0;
        if ( *(__int16 *)(v12 + 292) > 0 )
        {
          do
          {
            v13 = v7 + *(_DWORD *)(*this + 296);
            if ( *(_WORD *)(v13 + 4) == 6
              && *(_WORD *)(v7 + *(_DWORD *)(*this + 296) + 8) == (unsigned __int16)(((unsigned int)this
                                                                                    - *(_DWORD *)(*this + 296))
                                                                                   / 0x120) )
            {
              sub_480880(v13, a2);
            }
            v14 = *(__int16 *)(*this + 292);
            result = (int *)((char *)v16 + 1);
            v7 += 288;
            v16 = result;
          }
          while ( (int)result < v14 );
        }
      }
    }
  }
  return result;
}
