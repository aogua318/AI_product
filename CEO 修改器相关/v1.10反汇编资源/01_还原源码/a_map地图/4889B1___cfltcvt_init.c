// 函数 0x4889b1  __cfltcvt_init  size=0x60  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int (__cdecl *_cfltcvt_init())(int, char *Str, int, int, size_t Size, int)
{
  off_4B8598[0] = (void (__noreturn *)())_cfltcvt;
  off_4B859C[0] = (void (__noreturn *)())_cropzeros;
  off_4B85A0[0] = (void (__noreturn *)())_fassign;
  off_4B85A4[0] = (void (__noreturn *)())_forcdecpt;
  off_4B85A8[0] = (void (__noreturn *)())_positive;
  off_4B85AC[0] = (void (__noreturn *)())_cfltcvt;
  off_4B85B0 = _cfltcvt_l;
  off_4B85B4 = _fassign_l;
  off_4B85B8 = _cropzeros_l;
  off_4B85BC = _forcdecpt_l;
  return _cfltcvt;
}
