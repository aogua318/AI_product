// 函数 0x4842c0  sub_4842C0  size=0x289  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4842C0(int this, int a2, int a3, int a4, int a5, int a6, char Src)
{
  bool v8; // zf
  signed int v9; // ebx
  int v11; // edi
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  _WORD *v15; // eax
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  _DWORD *v19; // eax
  int v20; // edi
  int *v21; // ebx
  int *v22; // eax
  size_t v23; // [esp-10h] [ebp-84h]
  size_t v24; // [esp-10h] [ebp-84h]
  int v25[12]; // [esp+10h] [ebp-64h] BYREF
  signed int i; // [esp+40h] [ebp-34h]
  int v27[8]; // [esp+44h] [ebp-30h] BYREF
  int v28; // [esp+70h] [ebp-4h]
  unsigned int v29; // [esp+84h] [ebp+10h]

  sub_468830(v25);
  v9 = a4 & 0xFFFFFFFE;
  v8 = (a4 & 0xFFFFFFFE) == 0;
  v28 = 0;
  v29 = a4 & 0xFFFFFFFE;
  if ( v8 || !a5 && *(_DWORD *)(this + 32) == v9 && *(_DWORD *)(this + 24) == a2 && *(_DWORD *)(this + 28) == a3 )
  {
    v28 = -1;
    sub_469860(v25);
    return 0;
  }
  else
  {
    *(_DWORD *)(this + 24) = a2;
    *(_DWORD *)(this + 28) = a3;
    if ( a5 || *(_DWORD *)(this + 32) != v9 )
    {
      v11 = 2 * v9;
      *(_DWORD *)(this + 32) = v9;
      sub_469880(v25, 2 * v9, v9, 16, 0);
      sub_4689A0((int)v25);
      v27[0] = 0;
      v27[1] = v9 / 2;
      v27[2] = v9;
      v27[3] = 0;
      v27[4] = 2 * v9;
      v27[5] = v9 / 2;
      v27[6] = v9;
      v27[7] = v9;
      if ( a6 )
      {
        sub_468F70(v25, v27, 4, 31744);
        for ( i = 0; i < v9; ++i )
        {
          v12 = 0;
          v13 = 0;
          if ( v11 > 0 )
          {
            do
            {
              v14 = *(_DWORD *)(v25[10] + 4 * i);
              v8 = *(_WORD *)(v14 + 2 * v13) == 0;
              v15 = (_WORD *)(v14 + 2 * v13);
              if ( !v8 )
              {
                v9 = v29;
                *v15 = 31 << v12;
              }
              if ( (v13 & 1) != 0 )
              {
                v12 += 5;
                if ( v12 > 10 )
                  v12 = 0;
              }
              ++v13;
              v11 = 2 * v9;
            }
            while ( v13 < 2 * v9 );
          }
        }
      }
      else
      {
        sub_468FD0(v25, v27, 4, Src);
      }
      sub_46A670(this + 36);
      sub_46A6B0((char *)(this + 36), (int)v25, v9, 0, 0);
      sub_4688B0(v25);
    }
    v16 = *(_DWORD *)(this + 136);
    if ( v16 )
      sub_465FE0(v16, "a_map\\a_map.cpp", 597);
    v17 = sub_465E40(4 * *(_DWORD *)(this + 24) * *(_DWORD *)(this + 28), "a_map\\a_map.cpp", 598);
    v23 = 4 * *(_DWORD *)(this + 24) * *(_DWORD *)(this + 28);
    *(_DWORD *)(this + 136) = v17;
    memset(v17, -1, v23);
    v18 = *(_DWORD *)(this + 140);
    if ( v18 )
      sub_465FE0(v18, "a_map\\a_map.cpp", 601);
    v19 = sub_465E40(4 * *(_DWORD *)(this + 24) * *(_DWORD *)(this + 28), "a_map\\a_map.cpp", 602);
    v24 = 4 * *(_DWORD *)(this + 24) * *(_DWORD *)(this + 28);
    *(_DWORD *)(this + 140) = v19;
    memset(v19, -1, v24);
    v20 = 0;
    v21 = (int *)(this + 104);
    do
      sub_483A60((_DWORD *)this, v20++, *v21++, 1);
    while ( v20 < 4 );
    sub_464D90((_DWORD *)(this + 156));
    if ( *(_DWORD *)(this + 64) )
    {
      v22 = sub_483910((int *)this);
      sub_47C950(v22);
    }
    v28 = -1;
    sub_469860(v25);
    return 1;
  }
}
