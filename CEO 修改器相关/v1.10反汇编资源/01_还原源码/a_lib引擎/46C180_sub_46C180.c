// 函数 0x46c180  sub_46C180  size=0xCA  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __thiscall sub_46C180(_DWORD *this, void *a2, size_t Size, char *Src)
{
  void *v4; // ebx
  size_t v5; // edi
  int i; // eax
  char *v9; // edi
  void *v10; // eax
  void *v11; // [esp+Ch] [ebp-8h] BYREF
  size_t v12; // [esp+10h] [ebp-4h] BYREF

  v4 = a2;
  v5 = Size;
  for ( i = (*(int (__stdcall **)(_DWORD, void *, size_t, void **, size_t *, void **, size_t *, _DWORD))(*(_DWORD *)*this + 44))(
              *this,
              a2,
              Size,
              &v11,
              &Size,
              &a2,
              &v12,
              0);
        i == -2005401450;
        i = (*(int (__stdcall **)(_DWORD, void *, size_t, void **, size_t *, void **, size_t *, _DWORD))(*(_DWORD *)*this + 44))(
              *this,
              v4,
              v5,
              &v11,
              &Size,
              &a2,
              &v12,
              0) )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 80))(*this);
  }
  if ( i )
    return 0;
  v9 = Src;
  memcpy(v11, Src, Size);
  v10 = a2;
  if ( a2 )
  {
    memcpy(a2, &v9[Size], v12);
    v10 = a2;
  }
  return (*(int (__stdcall **)(_DWORD, void *, size_t, void *, size_t))(*(_DWORD *)*this + 76))(
           *this,
           v11,
           Size,
           v10,
           v12) == 0;
}
