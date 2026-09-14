// 函数 0x41bf50  sub_41BF50  size=0xDC  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_41BF50(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8; // [esp+1Ch] [ebp+8h]

  v1 = dword_4CCAAC + a1 * dword_4CCA98;
  v2 = 0;
  v8 = 0;
  v3 = sub_41BB10((_DWORD *)v1);
  if ( v3 )
  {
    v2 = *(_DWORD *)(v1 + 452) * *(__int16 *)(v1 + 464) / v3;
    v8 = v2;
  }
  v4 = sub_41BB30((_DWORD *)v1);
  if ( v4 )
  {
    v2 += *(_DWORD *)(v1 + 456) * *(__int16 *)(v1 + 466) / v4;
    v8 = v2;
  }
  v5 = sub_41BB50((_DWORD *)v1);
  if ( v5 )
  {
    v2 += *(_DWORD *)(v1 + 460) * *(__int16 *)(v1 + 482) / v5;
    v8 = v2;
  }
  sub_42EDA0((double)-v2);
  v6 = *(char *)(v1 + 224);
  *(_DWORD *)(v1 + 1116) += v2;
  dbl_4D38C8[23735 * v6] = (double)v8 + dbl_4D38C8[23735 * v6];
  return 0;
}
