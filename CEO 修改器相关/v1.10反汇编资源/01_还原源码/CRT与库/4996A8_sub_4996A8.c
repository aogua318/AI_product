// 函数 0x4996a8  sub_4996A8  size=0x16C  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4996A8(int a1, int a2, int a3)
{
  HMODULE LibraryW; // eax
  HMODULE v4; // ebx
  int (__stdcall *MessageBoxW)(HWND, LPCWSTR, LPCWSTR, UINT); // eax
  HWND (__stdcall *GetActiveWindow)(); // eax
  HWND (__stdcall *GetLastActivePopup)(HWND); // eax
  BOOL (__stdcall *GetUserObjectInformationW)(HANDLE, int, PVOID, DWORD, LPDWORD); // eax
  HWINSTA (__stdcall *GetProcessWindowStation)(); // eax
  int (*v10)(void); // edi
  PVOID v11; // eax
  int (__stdcall *v12)(int, int, _BYTE *, int, _BYTE *); // ebx
  int v13; // eax
  int (*v14)(void); // eax
  int (__stdcall *v15)(int); // eax
  int (__stdcall *v16)(int, int, int, int); // eax
  _BYTE v18[4]; // [esp+Ch] [ebp-24h] BYREF
  int v19; // [esp+10h] [ebp-20h]
  int v20; // [esp+14h] [ebp-1Ch]
  PVOID v21; // [esp+18h] [ebp-18h]
  int v22; // [esp+1Ch] [ebp-14h]
  _BYTE v23[12]; // [esp+20h] [ebp-10h] BYREF

  v19 = a1;
  v20 = a2;
  v22 = 0;
  v21 = _encoded_null();
  if ( !dword_8F3874 )
  {
    LibraryW = LoadLibraryW(L"USER32.DLL");
    v4 = LibraryW;
    if ( !LibraryW )
      return 0;
    MessageBoxW = (int (__stdcall *)(HWND, LPCWSTR, LPCWSTR, UINT))GetProcAddress(LibraryW, "MessageBoxW");
    if ( !MessageBoxW )
      return 0;
    dword_8F3874 = EncodePointer(MessageBoxW);
    GetActiveWindow = (HWND (__stdcall *)())GetProcAddress(v4, "GetActiveWindow");
    dword_8F3878 = EncodePointer(GetActiveWindow);
    GetLastActivePopup = (HWND (__stdcall *)(HWND))GetProcAddress(v4, "GetLastActivePopup");
    dword_8F387C = EncodePointer(GetLastActivePopup);
    GetUserObjectInformationW = (BOOL (__stdcall *)(HANDLE, int, PVOID, DWORD, LPDWORD))GetProcAddress(
                                                                                          v4,
                                                                                          "GetUserObjectInformationW");
    dword_8F3884 = EncodePointer(GetUserObjectInformationW);
    if ( dword_8F3884 )
    {
      GetProcessWindowStation = (HWINSTA (__stdcall *)())GetProcAddress(v4, "GetProcessWindowStation");
      dword_8F3880 = EncodePointer(GetProcessWindowStation);
    }
  }
  if ( dword_8F3880 == v21
    || dword_8F3884 == v21
    || (v10 = (int (*)(void))DecodePointer(dword_8F3880),
        v11 = DecodePointer(dword_8F3884),
        v12 = (int (__stdcall *)(int, int, _BYTE *, int, _BYTE *))v11,
        !v10)
    || !v11
    || (v13 = v10()) != 0 && v12(v13, 1, v23, 12, v18) && (v23[8] & 1) != 0 )
  {
    if ( dword_8F3878 != v21 )
    {
      v14 = (int (*)(void))DecodePointer(dword_8F3878);
      if ( v14 )
      {
        v22 = v14();
        if ( v22 )
        {
          if ( dword_8F387C != v21 )
          {
            v15 = (int (__stdcall *)(int))DecodePointer(dword_8F387C);
            if ( v15 )
              v22 = v15(v22);
          }
        }
      }
    }
  }
  else
  {
    a3 |= 0x200000u;
  }
  v16 = (int (__stdcall *)(int, int, int, int))DecodePointer(dword_8F3874);
  if ( v16 )
    return v16(v22, v19, v20, a3);
  return 0;
}
