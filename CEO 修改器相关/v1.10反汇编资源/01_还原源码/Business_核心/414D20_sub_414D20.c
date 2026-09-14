// 函数 0x414d20  sub_414D20  size=0x29C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_414D20(int a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int result; // eax
  int v5; // eax
  _BYTE *v6; // esi
  __int16 v7; // ax
  int v8; // edx
  int *v9; // ebx
  int v10; // ecx
  int v11; // eax
  double v12; // st7
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // eax
  __int16 v16; // ax
  _DWORD *v17; // ecx
  int v18; // eax
  int v19; // [esp+8h] [ebp-Ch]
  int v20; // [esp+Ch] [ebp-8h] BYREF
  int v21; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  v3 = dword_4CCAAC + a1 * dword_4CCA98;
  result = *(__int16 *)(v3 + 2 * a2 + 240);
  if ( result == -1 )
  {
    v5 = sub_4656D0(&unk_4CC8B8);
    v19 = v5;
    if ( v5 == -1 )
    {
      return -1;
    }
    else
    {
      v6 = (_BYTE *)(dword_4CC8D0 + v5 * dword_4CC8BC);
      memset(v6, 0, 0x518u);
      v7 = a1;
      v6[8] &= ~1u;
      *((_WORD *)v6 + 1) = v7;
      *v6 = v2;
      if ( *(char *)(v3 + 224) == dword_8703A0 )
        *(_WORD *)(v6 + 9) = 514;
      else
        *(_WORD *)(v6 + 9) = 0;
      v8 = 9 * v2;
      v9 = (int *)((char *)dword_870824 + 112 * v2);
      v10 = *(_DWORD *)dword_870814 + 8 * v8;
      v6[1] = 50;
      v6[11] = 50;
      v20 = v10;
      if ( dword_4B1130 )
      {
        v11 = *(char *)(v3 + 224);
        if ( v11 != dword_8703A0 )
          v6[11] = 100 - *(_BYTE *)(54 * v11 + *(_DWORD *)dword_4B9910 + 42);
      }
      v12 = (double)*v9 * 0.00390625 * (double)*(int *)(*(_DWORD *)dword_870814 + 72 * *((__int16 *)v9 + 7) + 24);
      if ( *(_BYTE *)(*(_DWORD *)dword_870814 + 72 * *((__int16 *)v9 + 7) + 13) )
        v12 = v12 * 0.8;
      *((_DWORD *)v6 + 3) = (int)(v12 * 4.0);
      if ( dword_4B1130 )
      {
        if ( *(char *)(v3 + 224) != dword_8703A0 )
        {
          sub_419920(&a1, &v21);
          v13 = (_DWORD *)(*(_DWORD *)dword_4C5DF4 + 9208 * ((a1 >> 5) + (v21 >> 5) * dword_4C5DEC));
          a1 >>= 5;
          v21 >>= 5;
          v14 = (int)(sub_4042A0(v13, a2) * 4.0 * (double)*(int *)(v20 + 24));
          if ( v14 > *((_DWORD *)v6 + 3) )
            *((_DWORD *)v6 + 3) = v14;
        }
      }
      *((_DWORD *)v6 + 3) &= 0xFFFFFFFC;
      *((_DWORD *)v6 + 9) = dword_4CD11C;
      v15 = a2;
      *((_WORD *)v6 + 3) = *(_WORD *)(v3 + 238);
      *((_WORD *)v6 + 2) = -1;
      *(_WORD *)(v3 + 238) = v19;
      *(_WORD *)(v3 + 2 * v15 + 240) = v19;
      v16 = *((_WORD *)v6 + 3);
      if ( v16 != -1 )
        *(_WORD *)(dword_4CC8BC * v16 + dword_4CC8D0 + 4) = v19;
      *((_DWORD *)v6 + 317) = (int)((double)*v9 * 0.00390625 * (double)*(int *)(v20 + 24));
      *((_DWORD *)v6 + 4) = (*v9 + 128) / 256;
      if ( dword_4B1130 )
      {
        if ( *(char *)(v3 + 224) != dword_8703A0 )
        {
          sub_419920(&a1, &v20);
          v17 = (_DWORD *)(*(_DWORD *)dword_4C5DF4 + 9208 * ((a1 >> 5) + (v20 >> 5) * dword_4C5DEC));
          a1 >>= 5;
          v20 >>= 5;
          v18 = (int)sub_4042E0(v17, a2);
          if ( v18 > *((_DWORD *)v6 + 4) )
            *((_DWORD *)v6 + 4) = v18;
        }
      }
      if ( *((int *)v6 + 4) < 1 )
        *((_DWORD *)v6 + 4) = 1;
      ++*(_WORD *)(v3 + 236);
      return v19;
    }
  }
  else
  {
    *(_BYTE *)(dword_4CC8D0 + result * dword_4CC8BC + 8) &= ~1u;
  }
  return result;
}
