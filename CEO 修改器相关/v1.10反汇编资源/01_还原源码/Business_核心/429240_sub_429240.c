// 函数 0x429240  sub_429240  size=0x3C2  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_429240(__int16 *this, _DWORD *a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // edx
  int v8; // edi
  int v9; // edx
  int v10; // ecx
  int v11; // ebx
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // edi
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  int v24; // ebx
  const char *v25; // eax
  int v26; // ebx
  int v27; // eax
  int v28; // ecx
  int v30; // esi
  int v31; // [esp+Ch] [ebp-12Ch]
  int v32; // [esp+10h] [ebp-128h] BYREF
  int v33; // [esp+14h] [ebp-124h]
  int v34; // [esp+18h] [ebp-120h]
  int v35; // [esp+1Ch] [ebp-11Ch]
  int v36; // [esp+20h] [ebp-118h] BYREF
  __int16 *v37; // [esp+24h] [ebp-114h]
  _DWORD *v38; // [esp+28h] [ebp-110h] BYREF
  int v39; // [esp+2Ch] [ebp-10Ch]
  int v40; // [esp+30h] [ebp-108h]
  char Buffer[256]; // [esp+34h] [ebp-104h] BYREF

  v37 = this;
  v38 = a2;
  sub_464B60(&v32);
  v3 = dword_4CCAAC + dword_4CCA98 * *(this + 1);
  v4 = sub_485A70(*(this + 8));
  sub_464CE0(v4);
  v5 = v32;
  v40 = -1;
  if ( v32 > v34 )
  {
LABEL_11:
    v11 = v33;
    if ( v33 <= v35 )
    {
      while ( 1 )
      {
        if ( v32 - 2 >= 0 )
        {
          v12 = *(_DWORD *)(v3 + 140);
          v13 = v32 - 2 + v11 * *(_DWORD *)(v3 + 24);
          v14 = *(_DWORD *)(v12 + 4 * v13);
          if ( v14 >= 0 && sub_483C00(*(_DWORD *)(v12 + 4 * v13)) == 8 )
            break;
        }
        v15 = *(_DWORD *)(v3 + 24);
        if ( v34 + 2 < v15 )
        {
          v16 = v34 + 2 + v11 * v15;
          v17 = *(_DWORD *)(v3 + 140);
          v14 = *(_DWORD *)(v17 + 4 * v16);
          if ( v14 >= 0 && sub_483C00(*(_DWORD *)(v17 + 4 * v16)) == 8 )
            break;
        }
        if ( ++v11 > v35 )
          goto LABEL_21;
      }
      v40 = v14;
    }
  }
  else
  {
    while ( 1 )
    {
      if ( v33 - 2 >= 0 )
      {
        v6 = *(_DWORD *)(v3 + 140);
        v7 = v5 + (v33 - 2) * *(_DWORD *)(v3 + 24);
        v8 = *(_DWORD *)(v6 + 4 * v7);
        if ( v8 >= 0 && sub_483C00(*(_DWORD *)(v6 + 4 * v7)) == 8 )
          break;
      }
      if ( v35 + 2 < *(_DWORD *)(v3 + 28) )
      {
        v9 = *(_DWORD *)(v3 + 140);
        v10 = v5 + (v35 + 2) * *(_DWORD *)(v3 + 24);
        v8 = *(_DWORD *)(v9 + 4 * v10);
        if ( v8 >= 0 && sub_483C00(*(_DWORD *)(v9 + 4 * v10)) == 8 )
          break;
      }
      if ( ++v5 > v34 )
        goto LABEL_11;
    }
    v40 = v8;
  }
LABEL_21:
  if ( v40 == -1 )
  {
    v30 = (int)v37;
    sub_427A30((int)v37);
    *(_WORD *)(v30 + 128) = -1;
    return 0;
  }
  else
  {
    v18 = sub_483C30(v40);
    v19 = dword_4D1080 + v18 * dword_4D106C;
    v20 = dword_4C43DC + dword_4C43C8 * *(__int16 *)(v19 + 2);
    v21 = *(_DWORD *)dword_870814 + 72 * *(__int16 *)(v19 + 4);
    *v38 = *(unsigned __int8 *)(v20 + 6);
    v22 = *(_DWORD *)(v21 + 24);
    v23 = *(_DWORD *)(v20 + 8);
    v40 = v18;
    v39 = v22;
    if ( v22 > v23 )
    {
      v39 = v23;
      v22 = v23;
    }
    *(_DWORD *)(v20 + 8) = v23 - v22;
    if ( dword_4B32A0 == v18 )
    {
      sub_43C4D0(1);
      v18 = v40;
    }
    if ( *(_DWORD *)(v20 + 8) )
    {
      return v22;
    }
    else
    {
      if ( dword_4B32A0 == v18 )
      {
        sub_43C4D0(0);
        dword_4B32A0 = -1;
      }
      sub_419920((_DWORD *)v3, (int *)&v38, &v36);
      v24 = *(_DWORD *)dword_4D1088 + 3432;
      v31 = *(_DWORD *)dword_870814 + 72 * *(__int16 *)(v20 + 4);
      sprintf(
        Buffer,
        (const char *const)(*(_DWORD *)dword_4D1088 + 3440),
        &byte_4D10C8[189880 * *(char *)(v3 + 224)],
        v3 + 204,
        v31);
      sub_42B930((__int16)v38, v36, -1, Buffer, v24);
      if ( *(char *)(v3 + 224) == dword_8703A0 )
      {
        v25 = (const char *)sub_436F10(16, 0);
        if ( v25 )
        {
          sprintf(Buffer, v25, v3 + 204, v31);
          sub_437150(Buffer, 0, v38, v36);
        }
      }
      sub_42B5C0(v40);
      v26 = (int)v37;
      sub_427A30((int)v37);
      *(_WORD *)(v26 + 128) = -1;
      v27 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v3 + 2 * *(__int16 *)(v20 + 4) + 240);
      v28 = dword_4CD11C;
      *(_BYTE *)(v27 + 8) &= ~1u;
      *(_DWORD *)(v27 + 36) = v28;
      *(_BYTE *)(v27 + 9) = 0;
      *(_WORD *)(v20 + 4) = -1;
      if ( dword_4B1198 != -1 && dword_4D0C84 + dword_4B1198 * dword_4D0C70 == v26 )
        sub_43B560();
      return v39;
    }
  }
}
