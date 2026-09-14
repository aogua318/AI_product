// 函数 0x425160  sub_425160  size=0xD0  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_425160(int a1, int a2)
{
  char *v2; // eax
  int i; // edi
  int v4; // esi
  char *v5; // eax
  int v6; // edx
  char v7; // cl
  _BYTE v9[12]; // [esp+10h] [ebp-20h] BYREF
  int v10; // [esp+1Ch] [ebp-14h]
  int v11; // [esp+20h] [ebp-10h]
  int v12; // [esp+2Ch] [ebp-4h]

  sub_464410(v9);
  v12 = 0;
  v11 = 0;
  v2 = (char *)sub_47C740("data\\maps.csv");
  if ( sub_464420(v2) )
  {
    for ( i = 1; i < v10; ++i )
    {
      if ( !sub_464780(0, i) )
        break;
      v4 = sub_4646D0(0, i);
      v5 = (char *)sub_4646A0(2, i);
      v6 = a2 * v4 - (_DWORD)v5 + a1;
      do
      {
        v7 = *v5;
        v5[v6] = *v5;
        ++v5;
      }
      while ( v7 );
      ++v11;
    }
    sub_464650(v9);
  }
  v12 = -1;
  sub_464B50(v9);
  return v11;
}
