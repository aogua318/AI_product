// 函数 0x488370  sub_488370  size=0x2C7  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_488370(int *this, const char *a2, _DWORD *a3, int a4, int a5)
{
  _DWORD *v5; // ebx
  char *v7; // eax
  int *v9; // edi
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int v12; // ecx
  __int16 *v13; // eax
  int v14; // edi
  int v15; // ebx
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // ecx
  int v19; // edi
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  bool v23; // zf
  _DWORD v25[4]; // [esp+10h] [ebp-12Ch] BYREF
  int v26; // [esp+20h] [ebp-11Ch]
  __int16 *v27; // [esp+24h] [ebp-118h]
  _DWORD *v28; // [esp+28h] [ebp-114h] BYREF
  char v29[256]; // [esp+2Ch] [ebp-110h] BYREF
  int v30; // [esp+138h] [ebp-4h]

  v5 = a3;
  v28 = a3;
  sub_466190((Concurrency::details::_ReaderWriterLock *)v25);
  v30 = 0;
  strcpy(v29, a2);
  v7 = (char *)&v28 + 3;
  while ( *++v7 )
    ;
  strcpy(v7, ".glt");
  if ( sub_4661F0(v25, v29) )
  {
    sub_4875F0(this);
    sub_466380(v25, (int)(this + 3));
    sub_466380(v25, (int)(this + 2));
    v9 = this + 4;
    sub_466380(v25, (int)(this + 4));
    v10 = sub_465E40(*v9 * *v9, "a_map\\a_map_gnd.cpp", 45);
    *(this + 8) = (int)v10;
    sub_466380(v25, (int)v10);
    v11 = sub_465E40(4 * *(this + 4), "a_map\\a_map_gnd.cpp", 48);
    *(this + 5) = (int)v11;
    sub_466380(v25, (int)v11);
    sub_466230(v25);
    v12 = 0;
    *(this + 6) = 0;
    if ( *(this + 4) > 0 )
    {
      v13 = (__int16 *)(*(this + 5) + 2);
      v27 = v13;
      do
      {
        v14 = 0;
        if ( *v13 > 0 )
        {
          v15 = *(this + 2);
          v26 = *(this + 6);
          do
          {
            v16 = *(__int16 *)(*(this + 5) + 4 * v12) / v15 + v14 + 1;
            if ( v16 > v26 )
            {
              v26 = *(__int16 *)(*(this + 5) + 4 * v12) / v15 + v14 + 1;
              *(this + 6) = v16;
            }
            ++v14;
          }
          while ( v14 < *(__int16 *)(*(this + 5) + 4 * v12 + 2) );
          v5 = v28;
        }
        ++v12;
        v13 = v27 + 2;
        v9 = this + 4;
        v27 += 2;
      }
      while ( v12 < *(this + 4) );
    }
    v17 = sub_465E40(2 * *(this + 6), "a_map\\a_map_gnd.cpp", 59);
    v18 = 0;
    *(this + 7) = (int)v17;
    if ( *v9 > 0 )
    {
      do
      {
        v19 = 0;
        if ( *(__int16 *)(*(this + 5) + 4 * v18 + 2) > 0 )
        {
          do
          {
            *(_WORD *)(*(this + 7) + 2 * (v19 + *(__int16 *)(*(this + 5) + 4 * v18) / *(this + 2))) = v18;
            ++v19;
          }
          while ( v19 < *(__int16 *)(*(this + 5) + 4 * v18 + 2) );
          v5 = v28;
        }
        ++v18;
      }
      while ( v18 < *(this + 4) );
    }
    *this = (int)v5;
    *(this + 1) = a4;
    if ( a5 )
    {
      v20 = *(this + 3);
      if ( v5[8] != v20 )
        sub_4842C0((int)v5, v5[6], v5[7], v20, 1, 0, 74);
      if ( v5[4] != *(this + 2) )
        sub_4836F0(v5, *(this + 2));
    }
    v21 = v5[8];
    v22 = *(this + 3);
    v23 = v21 == v22;
    if ( v21 == v22 )
    {
      if ( v5[4] == *(this + 2) )
      {
        v30 = -1;
        sub_4665D0(v25);
        return 1;
      }
      v23 = v21 == v22;
    }
    if ( !v23 )
      MessageBoxA(0, byte_4A2869, &byte_4A6308, 0);
    if ( v5[4] != *(this + 2) )
      MessageBoxA(0, byte_4A2869, &byte_4A62FC, 0);
    sub_4875F0(this);
  }
  v30 = -1;
  sub_4665D0(v25);
  return 0;
}
