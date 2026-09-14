// 函数 0x485030  sub_485030  size=0xB1  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_485030(int *this, const char *a2, int a3, int a4)
{
  int result; // eax
  char *v6; // eax
  int v8; // eax
  char v9; // [esp+3h] [ebp-105h] BYREF
  char FileName[256]; // [esp+4h] [ebp-104h] BYREF

  sub_483B40(this);
  strcpy(FileName, a2);
  result = sub_467D80(this, FileName, a3, a4);
  if ( result )
  {
    v6 = &v9;
    while ( *++v6 )
      ;
    strcpy(v6, ".mpi");
    v8 = sub_483E60(FileName, this + 73);
    *(this + 74) = v8;
    return v8 != 0;
  }
  return result;
}
