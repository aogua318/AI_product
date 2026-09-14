// 函数 0x444710  sub_444710  size=0x15C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_444710(int a1)
{
  __int16 *v1; // edi
  int v2; // ebx
  int v3; // esi
  int v4; // eax
  bool v5; // zf
  double v6; // st7
  int v7; // edi
  int v9; // [esp+14h] [ebp-110h] BYREF
  int v10; // [esp+18h] [ebp-10Ch] BYREF
  int v11; // [esp+1Ch] [ebp-108h]
  char Buffer[256]; // [esp+20h] [ebp-104h] BYREF

  v1 = (__int16 *)(dword_4D0C84 + a1 * dword_4D0C70);
  v2 = *(_DWORD *)dword_4D0C8C + 388 * *v1;
  v3 = dword_4CCAAC + dword_4CCA98 * v1[1];
  v4 = *(_DWORD *)(v2 + 220);
  v5 = *(_BYTE *)(v3 + 224) == 2;
  v11 = v4;
  if ( v5 )
  {
    v4 /= 2;
    v11 = v4;
  }
  v10 = -v4;
  sub_42EDA0((char *)&unk_4D10B8 + 189880 * *(char *)(v3 + 224), (double)-v4);
  v6 = (double)v11;
  *(_DWORD *)(v3 + 1312) += v11;
  dbl_4D3A50[23735 * *(char *)(v3 + 224)] = v6 + dbl_4D3A50[23735 * *(char *)(v3 + 224)];
  *((_DWORD *)v1 + 49) = 0;
  sub_419920((_DWORD *)v3, &v9, &v10);
  v7 = *(_DWORD *)dword_4D1088 + 3168;
  sprintf(
    Buffer,
    (const char *const)(*(_DWORD *)dword_4D1088 + 3176),
    &byte_4D10C8[189880 * *(char *)(v3 + 224)],
    v3 + 204,
    v2 + 56,
    v11);
  sub_42B930(v9, v10, -1, Buffer, v7);
  return sub_43B560();
}
