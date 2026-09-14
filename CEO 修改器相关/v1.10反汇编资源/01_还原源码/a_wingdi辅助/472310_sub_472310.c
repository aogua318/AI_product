// 函数 0x472310  sub_472310  size=0xBF  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_472310@<eax>(int result@<eax>)
{
  int v1; // edi
  int v2; // ebx
  unsigned __int16 *v3; // edx
  unsigned __int16 *v4; // edx
  int v5; // [esp+Ch] [ebp-Ch]
  int v6; // [esp+10h] [ebp-8h]
  int v7; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h]

  v1 = 0;
  v2 = 0;
  v3 = (unsigned __int16 *)(result + 172);
  v6 = 60;
  do
  {
    v1 += *(v3 - 2);
    v2 += *v3;
    v3 += 4;
    --v6;
  }
  while ( v6 );
  v8 = 0;
  v7 = 0;
  v4 = (unsigned __int16 *)(result + 656);
  v5 = 64;
  do
  {
    v8 += *(v4 - 2);
    v7 += *v4;
    v4 += 4;
    --v5;
  }
  while ( v5 );
  *(_BYTE *)(result + 28) = v8
                          + v7
                          + *(unsigned __int16 *)(result + 140)
                          + *(unsigned __int16 *)(result + 144)
                          + *(unsigned __int16 *)(result + 148)
                          + *(unsigned __int16 *)(result + 152)
                          + *(unsigned __int16 *)(result + 156)
                          + *(unsigned __int16 *)(result + 160)
                          + (unsigned int)*(unsigned __int16 *)(result + 164) <= (v1
                                                                                + v2
                                                                                + (unsigned int)*(unsigned __int16 *)(result + 648)) >> 2;
  return result;
}
