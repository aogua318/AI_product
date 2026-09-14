// 函数 0x417f10  sub_417F10  size=0x226  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_417F10(int a1)
{
  int v1; // edx
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // ecx
  char *v6; // esi
  __int16 i; // cx
  __int16 j; // cx

  if ( !sub_464E10(a1) )
    return 0;
  if ( a1 == dword_4B1028 )
  {
    sub_447510(0, 0);
    if ( (_DWORD *)dword_4C2D38 != dword_4D0E68 )
    {
      sub_4095B0();
      sub_4629D0();
      sub_4090C0((int)dword_4D0E68, 1);
      sub_486D40(0, 0);
      sub_486D40(1, 1);
    }
    dword_4B1024 = -1;
    dword_4B1028 = -1;
    dword_4B1010 = -1;
    sub_447F30(0);
  }
  v1 = dword_4CCA98;
  v2 = dword_4CCAAC + a1 * dword_4CCA98;
  v3 = *(_DWORD *)(v2 + 1784);
  dword_4CC8D8 = v2;
  if ( v3 != -1 )
  {
    sub_4864E0(v3);
    v2 = dword_4CC8D8;
    *(_DWORD *)(dword_4CC8D8 + 1784) = -1;
    v1 = dword_4CCA98;
  }
  if ( *(_DWORD *)(v2 + 1788) != -1 )
  {
    sub_4864E0(*(_DWORD *)(v2 + 1788));
    v2 = dword_4CC8D8;
    *(_DWORD *)(dword_4CC8D8 + 1788) = -1;
    v1 = dword_4CCA98;
  }
  v4 = *(__int16 *)(v2 + 1616);
  v5 = *(__int16 *)(v2 + 1618);
  v6 = (char *)&unk_4D10B8 + 189880 * *(char *)(v2 + 224);
  if ( v4 == -1 )
  {
    *((_WORD *)v6 + 44) = v5;
  }
  else
  {
    *(_WORD *)(v4 * v1 + dword_4CCAAC + 1618) = v5;
    v1 = dword_4CCA98;
  }
  if ( v5 != -1 )
    *(_WORD *)(v5 * v1 + dword_4CCAAC + 1616) = v4;
  --*((_WORD *)v6 + 45);
  for ( i = *(_WORD *)(v2 + 480); i != -1; i = *(_WORD *)(dword_4CC8D8 + 480) )
  {
    sub_433D30(i);
    v2 = dword_4CC8D8;
  }
  for ( j = *(_WORD *)(v2 + 764); j != -1; j = *(_WORD *)(dword_4CC8D8 + 764) )
    sub_42BF60(j);
  sub_464ED0(sub_417E20);
  sub_43A140(a1);
  sub_4172C0(a1);
  if ( dword_4C2D38 == dword_4CC8D8 )
  {
    sub_4090C0((int)dword_4D0E68, 1);
    sub_47C950(0);
  }
  sub_40F270(a1);
  sub_4834C0((void *)(dword_4CCAAC + a1 * dword_4CCA98));
  sub_42ECC0(v6);
  return 1;
}
