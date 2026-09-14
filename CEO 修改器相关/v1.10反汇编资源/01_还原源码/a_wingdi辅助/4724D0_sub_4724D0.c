// 函数 0x4724d0  sub_4724D0  size=0x82  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__usercall sub_4724D0@<eax>(int a1@<eax>, _BYTE *a2@<edx>, int a3@<ecx>, int a4)
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_472470(a1);
  result[1451] = 8;
  if ( a4 )
  {
    *(_BYTE *)(result[5] + result[2]) = a3;
    *(_BYTE *)(++result[5] + result[2]) = BYTE1(a3);
    *(_BYTE *)(++result[5] + result[2]) = ~(_BYTE)a3;
    *(_BYTE *)(++result[5] + result[2]) = (unsigned __int16)~(_WORD)a3 >> 8;
    ++result[5];
  }
  for ( ; a3; ++a2 )
  {
    *(_BYTE *)(result[5] + result[2]) = *a2;
    --a3;
    ++result[5];
  }
  return result;
}
