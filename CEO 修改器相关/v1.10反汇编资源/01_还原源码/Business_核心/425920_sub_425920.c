// 函数 0x425920  sub_425920  size=0xDD  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_425920(int a1, _BYTE *a2)
{
  char *v2; // eax
  int v3; // esi
  char *v4; // eax
  int v5; // edx
  char v6; // cl
  _BYTE v8[12]; // [esp+10h] [ebp-20h] BYREF
  int v9; // [esp+1Ch] [ebp-14h]
  int v10; // [esp+20h] [ebp-10h]
  int v11; // [esp+2Ch] [ebp-4h]

  sub_464410(v8);
  v11 = 0;
  v10 = 0;
  *a2 = 0;
  v2 = (char *)sub_47C740("data\\maps.csv");
  if ( sub_464420(v2) )
  {
    v3 = 1;
    if ( v9 > 1 )
    {
      while ( !sub_464780(0, v3) || sub_4646D0(0, v3) != a1 )
      {
        if ( ++v3 >= v9 )
          goto LABEL_10;
      }
      v4 = (char *)sub_4646A0(2, v3);
      v5 = a2 - v4;
      do
      {
        v6 = *v4;
        v4[v5] = *v4;
        ++v4;
      }
      while ( v6 );
      v10 = 1;
    }
LABEL_10:
    sub_464650(v8);
  }
  v11 = -1;
  sub_464B50(v8);
  return v10;
}
