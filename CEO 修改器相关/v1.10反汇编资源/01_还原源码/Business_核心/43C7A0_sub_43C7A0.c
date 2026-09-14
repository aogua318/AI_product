// 函数 0x43c7a0  sub_43C7A0  size=0x194  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_43C7A0()
{
  __int16 *v0; // esi
  int v1; // edi
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  int v7; // [esp+8h] [ebp-10Ch] BYREF
  int v8; // [esp+Ch] [ebp-108h] BYREF
  char Buffer[256]; // [esp+10h] [ebp-104h] BYREF

  v0 = (__int16 *)(dword_8703D0 + dword_4B32B4 * dword_8703BC);
  v1 = dword_4CCAAC + dword_4CCA98 * *v0;
  _itoa(*(__int16 *)(v1 + 2 * *((char *)v0 + 31) + 800), Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(*(__int16 *)(v1 + 746), Buffer, 10);
  sub_47FF50(Buffer);
  v2 = sub_431030(v0);
  _itoa(v2, Buffer, 10);
  sub_47FF50(Buffer);
  v3 = *(__int16 *)(v1 + 238);
  v4 = 0;
  if ( v3 != -1 )
  {
    v5 = *((char *)v0 + 31);
    do
    {
      if ( *(unsigned __int8 *)(v3 * dword_4CC8BC + dword_4CC8D0 + 1257) == v5 )
        ++v4;
      v3 = *(__int16 *)(v3 * dword_4CC8BC + dword_4CC8D0 + 6);
    }
    while ( v3 != -1 );
  }
  _itoa(v4, Buffer, 10);
  sub_47FF50(Buffer);
  sub_43C740(&v7, &v8);
  sprintf(Buffer, "%d/%d", v8, v7);
  return sub_47FF50(Buffer);
}
