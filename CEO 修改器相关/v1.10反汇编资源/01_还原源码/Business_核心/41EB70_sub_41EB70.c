// 函数 0x41eb70  sub_41EB70  size=0xBB  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char __fastcall sub_41EB70(int a1)
{
  int v1; // edi
  _BYTE *v2; // eax
  int v3; // edi
  int v4; // ebx
  _BYTE *v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // et2
  int v9; // edi
  int v11; // [esp+Ch] [ebp-108h]
  char Buffer[256]; // [esp+10h] [ebp-104h] BYREF

  v1 = 0;
  v2 = &unk_6158C1;
  do
  {
    if ( (*v2 & 2) == 0 )
      ++v1;
    v2 += 189880;
  }
  while ( (int)v2 < (int)((_BYTE *)&dbl_870318 + 1) );
  v3 = v1 + 3;
  v11 = v3;
  v4 = 7;
  v5 = &unk_6158C1;
  do
  {
    LOBYTE(v6) = *v5;
    if ( (*v5 & 2) == 0 && (v6 & 1) != 0 )
    {
      v7 = sub_4640D0(a1);
      a1 = 300;
      v8 = v7 % 300;
      v6 = v7 / 300;
      if ( v8 <= v3 )
      {
        v9 = *(_DWORD *)dword_4D1088;
        *v5 |= 2u;
        sprintf(Buffer, (const char *const)(v9 + 8), v5 + 15);
        LOBYTE(v6) = sub_42B930(-1, -1, v4 + 1, Buffer, v9);
        v3 = v11;
      }
    }
    v5 += 189880;
    ++v4;
  }
  while ( (int)v5 < (int)((_BYTE *)&dbl_870318 + 1) );
  return v6;
}
