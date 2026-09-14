// 函数 0x46f3d0  sub_46F3D0  size=0x94  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46F3D0(_DWORD *this, int a2, int a3)
{
  int v5; // esi
  int v6; // eax
  BOOL v7; // [esp+4h] [ebp-4h]

  if ( *(this + 4) >= *(this + 2) + *(this + 3) )
    return 0;
  v5 = 0;
  v7 = 0;
  v6 = sub_46F3A0((int)this);
  if ( v6 == -1 )
    return 0;
  do
  {
    if ( v6 == 10 || v6 == 13 )
    {
      if ( v5 || v7 )
      {
LABEL_8:
        *(_BYTE *)(v5 + a2) = 0;
        return 1;
      }
      v7 = v6 == 13;
    }
    else
    {
      *(_BYTE *)(v5 + a2) = v6;
      if ( ++v5 >= a3 )
        goto LABEL_8;
    }
    v6 = sub_46F3A0((int)this);
  }
  while ( v6 != -1 );
  return 1;
}
