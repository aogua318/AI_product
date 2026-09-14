// 函数 0x427670  sub_427670  size=0x8F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_427670(char *this)
{
  int v1; // ebx
  int v2; // edi
  int v3; // edx
  __int16 *v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // edx
  __int16 *i; // ecx
  int v9; // eax

  v1 = dword_4D10A8;
  v2 = *(this + 22);
  v3 = 0;
  if ( v2 <= 0 )
  {
LABEL_6:
    v6 = *(this + 23);
    v7 = 0;
    if ( v6 <= 0 )
      return 1;
    for ( i = (__int16 *)(this + 64); ; ++i )
    {
      v9 = dword_4D1094 * *i;
      if ( *(_BYTE *)(v9 + v1 + 12) || *(_BYTE *)(v9 + v1 + 13) )
        break;
      if ( ++v7 >= v6 )
        return 1;
    }
  }
  else
  {
    v4 = (__int16 *)(this + 24);
    while ( 1 )
    {
      v5 = dword_4D1094 * *v4;
      v1 = dword_4D10A8;
      if ( *(_BYTE *)(v5 + dword_4D10A8 + 12) || *(_BYTE *)(v5 + dword_4D10A8 + 13) )
        break;
      ++v3;
      ++v4;
      if ( v3 >= v2 )
        goto LABEL_6;
    }
  }
  return 0;
}
