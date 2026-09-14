// 函数 0x486260  sub_486260  size=0xA1  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned __int8 __thiscall sub_486260(int *this, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // eax
  unsigned __int8 result; // al

  v4 = *(this + 45) + a2 * *(this + 40);
  v5 = 0;
  if ( a3 == 2 )
  {
    v6 = a4;
    if ( a4 <= 255 )
      goto LABEL_7;
    a4 += -255 - 255 * ((a4 - 256) / 0xFFu);
  }
  else if ( a3 != 3 && a3 != 5 )
  {
    goto LABEL_9;
  }
  v6 = a4;
LABEL_7:
  if ( *(unsigned __int16 *)(v4 + 14) != v6 )
  {
    v5 = 1;
    *(_WORD *)(v4 + 14) = v6;
  }
LABEL_9:
  result = *(_BYTE *)(v4 + 10);
  if ( ((result >> 4) & 7) != a3 || v5 )
  {
    *(_BYTE *)(v4 + 10) = result ^ (result ^ (16 * a3)) & 0x70;
    if ( *(this + 16) )
      return (unsigned __int8)sub_485B90(this, a2);
  }
  return result;
}
