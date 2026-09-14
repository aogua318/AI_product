// 函数 0x4653e0  sub_4653E0  size=0x141  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4653E0(_DWORD *this, int a2)
{
  unsigned int v2; // edi
  char *v5; // eax
  char *v6; // ebx
  int v7; // edi
  void (__cdecl *v8)(char *); // eax
  int v9; // edi
  void (__cdecl *v10)(char *); // eax
  char *v11; // [esp+8h] [ebp-4h]
  unsigned int v12; // [esp+14h] [ebp+8h]

  v2 = (a2 + 3) & 0xFFFFFFFC;
  v12 = v2;
  if ( v2 == *(this + 1) )
    return 1;
  v5 = (char *)sub_465E40(v2 * *((_BYTE *)this + 8), (int)"a_lib\\a_block.cpp", 402);
  v6 = v5;
  v11 = v5;
  if ( v5 )
  {
    if ( !*(this + 7) )
      memset(v5, 0, v2 * *(this + 2));
    if ( *this == 2 )
    {
      v7 = 0;
      if ( (int)*(this + 2) > 0 )
      {
        do
        {
          if ( *(__int16 *)(*(this + 5) + 2 * v7) < 0 )
          {
            v8 = (void (__cdecl *)(char *))*(this + 7);
            if ( v8 )
              v8(v6);
            memcpy(v6, (const void *)(*(this + 6) + v7 * *(this + 1)), *(this + 1));
          }
          v6 += v12;
          ++v7;
        }
        while ( v7 < *(this + 2) );
LABEL_21:
        v6 = v11;
      }
    }
    else
    {
      if ( *this != 4 )
      {
LABEL_23:
        sub_465FE0(*(this + 6), (int)"a_lib\\a_block.cpp", 420);
        *(this + 6) = v6;
        *(this + 1) = v2;
        return 1;
      }
      v9 = 0;
      if ( (int)*(this + 2) > 0 )
      {
        do
        {
          if ( *(int *)(*(this + 5) + 4 * v9) < 0 )
          {
            v10 = (void (__cdecl *)(char *))*(this + 7);
            if ( v10 )
              v10(v6);
            memcpy(v6, (const void *)(*(this + 6) + v9 * *(this + 1)), *(this + 1));
          }
          v6 += v12;
          ++v9;
        }
        while ( v9 < *(this + 2) );
        goto LABEL_21;
      }
    }
    v2 = v12;
    goto LABEL_23;
  }
  return 0;
}
