// 函数 0x45ea50  sub_45EA50  size=0x146  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_45EA50()
{
  int v0; // esi
  int v1; // eax
  char Buffer[256]; // [esp+0h] [ebp-104h] BYREF

  if ( dword_8D3600 )
  {
    v0 = 23735 * sub_45E9A0();
    sub_47FF50(&byte_4D10C8[v0 * 8]);
    sub_438190((unsigned __int64)dbl_4D30C0[v0], Buffer, 8);
    sub_47FF50(Buffer);
    sub_438190((unsigned __int64)(dbl_4D30C0[v0] - dbl_4D30C8[v0]), Buffer, 8);
    sub_47FF50(Buffer);
    sub_45EA30();
    _itoa(dword_8D35FC, Buffer, 10);
    sub_47FF50(Buffer);
    _itoa(dword_8D35F8, Buffer, 10);
    sub_47FF50(Buffer);
    v1 = sub_464D00(642, 213, 784, 277);
    sub_47C950(v1);
  }
}
