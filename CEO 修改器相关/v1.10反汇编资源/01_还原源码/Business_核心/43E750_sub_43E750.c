// 函数 0x43e750  sub_43E750  size=0x178  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_43E750()
{
  int v0; // eax
  int v1; // ecx
  char *v2; // eax
  int v3; // edx
  double v5; // [esp+0h] [ebp-10Ch]
  char Buffer[256]; // [esp+8h] [ebp-104h] BYREF

  v0 = sub_47C740("face\\face_license.fce");
  sub_481C90(&unk_8A45B8, v0, 1);
  sub_47FF50(*(_DWORD *)dword_870814 + 72 * dword_4B35D8);
  v5 = sub_41EE50(dword_4B35D8);
  sub_438190((unsigned __int64)v5, Buffer, 12);
  sub_47FF50(Buffer);
  v1 = 0;
  v2 = (char *)&unk_52DBBC + dword_4B35D8;
  v3 = 4;
  do
  {
    if ( *(v2 - 189880) )
      ++v1;
    if ( *v2 )
      ++v1;
    if ( v2[189880] )
      ++v1;
    if ( v2[379760] )
      ++v1;
    if ( v2[569640] )
      ++v1;
    v2 += 949400;
    --v3;
  }
  while ( v3 );
  _itoa(v1, Buffer, 10);
  sub_47FF50(Buffer);
  if ( dbl_4D10C0[23735 * dword_8703A0] - dbl_8A33F8 < v5 )
    sub_4820C0(dword_8A46E0 + 1728);
  sub_47D1A0(&unk_8A45B8, sub_43E6E0, sub_43E710, 0, 0, 0, 0, 0, 0, 0, 0, -1);
  return 1;
}
