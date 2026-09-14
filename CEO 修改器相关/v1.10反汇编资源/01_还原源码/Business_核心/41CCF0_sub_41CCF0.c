// 函数 0x41ccf0  sub_41CCF0  size=0x294  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_41CCF0()
{
  int result; // eax
  int v1; // eax
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // esi
  _DWORD *v6; // eax
  int v7; // edx
  _DWORD *v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // [esp-18h] [ebp-20h]
  int v13; // [esp-14h] [ebp-1Ch]
  int v14; // [esp+0h] [ebp-8h] BYREF
  int v15; // [esp+4h] [ebp-4h] BYREF

  memset(dword_870824, 0, 112 * dword_870818);
  sub_4331B0();
  sub_413720();
  result = sub_425A00(dword_4CDEB8, &v15, &v14);
  if ( result )
  {
    sub_432FD0();
    v1 = sub_47C740("pics\\gnd64x32");
    sub_467AB0(v1);
    v2 = sub_47C740("pics\\road64x32");
    sub_467AB0(v2);
    sub_42B240(v15, v14);
    *(_DWORD *)dword_4D0B64 = sub_465E40(v14 * v15, (int)"game_data.cpp", 125);
    memset(*(void **)dword_4D0B64, 0, v14 * v15);
    dword_4C5DD8 = (v14 + 31) >> 5;
    dword_4C5DEC = (v15 + 31) >> 5;
    *(_DWORD *)dword_4C5DF4 = sub_465E40(-8 * ((v15 + 31) >> 5) * dword_4C5DD8, (int)"game_data.cpp", 131);
    memset(*(void **)dword_4C5DF4, 0, 9208 * dword_4C5DEC * dword_4C5DD8);
    v3 = 0;
    if ( dword_4C5DD8 > 0 )
    {
      v4 = dword_4C5DEC;
      do
      {
        v5 = 0;
        if ( v4 > 0 )
        {
          do
          {
            v6 = (_DWORD *)(*(_DWORD *)dword_4C5DF4 + 9208 * (v5 + v3 * v4));
            v7 = 4;
            v8 = v6 + 1494;
            do
            {
              *(v8 - 4) = 50;
              *v8++ = 0;
              --v7;
            }
            while ( v7 );
            v6[1519] = 1200;
            v6[1520] = 800;
            v6[1521] = 1000;
            v4 = dword_4C5DEC;
            ++v5;
          }
          while ( v5 < dword_4C5DEC );
        }
        ++v3;
      }
      while ( v3 < dword_4C5DD8 );
    }
    sub_40CEB0(128);
    sub_4386B0(128);
    sub_4331D0(128);
    sub_4262F0(128);
    sub_416120(128);
    sub_42E3C0(v12, v13);
    sub_42BC10(128);
    sub_420900(128);
    sub_40BCE0(128);
    sub_413A00(128);
    sub_433E70(128);
    sub_4304E0(128);
    sub_42B460(128);
    sub_414CF0(128);
    sub_42E610();
    v9 = sub_47C740("pics\\machines");
    sub_467D80(v9, 32, 0);
    v10 = sub_47C740("pics\\items");
    sub_467D80(v10, 32, 0);
    v11 = sub_47C740("pics\\buildings");
    sub_467D80(v11, 32, 0);
    sub_465630(16, 128, 1, 0);
    return 1;
  }
  return result;
}
