// 函数 0x4418b0  sub_4418B0  size=0x508  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4418B0()
{
  int result; // eax
  char *v1; // esi
  int v2; // edi
  char v3; // al
  int v4; // eax
  char v5; // al
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int *v10; // eax
  int v11; // edi
  double v12; // st7
  int v13; // eax
  double v14; // st7
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // esi
  double v21; // [esp+0h] [ebp-310h]
  char v22[256]; // [esp+Ch] [ebp-304h] BYREF
  char v23[256]; // [esp+10Ch] [ebp-204h] BYREF
  char Buffer[256]; // [esp+20Ch] [ebp-104h] BYREF

  result = dword_4B37E0;
  if ( dword_4B37E0 != -1 )
  {
    v1 = (char *)(dword_4CC8D0 + dword_4B37E0 * dword_4CC8BC);
    v2 = dword_4CCAAC + dword_4B1028 * dword_4CCA98;
    sub_47E650((unsigned __int8)v1[1256] + 25);
    sub_47E650((unsigned __int8)v1[1257] + 25);
    v3 = v1[10];
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        sub_47E650(19);
        v4 = sub_4646A0(4, 1);
      }
      else
      {
        sub_47E650(18);
        v4 = sub_4646A0(4, 0);
      }
    }
    else
    {
      sub_47E650(21);
      v4 = sub_4646A0(4, 2);
    }
    sub_47E620(v4);
    v5 = v1[9];
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        sub_47E650(19);
        v6 = sub_4646A0(3, 1);
      }
      else
      {
        sub_47E650(18);
        v6 = sub_4646A0(3, 0);
      }
    }
    else
    {
      sub_47E650(21);
      v6 = sub_4646A0(3, 2);
    }
    sub_47E620(v6);
    if ( sub_415A00((__int16 *)v1) )
    {
      sub_47E650(21);
      v7 = sub_4646A0(5, 1);
    }
    else
    {
      sub_47E650(18);
      v7 = sub_4646A0(5, 0);
    }
    sub_47E620(v7);
    _itoa(*((_DWORD *)v1 + 4), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*((_DWORD *)v1 + 3) / 4, Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*(__int16 *)(v2 + 2 * (unsigned __int8)v1[1256] + 768), Buffer, 10);
    sub_47FF50(Buffer);
    v8 = sub_4413A0((unsigned __int8)v1[1256]);
    _itoa(v8, Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*(__int16 *)(v2 + 2 * (unsigned __int8)v1[1257] + 800), Buffer, 10);
    sub_47FF50(Buffer);
    v9 = sub_441430((unsigned __int8)v1[1257]);
    _itoa(v9, Buffer, 10);
    sub_47FF50(Buffer);
    sub_480A80(v1[11]);
    v10 = (int *)((char *)dword_870824 + 112 * *v1);
    v11 = *(_DWORD *)dword_870814 + 72 * *v1;
    v12 = (double)*v10;
    v13 = 9 * *((__int16 *)v10 + 7);
    v21 = v12 * 0.00390625;
    v14 = v21 * (double)*(int *)(*(_DWORD *)dword_870814 + 8 * v13 + 24);
    if ( *(_BYTE *)(*(_DWORD *)dword_870814 + 8 * v13 + 13) )
      v14 = v14 * 0.8;
    _itoa((int)((double)(100 * (*((_DWORD *)v1 + 3) / 4)) / v14), Buffer, 10);
    sub_47FF50(Buffer);
    v15 = sub_415B20((__int16 *)v1);
    _itoa(v15, Buffer, 10);
    sub_47FF50(Buffer);
    _itoa((int)((double)(100 * *((_DWORD *)v1 + 4)) / v21), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*((__int16 *)v1 + 13), Buffer, 10);
    sub_47FF50(Buffer);
    v16 = sub_4415A0(*v1);
    _itoa(v16, Buffer, 10);
    sub_47FF50(Buffer);
    v17 = sub_4416E0(*v1);
    _itoa(v17, Buffer, 10);
    sub_47FF50(Buffer);
    v19 = sub_4417F0(v18);
    _itoa(v19, Buffer, 10);
    sub_47FF50(Buffer);
    v20 = *((_DWORD *)v1 + 317);
    sub_438190(v20, v22, 7);
    sub_438190(v20 / *(_DWORD *)(v11 + 24), v23, 5);
    sprintf(Buffer, "%d , %d", v20, v20 / *(_DWORD *)(v11 + 24));
    return sub_47FF50(Buffer);
  }
  return result;
}
