// 函数 0x464f60  sub_464F60  size=0x167  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_464F60(_DWORD *this, int (__cdecl *a2)(_DWORD))
{
  int result; // eax
  int v3; // ecx
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // ebx
  int v7; // esi
  int v8; // edi
  __int16 v9; // ax
  int v10; // edx
  int v11; // ebx
  __int16 v12; // dx
  int v13; // eax
  _DWORD *v14; // ecx
  int v15; // ebx
  int v16; // esi
  int v17; // edi
  int v18; // eax
  int v19; // edx
  int v20; // ebx
  int v21; // ecx
  int v22; // [esp+0h] [ebp-8h]

  result = *(this + 4);
  v22 = result;
  if ( result )
  {
    v3 = *this;
    if ( v3 == 2 )
    {
      v4 = sub_465E40(2 * result, (int)"a_lib\\a_block.cpp", 207);
      v5 = this;
      v6 = 0;
      v7 = 0;
      v8 = v4;
      if ( (int)*(this + 2) > 0 )
      {
        do
        {
          if ( *(__int16 *)(v5[5] + 2 * v6) < 0 )
          {
            v9 = v6;
            if ( v7 > 1 )
            {
              v10 = sub_4640D0() % v7;
              v5 = this;
              v9 = *(_WORD *)(v8 + 2 * v10);
              *(_WORD *)(v8 + 2 * v10) = v6;
            }
            *(_WORD *)(v8 + 2 * v7++) = v9;
            if ( v7 >= v22 )
              break;
          }
          ++v6;
        }
        while ( v6 < v5[2] );
        for ( ; v7 > 0; *(_WORD *)(v8 + 2 * v11) = v12 )
        {
          v11 = sub_4640D0() % v7;
          if ( a2(*(__int16 *)(v8 + 2 * v11)) )
            break;
          v12 = *(_WORD *)(v8 + 2 * v7-- - 2);
        }
      }
      return sub_465FE0(v8, (int)"a_lib\\a_block.cpp", 230);
    }
    else if ( v3 == 4 )
    {
      v13 = sub_465E40(4 * result, (int)"a_lib\\a_block.cpp", 233);
      v14 = this;
      v15 = 0;
      v16 = 0;
      v17 = v13;
      if ( (int)*(this + 2) > 0 )
      {
        do
        {
          if ( *(int *)(v14[5] + 4 * v15) < 0 )
          {
            v18 = v15;
            if ( v16 > 1 )
            {
              v19 = sub_4640D0() % v16;
              v14 = this;
              v18 = *(_DWORD *)(v17 + 4 * v19);
              *(_DWORD *)(v17 + 4 * v19) = v15;
            }
            *(_DWORD *)(v17 + 4 * v16++) = v18;
            if ( v16 >= v22 )
              break;
          }
          ++v15;
        }
        while ( v15 < v14[2] );
        for ( ; v16 > 0; *(_DWORD *)(v17 + 4 * v20) = v21 )
        {
          v20 = sub_4640D0() % v16;
          if ( a2(*(_DWORD *)(v17 + 4 * v20)) )
            break;
          v21 = *(_DWORD *)(v17 + 4 * v16-- - 4);
        }
      }
      return sub_465FE0(v17, (int)"a_lib\\a_block.cpp", 256);
    }
  }
  return result;
}
