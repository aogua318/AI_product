// 函数 0x498c25  __local_unwind2  size=0x84  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _local_unwind2(int a1, unsigned int a2)
{
  int result; // eax
  int v3; // ebx
  unsigned int v4; // esi
  int v5; // esi
  int v6; // ecx
  unsigned int v7; // [esp-4h] [ebp-24h]
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp+0h] [ebp-20h] BYREF
  int (__cdecl *v9)(int, int, int, _DWORD *, int); // [esp+4h] [ebp-1Ch]
  int v10; // [esp+8h] [ebp-18h]
  int v11; // [esp+Ch] [ebp-14h]
  int v12; // [esp+10h] [ebp-10h]

  v11 = a1;
  v10 = -2;
  v9 = _unwind_handler;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v7 = (unsigned int)&ExceptionList ^ dword_4B8254;
  while ( 1 )
  {
    result = a1;
    v3 = *(_DWORD *)(a1 + 8);
    v4 = *(_DWORD *)(a1 + 12);
    if ( v4 == -1 || a2 != -1 && v4 <= a2 )
      break;
    v5 = 3 * v4;
    v10 = *(_DWORD *)(v3 + 4 * v5);
    *(_DWORD *)(a1 + 12) = v10;
    if ( !*(_DWORD *)(v3 + 4 * v5 + 4) )
    {
      _NLG_Notify(257);
      _NLG_Call(v6, v7, ExceptionList, v9, v10, v11, v12);
    }
  }
  return result;
}
