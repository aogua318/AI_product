// 函数 0x46cbb0  sub_46CBB0  size=0x1FB  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46CBB0(_DWORD *this, char *a2)
{
  size_t v3; // eax
  _BYTE v5[4]; // [esp+10h] [ebp-2802Ch] BYREF
  _DWORD v6[9]; // [esp+14h] [ebp-28028h] BYREF
  _BYTE v7[163840]; // [esp+38h] [ebp-28004h] BYREF

  memset(this, 0, 0x2C7CAu);
  *this = 1;
  sub_474E90(this + 40972);
  if ( !sub_46A040((FILE **)this + 8, a2) )
    goto LABEL_6;
  sub_46A2E0((FILE **)this + 8, 0);
  v3 = sub_46A320((FILE **)this + 8, this + 10, 0x28000u);
  if ( sub_475230(this + 40972, this + 10, v3, v7, 81920, v5) )
    goto LABEL_6;
  sub_46C740((int)(this + 45548), (int)(this + 40972));
  *(this + 1) = dword_4B4C10[48 * *(this + 40984) + 16 * *(this + 40987) + *(this + 40989)];
  *(this + 2) = 8 * (sub_46A270((int)(this + 8)) / *(this + 1));
  while ( !sub_475230(this + 40972, 0, 0, v7, 81920, v5) )
    ;
  v6[3] = 0;
  memset(&v6[5], 0, 16);
  v6[4] = this + 45548;
  v6[0] = 36;
  v6[1] = 98434;
  v6[2] = 163840;
  if ( ppDS->lpVtbl->CreateSoundBuffer(ppDS, (LPCDSBUFFERDESC)v6, (LPDIRECTSOUNDBUFFER *)((char *)this + 182210), 0) )
  {
LABEL_6:
    *this = 0;
    if ( this != (_DWORD *)-32 )
      sub_46A1F0(this + 8);
    sub_474EF0(this + 40972);
    MessageBoxA(0, "failed to open MP3", "error", 0);
    return 0;
  }
  else
  {
    sub_474EF0(this + 40972);
    return 1;
  }
}
