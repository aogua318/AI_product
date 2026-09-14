// 函数 0x490db0  SEH_491430  size=0x18F  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl SEH_491430(PEXCEPTION_RECORD ExceptionRecord, _DWORD *TargetFrame, int a3)
{
  _DWORD *v3; // ebx
  int *v4; // esi
  int v5; // eax
  char *v6; // edi
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // eax
  _DWORD *v11; // eax
  _DWORD v12[2]; // [esp+Ch] [ebp-18h] BYREF
  int *v13; // [esp+14h] [ebp-10h]
  int v14; // [esp+18h] [ebp-Ch]
  _DWORD *v15; // [esp+1Ch] [ebp-8h]
  char v16; // [esp+23h] [ebp-1h]

  v3 = TargetFrame;
  v4 = (int *)(dword_4B8254 ^ TargetFrame[2]);
  v5 = *v4;
  v16 = 0;
  v14 = 1;
  v6 = (char *)(TargetFrame + 4);
  if ( v5 != -2 )
    sub_488637((void *)(*(_DWORD *)&v6[v5] ^ (unsigned int)&v6[v4[1]]));
  sub_488637((void *)(*(_DWORD *)&v6[v4[2]] ^ (unsigned int)&v6[v4[3]]));
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
LABEL_25:
    if ( v3[3] == -2 )
      return v14;
    _EH4_LocalUnwind(v6, &dword_4B8254);
  }
  else
  {
    *(TargetFrame - 1) = v12;
    v3 = (_DWORD *)TargetFrame[3];
    v12[0] = ExceptionRecord;
    v12[1] = a3;
    if ( v3 == (_DWORD *)-2 )
      return v14;
    do
    {
      v7 = v4[3 * (_DWORD)v3 + 5];
      v13 = &v4[3 * (_DWORD)v3 + 4];
      v8 = (_DWORD *)*v13;
      v15 = (_DWORD *)*v13;
      if ( v7 )
      {
        v9 = _EH4_CallFilterFunc(v7, v6);
        v16 = 1;
        if ( v9 < 0 )
        {
          v14 = 0;
          goto LABEL_11;
        }
        if ( v9 > 0 )
        {
          if ( ExceptionRecord->ExceptionCode == -529697949
            && __DestructExceptionObject
            && _IsNonwritableInCurrentImage(&off_4A6374) )
          {
            __DestructExceptionObject(ExceptionRecord);
          }
          _EH4_GlobalUnwind2(TargetFrame, ExceptionRecord);
          v11 = TargetFrame;
          if ( (_DWORD *)TargetFrame[3] != v3 )
          {
            _EH4_LocalUnwind(v6, &dword_4B8254);
            v11 = TargetFrame;
          }
          v11[3] = v15;
          if ( *v4 != -2 )
            sub_488637((void *)(*(_DWORD *)&v6[*v4] ^ (unsigned int)&v6[v4[1]]));
          sub_488637((void *)(*(_DWORD *)&v6[v4[2]] ^ (unsigned int)&v6[v4[3]]));
          _EH4_TransferToHandler(v13[2], v6);
          goto LABEL_25;
        }
        v8 = v15;
      }
      v3 = v8;
    }
    while ( v8 != (_DWORD *)-2 );
    if ( !v16 )
      return v14;
  }
LABEL_11:
  if ( *v4 != -2 )
    sub_488637((void *)(*(_DWORD *)&v6[*v4] ^ (unsigned int)&v6[v4[1]]));
  sub_488637((void *)(*(_DWORD *)&v6[v4[2]] ^ (unsigned int)&v6[v4[3]]));
  return v14;
}
