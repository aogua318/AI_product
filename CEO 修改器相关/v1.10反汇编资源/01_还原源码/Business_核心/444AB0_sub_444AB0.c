// 函数 0x444ab0  sub_444AB0  size=0x2A7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_444AB0()
{
  int v0; // esi
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  char Buffer[256]; // [esp+0h] [ebp-104h] BYREF

  if ( dword_8A8C18 )
  {
    v0 = dword_4CCAAC + dword_4B1028 * dword_4CCA98;
    _itoa(*(_DWORD *)(v0 + 452), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*(_DWORD *)(v0 + 456), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*(_DWORD *)(v0 + 460), Buffer, 10);
    sub_47FF50(Buffer);
    v1 = sub_41BB10((_DWORD *)v0);
    _itoa(v1, Buffer, 10);
    sub_47FF50(Buffer);
    v2 = sub_41BB30((_DWORD *)v0);
    _itoa(v2, Buffer, 10);
    sub_47FF50(Buffer);
    v3 = sub_41BB50((_DWORD *)v0);
    _itoa(v3, Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*(__int16 *)(v0 + 464), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*(__int16 *)(v0 + 466), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*(__int16 *)(v0 + 464) - *(__int16 *)(v0 + 468), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*(__int16 *)(v0 + 466) - *(__int16 *)(v0 + 470), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*(__int16 *)(v0 + 482), Buffer, 10);
    sub_47FF50(Buffer);
    v4 = sub_419C70((__int16 *)v0);
    _itoa(*(__int16 *)(v0 + 482) - v4, Buffer, 10);
    sub_47FF50(Buffer);
  }
}
