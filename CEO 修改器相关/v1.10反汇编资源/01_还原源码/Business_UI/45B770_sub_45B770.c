// 函数 0x45b770  sub_45B770  size=0x113  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_45B770()
{
  int i; // esi
  int v1; // edi
  int v2; // ecx
  int v3; // ebx
  int *v4; // edi
  int v5; // edx
  int v7; // [esp+Ch] [ebp-108h]
  char Buffer[256]; // [esp+10h] [ebp-104h] BYREF

  v7 = 0;
  for ( i = 11232; i < 14112; i += 288 )
  {
    v1 = *(_DWORD *)dword_8CC738 + v7;
    sub_47FF50(*(_DWORD *)dword_8CC738 + v7);
    v2 = 0;
    v3 = 0;
    if ( dword_4D0C64 > 0 )
    {
      v4 = (int *)(v1 + 84);
      v5 = dword_4D0C64;
      do
      {
        if ( *v4 > 0 )
        {
          v2 += *v4;
          ++v3;
        }
        ++v4;
        --v5;
      }
      while ( v5 );
    }
    _itoa(v2, Buffer, 10);
    sub_47FF50(Buffer);
    sprintf(Buffer, "%d/%d", v3, dword_4D0C64);
    sub_47FF50(Buffer);
    v7 += 1048;
  }
  return sub_4810E0(1);
}
