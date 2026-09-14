// 函数 0x472850  sub_472850  size=0xC7  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_472850@<eax>(int a1@<eax>)
{
  int result; // eax

  sub_471650(*(_DWORD *)(a1 + 2836), a1 + 140, (_WORD *)a1);
  sub_471650(*(_DWORD *)(a1 + 2848), a1 + 2432, (_WORD *)a1);
  sub_472650((_DWORD *)a1, (int *)(a1 + 2856));
  result = 18;
  while ( !*(_WORD *)(a1 + 4 * (unsigned __int8)byte_4A521C[result] + 2678) )
  {
    if ( *(_WORD *)(a1 + 4 * (unsigned __int8)byte_4A521B[result] + 2678) )
    {
      --result;
      *(_DWORD *)(a1 + 5792) += 3 * result + 17;
      return result;
    }
    if ( *(_WORD *)(a1 + 4 * (unsigned __int8)byte_4A521A[result] + 2678) )
    {
      result -= 2;
      *(_DWORD *)(a1 + 5792) += 3 * result + 17;
      return result;
    }
    if ( *(_WORD *)(a1 + 4 * (unsigned __int8)byte_4A5219[result] + 2678) )
    {
      result -= 3;
      break;
    }
    result -= 4;
    if ( result < 3 )
    {
      *(_DWORD *)(a1 + 5792) += 3 * result + 17;
      return result;
    }
  }
  *(_DWORD *)(a1 + 5792) += 3 * result + 17;
  return result;
}
