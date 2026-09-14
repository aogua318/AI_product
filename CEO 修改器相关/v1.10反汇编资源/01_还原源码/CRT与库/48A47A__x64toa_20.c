// 函数 0x48a47a  @x64toa@20  size=0x6F  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char __userpurge x64toa@<al>(char *a1@<eax>, __int64 a2, unsigned int a3, int a4)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rax
  char *v7; // edi
  char v8; // cl
  char *v9; // esi
  char result; // al
  unsigned __int64 v11; // [esp-10h] [ebp-24h]

  HIDWORD(v4) = a2;
  LODWORD(v6) = HIDWORD(a2);
  if ( a4 )
  {
    *a1++ = 45;
    HIDWORD(v4) = -(int)a2;
    LODWORD(v6) = (unsigned __int64)-a2 >> 32;
  }
  v7 = a1;
  do
  {
    v11 = __PAIR64__(v6, HIDWORD(v4));
    v4 = __PAIR64__(v6, HIDWORD(v4)) % a3;
    v6 = v11 / a3;
    HIDWORD(v4) = v6;
    LODWORD(v6) = HIDWORD(v6);
    if ( (unsigned int)v4 <= 9 )
      v8 = v4 + 48;
    else
      v8 = v4 + 87;
    *a1++ = v8;
  }
  while ( HIDWORD(v6) || HIDWORD(v4) );
  *a1 = 0;
  v9 = a1 - 1;
  do
  {
    result = *v9;
    *v9-- = *v7;
    *v7++ = result;
  }
  while ( v7 < v9 );
  return result;
}
