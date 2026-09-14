// 函数 0x471650  sub_471650  size=0xD8  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_471650@<eax>(int a1@<eax>, int a2@<ecx>, _WORD *a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // esi
  int result; // eax
  int v9; // ebx
  int v10; // [esp+Ch] [ebp-10h]
  int v11; // [esp+10h] [ebp-Ch]
  int v12; // [esp+14h] [ebp-8h]
  unsigned __int16 *v13; // [esp+18h] [ebp-4h]

  v5 = 0;
  v12 = -1;
  v10 = *(unsigned __int16 *)(a2 + 2);
  v6 = 7;
  v7 = 4;
  if ( !v10 )
  {
    v6 = 138;
    v7 = 3;
  }
  result = 0xFFFF;
  *(_WORD *)(a2 + 4 * a1 + 6) = -1;
  if ( a1 >= 0 )
  {
    v13 = (unsigned __int16 *)(a2 + 6);
    v11 = a1 + 1;
    v9 = v10;
    do
    {
      result = v9;
      v9 = *v13;
      if ( ++v5 >= v6 || result != v9 )
      {
        if ( v5 >= v7 )
        {
          if ( result )
          {
            if ( result != v12 )
              ++a3[2 * result + 1338];
            ++a3[1370];
          }
          else if ( v5 > 10 )
          {
            ++a3[1374];
          }
          else
          {
            ++a3[1372];
          }
        }
        else
        {
          a3[2 * result + 1338] += v5;
        }
        v5 = 0;
        v12 = result;
        if ( v9 )
        {
          if ( result == v9 )
          {
            v6 = 6;
            v7 = 3;
          }
          else
          {
            v6 = 7;
            v7 = 4;
          }
        }
        else
        {
          v6 = 138;
          v7 = 3;
        }
      }
      v13 += 2;
      --v11;
    }
    while ( v11 );
  }
  return result;
}
