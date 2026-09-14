// 函数 0x4048d0  sub_4048D0  size=0x18D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4048D0(int a1)
{
  int v1; // ecx
  _WORD *v2; // edx
  int result; // eax
  __int16 *v4; // ecx
  __int16 v5; // si
  int v6; // esi
  __int16 v7; // si
  int v8; // esi
  __int16 v9; // si
  int v10; // esi
  __int16 v11; // cx
  int v12; // ecx
  int v13; // [esp+14h] [ebp+8h]

  v2 = (_WORD *)(dword_4CCAAC + a1 * dword_4CCA98);
  result = 0;
  v13 = v2[384] > 0;
  if ( (__int16)v2[385] > 0 )
    ++v13;
  if ( (__int16)v2[386] > 0 )
    ++v13;
  if ( (__int16)v2[387] > 0 )
    ++v13;
  if ( (__int16)v2[388] > 0 )
    ++v13;
  if ( (__int16)v2[389] > 0 )
    ++v13;
  if ( (__int16)v2[390] > 0 )
    ++v13;
  if ( (__int16)v2[391] > 0 )
    ++v13;
  v4 = (__int16 *)(*(_DWORD *)dword_87081C + 116 * *(__int16 *)(*(_DWORD *)dword_870814 + 72 * v1 + 16));
  v5 = v2[v4[10] + 120];
  if ( v5 == -1 )
  {
    ++v13;
  }
  else
  {
    v6 = dword_4CC8BC * v5;
    if ( *(_BYTE *)(v6 + dword_4CC8D0 + 9) != 2 )
      result = 20;
    if ( *(_WORD *)(v6 + dword_4CC8D0 + 1258) )
      result += 200;
  }
  v7 = v2[v4[11] + 120];
  if ( v7 == -1 )
  {
    ++v13;
  }
  else
  {
    v8 = dword_4CC8BC * v7;
    if ( *(_BYTE *)(v8 + dword_4CC8D0 + 9) != 2 )
      result += 20;
    if ( *(_WORD *)(v8 + dword_4CC8D0 + 1258) )
      result += 200;
  }
  v9 = v2[v4[12] + 120];
  if ( v9 == -1 )
  {
    ++v13;
  }
  else
  {
    v10 = dword_4CC8BC * v9;
    if ( *(_BYTE *)(v10 + dword_4CC8D0 + 9) != 2 )
      result += 20;
    if ( *(_WORD *)(v10 + dword_4CC8D0 + 1258) )
      result += 200;
  }
  v11 = v2[v4[13] + 120];
  if ( v11 == -1 )
  {
    ++v13;
  }
  else
  {
    v12 = dword_4CC8BC * v11;
    if ( *(_BYTE *)(v12 + dword_4CC8D0 + 9) != 2 )
      result += 20;
    if ( *(_WORD *)(v12 + dword_4CC8D0 + 1258) )
      result += 200;
  }
  if ( v13 > 8 )
    result -= 100;
  return result;
}
