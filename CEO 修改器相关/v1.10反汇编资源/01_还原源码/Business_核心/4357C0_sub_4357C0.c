// 函数 0x4357c0  sub_4357C0  size=0x96  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_4357C0(int a1, int a2)
{
  int v2; // eax
  char Buffer[256]; // [esp+0h] [ebp-104h] BYREF

  if ( dword_870A0C )
  {
    if ( dword_4B32C4 )
    {
      sub_46CE50(&unk_870A10);
      if ( a1 != -1 )
      {
        sprintf(Buffer, "music\\mu%d.mp3", a1);
        v2 = sub_47C740(Buffer);
        if ( sub_46CBB0(v2) )
        {
          sub_46CE00(dword_4B32C4);
          sub_46CEA0(&unk_870A10, 0, a2);
        }
      }
    }
  }
}
