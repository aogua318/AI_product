// 函数 0x44a120  sub_44A120  size=0x546  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_44A120(int a1, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edi
  int v5; // ecx
  char *v6; // ebx
  int *v7; // esi
  __int16 *v8; // edi
  int v9; // eax
  int v10; // edi
  __int16 *v11; // ebx
  _DWORD *v12; // esi
  int v13; // edi
  int v14; // ecx
  int v15; // eax
  _BYTE *v16; // esi
  int v17; // ebx
  int v18; // esi
  char *v19; // ecx
  char *v20; // edx
  char v21; // al
  int v22; // [esp+38h] [ebp-120h]
  int v23; // [esp+3Ch] [ebp-11Ch]
  _BYTE *v24; // [esp+40h] [ebp-118h]
  int v25; // [esp+44h] [ebp-114h]
  int *v26; // [esp+48h] [ebp-110h]
  unsigned __int8 *v27; // [esp+4Ch] [ebp-10Ch]
  int Value; // [esp+50h] [ebp-108h]
  char Buffer[256]; // [esp+54h] [ebp-104h] BYREF

  v2 = a2;
  if ( a1 != -1 )
  {
    sub_449960(a1);
    dword_8B72B0 = a1;
    v3 = *(_DWORD *)dword_870814 + 72 * a1;
    v24 = (_BYTE *)v3;
    if ( *(__int16 *)(v3 + 2 * a2 + 16) < 0 )
      v2 = 0;
    dword_8B72B4 = v2;
    v4 = *(_DWORD *)dword_87081C + 116 * *(__int16 *)(v3 + 2 * v2 + 16);
    v27 = (unsigned __int8 *)v4;
    sub_47FF50(v3);
    sub_438320(*(_DWORD *)(v3 + 24), Buffer, 6);
    sub_47FF50(Buffer);
    v5 = dword_8B8CC8 + 10944;
    if ( *(_BYTE *)(v3 + 13) )
      sub_482FE0(v5);
    else
      sub_482060(v5);
    dword_8B6A2C = 0;
    v6 = (char *)&unk_8B72F8;
    v7 = dword_8B6D00;
    v8 = (__int16 *)(v4 + 20);
    do
    {
      if ( *v8 == -1 )
      {
        sub_47CCD0(v6);
      }
      else
      {
        sub_47D1A0(v6, sub_44A070, sub_4499B0, 0, 0, 0, 0, 0, 0, 0, sub_449B00, 100);
        v9 = *v8;
        ++dword_8B6A2C;
        *v7 = v9;
      }
      ++v7;
      ++v8;
      v6 += 304;
    }
    while ( (int)v7 < (int)dword_8B6D10 );
    Value = 0;
    if ( dword_8B6A2C <= 0 )
    {
      v16 = v24;
      v17 = *((__int16 *)v27 + 22);
    }
    else
    {
      v10 = dword_4B3800[dword_8B6A2C];
      v25 = 0;
      v11 = (__int16 *)(v27 + 44);
      v23 = dword_4B3810[dword_8B6A2C];
      v12 = &unk_8B7420;
      v26 = (int *)(v27 + 28);
      while ( 1 )
      {
        sub_482F10(v10, 146);
        v22 = v23 + v10;
        v13 = *(_DWORD *)dword_870814 + 72 * *(v11 - 12);
        sub_47FF50(v13);
        sprintf(Buffer, "%.2f", (double)*v26 / (double)*(int *)(v13 + 24));
        sub_47FF50(Buffer);
        _itoa(*v11, Buffer, 10);
        sub_47FF50(Buffer);
        Value += *v11;
        v14 = *v12 + 2592;
        if ( *(_BYTE *)(v13 + 13) )
          sub_482FE0(v14);
        else
          sub_482060(v14);
        ++v26;
        v15 = v25 + 1;
        ++v11;
        v12 += 76;
        v25 = v15;
        if ( v15 >= dword_8B6A2C )
          break;
        v10 = v22;
      }
      v16 = v24;
      v17 = Value;
      if ( v24[12] == 1 && v15 == 1 )
        v17 = *((__int16 *)v27 + 23) + Value;
    }
    _itoa(100 - v17, Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(v17, Buffer, 10);
    sub_47FF50(Buffer);
    if ( v16[12] == 1 )
    {
      sub_482F10(280, 146);
      sub_482FE0(dword_8B8CC8 + 5760);
      sub_482FE0(dword_8B8CC8 + 11232);
      sub_482FE0(dword_8B8CC8 + 11520);
      sub_482FE0(dword_8B8CC8 + 11808);
      sub_482FE0(dword_8B8CC8 + 12096);
      sub_482FE0(dword_8B8CC8 + 12384);
      sub_482FE0(dword_8B8CC8 + 6048);
      sub_482120(70 * (char)v16[45] + 378, 48 * (char)v16[44] + 153);
      sub_482120(70 * (char)v16[47] + 378, 48 * (char)v16[46] + 153);
      sub_482FE0(dword_8B8CC8 + 6336);
    }
    else
    {
      sub_482060(dword_8B8CC8 + 5760);
      sub_482060(dword_8B8CC8 + 11232);
      sub_482060(dword_8B8CC8 + 11520);
      sub_482060(dword_8B8CC8 + 11808);
      sub_482060(dword_8B8CC8 + 12096);
      sub_482060(dword_8B8CC8 + 12384);
      sub_482060(dword_8B8CC8 + 6048);
      sub_482060(dword_8B8CC8 + 6336);
    }
    v18 = *(_DWORD *)dword_4D0C94 + 68 * *v27;
    sub_47FF50(v18 + 12);
    v19 = (char *)(288 * *(__int16 *)(v18 + 66) + dword_8B8CC8 + 7804);
    v20 = Buffer;
    do
    {
      v21 = *v19;
      *v20++ = *v19++;
    }
    while ( v21 );
    sub_47FF50(Buffer);
    sub_47C950(0);
  }
}
