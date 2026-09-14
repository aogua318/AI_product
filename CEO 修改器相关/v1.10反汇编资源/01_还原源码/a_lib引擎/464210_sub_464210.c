// 函数 0x464210  sub_464210  size=0x10E  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char *__cdecl sub_464210(__int64 a1, int a2, int a3)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // edi
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // kr08_8
  __int64 v12; // [esp+Ch] [ebp-10h]
  int v13; // [esp+14h] [ebp-8h]
  int v14; // [esp+18h] [ebp-4h]
  int v15; // [esp+28h] [ebp+Ch]

  v3 = HIDWORD(a1);
  v4 = a1;
  if ( a1 < 0 )
  {
    v4 = -(int)a1;
    v5 = 1;
    v3 = (unsigned __int64)-a1 >> 32;
    --a2;
    v13 = 1;
    byte_8DB7FC[0] = 32;
    a3 = 0;
  }
  else
  {
    v13 = 0;
    v5 = 0;
  }
  HIDWORD(v12) = v3;
  v6 = a2 - 1;
  v7 = 0;
  LODWORD(v12) = v4;
  v8 = 1;
  if ( a2 - 1 > 0 )
  {
    do
    {
      v7 = (10 * __PAIR64__(v7, v8)) >> 32;
      v8 *= 10;
      --v6;
    }
    while ( v6 );
  }
  v14 = 0;
  v15 = 0;
  if ( a2 > 0 )
  {
    while ( 1 )
    {
      v9 = v12 / __SPAIR64__(v7, v8);
      if ( (unsigned int)(v12 / __SPAIR64__(v7, v8)) || v15 == a2 - 1 )
        break;
      if ( v14 || a3 )
        goto LABEL_10;
      byte_8DB7FC[v5] = 32;
LABEL_13:
      byte_8DB7FC[++v5] = 0;
      v12 -= (int)v9 * __PAIR64__(v7, v8);
      v10 = __SPAIR64__(v7, v8) / 10;
      v7 = (unsigned __int64)(__SPAIR64__(v7, v8) / 10) >> 32;
      v8 = v10;
      if ( ++v15 >= a2 )
        return byte_8DB7FC;
    }
    v14 = 1;
LABEL_10:
    byte_8DB7FC[v5] = v9 + 48;
    if ( v13 && byte_8DB7FB[v5] == 32 )
      byte_8DB7FB[v5] = 45;
    goto LABEL_13;
  }
  return byte_8DB7FC;
}
