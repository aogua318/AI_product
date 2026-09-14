// 函数 0x401310  sub_401310  size=0x167  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_401310@<eax>(int a1@<edi>, int a2)
{
  int v2; // eax
  _DWORD *v3; // esi
  int v4; // edx
  int v5; // ebx
  int v6; // eax
  int v7; // ebx
  int result; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // [esp+8h] [ebp-18h] BYREF
  int v12; // [esp+Ch] [ebp-14h] BYREF
  int v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+14h] [ebp-Ch]
  int v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  v2 = dword_4B32B8;
  v3 = (_DWORD *)(dword_4CCAAC + a1 * dword_4CCA98);
  dword_4B32B8 = -1;
  v4 = v3[50] - 1;
  v14 = v2;
  v13 = dword_8703B4;
  v16 = 1;
  if ( v4 <= 1 )
  {
LABEL_9:
    sub_430A50(a1);
    dword_8703B4 = v13;
    dword_4B32B8 = v14;
    return -1;
  }
  while ( 1 )
  {
    v5 = 1;
    v6 = v3[49] - 1;
    v15 = 1;
    if ( v6 > 1 )
      break;
LABEL_8:
    v10 = v3[50] - 1;
    if ( ++v16 >= v10 )
      goto LABEL_9;
  }
  while ( 1 )
  {
    sub_4307E0(a1, v5, v16, 0);
    if ( !dword_8703B4 || dword_4B32B8 == -1 )
      goto LABEL_7;
    sub_483850(
      *(__int16 *)(dword_4B32B8 * v3[40] + v3[45] + 2),
      *(__int16 *)(dword_4B32B8 * v3[40] + v3[45] + 4),
      &v11,
      &v12);
    v7 = *(unsigned __int8 *)(dword_4B32B8 * v3[40] + v3[45] + 8);
    sub_430A50(a1);
    result = sub_430520(a1, v11, v12, v7, a2);
    if ( result != -1 )
      break;
    v5 = v15;
LABEL_7:
    ++v5;
    v9 = v3[49] - 1;
    v15 = v5;
    if ( v5 >= v9 )
      goto LABEL_8;
  }
  dword_8703B4 = v13;
  dword_4B32B8 = v14;
  return result;
}
