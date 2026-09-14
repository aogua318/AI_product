// 函数 0x45c6f0  sub_45C6F0  size=0x1CA  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_45C6F0(int a1, int a2)
{
  int v2; // ebx
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int result; // eax
  int v10; // esi
  int v11; // eax
  int v12; // ecx

  switch ( a2 )
  {
    case 'c':
      if ( dword_4B3860 != -1 || dword_4B3864 != -1 && dword_8CDA38[dword_4B3864] != -1 )
      {
        sub_47C920(1);
        sub_47C930(v6, v5);
      }
      sub_435570(1, 0);
      break;
    case 'd':
      sub_47C920(0);
      sub_47C930(v8, v7);
      sub_435570(1, 0);
      break;
    case '{':
      sub_4801E0(-1);
      v2 = *(_DWORD *)(*(_DWORD *)(a1 + 296) + 35476);
      sub_45BC60(v2);
      dword_4B3860 = v2;
      dword_4B3864 = -1;
      sub_45C670();
      break;
    case '|':
      sub_4801E0(-1);
      v3 = *(_DWORD *)(*(_DWORD *)(a1 + 296) + 35764);
      v4 = dword_8CDA38[v3];
      dword_4B3860 = -1;
      dword_4B3864 = v3;
      sub_45BC60(v4);
      sub_45C670();
      break;
    default:
      break;
  }
  result = a2 - 49;
  if ( (unsigned int)(a2 - 49) > 6 )
  {
    if ( (unsigned int)(a2 - 56) <= 9 )
    {
      sub_4801E0(a2 - 56);
      sub_4801E0(-1);
      sub_435570(1, 0);
      v11 = *(_DWORD *)(*(_DWORD *)(a1 + 296) + 35764);
      v12 = dword_8CDA38[v11];
      dword_4B3860 = -1;
      dword_4B3864 = v11;
      return sub_45BC60(v12);
    }
  }
  else
  {
    sub_4801E0(*(_DWORD *)(*(_DWORD *)(a1 + 296) + 35472) + a2 - 49);
    sub_4801E0(-1);
    sub_435570(1, 0);
    v10 = *(_DWORD *)(*(_DWORD *)(a1 + 296) + 35476);
    result = sub_45BC60(v10);
    dword_4B3860 = v10;
    dword_4B3864 = -1;
  }
  return result;
}
