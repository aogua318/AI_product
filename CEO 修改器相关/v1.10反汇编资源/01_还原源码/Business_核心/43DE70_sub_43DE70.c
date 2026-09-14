// 函数 0x43de70  sub_43DE70  size=0xB6  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_43DE70()
{
  int result; // eax
  int v1; // ebx
  int v2; // edi
  __int16 *v3; // esi
  bool v4; // zf
  int v5; // [esp-8h] [ebp-20h]
  int v6; // [esp-4h] [ebp-1Ch]
  int v7; // [esp+Ch] [ebp-Ch]
  int v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h] BYREF

  result = *(_DWORD *)(dword_8A1D58 + 2032);
  v7 = result;
  v1 = 0;
  v2 = 4320;
  v3 = &word_8A1B22[4 * result];
  while ( v1 + result < dword_8A1B1C )
  {
    sub_47E4A0(&v9, &v8);
    v8 += word_8A1D46;
    v4 = *((_BYTE *)v3 + 3) == 0;
    v6 = v8 - 4;
    v5 = word_8A1D44 + v9;
    v9 = v5;
    if ( v4 )
      sub_467760(*(v3 - 1));
    else
      sub_467760(*v3);
    result = sub_466CA0(&dword_8EEDEC, v5, v6);
    v2 += 288;
    ++v1;
    v3 += 4;
    if ( v2 >= 5760 )
      break;
    result = v7;
  }
  return result;
}
