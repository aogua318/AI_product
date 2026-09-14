// 函数 0x452650  sub_452650  size=0x2F2  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_452650()
{
  int *v0; // edi
  int v1; // eax
  int v2; // esi
  __int16 *v3; // ebx
  int v4; // ecx
  int v5; // eax
  bool v6; // zf
  int v7; // ebx
  int v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // ebx
  int v12; // esi
  int v13; // ecx
  int v14; // eax
  int v15; // ebx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // [esp-10h] [ebp-2Ch]
  int v21; // [esp+0h] [ebp-1Ch]
  int v22; // [esp+0h] [ebp-1Ch]
  int v23; // [esp+0h] [ebp-1Ch]
  int v24; // [esp+0h] [ebp-1Ch]
  int v25; // [esp+0h] [ebp-1Ch]
  int v26; // [esp+4h] [ebp-18h]
  signed int v27; // [esp+8h] [ebp-14h]
  int v28; // [esp+Ch] [ebp-10h]
  int v29; // [esp+10h] [ebp-Ch]
  __int16 *v30; // [esp+14h] [ebp-8h]
  int v31; // [esp+18h] [ebp-4h]

  v29 = *(_DWORD *)dword_870814 + 72 * dword_8BE038;
  memset(&unk_8BDAE0, 0, 0x3C0u);
  if ( dword_4B3828 )
  {
    if ( dword_4B3828 == 1 )
    {
      v31 = 3;
    }
    else if ( dword_4B3828 == 2 )
    {
      v31 = 1;
    }
  }
  else
  {
    v31 = 12;
  }
  v27 = 0;
  if ( (int)dword_8BDA60 > 0 )
  {
    v0 = (int *)&unk_8BDAE0;
    do
    {
      v1 = dword_8BDA68[v27];
      v2 = byte_4CE045;
      *v0 = v1;
      v3 = (__int16 *)((char *)&unk_4D10B8 + 189880 * v1);
      v30 = v3;
      v28 = v2;
      if ( v31 > 0 )
      {
        v26 = v0[1];
        v21 = v31;
        do
        {
          v4 = v2;
          if ( v2 > 13 )
            v4 = v2 - 13 * ((v2 - 14) / 0xDu + 1);
          if ( v4 < 0 )
            v4 += 13 * ((-1 - v4) / 0xDu) + 13;
          v5 = *(_DWORD *)&v3[212 * v4 + 15480 + 2 * dword_8BE038];
          if ( !dword_8BE03C )
            v5 /= *(int *)(v29 + 24);
          ++v2;
          v6 = v21-- == 1;
          v26 += v5;
          v0[1] = v26;
        }
        while ( !v6 );
        v7 = v0[2];
        v8 = v28;
        v22 = v31;
        do
        {
          v9 = v8;
          if ( v8 > 13 )
            v9 = v8 - 13 * ((v8 - 14) / 0xDu + 1);
          if ( v9 < 0 )
            v9 += 13 * ((-1 - v9) / 0xDu) + 13;
          v10 = *(_DWORD *)&v30[212 * v9 + 23960 + 2 * dword_8BE038];
          if ( !dword_8BE03C )
            v10 /= *(int *)(v29 + 24);
          v7 += v10;
          ++v8;
          v6 = v22-- == 1;
          v0[2] = v7;
        }
        while ( !v6 );
        v11 = v0[3];
        v12 = v28;
        v23 = v31;
        do
        {
          v13 = v12;
          if ( v12 > 13 )
            v13 = v12 - 13 * ((v12 - 14) / 0xDu + 1);
          if ( v13 < 0 )
            v13 += 13 * ((-1 - v13) / 0xDu) + 13;
          v14 = *(_DWORD *)&v30[212 * v13 + 49400 + 2 * dword_8BE038];
          if ( !dword_8BE03C )
            v14 /= *(int *)(v29 + 24);
          v11 += v14;
          ++v12;
          v6 = v23-- == 1;
          v0[3] = v11;
        }
        while ( !v6 );
        v2 = v28;
        v3 = v30;
      }
      *((double *)v0 + 2) = (double)sub_42EE60(v3, dword_8BE038);
      if ( v31 > 0 )
      {
        v15 = v0[6];
        v24 = v31;
        do
        {
          v16 = v2;
          if ( v2 > 13 )
            v16 = v2 - 13 * ((v2 - 14) / 0xDu + 1);
          if ( v16 < 0 )
            v16 += 13 * ((-1 - v16) / 0xDu) + 13;
          v17 = *(_DWORD *)&v30[212 * v16 + 57880 + 2 * dword_8BE038];
          if ( !dword_8BE03C )
            v17 /= *(int *)(v29 + 24);
          v15 += v17;
          ++v2;
          v6 = v24-- == 1;
          v0[6] = v15;
        }
        while ( !v6 );
        v3 = v30;
      }
      v25 = sub_42EF00(v3, dword_8BE038);
      v20 = dword_8BE038;
      *((double *)v0 + 4) = (double)v25;
      v18 = sub_42F040(v3, v20);
      if ( !dword_8BE03C )
        v18 /= *(int *)(v29 + 24);
      v19 = dword_8BE038;
      v0[10] += v18;
      v0[11] = sub_42EFA0(v3, v19);
      v0 += 12;
      ++v27;
    }
    while ( v27 < (int)dword_8BDA60 );
  }
  sub_44BAF0();
}
