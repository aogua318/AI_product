// 函数 0x447600  sub_447600  size=0x3A2  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_447600()
{
  _DWORD *v0; // esi
  int v1; // edi
  _WORD *v2; // ebx
  int v3; // edi
  int v4; // esi
  int v5; // eax
  int v6; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  double v11; // [esp+0h] [ebp-118h]
  int v12; // [esp+8h] [ebp-110h] BYREF
  int v13; // [esp+Ch] [ebp-10Ch] BYREF
  int *v14; // [esp+10h] [ebp-108h]
  char Buffer[256]; // [esp+14h] [ebp-104h] BYREF

  if ( dword_8AA660 )
  {
    v0 = (_DWORD *)(dword_4C43DC + dword_4B1024 * dword_4C43C8);
    v1 = *(_DWORD *)dword_4C4434 + 72 * *(__int16 *)v0;
    sub_47FF50(v1 + 40);
    v2 = (_WORD *)(v1 + 56);
    _itoa(*(__int16 *)(v1 + 56), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*(__int16 *)(v1 + 58), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*(__int16 *)(v1 + 60), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*(__int16 *)(v1 + 62), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*(_DWORD *)(v1 + 64), Buffer, 10);
    sub_47FF50(Buffer);
    sub_40D7C0(v0, (int)&v13, (int)&v12);
    v3 = *(_DWORD *)dword_4C5DF4 + 9208 * ((v13 >> 5) + dword_4C5DEC * (v12 >> 5));
    v4 = 3744;
    v14 = (int *)(v3 + 5960);
    do
    {
      if ( *v2 )
      {
        sub_482FE0(v4 + dword_8AA790);
        sub_482FE0(v4 + dword_8AA790 + 1152);
        _itoa(*v14, Buffer, 10);
        sub_47FF50(Buffer);
        if ( *v14 >= 50 )
        {
          if ( *v14 >= 80 )
            *(_WORD *)(v4 + dword_8AA790 + 14) = 10;
          else
            *(_WORD *)(v4 + dword_8AA790 + 14) = 11;
        }
        else
        {
          *(_WORD *)(v4 + dword_8AA790 + 14) = 9;
        }
      }
      else
      {
        sub_482060(v4 + dword_8AA790);
        sub_482060(v4 + dword_8AA790 + 1152);
      }
      v5 = sub_481F90(v4 + dword_8AA790);
      sub_47C950(v5);
      ++v14;
      v4 += 288;
      ++v2;
    }
    while ( v4 < 4896 );
    v6 = 0;
    v7 = 7488;
    v11 = (double)*(int *)(v3 + 6028);
    v14 = (int *)(v3 + 6028);
    do
    {
      if ( *v14 <= 0 )
      {
        v9 = v7 + dword_8AA790 - 1440;
        byte_8AA658[v6] = 0;
        sub_482060(v9);
        sub_482060(v7 + dword_8AA790);
      }
      else
      {
        LOBYTE(v8) = *(_BYTE *)(v6 + v3 + 6020);
        if ( (v8 & 0x80u) != 0 )
          v8 = 0;
        else
          v8 = (char)v8;
        sub_47FF50(*(_DWORD *)dword_870814 + 72 * v8);
        byte_8AA658[v6] = (int)(((double)*v14 * 10.0 + v11 - 1.0) / v11);
        sub_482FE0(v7 + dword_8AA790 - 1440);
        sub_482FE0(v7 + dword_8AA790);
      }
      v10 = sub_481F90(v7 + dword_8AA790);
      sub_47C950(v10);
      ++v14;
      v7 += 288;
      ++v6;
    }
    while ( v7 < 8928 );
  }
}
