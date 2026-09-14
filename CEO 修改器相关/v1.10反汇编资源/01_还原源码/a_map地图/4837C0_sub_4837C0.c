// 函数 0x4837c0  sub_4837C0  size=0x75  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4837C0(_DWORD *this, int a2, int a3, _DWORD *a4, int *a5)
{
  int v5; // eax
  int v6; // edx
  int v7; // esi
  int result; // eax

  switch ( *(this + 5) )
  {
    case 0:
      v5 = a2;
      goto LABEL_7;
    case 1:
      v5 = a3;
      v6 = *(this + 6) * *(this + 8) - a2;
      break;
    case 2:
      v7 = *(this + 8);
      v5 = v7 * *(this + 6) - a2;
      v6 = v7 * *(this + 7) - a3;
      break;
    case 3:
      v5 = *(this + 7) * *(this + 8) - a3;
      v6 = a2;
      break;
    default:
      v5 = a3;
LABEL_7:
      v6 = a3;
      break;
  }
  *a4 = v5 + *(this + 22) - v6;
  result = *(this + 23) + (v6 + v5) / 2;
  *a5 = result;
  return result;
}
