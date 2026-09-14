// 函数 0x46c110  sub_46C110  size=0x70  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __thiscall sub_46C110(LPDIRECTSOUNDBUFFER *this, int a2, int a3)
{
  _DWORD v4[9]; // [esp+0h] [ebp-28h] BYREF

  v4[3] = 0;
  memset(&v4[5], 0, 16);
  v4[2] = a2;
  v4[4] = a3;
  v4[0] = 36;
  v4[1] = 98434;
  return ppDS->lpVtbl->CreateSoundBuffer(ppDS, (LPCDSBUFFERDESC)v4, this, 0) == 0;
}
