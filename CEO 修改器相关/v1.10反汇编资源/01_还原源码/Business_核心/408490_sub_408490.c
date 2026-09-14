// 函数 0x408490  sub_408490  size=0x187  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_408490(int a1)
{
  char *v1; // edi
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  bool v5; // cc
  size_t v6; // esi
  char *v7; // esi
  int v8; // eax
  __int16 v9; // ax
  int v10; // edx
  int v11; // eax
  __int16 v13; // [esp+8h] [ebp-Ch] BYREF
  __int16 v14; // [esp+Ch] [ebp-8h] BYREF
  int v15; // [esp+10h] [ebp-4h]

  v1 = (char *)(dword_4CC8D0 + a1 * dword_4CC8BC);
  if ( *v1 == dword_4C2CEC && v1[10] != 2 )
  {
    v2 = dword_4CCAAC + dword_4CCA98 * *((__int16 *)v1 + 1);
    if ( !dword_4CD13C || *(char *)(v2 + 224) >= 7 )
    {
      v3 = sub_419CB0(dword_4C2CEC);
      if ( v3 != -1 )
      {
        if ( sub_430F50(dword_8703D0 + v3 * dword_8703BC) )
        {
          v4 = *((__int16 *)v1 + 14) - *((__int16 *)v1 + 16) - *((__int16 *)v1 + 15);
          v5 = *((_DWORD *)v1 + 5) <= 0;
          v15 = v4;
          if ( !v5 )
            v15 = ++v4;
          if ( v4 > 0 )
          {
            v6 = dword_4C2D04;
            if ( dword_4C2D04 == 10000 )
            {
              MessageBoxA(hWnd, "buffer full", "error", 0);
              v6 = dword_4C2D04;
            }
            v7 = (char *)dword_4C2CF8 + 32 * v6;
            *((_WORD *)v7 + 4) = a1;
            v8 = *((_DWORD *)v1 + 3);
            if ( v8 <= 1 )
              v8 = 1;
            *(_DWORD *)v7 = v8;
            v9 = v15;
            *((_WORD *)v7 + 2) = v15;
            *((_WORD *)v7 + 3) = v9;
            sub_419920(&v14, &v13);
            v10 = dword_4C2CF0;
            *((_WORD *)v7 + 5) = v14;
            *((_WORD *)v7 + 6) = v13;
            *((double *)v7 + 2) = *(double *)(v2 + 8 * v10 + 1792);
            *((_DWORD *)v7 + 6) = *(char *)(v2 + 224);
            v11 = (int)((double)*((int *)dword_870824 + 28 * *v1)
                      * 0.00390625
                      * (double)*(int *)(*(_DWORD *)dword_870814 + 72 * *v1 + 24)
                      * 4.0
                      * 100.0
                      / (double)*(int *)v7);
            ++dword_4C2D04;
            *((_WORD *)v7 + 7) = v11;
          }
        }
      }
    }
  }
  return 0;
}
