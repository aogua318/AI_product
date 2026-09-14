// 函数 0x465ea0  sub_465EA0  size=0x13A  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_465EA0(int a1)
{
  char *v1; // ecx
  _DWORD *v2; // eax
  int v3; // edx
  char Buffer[256]; // [esp+Ch] [ebp-210h] BYREF
  CHAR Text[256]; // [esp+10Ch] [ebp-110h] BYREF
  int v7; // [esp+218h] [ebp-4h]

  if ( (dword_8DB88C & 1) == 0 )
  {
    dword_8DB88C |= 1u;
    sub_464A40(dword_8DB884);
    atexit(sub_4A1000);
    v7 = -1;
  }
  sub_464A60(dword_8DB884, ".m2.", 0xFFFFFFFF, 0, 0);
  if ( dword_8DB82C > 0 )
  {
    v2 = (_DWORD *)(a1 - 8);
    if ( *(_DWORD *)(a1 - 8) == 43690 )
    {
      v3 = v2[1];
      ++dword_8DB834;
      --dword_8DB82C;
      dword_8DB83C += v3 + 8;
      *v2 = 0;
      free((void *)(a1 - 8));
      sub_464B40(dword_8DB884);
      return 1;
    }
    sprintf(Buffer, "ptr:%x", a1);
    v1 = Buffer;
  }
  else
  {
    sprintf(Text, "ptr:%x", a1);
    v1 = Text;
  }
  MessageBoxA(0, v1, "free unknown memory", 0);
  sub_464B40(dword_8DB884);
  return 0;
}
