// 函数 0x415510  sub_415510  size=0xF1  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_415510(char *this, int a2)
{
  int v2; // eax
  int v4; // esi
  int v5; // esi
  char *v6; // ebx
  int v8; // [esp+Ch] [ebp-110h]
  int v9; // [esp+10h] [ebp-10Ch] BYREF
  int v10; // [esp+14h] [ebp-108h] BYREF
  char Buffer[256]; // [esp+18h] [ebp-104h] BYREF

  v2 = dword_4CD11C;
  *(this + 8) &= ~1u;
  v4 = *((__int16 *)this + 1);
  *((_DWORD *)this + 9) = v2;
  *((_DWORD *)this + 4) = a2;
  v5 = dword_4CCAAC + dword_4CCA98 * v4;
  v6 = (char *)&unk_4D10B8 + 189880 * *(char *)(v5 + 224);
  if ( *(char *)(v5 + 224) == dword_8703A0 )
    nullsub_2();
  v8 = *(_DWORD *)dword_4D1088 + 2112;
  sub_419920(&v9, &v10);
  sprintf(
    Buffer,
    (const char *const)(v8 + 8),
    v6 + 16,
    v5 + 204,
    *((_DWORD *)this + 4),
    *(_DWORD *)dword_870814 + 72 * *this);
  return sub_42B930(v9, v10, *(char *)(v5 + 224), Buffer, v8);
}
