// 函数 0x46c610  sub_46C610  size=0x118  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_46C610(HWND hWnd)
{
  _DWORD v2[9]; // [esp+4h] [ebp-3Ch] BYREF
  _DWORD v3[4]; // [esp+28h] [ebp-18h] BYREF
  __int16 v4; // [esp+38h] [ebp-8h]

  if ( DirectSoundCreate(0, &ppDS, 0) < 0 )
    return 0;
  if ( ppDS->lpVtbl->SetCooperativeLevel(ppDS, hWnd, 1) < 0 )
    goto LABEL_3;
  memset(&v2[2], 0, 28);
  v4 = 0;
  v2[0] = 36;
  v2[1] = 1;
  v3[0] = 131073;
  v3[1] = 44100;
  v3[3] = 1048580;
  v3[2] = 176400;
  if ( ppDS->lpVtbl->CreateSoundBuffer(ppDS, (LPCDSBUFFERDESC)v2, (LPDIRECTSOUNDBUFFER *)&dword_8DBCE8, 0) )
  {
LABEL_3:
    sub_46C0C0();
    MessageBoxA(hWnd, "Init Direct Sound failed", "error", 0);
    return 0;
  }
  (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)dword_8DBCE8 + 56))(dword_8DBCE8, v3);
  (*(void (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)dword_8DBCE8 + 48))(dword_8DBCE8, 0, 0, 1);
  return 1;
}
