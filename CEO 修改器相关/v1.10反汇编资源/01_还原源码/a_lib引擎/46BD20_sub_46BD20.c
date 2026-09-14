// 函数 0x46bd20  sub_46BD20  size=0x11A  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_46BD20@<eax>(const CHAR *a1@<esi>, int a2, int a3, int a4, int a5)
{
  int result; // eax
  WCHAR WideCharStr[1000]; // [esp+0h] [ebp-7D4h] BYREF

  CoCreateInstance(&rclsid, 0, 3u, &riid, &ppv);
  (**(void (__stdcall ***)(LPVOID, void *, int *))ppv)(ppv, &unk_4A6088, &dword_8DBCD8);
  (**(void (__stdcall ***)(LPVOID, void *, int *))ppv)(ppv, &unk_4A6078, &dword_8DBCDC);
  (**(void (__stdcall ***)(LPVOID, void *, int *))ppv)(ppv, &unk_4A6068, &dword_8DBCE0);
  memset(WideCharStr, 0, sizeof(WideCharStr));
  MultiByteToWideChar(0, 0, a1, -1, WideCharStr, 1000);
  result = (*(int (__stdcall **)(LPVOID, WCHAR *, _DWORD))(*(_DWORD *)ppv + 52))(ppv, WideCharStr, 0);
  if ( !result )
  {
    (*(void (__stdcall **)(int, int))(*(_DWORD *)dword_8DBCDC + 116))(dword_8DBCDC, dword_8DBCD0);
    (*(void (__stdcall **)(int, int))(*(_DWORD *)dword_8DBCDC + 36))(dword_8DBCDC, 1140850688);
    (*(void (__stdcall **)(int, int, int, int, int))(*(_DWORD *)dword_8DBCDC + 156))(dword_8DBCDC, a2, a3, a4, a5);
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_8DBCD8 + 28))(dword_8DBCD8);
    return 0;
  }
  return result;
}
