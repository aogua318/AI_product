// 函数 0x492952  ?_Type_info_dtor@type_info@@CAXPAV1@@Z  size=0x70  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl type_info::_Type_info_dtor(struct type_info *a1)
{
  int v1; // ecx
  void *v2; // eax
  _DWORD *v3; // edx

  _lock(14);
  v1 = *((_DWORD *)a1 + 1);
  if ( v1 )
  {
    v2 = dword_8F3690;
    v3 = &unk_8F368C;
    while ( dword_8F3690 )
    {
      if ( *(_DWORD *)dword_8F3690 == v1 )
      {
        v3[1] = *((_DWORD *)dword_8F3690 + 1);
        free(v2);
        break;
      }
      v3 = dword_8F3690;
    }
    free(*((void **)a1 + 1));
    *((_DWORD *)a1 + 1) = 0;
  }
  _unlock(14);
}
