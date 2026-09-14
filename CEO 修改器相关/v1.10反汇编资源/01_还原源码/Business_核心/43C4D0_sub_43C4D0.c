// 函数 0x43c4d0  sub_43C4D0  size=0x1BE  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_43C4D0(int a1)
{
  int v1; // eax
  int v2; // esi
  char *v3; // ecx
  char *v4; // edx
  char v5; // al
  int v6; // eax
  int v7; // eax
  char Buffer[256]; // [esp+0h] [ebp-104h] BYREF

  if ( a1 )
  {
    if ( !dword_8A10A8 )
    {
      v1 = sub_47C740("face\\factinf_mine.fce");
      sub_481C90(&unk_8A10B0, v1, 1);
      sub_47D1A0(&unk_8A10B0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      dword_8A10A8 = 1;
    }
    v2 = dword_4C43DC + dword_4C43C8 * *(__int16 *)(dword_4B32A0 * dword_4D106C + dword_4D1080 + 2);
    v3 = (char *)(*(_DWORD *)dword_870814 + 72 * *(__int16 *)(v2 + 4));
    v4 = Buffer;
    do
    {
      v5 = *v3;
      *v4++ = *v3++;
    }
    while ( v5 );
    sub_47FF50(Buffer);
    sub_438320(*(_DWORD *)(v2 + 8), Buffer, 6);
    sub_47FF50(Buffer);
    _itoa(*(unsigned __int8 *)(v2 + 6), Buffer, 10);
    sub_47FF50(Buffer);
    v6 = sub_47E590(dword_8A11D8 + 4608);
    sub_47C950(v6);
    *(_WORD *)(dword_8A11D8 + 4622) = *(_WORD *)(v2 + 4) + 16;
    v7 = sub_47E590(dword_8A11D8 + 4608);
    sub_47C950(v7);
  }
  else if ( dword_8A10A8 )
  {
    sub_47CCD0(&unk_8A10B0);
    dword_8A10A8 = 0;
    sub_47E260(&unk_8A10B0);
  }
}
