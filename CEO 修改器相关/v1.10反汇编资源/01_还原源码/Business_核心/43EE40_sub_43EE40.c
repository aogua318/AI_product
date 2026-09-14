// 函数 0x43ee40  sub_43EE40  size=0xAD  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43EE40(int a1)
{
  int result; // eax
  int v2; // eax
  int (__thiscall *v3)(_DWORD); // [esp+4h] [ebp-24h] BYREF
  int (*v4)(); // [esp+8h] [ebp-20h]
  int v5; // [esp+Ch] [ebp-1Ch]
  int v6; // [esp+10h] [ebp-18h]
  int v7; // [esp+14h] [ebp-14h]
  int v8; // [esp+18h] [ebp-10h]
  int v9; // [esp+1Ch] [ebp-Ch]
  int v10; // [esp+20h] [ebp-8h]
  int v11; // [esp+24h] [ebp-4h]

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( a1 == -1 )
  {
    dword_4B35E0 = -1;
    sub_47CCD0(&unk_8A4740);
    return sub_47E260(&unk_8A4740);
  }
  else
  {
    result = dword_4B35E0;
    if ( dword_4B35E0 != a1 )
    {
      if ( dword_4B35E0 == -1 )
      {
        v2 = sub_47C740("face\\face_machine_introduce.fce");
        sub_481C90(&unk_8A4740, v2, 1);
        v3 = nullsub_2;
        v4 = sub_43EDF0;
        sub_408FC0((int)&unk_8A4740, (int)&v3);
      }
      dword_4B35E0 = a1;
      return sub_43EAC0();
    }
  }
  return result;
}
