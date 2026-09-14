// 函数 0x45fd80  sub_45FD80  size=0x18C  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_45FD80()
{
  int v0; // esi
  int v1; // eax
  int v2; // eax
  char Buffer[256]; // [esp+0h] [ebp-104h] BYREF

  if ( dword_4B38B8 != -1 )
  {
    dword_8D5F68 = 0;
    sub_464ED0(sub_45FD30);
    _itoa(dword_8D5F68, Buffer, 10);
    sub_47FF50(Buffer);
    v0 = dword_870840 + dword_4B38B8 * dword_87082C;
    _itoa(*(_DWORD *)(v0 + 12), Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(*(_DWORD *)(v0 + 16), Buffer, 10);
    sub_47FF50(Buffer);
    v1 = sub_4334D0(v0);
    _itoa(v1, Buffer, 10);
    sub_47FF50(Buffer);
    if ( sub_4334C0((_DWORD *)v0) && *(char *)(dword_4CCA98 * *(__int16 *)(v0 + 4) + dword_4CCAAC + 224) == dword_8703A0 )
    {
      if ( !sub_47E410(dword_8D61A8) )
        return;
      sub_482FE0(dword_8D61A8);
    }
    else
    {
      if ( sub_47E410(dword_8D61A8) )
        return;
      sub_482060(dword_8D61A8);
    }
    v2 = sub_481F90(dword_8D61A8);
    sub_47C950(v2);
  }
}
