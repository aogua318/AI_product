// 函数 0x455ff0  sub_455FF0  size=0x1E0  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_455FF0(int a1, int a2)
{
  int v2; // edx
  int v3; // ecx
  int v4; // esi
  int v5; // esi
  int v6; // edx
  int v7; // ecx
  _BYTE v9[8]; // [esp+8h] [ebp-228h] BYREF
  _WORD v10[8]; // [esp+10h] [ebp-220h] BYREF
  char v11[256]; // [esp+20h] [ebp-210h] BYREF
  char Buffer[256]; // [esp+120h] [ebp-110h] BYREF
  int v13; // [esp+22Ch] [ebp-4h]

  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v9);
  v13 = 0;
  switch ( a2 )
  {
    case 0:
      sub_47C930(v3, v2);
      goto LABEL_16;
    case 1:
LABEL_12:
      sub_435570(1, 0);
      v5 = *(_DWORD *)(dword_8C3330 + 4084);
      if ( v5 >= 0 && sub_4564F0() )
      {
        sprintf(Buffer, "%d.sav", v5);
        sub_46D6F0(v10);
        sprintf(v11, "%d.%d.%d %d:%d", v10[0], v10[1], v10[3], v10[4], v10[5]);
        sub_41D070(Buffer, (int)v11);
        sub_47C930(v7, v6);
      }
      goto LABEL_17;
    case 14:
      sub_435570(1, 0);
      v4 = *(_DWORD *)(dword_8C3330 + 4084);
      if ( v4 >= 0 )
      {
        sub_4810E0(1);
        if ( dword_4B3830 != v4 )
        {
          dword_4B3830 = v4;
          dword_8C2044 = GetTickCount();
          goto LABEL_17;
        }
        if ( (int)(GetTickCount() - dword_8C2044) > 500 )
        {
          dword_8C2044 = GetTickCount();
          goto LABEL_17;
        }
        dword_8C2044 = GetTickCount();
      }
      goto LABEL_12;
  }
  if ( (unsigned int)(a2 - 2) <= 9 )
  {
    sub_4810E0(1);
    sub_4801E0(a2 - 2);
LABEL_16:
    sub_435570(1, 0);
  }
LABEL_17:
  v13 = -1;
  return nullsub_2(v9);
}
