// 函数 0x4725d0  sub_4725D0  size=0x75  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

signed int __usercall sub_4725D0@<eax>(int a1@<edx>, int a2@<ebx>, int a3@<edi>)
{
  __int16 v3; // cx
  signed int result; // eax
  int v5; // edx
  int i; // esi
  int v7; // edx
  unsigned int v8; // ecx
  __int16 v9; // [esp+4h] [ebp-24h]
  char v10; // [esp+6h] [ebp-22h] BYREF

  v3 = 0;
  result = 1;
  v5 = a1 - (_DWORD)&v10;
  do
  {
    v3 = 2 * (v3 + *(__int16 *)((char *)&v9 + 2 * result + v5));
    *(&v9 + result++) = v3;
  }
  while ( result <= 15 );
  for ( i = 0; i <= a2; ++i )
  {
    v7 = *(unsigned __int16 *)(a3 + 4 * i + 2);
    if ( *(_WORD *)(a3 + 4 * i + 2) )
    {
      v8 = (unsigned __int16)*(&v9 + v7);
      *(&v9 + v7) = v8 + 1;
      result = sub_4723D0(v8, v7);
      *(_WORD *)(a3 + 4 * i) = result;
    }
  }
  return result;
}
