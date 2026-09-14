// 函数 0x41e190  sub_41E190  size=0x649  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

DWORD __cdecl sub_41E190(int a1)
{
  int v1; // edi
  DWORD TickCount; // eax
  int v3; // esi
  int v4; // ecx
  bool v5; // zf
  signed int v6; // eax
  int i; // esi
  DWORD v8; // ebx
  int v9; // esi
  int v10; // edx
  char *v11; // ecx
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  int v16; // eax
  int v17; // ecx
  DWORD result; // eax
  int v19; // [esp+1Ch] [ebp-10h] BYREF
  int v20; // [esp+20h] [ebp-Ch] BYREF
  int v21; // [esp+24h] [ebp-8h] BYREF
  int v22; // [esp+28h] [ebp-4h]

  if ( (dword_4CD150 & 1) == 0 )
  {
    dword_4CD150 |= 1u;
    dword_4CD14C = GetTickCount();
  }
  v1 = a1;
  dword_4CD13C = a1;
  TickCount = GetTickCount();
  v3 = TickCount - dword_4CD10C;
  v22 = TickCount;
  if ( dword_4CD12C )
  {
    v3 = dword_4B1124 + 1;
    dword_4CD10C = TickCount;
  }
  if ( dword_4D0B68 )
  {
    if ( v1 )
      v3 = 100000;
  }
  else if ( v1 )
  {
    v3 = 100000;
    goto LABEL_10;
  }
  if ( dword_4CD130 )
    v3 = 0;
LABEL_10:
  sub_45F7F0();
  if ( v3 <= dword_4B1124 )
    goto LABEL_113;
  if ( v3 >= 10000 )
    dword_4CD10C = v22;
  else
    dword_4CD10C += dword_4B1124;
  ++dword_4CD11C;
  if ( ++dword_4CD120 >= 64 )
  {
    dword_4CD120 = 0;
    if ( ++dword_4CD124 >= 24 )
    {
      dword_4CD124 = 0;
      if ( ++dword_4B111C > 3 )
      {
        v4 = dword_4B1120 + 1;
        dword_4B111C = 1;
        dword_4B1120 = v4;
        if ( v4 > 12 )
        {
          dword_4B1120 = 1;
          if ( !dword_8CAF68 )
            ++dword_4CD128;
          if ( ++byte_4CE048 >= 13 )
            byte_4CE048 = 0;
          if ( ++dword_4CE04C >= 1000 )
            dword_4CE04C = 0;
          sub_43E1B0();
          sub_432FD0();
          sub_41EAA0();
          v4 = dword_4B1120;
        }
        if ( ++byte_4CE044 >= 12 )
          byte_4CE044 = 0;
        if ( ++byte_4CE045 >= 13 )
          byte_4CE045 = 0;
        if ( ++byte_4CE046 >= 24 )
          byte_4CE046 = 0;
        if ( v4 % 3 == 1 )
        {
          if ( ++byte_4CE047 >= 13 )
            byte_4CE047 = 0;
          if ( !dword_4CD13C )
            sub_464010();
        }
        sub_4159F0();
        sub_427390();
        sub_41CA60();
        sub_4304B0();
      }
      sub_419DE0();
      if ( !v1 && !dword_8CAF68 )
        sub_413DE0();
      sub_427700();
      sub_41F670();
      sub_41EB70();
      if ( !dword_4CD13C )
        sub_41F8D0();
      sub_432F10();
      sub_434510();
      sub_412580();
      sub_41C030();
      sub_416040();
      sub_410C50();
      sub_423420();
      v6 = ((int (*)(void))sub_4640D0)() & 0x80000001;
      v5 = v6 == 0;
      if ( v6 < 0 )
        v5 = (((_BYTE)v6 - 1) | 0xFFFFFFFE) == -1;
      if ( v5 )
      {
        sub_408A50();
        sub_464F60(sub_41E170);
      }
      else
      {
        sub_464F60(sub_41E170);
        sub_408A50();
      }
      if ( dword_4B1130 && !dword_8CAF68 )
        sub_4039D0();
      sub_41BF40();
      if ( !dword_4CD13C )
        sub_438660();
    }
    if ( dword_4B38B8 != -1 )
      sub_45FD80();
    sub_4320E0();
    sub_434B00();
    sub_419F10();
    sub_443A40();
    if ( dword_4B1198 != -1 && v22 - dword_4CD148 > 300 )
    {
      dword_4CD148 = v22;
      sub_43B560();
    }
    sub_43A810();
    for ( i = dword_4CD124; i < dword_4C5DEC * dword_4C5DD8; i += 24 )
      sub_412F40(i);
    sub_429230();
    sub_42D1A0();
    v8 = GetTickCount();
    if ( !dword_4B1130 || dword_8CAF68 || dword_4CDF18[0] <= 0 )
      goto LABEL_93;
    v9 = 0;
    v10 = 2;
    v11 = &byte_4FF671;
    do
    {
      if ( v10 - 2 != dword_8703A0 )
      {
        v12 = *(v11 - 189880);
        if ( (v12 & 1) != 0 && (v12 & 2) != 0 )
          ++v9;
      }
      if ( v10 - 1 != dword_8703A0 && (*v11 & 1) != 0 && (*v11 & 2) != 0 )
        ++v9;
      if ( v10 != dword_8703A0 )
      {
        v13 = v11[189880];
        if ( (v13 & 1) != 0 && (v13 & 2) != 0 )
          ++v9;
      }
      if ( v10 + 1 != dword_8703A0 )
      {
        v14 = v11[379760];
        if ( (v14 & 1) != 0 && (v14 & 2) != 0 )
          ++v9;
      }
      if ( v10 + 2 != dword_8703A0 )
      {
        v15 = v11[569640];
        if ( (v15 & 1) != 0 && (v15 & 2) != 0 )
          ++v9;
      }
      v10 += 5;
      v11 += 949400;
    }
    while ( v10 - 2 < 20 );
    if ( sub_4640D0(v11) % 30 > v9 )
      goto LABEL_93;
    v16 = sub_41E9D0(&dword_4CDEA8);
    if ( v16 == -1 )
      goto LABEL_93;
    if ( a1 )
      goto LABEL_91;
    if ( !dword_8CAF68 )
    {
LABEL_92:
      sub_406790(v16);
      goto LABEL_93;
    }
    if ( dword_8CAF6C )
    {
LABEL_91:
      if ( v16 >= 7 )
        goto LABEL_92;
    }
LABEL_93:
    dword_4CD138 += GetTickCount() - v8;
  }
  if ( v22 - dword_4CD144 > 300 )
  {
    dword_4CD144 = v22;
    sub_446880();
    sub_447420();
    sub_45EA50();
  }
  sub_409200();
  v17 = dword_4CD11C;
  if ( !(dword_4CD11C % 3) )
  {
    sub_439EC0();
    v17 = dword_4CD11C;
  }
  if ( !(v17 % 5) )
  {
    sub_42E3B0();
    sub_433CC0();
    sub_40CBD0();
    if ( dword_4C2D3C )
      sub_486A10(dword_4CD11C);
    sub_43D020();
  }
  if ( dword_8D6078 )
  {
    if ( dword_4B38B8 != -1 && (_DWORD *)dword_4C2D38 == dword_4D0E68 )
    {
      if ( sub_4334C0(dword_870840 + dword_4B38B8 * dword_87082C) )
      {
        sub_4332E0(&v21, &a1);
        sub_484160(v21, a1, &v19, &v20);
        sub_464D50(100, 125, 513, 478);
        if ( !sub_464B90(v19, v20) )
          sub_485F80(v21, a1);
      }
    }
  }
  if ( dword_4B1128 != -1 && dword_4B112C != -1 )
  {
    if ( (_DWORD *)dword_4C2D38 != dword_4D0E68 )
      sub_443AC0();
    sub_485F80(dword_4B1128, dword_4B112C);
    dword_4B1128 = -1;
    dword_4B112C = -1;
  }
LABEL_113:
  if ( v22 - dword_4CD140 > 300 )
  {
    dword_4CD140 = v22;
    sub_487220(&unk_4C42A0);
    sub_447600();
    sub_460070();
    sub_435390();
    if ( (_DWORD *)dword_4C2D38 != dword_4D0E68 )
      sub_43FB00();
  }
  result = GetTickCount() - dword_4CD14C;
  dword_4CD134 += result;
  return result;
}
