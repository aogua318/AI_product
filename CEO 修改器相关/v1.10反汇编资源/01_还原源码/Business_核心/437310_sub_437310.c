// 函数 0x437310  sub_437310  size=0xE3  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_437310@<eax>(const char *a1@<esi>)
{
  char v2[1024]; // [esp+0h] [ebp-404h] BYREF

  sub_46A2E0(Offset);
  if ( sub_46A450(v2) )
  {
    while ( strcmp(v2, "}") )
    {
      if ( !strcmp(v2, a1) )
        return 1;
      if ( !sub_46A450(v2) )
        return 0;
    }
  }
  return 0;
}
