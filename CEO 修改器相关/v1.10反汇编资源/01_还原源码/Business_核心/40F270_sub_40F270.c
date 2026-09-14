// 函数 0x40f270  sub_40F270  size=0xE7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40F270(int a1)
{
  int v1; // esi
  int v2; // edi
  int result; // eax
  int i; // edi
  int v5; // [esp+8h] [ebp-10Ch] BYREF
  int v6; // [esp+Ch] [ebp-108h] BYREF
  char Buffer[256]; // [esp+10h] [ebp-104h] BYREF

  v1 = 189880 * *(char *)(dword_4CCAAC + a1 * dword_4CCA98 + 224);
  dword_4C43B4 = a1;
  dword_4C43A8 = dword_4CCAAC + a1 * dword_4CCA98;
  sub_419920(&v6, &v5);
  v2 = *(_DWORD *)dword_4D1088 + 704;
  sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 712), (char *)&unk_4D10B8 + v1 + 16, dword_4C43A8 + 204);
  result = sub_42B930(v6, v5, *(char *)(dword_4C43A8 + 224), Buffer, v2);
  for ( i = *(__int16 *)(dword_4C43A8 + 1620); i != -1; i = *(__int16 *)(dword_4C43A8 + 1620) )
  {
    sub_40F200(i);
    result = dword_4C43A8;
  }
  return result;
}
