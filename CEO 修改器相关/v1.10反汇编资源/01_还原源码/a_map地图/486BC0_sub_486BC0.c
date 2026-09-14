// 函数 0x486bc0  sub_486BC0  size=0x17E  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __thiscall sub_486BC0(int *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // eax
  int v7; // ecx
  unsigned __int16 v8; // ax
  int v9; // edi
  int v10; // kr00_4
  int Src; // [esp+Ch] [ebp-1Ch] BYREF
  unsigned int v13; // [esp+10h] [ebp-18h] BYREF
  unsigned int v14; // [esp+14h] [ebp-14h] BYREF
  int v15; // [esp+18h] [ebp-10h]
  int v16; // [esp+1Ch] [ebp-Ch]
  int v17; // [esp+20h] [ebp-8h]
  int v18; // [esp+24h] [ebp-4h]

  sub_468D20(this + 1, 0, 0, *(this + 1), *(this + 2), 224);
  v2 = 120;
  v16 = 0;
  v15 = 120;
  do
  {
    if ( *(_DWORD *)(v2 + *this) )
    {
      v17 = 0;
      if ( *(this + 32) > 0 )
      {
        do
        {
          v3 = *(this + 31);
          v18 = 0;
          if ( v3 > 0 )
          {
            do
            {
              sub_484020(
                (_DWORD *)*this,
                *(_DWORD *)(*this + 88) + *(this + 33) * (v18 - *(this + 32)) / v3,
                *(_DWORD *)(*this + 92) + v17 * *(this + 34) / *(this + 32),
                &v14,
                (int *)&v13);
              v4 = *this;
              v5 = *(_DWORD *)(*this + 24);
              if ( v14 >= v5
                || v13 >= *(_DWORD *)(v4 + 28)
                || (v6 = v14 + v13 * v5, v7 = *(__int16 *)(*(_DWORD *)(v15 + v4) + 2 * v6), v7 == -1)
                || (v8 = ((int (__cdecl *)(int, int, unsigned int))*(this + 38))(v16, v7, v6), v8 == 0xFFFF) )
              {
                v9 = v18;
              }
              else
              {
                v9 = v18;
                Src = v8;
                if ( v18 >= *(this + 6) && v17 >= *(this + 7) && v18 < *(this + 8) && v17 < *(this + 9) )
                {
                  v10 = *(this + 4);
                  if ( v10 / 8 > 0 )
                    memcpy((void *)(*(_DWORD *)(*(this + 11) + 4 * v17) + v18 * (v10 / 8)), &Src, v10 / 8);
                }
              }
              v3 = *(this + 31);
              v18 = v9 + 1;
            }
            while ( v9 + 1 < v3 );
          }
          ++v17;
        }
        while ( v17 < *(this + 32) );
        v2 = v15;
      }
    }
    ++v16;
    v2 += 4;
    v15 = v2;
  }
  while ( v2 < 136 );
  return sub_47C950(this + 25);
}
