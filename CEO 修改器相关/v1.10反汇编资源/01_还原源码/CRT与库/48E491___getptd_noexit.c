// 函数 0x48e491  __getptd_noexit  size=0x79  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

DWORD *_getptd_noexit()
{
  DWORD LastError; // eax
  DWORD v1; // edi
  int (__stdcall *v2)(int); // eax
  DWORD *v3; // esi
  DWORD *v4; // eax
  int (__stdcall *v5)(int, DWORD *); // eax
  DWORD CurrentThreadId; // eax
  int v8; // [esp-8h] [ebp-10h]
  int v9; // [esp-4h] [ebp-Ch]
  DWORD *v10; // [esp-4h] [ebp-Ch]

  LastError = GetLastError();
  v9 = dword_4B85E0;
  v1 = LastError;
  v2 = (int (__stdcall *)(int))__set_flsgetvalue();
  v3 = (DWORD *)v2(v9);
  if ( !v3 )
  {
    v4 = (DWORD *)_calloc_crt(1, 532);
    v3 = v4;
    if ( v4 )
    {
      v10 = v4;
      v8 = dword_4B85E0;
      v5 = (int (__stdcall *)(int, DWORD *))DecodePointer(dword_8F2EC4);
      if ( v5(v8, v10) )
      {
        _initptd((int)v3, 0);
        CurrentThreadId = GetCurrentThreadId();
        v3[1] = -1;
        *v3 = CurrentThreadId;
      }
      else
      {
        free(v3);
        v3 = 0;
      }
    }
  }
  SetLastError(v1);
  return v3;
}
