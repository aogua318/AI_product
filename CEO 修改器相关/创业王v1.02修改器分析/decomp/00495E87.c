int __stdcall sub_495E87(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v6; // [esp+0h] [ebp-18h] BYREF
  int *v7; // [esp+4h] [ebp-14h]
  int v8; // [esp+8h] [ebp-10h]
  int *v9; // [esp+Ch] [ebp-Ch]
  int v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h]

  v11 = 0; /*0x495e90*/
  v10 = 0; /*0x495e97*/
  v8 = a2 == 0; /*0x495eaa*/
  if ( v8 == 1 ) /*0x495eb1*/
  {
    v9 = &v6; /*0x495eb7*/
    v2 = sub_4CED5B(-1, -1); /*0x495ece*/
    if ( v9 != &v6 ) /*0x495ed6*/
      return sub_4CED55(6); /*0x495edd*/
    return v2; /*0x495ee5*/
  }
  else
  {
    v9 = 0; /*0x495eed*/
    v8 = sub_494EC6(a1, 0, 0); /*0x495f01*/
    v7 = &v6; /*0x495f04*/
    v3 = sub_4CED5B(2035711, 0); /*0x495f19*/
    if ( v7 != &v6 ) /*0x495f21*/
      v3 = sub_4CED55(6); /*0x495f28*/
    v10 = v3; /*0x495f30*/
    v9 = &v6; /*0x495f33*/
    v4 = sub_4CED5B(v3, -1); /*0x495f48*/
    if ( v9 != &v6 ) /*0x495f50*/
      return sub_4CED55(6); /*0x495f57*/
    return v4; /*0x495f5f*/
  }
}