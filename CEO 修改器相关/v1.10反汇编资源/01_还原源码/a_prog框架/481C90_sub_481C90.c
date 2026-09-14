// 函数 0x481c90  sub_481C90  size=0x19D  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_481C90(__int16 *this, char *a2, int a3)
{
  int v4; // edi
  __int16 v5; // ax
  _DWORD *v6; // eax
  bool v7; // zf
  int v8; // eax
  int v9; // ecx
  int i; // ebx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  _DWORD v15[4]; // [esp+10h] [ebp-1Ch] BYREF
  int v16; // [esp+28h] [ebp-4h]

  sub_466190((Concurrency::details::_ReaderWriterLock *)v15);
  v4 = 0;
  v16 = 0;
  sub_47E260(this);
  if ( sub_4661F0(v15, a2) )
  {
    sub_466380(v15, (int)this);
    v5 = *(this + 146);
    if ( v5 )
    {
      v6 = sub_465E40(288 * v5, "a_prog\\a_interface.cpp", 95);
      *((_DWORD *)this + 74) = v6;
      sub_466380(v15, (int)v6);
    }
    v7 = *((_BYTE *)this + 20) == 0;
    *((_DWORD *)this + 4) = 0;
    if ( !v7 )
    {
      *(_DWORD *)this = 0;
      *((_DWORD *)this + 1) = 0;
      *((_DWORD *)this + 2) = 0;
      *((_DWORD *)this + 3) = 0;
      if ( a3 )
        sub_47E310((int)this, (const char *)this + 20);
    }
    v8 = 0;
    if ( *(this + 146) > 0 )
    {
      v9 = 0;
      do
      {
        *(_DWORD *)(v9 + *((_DWORD *)this + 74)) = this;
        ++v8;
        v9 += 288;
      }
      while ( v8 < *(this + 146) );
    }
    for ( i = 0; i < *(this + 146); v4 += 288 )
    {
      v11 = *((_DWORD *)this + 74);
      v12 = *(__int16 *)(v11 + v4 + 4);
      v13 = v4 + v11;
      if ( v12 == 3 )
      {
        *(_DWORD *)(v13 + 268) = 0;
      }
      else if ( v12 == 6 )
      {
        if ( a3 )
          sub_481AC0(v13, (int)a0123456789, 2, 10, 0);
      }
      ++i;
    }
    sub_466230(v15);
    v16 = -1;
    sub_4665D0(v15);
    return 1;
  }
  else
  {
    v16 = -1;
    sub_4665D0(v15);
    return 0;
  }
}
