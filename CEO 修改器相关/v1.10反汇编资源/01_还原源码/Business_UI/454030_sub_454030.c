// 函数 0x454030  sub_454030  size=0x11A  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_454030()
{
  char *v0; // eax
  int v1; // esi
  int v2; // edi
  char *v3; // ebx
  int v4; // ecx
  char *v5; // eax
  char *v6; // ebx
  char v7; // dl
  char *v9; // [esp+8h] [ebp-4h]

  v0 = (char *)&unk_4D10B8 + 189880 * dword_8BF648[dword_8BF5B0];
  **(_WORD **)dword_8BF768 = -1;
  v1 = *((__int16 *)v0 + 44);
  v2 = 1;
  if ( v1 == -1 )
    goto LABEL_7;
  v3 = (char *)dword_8BF76C + 20;
  v9 = (char *)dword_8BF76C + 20;
  do
  {
    v4 = dword_4CCAAC + v1 * dword_4CCA98;
    v5 = (char *)(v4 + 204);
    v6 = &v3[-v4 - 204];
    do
    {
      v7 = *v5;
      v5[(_DWORD)v6] = *v5;
      ++v5;
    }
    while ( v7 );
    *(_WORD *)(*(_DWORD *)dword_8BF768 + 2 * v2) = v1;
    v1 = *(__int16 *)(v4 + 1618);
    v3 = v9 + 20;
    ++v2;
    v9 += 20;
  }
  while ( v1 != -1 );
  if ( v2 <= 18 )
LABEL_7:
    dword_8BF6AC = 0;
  else
    dword_8BF6AC = 1;
  sub_481A70(v2);
  sub_481AC0(dword_8BF76C, 20, v2, 0);
  sub_481A70(18);
  sub_481AC0(dword_8BF76C, 20, v2, 0);
  return sub_47ECC0(v2 - 17);
}
