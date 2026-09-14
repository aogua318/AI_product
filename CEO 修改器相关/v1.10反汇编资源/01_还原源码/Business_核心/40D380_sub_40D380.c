// 函数 0x40d380  sub_40D380  size=0x120  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_40D380@<eax>(signed int *a1@<esi>, int a2, int a3)
{
  signed int v3; // edi
  int v4; // ecx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  signed int v9; // edi
  unsigned int v10; // ebx
  unsigned int v11; // edi
  unsigned int v12; // ebx
  signed int v13; // edi

  v3 = *a1;
  if ( *a1 <= 0 )
    return 0;
  if ( a1[1] <= 0 )
    return 0;
  v4 = a1[2];
  if ( v4 >= dword_4D0E80 - 1 )
    return 0;
  v6 = a1[3];
  if ( v6 < dword_4D0E84 - 1 )
  {
    if ( a3 && (v7 = v6 + 1, v6 + 1 < (unsigned int)dword_4D0E84) && v3 <= v4 )
    {
      while ( sub_40D210(a2, v3, v7, a3) )
      {
        if ( ++v3 > a1[2] )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      if ( a3 == 1 || (v8 = a1[2] + 1, v8 >= dword_4D0E80) || (v9 = a1[1], v9 > a1[3]) )
      {
LABEL_16:
        if ( a3 == 2 || (v10 = a1[1] - 1, v10 >= dword_4D0E84) || (v11 = *a1, *a1 > a1[2]) )
        {
LABEL_21:
          if ( a3 == 3 )
            return 1;
          v12 = *a1 - 1;
          if ( v12 >= dword_4D0E80 )
            return 1;
          v13 = a1[1];
          if ( v13 > a1[3] )
            return 1;
          while ( sub_40D210(a2, v12, v13, a3) )
          {
            if ( ++v13 > a1[3] )
              return 1;
          }
        }
        else
        {
          while ( sub_40D210(a2, v11, v10, a3) )
          {
            if ( (int)++v11 > a1[2] )
              goto LABEL_21;
          }
        }
      }
      else
      {
        while ( sub_40D210(a2, v8, v9, a3) )
        {
          if ( ++v9 > a1[3] )
            goto LABEL_16;
        }
      }
    }
  }
  return 0;
}
