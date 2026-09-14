// 函数 0x498af0  __aullshr  size=0x1F  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned __int64 __usercall _aullshr@<edx:eax>(unsigned __int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  if ( a2 >= 0x40u )
    return 0;
  else
    return a1 >> a2;
}
