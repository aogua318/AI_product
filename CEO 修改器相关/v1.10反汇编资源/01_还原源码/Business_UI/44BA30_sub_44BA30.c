// 函数 0x44ba30  sub_44BA30  size=0x91  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_44BA30(double *a1, double *a2)
{
  int result; // eax

  switch ( dword_8BE040 )
  {
    case 1:
      result = *((_DWORD *)a2 + 1) - *((_DWORD *)a1 + 1);
      break;
    case 2:
      result = *((_DWORD *)a2 + 2) - *((_DWORD *)a1 + 2);
      break;
    case 3:
      result = *((_DWORD *)a2 + 3) - *((_DWORD *)a1 + 3);
      break;
    case 4:
      result = (int)(a2[2] - a1[2]);
      break;
    case 5:
      result = *((_DWORD *)a2 + 6) - *((_DWORD *)a1 + 6);
      break;
    case 6:
      result = (int)(a2[4] - a1[4]);
      break;
    case 7:
      result = *((_DWORD *)a2 + 10) - *((_DWORD *)a1 + 10);
      break;
    case 8:
      result = *((_DWORD *)a2 + 11) - *((_DWORD *)a1 + 11);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
