// 函数 0x43d7b0  sub_43D7B0  size=0x10C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char sub_43D7B0()
{
  int v0; // ebx
  int v1; // esi
  char *v2; // edi
  char result; // al
  int v4; // [esp-4h] [ebp-14h]
  int v5; // [esp-4h] [ebp-14h]
  int v6; // [esp-4h] [ebp-14h]
  int v7; // [esp+Ch] [ebp-4h]

  v7 = *(_DWORD *)(dword_8A1D58 + 2032);
  v0 = 0;
  v1 = 5760;
  v2 = &byte_8A1B24[8 * v7];
  do
  {
    sub_47FF50(byte_4A2869);
    if ( v0 + v7 >= dword_8A1B1C )
    {
      result = sub_47FF50(byte_4A2869);
    }
    else
    {
      result = *v2;
      if ( *v2 )
      {
        if ( result < 4 || result > 9 )
        {
          switch ( result )
          {
            case 1:
              v4 = sub_4646A0(0, 48);
              result = sub_47FF50(v4);
              break;
            case 2:
              v5 = sub_4646A0(0, 49);
              result = sub_47FF50(v5);
              break;
            case 3:
              v6 = sub_4646A0(0, 50);
              result = sub_47FF50(v6);
              break;
          }
        }
        else
        {
          result = sub_47FF50((char *)&unk_870788 + 20 * result - 80);
        }
      }
      else
      {
        result = sub_47FF50(388 * *((__int16 *)v2 + 1) + *(_DWORD *)dword_4D0C8C + 56);
      }
    }
    v1 += 288;
    ++v0;
    v2 += 8;
  }
  while ( v1 < 7200 );
  return result;
}
