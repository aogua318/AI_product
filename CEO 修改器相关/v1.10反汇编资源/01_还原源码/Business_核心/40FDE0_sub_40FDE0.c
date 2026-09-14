// 函数 0x40fde0  sub_40FDE0  size=0x118  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_40FDE0(int *this)
{
  bool v2; // zf
  char *v3; // eax
  char v4; // al
  int v5; // ecx
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  char v9; // al
  _BYTE v11[8]; // [esp+10h] [ebp-1Ch] BYREF
  int v12; // [esp+18h] [ebp-14h]
  int v13; // [esp+1Ch] [ebp-10h]
  int v14; // [esp+28h] [ebp-4h]

  sub_464410(v11);
  v2 = *this == 0;
  v14 = 0;
  if ( !v2 )
    sub_40F370(this);
  v3 = (char *)sub_47C740("data\\build_relation.csv");
  if ( sub_464420(v3) )
  {
    v4 = v13 - 1;
    v5 = v12 - 1;
    *(this + 2) = v13 - 1;
    *(this + 1) = v5;
    v6 = 1;
    *this = sub_465E40(v5 * v4, (int)"building.cpp", 2350);
    if ( v13 > 1 )
    {
      v7 = v12;
      do
      {
        v8 = 1;
        if ( v7 > 1 )
        {
          do
          {
            v9 = sub_4646D0(v8++, v6);
            *(_BYTE *)(*this + (v6 - 1) * *(this + 1) + v8 - 2) = v9;
            v7 = v12;
          }
          while ( v8 < v12 );
        }
        ++v6;
      }
      while ( v6 < v13 );
    }
    sub_464650(v11);
    v14 = -1;
    sub_464B50(v11);
    return 1;
  }
  else
  {
    v14 = -1;
    sub_464B50(v11);
    return 0;
  }
}
