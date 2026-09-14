// 函数 0x45b9d0  sub_45B9D0  size=0x94  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_45B9D0()
{
  int v0; // edi
  int i; // esi
  int v2; // eax

  sub_425D90();
  v0 = 0;
  *(_DWORD *)dword_8CC738 = sub_465E40(240, (int)"face_taskmenu.cpp", 91);
  for ( i = 0; i < 10480; i += 1048 )
    sub_423440((void *)(i + *(_DWORD *)dword_8CC738), v0++);
  v2 = sub_47C740("face\\taskmenu.fce");
  sub_481C90(&unk_8CD8F8, v2, 1);
  sub_45B770();
  sub_47D1A0(&unk_8CD8F8, sub_45B890, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  return 1;
}
