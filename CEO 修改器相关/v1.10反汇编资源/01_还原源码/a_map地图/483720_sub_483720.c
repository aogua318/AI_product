// 函数 0x483720  sub_483720  size=0x89  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *__thiscall sub_483720(_DWORD *this, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // esi
  int v6; // kr00_4
  int v7; // edx
  int v8; // esi
  _DWORD *result; // eax

  v5 = a3 - *(this + 23);
  v6 = a2 - *(this + 22);
  v7 = v6 / 2 + v5;
  v8 = v5 - v6 / 2;
  result = (_DWORD *)*(this + 5);
  switch ( (unsigned int)result )
  {
    case 0u:
      *a4 = v7;
      *a5 = v8;
      result = a4;
      break;
    case 1u:
      *a4 = *(this + 6) * *(this + 8) - v8;
      *a5 = v7;
      result = a5;
      break;
    case 2u:
      *a4 = *(this + 8) * *(this + 6) - v7;
      result = (_DWORD *)(*(this + 8) * *(this + 7) - v8);
      *a5 = result;
      break;
    case 3u:
      *a4 = v8;
      result = (_DWORD *)(*(this + 7) * *(this + 8) - v7);
      *a5 = result;
      break;
    default:
      return result;
  }
  return result;
}
