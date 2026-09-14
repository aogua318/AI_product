// 函数 0x4307e0  sub_4307E0  size=0x26C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4307E0(int a1, int a2, int a3, int a4)
{
  unsigned int *v4; // esi
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v14; // [esp+Ch] [ebp-8h] BYREF
  int v15; // [esp+10h] [ebp-4h] BYREF
  int v16; // [esp+1Ch] [ebp+8h]

  v4 = (unsigned int *)(dword_4CCAAC + a1 * dword_4CCA98);
  v5 = 0;
  if ( a2 < 0 )
    a2 = 0;
  v6 = v4[6];
  if ( a2 >= v6 )
    a2 = v6 - 1;
  if ( a3 < 0 )
    a3 = 0;
  v7 = v4[7];
  if ( a3 >= v7 )
    a3 = v7 - 1;
  v8 = dword_4B32B8;
  v9 = a4;
  if ( dword_4B32B8 == -1 )
  {
    if ( a4 == -1 )
    {
      v9 = 0;
      a4 = 0;
    }
    v8 = sub_486480(19, a2, a3, v9, 0, 0, 0, 0, 0);
    dword_4B32B8 = v8;
  }
  else if ( a4 == -1 )
  {
    v9 = *(unsigned __int8 *)(dword_4B32B8 * v4[40] + v4[45] + 8);
    a4 = v9;
  }
  if ( a1 == dword_4B1028 )
    dword_4B1010 = v8;
  v10 = sub_485630(19, a2, a3, v9, 1);
  v16 = v10;
  v11 = 1;
  if ( v9 > 0 )
  {
    v12 = v9;
    do
    {
      v11 *= 2;
      --v12;
    }
    while ( v12 );
  }
  if ( (v11 & v10) != 0 )
  {
    if ( sub_430670(v9, v4, a2, a3) )
    {
      v5 = 1;
      goto LABEL_35;
    }
    v10 = v16;
  }
  if ( v10 )
  {
    v5 = sub_430780(a3, v4, a2, &a4);
    if ( !v5 )
    {
      v5 = sub_430780(a3, v4, a2 + 1, &a4);
      if ( v5 )
      {
        ++a2;
      }
      else
      {
        v5 = sub_430780(a3, v4, a2 - 1, &a4);
        if ( v5 )
        {
          --a2;
        }
        else
        {
          v5 = sub_430780(a3 + 1, v4, a2, &a4);
          if ( v5 )
          {
            ++a3;
          }
          else
          {
            v5 = sub_430780(a3 - 1, v4, a2, &a4);
            if ( v5 )
              --a3;
          }
        }
      }
    }
    v9 = a4;
  }
LABEL_35:
  if ( dword_4B32B8 != -1 )
  {
    sub_483890(a2, a3, &v15, &v14);
    v15 += (int)v4[8] >> 1;
    v14 += (int)v4[8] >> 1;
    sub_4866A0(dword_4B32B8, v15, v14, 0);
    sub_4867D0(dword_4B32B8, v9);
  }
  sub_4868E0(dword_4B32B8, dword_8A1C24);
  if ( v5 )
  {
    sub_486260(dword_4B32B8, 0, 0);
    dword_8703B4 = 1;
  }
  else
  {
    sub_486260(dword_4B32B8, 3, 32140);
    dword_8703B4 = 0;
  }
  return dword_4B32B8;
}
