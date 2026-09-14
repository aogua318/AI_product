// 函数 0x4568d0  sub_4568D0  size=0xF5  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4568D0(int *a1, int *a2)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax
  unsigned int v5; // edx
  unsigned int v6; // esi
  int v7; // eax
  int v8; // ecx

  switch ( dword_4B3834 )
  {
    case 0:
      v2 = *a2;
      v3 = *a1;
      goto LABEL_3;
    case 1:
      v5 = a2[2];
      v6 = a1[2];
      v7 = a2[3];
      v8 = a1[3];
      goto LABEL_7;
    case 2:
      v5 = a2[4];
      v6 = a1[4];
      v7 = a2[5];
      v8 = a1[5];
      goto LABEL_7;
    case 3:
      v5 = a2[6];
      v6 = a1[6];
      v7 = a2[7];
      v8 = a1[7];
      goto LABEL_7;
    case 4:
      v5 = a2[8];
      v6 = a1[8];
      v7 = a2[9];
      v8 = a1[9];
LABEL_7:
      if ( v7 < v8 )
        goto LABEL_13;
      if ( v7 > v8 || v5 > v6 )
        return 1;
      if ( v7 > v8 || v7 >= v8 && v5 >= v6 )
        goto LABEL_21;
LABEL_13:
      result = -1;
      break;
    case 5:
      v2 = a2[10];
      v3 = a1[10];
      goto LABEL_3;
    case 6:
      v2 = a2[11];
      v3 = a1[11];
      goto LABEL_3;
    case 7:
      v2 = a2[12];
      v3 = a1[12];
      goto LABEL_3;
    case 8:
      v2 = a2[13];
      v3 = a1[13];
LABEL_3:
      if ( v2 <= v3 )
        return (v2 >= v3) - 1;
      else
        return 1;
    default:
LABEL_21:
      result = 0;
      break;
  }
  return result;
}
