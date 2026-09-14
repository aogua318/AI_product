// 函数 0x423550  sub_423550  size=0xD2  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_423550(void *a1, int a2)
{
  char *v2; // eax
  char v4[8]; // [esp+8h] [ebp-118h] BYREF
  char Buffer[256]; // [esp+10h] [ebp-110h] BYREF
  int v6; // [esp+11Ch] [ebp-4h]

  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v4);
  v6 = 0;
  sprintf(Buffer, "save\\slot%d.lif", a2);
  v2 = (char *)sub_47C740(Buffer);
  if ( sub_469F90(v2) )
  {
    sub_46A360(a1, 0x418u);
    sub_46A1F0(v4);
    v6 = -1;
    nullsub_2(v4);
    return 1;
  }
  else
  {
    v6 = -1;
    nullsub_2(v4);
    return 0;
  }
}
