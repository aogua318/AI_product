// 函数 0x435890  sub_435890  size=0xF2  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_435890(const char *a1)
{
  char *v1; // eax
  char *v2; // edx
  char v3; // cl
  unsigned int v4; // eax
  char *v5; // edi
  _DWORD v8[3]; // [esp+8h] [ebp-15Ch] BYREF
  _BYTE v9[64]; // [esp+14h] [ebp-150h] BYREF
  char v10; // [esp+5Fh] [ebp-105h] BYREF
  char v11[256]; // [esp+60h] [ebp-104h] BYREF

  v1 = (char *)sub_47C740("stage\\");
  v2 = (char *)(v11 - v1);
  do
  {
    v3 = *v1;
    v1[(_DWORD)v2] = *v1;
    ++v1;
  }
  while ( v3 );
  v4 = strlen(a1) + 1;
  v5 = &v10;
  while ( *++v5 )
    ;
  qmemcpy(v5, a1, v4);
  if ( !sub_4661F0(v11) )
    return 0;
  sub_466380(v8);
  dword_4D0ECC = v8[2];
  dword_4CDEB8 = v8[0];
  qmemcpy(&unk_4D03D4, v9, 0x40u);
  dword_4D0EC8 = v8[1];
  sub_466230(&unk_89D208);
  return 1;
}
