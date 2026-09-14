// 函数 0x45d050  sub_45D050  size=0xE9  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_45D050()
{
  int v0; // eax
  _BYTE v2[8]; // [esp+4h] [ebp-14h] BYREF
  int v3; // [esp+14h] [ebp-4h]

  v0 = sub_47C740("face\\famhall2.fce");
  sub_481C90(&unk_8D07B0, v0, 1);
  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v2);
  v3 = 0;
  memset(&unk_8CF178, 0, 0x4B0u);
  if ( sub_46A580("famehall2.dat") || sub_469F90("famehall2.dat") )
  {
    sub_46A320(&unk_8CF178, 0x4B0u);
    sub_46A1F0(v2);
  }
  sub_47D1A0(&unk_8D07B0, sub_45D000, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  v3 = -1;
  nullsub_2(v2);
  return 1;
}
