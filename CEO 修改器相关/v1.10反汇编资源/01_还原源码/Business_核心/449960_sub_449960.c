// 函数 0x449960  sub_449960  size=0x4B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_449960@<eax>(int a1@<eax>)
{
  _WORD *v1; // edi
  int i; // esi
  int result; // eax

  v1 = (_WORD *)(*(_DWORD *)dword_870814 + 72 * a1 + 16);
  for ( i = 9792; i < 10944; i += 288 )
  {
    if ( *v1 == 0xFFFF )
      result = sub_482060(i + dword_8B8CC8);
    else
      result = sub_482FE0(i + dword_8B8CC8);
    ++v1;
  }
  return result;
}
