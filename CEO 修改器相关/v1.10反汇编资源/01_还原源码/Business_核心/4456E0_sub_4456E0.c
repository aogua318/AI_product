// 函数 0x4456e0  sub_4456E0  size=0x1CF  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_4456E0()
{
  unsigned int v0; // eax
  int v1; // eax
  int v2; // esi
  int *v3; // esi
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  char Buffer[256]; // [esp+0h] [ebp-104h] BYREF

  v0 = word_8A8FBC - 1;
  if ( word_8A8FBC )
  {
    if ( v0 > 5 )
    {
      sub_445630(0);
      dword_4B37F4 = -1;
      return;
    }
  }
  else
  {
    v0 = 0;
  }
  v1 = sub_40DEC0(dword_4B1024, v0);
  v2 = v1;
  if ( v1 != dword_4B37F4 )
  {
    dword_4B37F4 = v1;
    if ( v1 != -1 )
    {
      sub_445630(1);
      v3 = (int *)(*(_DWORD *)dword_4C4434 + 72 * v2);
      sub_47FF50(v3 + 10);
      v4 = sub_438320(v3[1], Buffer, 5);
      sub_47FF50(v4);
      v5 = sub_438320(v3[2], Buffer, 5);
      sub_47FF50(v5);
      v6 = sub_438320(v3[3], Buffer, 5);
      sub_47FF50(v6);
      v7 = sub_438320(v3[4], Buffer, 5);
      sub_47FF50(v7);
      v8 = sub_438320(v3[5], Buffer, 5);
      sub_47FF50(v8);
      v9 = sub_438320(v3[6], Buffer, 5);
      sub_47FF50(v9);
      v10 = sub_438320(v3[7], Buffer, 5);
      sub_47FF50(v10);
    }
  }
}
