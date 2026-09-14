// 函数 0x442450  sub_442450  size=0x292  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_442450()
{
  int v0; // eax
  int result; // eax
  int v2; // eax
  int i; // esi
  int v4; // eax
  char *v5; // ebx
  char v6; // bl
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // [esp+4h] [ebp-114h]
  int *v12; // [esp+8h] [ebp-110h]
  int v13; // [esp+10h] [ebp-108h]
  char Buffer[256]; // [esp+14h] [ebp-104h] BYREF

  v0 = sub_464D00(628, 250, 786, 550);
  result = sub_464BC0(v0);
  if ( result )
  {
    dword_8A6E6C = sub_43FA20();
    v2 = sub_47C740("fonts\\12ns");
    sub_47D310(v2, 12, 512);
    v13 = 0;
    for ( i = 265; i < 545; i += 20 )
    {
      result = v13 + dword_8A6E6C;
      if ( v13 + dword_8A6E6C >= dword_8A6E70 )
        break;
      v4 = 3 * (result < 0 ? 0 : result);
      v5 = (char *)(dword_4CC8D0 + dword_4CC8BC * dword_8A6970[v4]);
      v12 = &dword_8A6970[v4];
      sub_467680(14);
      sub_466CA0(&dword_8EEDEC, 627, i - 16);
      sub_467680((unsigned __int8)v5[1256] + 16);
      sub_466CA0(&dword_8EEDEC, 628, i - 15);
      v6 = *v5;
      v7 = v6 < 0 ? 0 : v6;
      v11 = *(_DWORD *)dword_870814 + 72 * v7;
      sub_47B910(2, 0);
      v8 = sub_464D00(629, i - 12, 691, i);
      sub_47C220((int)&dword_8EEDEC, v8, v11, 0x7FFF, -1, 1, 0, 0, 255);
      sub_47B910(1, 0);
      sub_438190(v12[1], Buffer, 7);
      sub_467680(25);
      sub_466CA0(&dword_8EEDEC, 692, i - 15);
      v9 = sub_464D00(692, i - 12, 739, i);
      sub_47C220((int)&dword_8EEDEC, v9, (int)Buffer, 0x7FFF, -1, 0, 0, 0, 255);
      sub_438190(v12[2], Buffer, 7);
      v10 = sub_464D00(739, i - 12, 786, i);
      result = sub_47C220((int)&dword_8EEDEC, v10, (int)Buffer, 28430, -1, 0, 0, 0, 255);
      ++v13;
    }
  }
  return result;
}
