// 函数 0x486d40  sub_486D40  size=0x33C  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_486D40(int *this, int a2, int a3)
{
  bool v4; // cc
  int v5; // ebx
  int v6; // edi
  _DWORD *v7; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  _DWORD *v11; // ecx
  int v12; // ebx
  _DWORD *v13; // ecx
  int j; // edi
  int v15; // edx
  int i; // ebx
  unsigned int v17; // edi
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  unsigned __int16 v21; // ax
  int v22; // kr04_4
  int v24; // [esp+8h] [ebp-2030h] BYREF
  int v25; // [esp+Ch] [ebp-202Ch] BYREF
  int v26; // [esp+10h] [ebp-2028h]
  int v27; // [esp+14h] [ebp-2024h]
  int v28; // [esp+18h] [ebp-2020h]
  int Src; // [esp+1Ch] [ebp-201Ch] BYREF
  unsigned int v30; // [esp+20h] [ebp-2018h] BYREF
  unsigned int v31; // [esp+24h] [ebp-2014h] BYREF
  int v32; // [esp+28h] [ebp-2010h]
  int v33; // [esp+2Ch] [ebp-200Ch]
  int v34; // [esp+30h] [ebp-2008h]
  unsigned int v35; // [esp+34h] [ebp-2004h]
  _DWORD v36[2047]; // [esp+38h] [ebp-2000h]

  v26 = a2;
  if ( !a2 )
    sub_468D20(this + 1, 0, 0, *(this + 1), *(this + 2), 224);
  if ( *(_DWORD *)(*this + 4 * a2 + 120) )
  {
    v4 = *(this + 32) <= 0;
    v34 = 0;
    if ( !v4 )
    {
      while ( 1 )
      {
        v5 = *(this + 31);
        v32 = 0;
        if ( v5 > 0 )
          break;
LABEL_27:
        if ( ++v34 >= *(this + 32) )
          return sub_47C950(this + 25);
      }
      while ( 1 )
      {
        v6 = *(this + 32);
        v7 = (_DWORD *)*this;
        v8 = v34 * *(this + 34) / v6;
        v28 = *(_DWORD *)(*this + 88) + *(this + 33) * (v32 - v6) / v5;
        v9 = v7[23] + v8;
        sub_484020(v7, v28, v9, &v30, (int *)&v31);
        v33 = 0;
        if ( a3 )
          break;
        if ( v30 < *(_DWORD *)(*this + 24) && v31 < *(_DWORD *)(*this + 28) )
        {
          v35 = v30;
          v36[0] = v31;
          v33 = 1;
LABEL_16:
          for ( i = 0; i < v33; ++i )
          {
            v17 = v36[2 * i];
            v18 = *this;
            v30 = v36[2 * i - 1];
            v31 = v17;
            v19 = v30 + v17 * *(_DWORD *)(v18 + 24);
            v20 = *(__int16 *)(*(_DWORD *)(v18 + 4 * v26 + 120) + 2 * v19);
            if ( v20 != -1 )
            {
              v21 = ((int (__cdecl *)(int, int, unsigned int))*(this + 38))(v26, v20, v19);
              if ( v21 != 0xFFFF )
              {
                Src = v21;
                if ( v32 >= *(this + 6) && v34 >= *(this + 7) && v32 < *(this + 8) && v34 < *(this + 9) )
                {
                  v22 = *(this + 4);
                  if ( v22 / 8 > 0 )
                    memcpy((void *)(*(_DWORD *)(*(this + 11) + 4 * v34) + v32 * (v22 / 8)), &Src, v22 / 8);
                }
              }
            }
          }
        }
LABEL_26:
        v5 = *(this + 31);
        if ( ++v32 >= v5 )
          goto LABEL_27;
      }
      v10 = *(this + 32);
      v11 = (_DWORD *)*this;
      v27 = *(_DWORD *)(*this + 88) + *(this + 33) * (v32 - v10 + 1) / *(this + 31);
      Src = v11[23] + *(this + 34) * (v34 + 1) / v10;
      sub_484020(v11, v28, v9, &v24, &v25);
      v12 = v9;
      if ( v9 >= Src )
        goto LABEL_26;
      v13 = (_DWORD *)*this;
      do
      {
        for ( j = v28; j < v27; j += v13[8] )
        {
          sub_484020(v13, j, v12, &v30, (int *)&v31);
          v13 = (_DWORD *)*this;
          if ( v30 < *(_DWORD *)(*this + 24) && v31 < v13[7] )
          {
            v15 = v33;
            v36[2 * v33 - 1] = v30;
            v36[2 * v15] = v31;
            v33 = v15 + 1;
          }
        }
        v13 = (_DWORD *)*this;
        v12 += *(_DWORD *)(*this + 32) / 2;
      }
      while ( v12 < Src );
      if ( v33 <= 0 )
        goto LABEL_26;
      goto LABEL_16;
    }
  }
  return sub_47C950(this + 25);
}
