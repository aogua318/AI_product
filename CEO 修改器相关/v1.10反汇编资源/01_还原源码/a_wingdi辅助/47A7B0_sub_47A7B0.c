// 函数 0x47a7b0  sub_47A7B0  size=0x125  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_47A7B0(_DWORD *a1, int a2, int *a3)
{
  int v3; // edx
  int v4; // edi
  bool v5; // zf
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v10; // [esp+Ch] [ebp-314h] BYREF
  int v11; // [esp+10h] [ebp-310h]
  int v12; // [esp+14h] [ebp-30Ch]
  int *v13; // [esp+18h] [ebp-308h]
  signed int v14[64]; // [esp+1Ch] [ebp-304h] BYREF
  unsigned int v15[64]; // [esp+11Ch] [ebp-204h] BYREF
  float v16[32]; // [esp+21Ch] [ebp-104h] BYREF
  _BYTE v17[128]; // [esp+29Ch] [ebp-84h] BYREF

  v3 = a1[6];
  v4 = 0;
  v5 = a1[16] == 1;
  v13 = a3;
  v6 = a1[4];
  v11 = v3;
  if ( v5 )
    v7 = 4 * a1[17] + 4;
  else
    v7 = 32;
  a1[5] = v7;
  if ( v6 == 1 || v3 == 3 )
    v11 = 0;
  sub_479B70(v15, v14, (int)a1);
  v12 = 12;
  do
  {
    sub_479C90(v16, v15, v14, a1);
    if ( v11 < 0 )
    {
      v10 = *v13;
      v4 += sub_47A8E0(v16, 0, a2, &v10);
      v8 = sub_47A8E0(v17, 1, a2, v13);
    }
    else
    {
      v8 = sub_47ACD0(&v16[32 * v11], a2, v13);
    }
    v4 += v8;
    --v12;
  }
  while ( v12 );
  return v4;
}
