// 函数 0x48fc10  __call_reportfault  size=0x129  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

LONG __usercall _call_reportfault@<eax>(int a1@<edi>, int a2@<esi>, int a3, int a4, int a5)
{
  int v5; // ecx
  int v6; // edx
  unsigned int v7; // kr00_4
  BOOL v8; // edi
  LONG result; // eax
  struct _EXCEPTION_POINTERS ExceptionInfo; // [esp+8h] [ebp-328h] BYREF
  _DWORD v11[20]; // [esp+10h] [ebp-320h] BYREF
  _DWORD v12[35]; // [esp+60h] [ebp-2D0h] BYREF
  __int16 v13; // [esp+ECh] [ebp-244h]
  __int16 v14; // [esp+F0h] [ebp-240h]
  __int16 v15; // [esp+F4h] [ebp-23Ch]
  __int16 v16; // [esp+F8h] [ebp-238h]
  int v17; // [esp+FCh] [ebp-234h]
  int v18; // [esp+100h] [ebp-230h]
  int v19; // [esp+104h] [ebp-22Ch]
  int v20; // [esp+108h] [ebp-228h]
  int v21; // [esp+10Ch] [ebp-224h]
  _DWORD *v22; // [esp+110h] [ebp-220h]
  int v23; // [esp+114h] [ebp-21Ch]
  void *v24; // [esp+118h] [ebp-218h]
  __int16 v25; // [esp+11Ch] [ebp-214h]
  unsigned int v26; // [esp+120h] [ebp-210h]
  void **v27; // [esp+124h] [ebp-20Ch]
  __int16 v28; // [esp+128h] [ebp-208h]
  int savedregs; // [esp+330h] [ebp+0h]
  void *retaddr; // [esp+334h] [ebp+4h] BYREF

  if ( a3 != -1 )
    sub_49835C(a3);
  memset(&v11[1], 0, 0x4Cu);
  ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v11;
  ExceptionInfo.ContextRecord = (PCONTEXT)v12;
  v22 = v12;
  v21 = v5;
  v20 = v6;
  v19 = a3;
  v18 = a2;
  v17 = a1;
  v28 = __SS__;
  v25 = __CS__;
  v16 = __DS__;
  v15 = __ES__;
  v14 = __FS__;
  v13 = __GS__;
  v7 = __readeflags();
  v26 = v7;
  v27 = &retaddr;
  v12[0] = 65537;
  v24 = retaddr;
  v23 = savedregs;
  v11[0] = a4;
  v11[1] = a5;
  v11[3] = retaddr;
  v8 = IsDebuggerPresent();
  SetUnhandledExceptionFilter(0);
  result = UnhandledExceptionFilter(&ExceptionInfo);
  if ( !result && !v8 && a3 != -1 )
    return sub_49835C(a3);
  return result;
}
