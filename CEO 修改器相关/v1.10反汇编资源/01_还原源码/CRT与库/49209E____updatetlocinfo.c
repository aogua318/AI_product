// 函数 0x49209e  ___updatetlocinfo  size=0x79  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

DWORD __updatetlocinfo()
{
  DWORD *v0; // esi
  DWORD v1; // esi
  volatile LONG *v3; // [esp+10h] [ebp-1Ch]

  v0 = _getptd();
  if ( (dword_4B8DB0 & v0[28]) != 0 && v0[27] )
  {
    v1 = _getptd()[27];
  }
  else
  {
    _lock(12);
    v3 = _updatetlocinfoEx_nolock((volatile LONG **)v0 + 27, off_4B8FF8);
    _unlock(12);
    v1 = (DWORD)v3;
  }
  if ( !v1 )
    _amsg_exit(32);
  return v1;
}
