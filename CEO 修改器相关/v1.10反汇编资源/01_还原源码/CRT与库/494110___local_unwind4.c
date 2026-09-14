// 函数 0x494110  __local_unwind4  size=0xD6  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _local_unwind4(_DWORD *a1, int a2, unsigned int a3)
{
  int result; // eax
  unsigned int v4; // esi
  int v5; // esi
  int v6; // ebx
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-8h] [ebp-28h] BYREF
  void *v8; // [esp-4h] [ebp-24h]
  unsigned int v9; // [esp+0h] [ebp-20h]
  unsigned int v10; // [esp+4h] [ebp-1Ch]
  int v11; // [esp+8h] [ebp-18h]
  _DWORD *v12; // [esp+Ch] [ebp-14h]

  v12 = a1;
  v11 = a2;
  v10 = a3;
  v8 = &_unwind_handler4;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v9 = (unsigned int)&ExceptionList ^ dword_4B8254;
  while ( 1 )
  {
    result = a2;
    v4 = *(_DWORD *)(a2 + 12);
    if ( v4 == -2 || a3 != -2 && v4 <= a3 )
      break;
    v5 = 3 * v4;
    v6 = (*a1 ^ *(_DWORD *)(a2 + 8)) + 4 * v5 + 16;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)((*a1 ^ *(_DWORD *)(a2 + 8)) + 4 * v5 + 0x10);
    if ( !*(_DWORD *)(v6 + 4) )
    {
      _NLG_Notify(257);
      _NLG_Call(1, ExceptionList, v8, v9, v10, v11, v12);
    }
  }
  return result;
}
