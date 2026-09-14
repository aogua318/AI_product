// 函数 0x4010c0  sub_4010C0  size=0x12C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4010C0(int a1, void *a2, int *a3, void *a4, int *a5)
{
  int v6; // esi
  __int16 *v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // esi
  int v11; // esi
  _BYTE Src[256]; // [esp+10h] [ebp-204h] BYREF
  _BYTE v13[256]; // [esp+110h] [ebp-104h] BYREF

  *a3 = 0;
  *a5 = 0;
  if ( !dword_4D08B0[a1] )
    return 0;
  dword_4B9764 = 0;
  dword_4B9768 = 0;
  v6 = *(_DWORD *)dword_87081C + 116 * *(__int16 *)(*(_DWORD *)dword_870814 + 72 * a1 + 16);
  dword_4B9760 = (int)Src;
  dword_4B976C = (int)v13;
  v7 = (__int16 *)(v6 + 20);
  v8 = 4;
  do
  {
    v9 = *v7;
    if ( v9 != -1 && !*((_DWORD *)dword_870824 + 28 * v9 + 4) )
      sub_401000(*v7);
    ++v7;
    --v8;
  }
  while ( v8 );
  v10 = dword_4B9764;
  memcpy(a2, Src, 4 * dword_4B9764);
  *a3 = v10;
  v11 = dword_4B9768;
  memcpy(a4, v13, 4 * dword_4B9768);
  *a5 = v11;
  return 1;
}
