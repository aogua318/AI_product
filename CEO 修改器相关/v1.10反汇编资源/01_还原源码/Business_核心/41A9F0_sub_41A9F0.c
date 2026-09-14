// 函数 0x41a9f0  sub_41A9F0  size=0x106  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_41A9F0(int a1)
{
  __int16 *v1; // esi
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // ebx
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int result; // eax
  int i; // esi
  _DWORD v13[1000]; // [esp+10h] [ebp-FA4h]

  v1 = (__int16 *)(dword_4CCAAC + a1 * dword_4CCA98);
  v2 = v1[376];
  v3 = 0;
  if ( v2 != -1 )
  {
    do
    {
      v4 = dword_4D0C84 + v2 * dword_4D0C70;
      v5 = *(__int16 *)(v4 + 6);
      sub_4265C0(v4);
      v2 = v5;
    }
    while ( v5 != -1 );
  }
  v6 = v1[380];
  if ( v6 != -1 )
  {
    do
    {
      v7 = *(__int16 *)(v6 * dword_870854 + dword_870868 + 4);
      sub_434210(v6);
      v6 = v7;
    }
    while ( v7 != -1 );
  }
  v8 = v1[810];
  if ( v8 != -1 )
  {
    v9 = dword_4C43DC;
    v10 = dword_4C43C8;
    do
    {
      v13[v3] = v8;
      v8 = *(__int16 *)(v8 * v10 + v9 + 20);
      ++v3;
    }
    while ( v8 != -1 );
  }
  result = sub_417F10(a1);
  for ( i = 0; i < v3; ++i )
    result = sub_40FC00(v13[i]);
  return result;
}
