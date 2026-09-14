// 函数 0x41d670  sub_41D670  size=0x13F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_41D670(int a1, char *a2)
{
  const char *v2; // eax
  const char *v3; // eax
  int v4; // esi
  int v6; // [esp-8h] [ebp-2DC0h]
  _BYTE v7[16]; // [esp+8h] [ebp-2DB0h] BYREF
  _BYTE v8[9724]; // [esp+18h] [ebp-2DA0h] BYREF
  int v9; // [esp+2614h] [ebp-7A4h]
  char Buffer[256]; // [esp+2CA8h] [ebp-110h] BYREF
  int v11; // [esp+2DB4h] [ebp-4h]

  sub_466190(v7);
  v11 = 0;
  if ( dword_4CDEBC == 1 )
  {
    v2 = (const char *)sub_47C740("save");
    sprintf(Buffer, "%s\\%d.sav", v2, a1);
  }
  else
  {
    v6 = dword_4CDEC0;
    v3 = (const char *)sub_47C740("save");
    sprintf(Buffer, "%s\\slot%d\\%d.sav", v3, v6, a1);
  }
  if ( sub_4661F0(Buffer) )
  {
    sub_466380(a2);
    sub_466380(v8);
    sub_466230(v7);
    v4 = v9;
    v11 = -1;
    sub_4665D0();
    return v4;
  }
  else
  {
    strcpy(a2, "Empty");
    v11 = -1;
    sub_4665D0();
    return -1;
  }
}
