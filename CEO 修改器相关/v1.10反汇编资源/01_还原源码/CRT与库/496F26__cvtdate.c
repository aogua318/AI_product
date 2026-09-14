// 函数 0x496f26  _cvtdate  size=0x1F6  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall cvtdate@<eax>(
        int a1@<eax>,
        int a2@<ecx>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // edi
  int v13; // eax
  int v14; // esi
  int v15; // esi
  int v16; // edx
  int result; // eax
  int v18; // esi
  int v19; // esi
  int v20; // ecx
  int v21; // [esp+14h] [ebp-4h] BYREF
  int v22; // [esp+24h] [ebp+Ch]

  v21 = 0;
  v11 = a5;
  if ( a4 == 1 )
  {
    if ( (a5 % 4 || !(a5 % 100)) && (a5 + 1900) % 400 )
    {
      v13 = 4 * a1;
      v14 = dword_4B95E0[a1];
    }
    else
    {
      v13 = 4 * a1;
      v14 = dword_4B95AC[a1];
    }
    v22 = v13;
    v15 = v14 + 1;
    v11 = a5;
    v16 = (365 * a5 + (a5 + 299) / 400 - (a5 - 1) / 100 + v15 + (a5 - 1) / 4 - 25563) % 7;
    result = a7 + 7 * a6 - v16;
    if ( v16 > a7 )
      v18 = result + v15;
    else
      v18 = v15 + result - 7;
    if ( a6 == 5 )
    {
      result = (a5 % 4 || !(a5 % 100)) && (a5 + 1900) % 400
             ? *(int *)((char *)&dword_4B95E4 + v22)
             : *(int *)((char *)&dword_4B95B0 + v22);
      if ( v18 > result )
        v18 -= 7;
    }
  }
  else
  {
    if ( (a5 % 4 || (result = a5 / 100, !(a5 % 100))) && (result = (a5 + 1900) / 400, (a5 + 1900) % 400) )
      v19 = dword_4B95E0[a1];
    else
      v19 = dword_4B95AC[a1];
    v18 = a8 + v19;
  }
  v20 = a11 + 1000 * (a10 + 60 * (a9 + 60 * a2));
  if ( a3 == 1 )
  {
    dword_4B9164 = v18;
    dword_4B9168 = v20;
    dword_4B9160 = v11;
  }
  else
  {
    dword_4B9170 = v18;
    dword_4B9174 = v20;
    if ( sub_4975EA(&v21) )
      _invoke_watson(0, 0, 0, 0, 0);
    result = 1000 * v21;
    dword_4B9174 += 1000 * v21;
    if ( dword_4B9174 >= 0 )
    {
      result = 86400000;
      if ( dword_4B9174 >= 86400000 )
      {
        dword_4B9174 -= 86400000;
        ++dword_4B9170;
      }
    }
    else
    {
      dword_4B9174 += 86400000;
      --dword_4B9170;
    }
    dword_4B916C = v11;
  }
  return result;
}
