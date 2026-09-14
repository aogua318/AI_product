// 函数 0x417e20  sub_417E20  size=0xC1  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_417E20(int a1)
{
  int v1; // esi
  int result; // eax

  v1 = *(_DWORD *)(dword_4CC8D8 + 180) + a1 * *(_DWORD *)(dword_4CC8D8 + 160);
  switch ( *(_BYTE *)(v1 + 11) )
  {
    case 0:
      sub_4265C0(dword_4D0C84 + dword_4D0C70 * *(__int16 *)(v1 + 12));
      sub_4266F0(*(__int16 *)(v1 + 12));
      result = 0;
      break;
    case 1:
      sub_42BF60(*(__int16 *)(v1 + 12));
      result = 0;
      break;
    case 2:
      sub_413B60(*(__int16 *)(v1 + 12));
      result = 0;
      break;
    case 3:
      sub_40BF60(*(__int16 *)(v1 + 12));
      goto LABEL_9;
    case 6:
      sub_4321D0(*(__int16 *)(v1 + 12));
      result = 0;
      break;
    case 7:
      sub_434090(*(__int16 *)(v1 + 12));
      result = 0;
      break;
    case 8:
      sub_42B5C0(*(__int16 *)(v1 + 12));
      result = 0;
      break;
    default:
LABEL_9:
      result = 0;
      break;
  }
  return result;
}
