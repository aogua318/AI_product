// 函数 0x41b910  sub_41B910  size=0xF2  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_41B910(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // edi
  int v3; // ecx
  int v4; // ebx
  int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // ecx
  int v8; // esi
  _DWORD *v9; // edx
  int result; // eax
  int v11; // [esp+Ch] [ebp-10h]
  int v13; // [esp+14h] [ebp-8h] BYREF
  int v14; // [esp+18h] [ebp-4h] BYREF

  v1 = this;
  sub_419920(this, &v13, &v14);
  v2 = (v13 >> 5) - 1;
  v3 = (v13 >> 5) + 1;
  v4 = v14 >> 5;
  v5 = 0;
  v14 >>= 5;
  v13 = 0;
  v11 = v3;
  if ( v2 <= v3 )
  {
    v6 = dword_4C5DEC;
    while ( 1 )
    {
      if ( v2 < v6 )
      {
        v7 = v4 - 1;
        if ( v4 - 1 <= v4 + 1 )
        {
          v8 = 9208 * v6;
          v9 = (_DWORD *)(9208 * (v2 + v7 * v6) + *(_DWORD *)dword_4C5DF4 + 6080);
          do
          {
            if ( v7 < dword_4C5DD8 )
            {
              ++v13;
              v5 += *v9;
            }
            ++v7;
            v9 = (_DWORD *)((char *)v9 + v8);
          }
          while ( (int)v7 <= v14 + 1 );
          v1 = this;
          v6 = dword_4C5DEC;
        }
      }
      if ( ++v2 > v11 )
        break;
      v4 = v14;
    }
  }
  result = 500 * (100 * (v5 / v13) / (*((__int16 *)v1 + 372) + 100)) / (*((__int16 *)v1 + 116) + 450);
  if ( *((_BYTE *)v1 + 224) == 4 )
    result = 9 * result / 10;
  if ( result < 1 )
    return 1;
  return result;
}
