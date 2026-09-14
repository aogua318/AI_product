// 函数 0x41e9d0  sub_41E9D0  size=0xCF  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __fastcall sub_41E9D0(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  bool v5; // zf
  int result; // eax
  int v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h]

  v1 = a1;
  v7 = 0;
  while ( 1 )
  {
    if ( (int)++*(_DWORD *)(v1 + 428) >= 20 )
    {
      *(_DWORD *)(v1 + 428) = 0;
      v8 = 10;
      do
      {
        v2 = sub_4640D0(a1) % 20;
        v3 = *(_DWORD *)(v1 + 4 * v2 + 432);
        v4 = sub_4640D0(20);
        a1 = 20;
        v5 = v8-- == 1;
        *(_DWORD *)(v1 + 4 * v2 + 432) = *(_DWORD *)(v1 + 4 * (v4 % 20) + 432);
        *(_DWORD *)(v1 + 4 * (v4 % 20) + 432) = v3;
      }
      while ( !v5 );
    }
    result = *(_DWORD *)(v1 + 4 * *(_DWORD *)(v1 + 428) + 432);
    a1 = v7 + 1;
    v7 = a1;
    if ( a1 >= 20 )
      break;
    if ( result != dword_8703A0 )
    {
      LOBYTE(a1) = byte_4D10B9[189880 * result];
      if ( (a1 & 1) != 0 && (a1 & 2) != 0 )
        return result;
    }
  }
  return -1;
}
