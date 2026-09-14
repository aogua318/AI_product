// 函数 0x46c0c0  sub_46C0C0  size=0x44  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

LPDIRECTSOUND sub_46C0C0()
{
  LPDIRECTSOUND result; // eax

  if ( dword_8DBCE8 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_8DBCE8 + 72))(dword_8DBCE8);
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_8DBCE8 + 8))(dword_8DBCE8);
    dword_8DBCE8 = 0;
  }
  result = ppDS;
  if ( ppDS )
  {
    result = (LPDIRECTSOUND)ppDS->lpVtbl->Release(ppDS);
    ppDS = 0;
  }
  return result;
}
