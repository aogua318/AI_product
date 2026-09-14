// 函数 0x40d9d0  sub_40D9D0  size=0x1B7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40D9D0(int *a1)
{
  int v1; // ecx
  int v2; // edx
  unsigned int v3; // eax
  unsigned int v4; // edi
  int v5; // ecx
  unsigned int v6; // edx
  int v7; // esi
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // edi
  unsigned int v11; // ecx
  unsigned int v12; // edx
  int v13; // esi
  int v15; // [esp+8h] [ebp-10h]
  int v16; // [esp+Ch] [ebp-Ch]
  int v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h]

  if ( !sub_40D560(a1) )
    return -1;
  v1 = 0;
  v2 = a1[3] + 1;
  v15 = a1[1] - 1;
  v3 = dword_4D0E80;
  v18 = 0;
  v16 = v2;
  v17 = 0;
  do
  {
    v4 = *(&v15 + v1);
    if ( v4 < dword_4D0E84 )
    {
      v5 = *a1;
      if ( *a1 >= v3 || *(__int16 *)(dword_4D0EE4 + 2 * (v5 + v4 * v3)) <= 0 )
      {
        v6 = v5 + v4 * v3;
        if ( *(_DWORD *)(dword_4D0EF4 + 4 * v6) != -1 )
        {
          if ( !sub_483C00(*(_DWORD *)(dword_4D0EF4 + 4 * v6)) )
          {
            v7 = *a1 + 1;
            if ( v7 > a1[2] )
              goto LABEL_13;
            do
            {
              if ( sub_483C00(*(_DWORD *)(dword_4D0EF4 + 4 * (v7 + v4 * dword_4D0E80))) )
                break;
              ++v7;
            }
            while ( v7 <= a1[2] );
            if ( v7 > a1[2] )
LABEL_13:
              ++v18;
          }
          v3 = dword_4D0E80;
        }
      }
      else
      {
        ++v18;
      }
    }
    v1 = v17 + 1;
    v17 = v1;
  }
  while ( v1 < 2 );
  v8 = a1[2] + 1;
  v15 = *a1 - 1;
  v9 = 0;
  v16 = v8;
  v17 = 0;
  do
  {
    v10 = *(&v15 + v9);
    if ( v10 < v3 )
    {
      v11 = a1[1];
      if ( v11 >= dword_4D0E84 || *(__int16 *)(dword_4D0EE4 + 2 * (v10 + v11 * v3)) <= 0 )
      {
        v12 = v10 + v11 * v3;
        if ( *(_DWORD *)(dword_4D0EF4 + 4 * v12) != -1 )
        {
          if ( !sub_483C00(*(_DWORD *)(dword_4D0EF4 + 4 * v12)) )
          {
            v13 = a1[1];
            if ( v13 > a1[3] )
              goto LABEL_27;
            do
            {
              if ( sub_483C00(*(_DWORD *)(dword_4D0EF4 + 4 * (v10 + v13 * dword_4D0E80))) )
                break;
              ++v13;
            }
            while ( v13 <= a1[3] );
            if ( v13 > a1[3] )
LABEL_27:
              ++v18;
          }
          v3 = dword_4D0E80;
        }
      }
      else
      {
        ++v18;
      }
    }
    v9 = v17 + 1;
    v17 = v9;
  }
  while ( v9 < 2 );
  return v18;
}
