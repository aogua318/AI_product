// 函数 0x45d420  sub_45D420  size=0xE9  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_45D420()
{
  int v0; // eax
  _BYTE v2[8]; // [esp+4h] [ebp-14h] BYREF
  int v3; // [esp+14h] [ebp-4h]

  v0 = sub_47C740("face\\famhall1.fce");
  sub_481C90(&unk_8D1E28, v0, 1);
  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v2);
  v3 = 0;
  memset(&unk_8D08E0, 0, 0x3C0u);
  if ( sub_46A580("famehall1.dat") || sub_469F90("famehall1.dat") )
  {
    sub_46A320(&unk_8D08E0, 0x3C0u);
    sub_46A1F0(v2);
  }
  sub_47D1A0(&unk_8D1E28, sub_45D3D0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  v3 = -1;
  nullsub_2(v2);
  return 1;
}
