// 函数 0x41c530  sub_41C530  size=0x311  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_41C530(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // eax
  int v3; // ebx
  char *v4; // edi
  int v5; // esi
  int v6; // ebx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  int v11; // ebx
  int v12; // eax
  int v13; // ebx
  int result; // eax
  char *v15; // [esp+Ch] [ebp-24h] BYREF
  int v16; // [esp+10h] [ebp-20h] BYREF
  _DWORD *v17; // [esp+14h] [ebp-1Ch]
  int v18; // [esp+18h] [ebp-18h]
  int v19; // [esp+1Ch] [ebp-14h]
  int v20; // [esp+20h] [ebp-10h] BYREF
  int v21; // [esp+24h] [ebp-Ch] BYREF
  int v22; // [esp+28h] [ebp-8h]
  unsigned int v23; // [esp+2Ch] [ebp-4h]

  v1 = this;
  v17 = this;
  sub_419920(this, (int *)&v15, &v16);
  v2 = *((__int16 *)v1 + 119);
  v3 = -1;
  v20 = 0;
  v22 = -1;
  v19 = -1;
  if ( v2 == -1 )
  {
    v4 = v15;
  }
  else
  {
    v18 = byte_4CE046 - 25;
    do
    {
      v4 = (char *)(dword_4CC8D0 + v2 * dword_4CC8BC);
      v5 = byte_4CE046;
      v6 = 0;
      v23 = v18;
      v21 = 3;
      do
      {
        if ( v4[10] != 2 )
        {
          v7 = v5;
          if ( v5 > 24 )
            v7 = v5 - 8 * (3 * (v23 / 0x18) + 3);
          if ( v7 < 0 )
            v7 += 24 * ((-1 - v7) / 0x18u) + 24;
          v6 += *(_DWORD *)&v4[4 * v7 + 812];
          if ( v4[10] != 1 )
          {
            v8 = v5;
            if ( v5 > 24 )
              v8 = v5 - 8 * (3 * (v23 / 0x18) + 3);
            if ( v8 < 0 )
              v8 += 24 * ((-1 - v8) / 0x18u) + 24;
            v6 += *(_DWORD *)&v4[4 * v8 + 912];
          }
        }
        v9 = v5;
        if ( v5 > 24 )
          v9 = v5 - 8 * (3 * (v23 / 0x18) + 3);
        if ( v9 < 0 )
          v9 += 24 * ((-1 - v9) / 0x18u) + 24;
        v6 += *(_DWORD *)&v4[4 * v9 + 1012];
        --v23;
        --v5;
        --v21;
      }
      while ( v21 );
      if ( !v6 && v4[10] != 2 )
        v6 = *((__int16 *)v4 + 13);
      if ( v6 > v20 )
      {
        v20 = v6;
        v10 = *v4;
        v19 = v22;
        v22 = v10;
      }
      v2 = *((__int16 *)v4 + 3);
    }
    while ( v2 != -1 );
    v1 = v17;
    v3 = v22;
  }
  sub_483890(v15, v16, &v21, &v20);
  if ( v3 == -1 )
  {
    if ( v1[446] != -1 )
    {
      sub_4864E0(v1[446]);
      v1[446] = -1;
    }
  }
  else
  {
    v11 = *(_DWORD *)dword_870814 + 72 * v3;
    if ( v1[446] == -1 )
      v1[446] = sub_486310(142, v21 - 10, v20, 0, 22, 0, 0, 0, 0);
    v12 = v1[446];
    if ( v12 != -1 )
    {
      sub_486530(v12, 142, *(__int16 *)(v11 + 14), 0, 0, 0);
      sub_483BD0(v1[446], 6, *((_WORD *)v4 + 1));
    }
  }
  if ( v19 == -1 )
  {
    result = v1[447];
    if ( result != -1 )
    {
      result = sub_4864E0(v1[447]);
      v1[447] = -1;
    }
  }
  else
  {
    v13 = *(_DWORD *)dword_870814 + 72 * v19;
    if ( v1[447] == -1 )
      v1[447] = sub_486310(142, v21 + 10, v20, 0, 22, 0, 0, 0, 0);
    result = v1[447];
    if ( result != -1 )
    {
      sub_486530(result, 142, *(__int16 *)(v13 + 14), 0, 0, 0);
      return sub_483BD0(v1[447], 6, *((_WORD *)v4 + 1));
    }
  }
  return result;
}
