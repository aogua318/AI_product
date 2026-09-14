// 函数 0x40dd00  sub_40DD00  size=0x181  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40DD00(int a1)
{
  int result; // eax
  int v2; // esi
  int v3; // eax
  int v4; // edi
  __int16 *v5; // esi

  sub_4458B0(0);
  sub_447510(0, 0);
  sub_445C40(0);
  sub_4472C0(0, 1);
  sub_447A40(0);
  if ( dword_4B1028 == -1 )
  {
    if ( dword_4B1024 != -1 )
      sub_40DC20(dword_4B1024, 0);
  }
  else
  {
    sub_40DCE0(dword_4B1028, 0);
    dword_4B1028 = -1;
  }
  result = a1;
  dword_4B1024 = a1;
  if ( a1 != -1 )
  {
    v2 = dword_4C43DC + a1 * dword_4C43C8;
    if ( *(_BYTE *)(v2 + 3) == 3 )
    {
      v3 = *(__int16 *)(v2 + 16);
      dword_4B1028 = v3;
      sub_40DCE0(v3, 1);
    }
    else
    {
      sub_40DC20(a1, 1);
    }
    result = *(char *)(v2 + 3);
    if ( *(char *)(v2 + 2) == dword_8703A0 )
    {
      switch ( --result )
      {
        case 0:
          result = sub_40CD20((__int16 *)(dword_4C43DC + dword_4B1024 * dword_4C43C8));
          v4 = result;
          v5 = &word_4C43E4;
          do
          {
            if ( v4 == *v5 )
              result = sub_4458B0(1);
            ++v5;
          }
          while ( (int)v5 < (int)&word_4C43EA );
          break;
        case 2:
          if ( (_DWORD *)dword_4C2D38 == dword_4D0E68 )
            result = sub_447510(1, 1);
          break;
        case 3:
        case 4:
        case 5:
          result = sub_4472C0(1, 1);
          break;
        default:
          return result;
      }
    }
    else
    {
      switch ( *(_BYTE *)(v2 + 3) )
      {
        case 0:
          result = sub_445C40(1);
          break;
        case 2:
          result = sub_447A40(1);
          break;
        case 3:
          if ( (_DWORD *)dword_4C2D38 == dword_4D0E68 )
            result = sub_447510(1, 0);
          break;
        case 4:
        case 5:
        case 6:
          result = sub_4472C0(1, 0);
          break;
        default:
          return result;
      }
    }
  }
  return result;
}
