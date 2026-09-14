// 函数 0x418880  sub_418880  size=0x100  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_418880(int a1, int a2)
{
  int v2; // eax
  int result; // eax

  switch ( dword_4CC8DC )
  {
    case 0:
      if ( dword_8A8C24 == 1 )
      {
        v2 = sub_4185E0(dword_4B1028, dword_4CCA7C, a1, a2);
      }
      else
      {
        if ( dword_8A8C24 != 2 )
          goto LABEL_14;
        v2 = sub_418730(dword_4B1028, dword_4CCA7C, a1, a2);
      }
      if ( !v2 )
        goto LABEL_14;
      sub_427A10(dword_4D0C84 + dword_4CCA7C * dword_4D0C70);
      goto LABEL_11;
    case 6:
    case 9:
      if ( dword_8A8C24 != 2 || !sub_418330(dword_4B1028, dword_4CCA7C, a1, a2) )
        goto LABEL_14;
      goto LABEL_11;
    case 7:
      if ( dword_8A8C24 != 2 || !sub_418490(dword_4B1028, dword_4CCA7C, a1, a2) )
        goto LABEL_14;
LABEL_11:
      sub_444AB0();
      result = 1;
      break;
    default:
LABEL_14:
      result = 0;
      break;
  }
  return result;
}
