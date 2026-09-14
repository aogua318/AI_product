// 函数 0x4491b0  sub_4491B0  size=0x1D9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4491B0()
{
  double *v0; // esi
  char Buffer[256]; // [esp+Ch] [ebp-104h] BYREF

  v0 = (double *)((char *)&unk_4D10B8 + 189880 * dword_8703A0);
  sub_438190((unsigned __int64)v0[9], Buffer, 10);
  sub_47FF50(Buffer);
  sub_47FF50(Buffer);
  sprintf(Buffer, "%2.2f", flt_8703A4 * 10.0);
  sub_47FF50(Buffer);
  sub_438190((unsigned __int64)(flt_8703A4 * v0[9]), Buffer, 10);
  sub_47FF50(Buffer);
  sub_438190((unsigned __int64)dbl_8B5718, Buffer, 10);
  sub_47FF50(Buffer);
  sub_438320((int)(flt_8703A4 * dbl_8B5718), Buffer, 7);
  sub_47FF50(Buffer);
  sub_438190((unsigned __int64)dbl_8B5728, Buffer, 10);
  sub_47FF50(Buffer);
  sub_438320((int)(flt_8703A4 * dbl_8B5728), Buffer, 7);
  return sub_47FF50(Buffer);
}
