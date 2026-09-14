// 函数 0x4561d0  sub_4561D0  size=0xF8  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4561D0()
{
  int v0; // edi
  int i; // esi
  int v2; // eax
  _BYTE v4[8]; // [esp+Ch] [ebp-14h] BYREF
  int v5; // [esp+1Ch] [ebp-4h]

  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v4);
  v5 = 0;
  v0 = 0;
  *(_DWORD *)dword_8C2040 = sub_465E40(144, (int)"face_Save.cpp", 87);
  for ( i = 0; i < 400; i += 40 )
    sub_41D670(v0++, (char *)(i + *(_DWORD *)dword_8C2040));
  v2 = sub_47C740("face\\Save.fce");
  sub_481C90(&unk_8C3208, v2, 1);
  sub_481AC0(*(_DWORD *)dword_8C2040, 40, 10, 0);
  sub_47D1A0(&unk_8C3208, sub_455FF0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  dword_4B3830 = -1;
  v5 = -1;
  nullsub_2(v4);
  return 1;
}
