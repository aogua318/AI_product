// 函数 0x4499b0  sub_4499B0  size=0xC9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4499B0()
{
  int v0; // ecx
  int v1; // esi
  char *v2; // edx
  int result; // eax
  int v4; // esi
  int v5; // esi
  int v6; // eax
  int v7; // [esp+0h] [ebp-10h] BYREF
  int v8; // [esp+4h] [ebp-Ch]
  int v9; // [esp+8h] [ebp-8h]
  int v10; // [esp+Ch] [ebp-4h]

  sub_464B60(&v7);
  if ( dword_8B8A34 >= (unsigned int)dword_8B8A30 )
    v0 = 0;
  else
    v0 = dword_8B7900[11 * dword_8B8A34];
  v1 = 0;
  v2 = (char *)&unk_8B72F8;
  for ( result = 0; result < 1216; result += 304 )
  {
    if ( (char *)v0 == v2 )
      break;
    ++v1;
    v2 += 304;
  }
  v4 = dword_8B6D00[v1];
  if ( v4 != -1 )
  {
    v5 = *(_DWORD *)dword_870814 + 72 * v4;
    v6 = sub_482E20(v0);
    sub_464CE0(v6);
    result = v7;
    if ( v7 <= dword_8EEE08 && v8 <= dword_8EEE0C && v9 >= dword_8EEE00 )
    {
      result = v10;
      if ( v10 >= dword_8EEE04 )
      {
        sub_467760(*(__int16 *)(v5 + 14));
        return sub_466CA0(&dword_8EEDEC, v7 + 15, v8 + 5);
      }
    }
  }
  return result;
}
