// 函数 0x44ac30  sub_44AC30  size=0xFC  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_44AC30()
{
  int v0; // esi
  int v1; // edi
  int v2; // eax
  _BYTE v4[8]; // [esp+Ch] [ebp-14h] BYREF
  int v5; // [esp+1Ch] [ebp-4h]

  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v4);
  v5 = 0;
  v0 = 0;
  *(_DWORD *)dword_8B8CD8 = sub_465E40(144, (int)"face_Load.cpp", 81);
  v1 = 0;
  do
  {
    dword_8B8CE0[v0] = sub_41D670(v0, (char *)(v1 + *(_DWORD *)dword_8B8CD8));
    ++v0;
    v1 += 40;
  }
  while ( v0 < 10 );
  v2 = sub_47C740("face\\Load.fce");
  sub_481C90(&unk_8B9EC8, v2, 1);
  sub_481AC0(*(_DWORD *)dword_8B8CD8, 40, 10, 0);
  sub_47D1A0(&unk_8B9EC8, sub_44AB10, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  dword_4B3824 = -1;
  v5 = -1;
  nullsub_2(v4);
  return 1;
}
