// 函数 0x419f20  sub_419F20  size=0x16A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_419F20(int this)
{
  int v2; // ebx
  int v3; // eax
  char *v4; // ebx
  int v5; // esi
  int i; // eax
  int v7; // esi
  __int16 v8; // ax
  int j; // eax
  int v10; // esi
  int v11; // esi
  int v13; // [esp+Ch] [ebp-10Ch] BYREF
  int v14; // [esp+10h] [ebp-108h] BYREF
  char Buffer[256]; // [esp+14h] [ebp-104h] BYREF

  v2 = 189880 * *(char *)(this + 224);
  *(_DWORD *)(this + 452) = 0;
  *(_DWORD *)(this + 456) = 0;
  *(_DWORD *)(this + 460) = 0;
  v3 = *(__int16 *)(this + 752);
  v4 = (char *)&unk_4D10B8 + v2;
  for ( *(_BYTE *)(this + 225) = 1; v3 != -1; v3 = *(__int16 *)(v5 + 6) )
  {
    v5 = dword_4D0C84 + v3 * dword_4D0C70;
    sub_427A30(v5);
  }
  for ( i = *(__int16 *)(this + 760); i != -1; i = *(__int16 *)(v7 + 4) )
  {
    v7 = dword_870868 + i * dword_870854;
    v8 = *(_WORD *)(v7 + 12);
    if ( v8 != -1 )
      sub_42BF60(v8);
  }
  for ( j = *(__int16 *)(this + 764); j != -1; j = *(__int16 *)(v10 + 6) )
  {
    v10 = dword_4D10A8 + j * dword_4D1094;
    if ( *(_BYTE *)(v10 + 12) != 3 )
      sub_42BF60(j);
  }
  v11 = *(_DWORD *)dword_4D1088 + 2200;
  sub_419920((_DWORD *)this, &v14, &v13);
  sprintf(Buffer, (const char *const)(v11 + 8), v4 + 16, this + 204);
  return sub_42B930(v14, v13, *(char *)(this + 224), Buffer, v11);
}
