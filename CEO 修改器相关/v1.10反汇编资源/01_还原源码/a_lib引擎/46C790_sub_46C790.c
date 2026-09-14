// 函数 0x46c790  sub_46C790  size=0xCF  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __usercall sub_46C790@<eax>(int a1@<eax>, int a2@<ecx>, int a3@<ebx>, char *Src)
{
  int i; // eax
  void *v8; // eax
  void *v9; // [esp+8h] [ebp-10h] BYREF
  size_t v10; // [esp+Ch] [ebp-Ch] BYREF
  void *v11; // [esp+10h] [ebp-8h] BYREF
  size_t Size; // [esp+14h] [ebp-4h] BYREF

  for ( i = (*(int (__stdcall **)(_DWORD, int, int, void **, size_t *, void **, size_t *, _DWORD))(**(_DWORD **)(a2 + 182210)
                                                                                                 + 44))(
              *(_DWORD *)(a2 + 182210),
              a3,
              a1,
              &v9,
              &Size,
              &v11,
              &v10,
              0);
        i == -2005401450;
        i = (*(int (__stdcall **)(_DWORD, int, int, void **, size_t *, void **, size_t *, _DWORD))(**(_DWORD **)(a2 + 182210)
                                                                                                 + 44))(
              *(_DWORD *)(a2 + 182210),
              a3,
              a1,
              &v9,
              &Size,
              &v11,
              &v10,
              0) )
  {
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a2 + 182210) + 80))(*(_DWORD *)(a2 + 182210));
  }
  if ( i )
    return 0;
  memcpy(v9, Src, Size);
  v8 = v11;
  if ( v11 )
  {
    memcpy(v11, &Src[Size], v10);
    v8 = v11;
  }
  return (*(int (__stdcall **)(_DWORD, void *, size_t, void *, size_t))(**(_DWORD **)(a2 + 182210) + 76))(
           *(_DWORD *)(a2 + 182210),
           v9,
           Size,
           v8,
           v10) == 0;
}
