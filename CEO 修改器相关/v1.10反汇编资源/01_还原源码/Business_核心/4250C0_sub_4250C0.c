// 函数 0x4250c0  sub_4250C0  size=0xA0  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4250C0()
{
  int v0; // edi
  char *v1; // eax
  int i; // esi
  _BYTE v4[12]; // [esp+Ch] [ebp-1Ch] BYREF
  int v5; // [esp+18h] [ebp-10h]
  int v6; // [esp+24h] [ebp-4h]

  sub_464410(v4);
  v6 = 0;
  v0 = 0;
  v1 = (char *)sub_47C740("data\\maps.csv");
  if ( sub_464420(v1) )
  {
    for ( i = 1; i < v5; ++v0 )
    {
      if ( !sub_464780(0, i) )
        break;
      ++i;
    }
    sub_464650(v4);
  }
  v6 = -1;
  sub_464B50(v4);
  return v0;
}
