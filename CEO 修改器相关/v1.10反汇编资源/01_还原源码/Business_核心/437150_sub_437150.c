// 函数 0x437150  sub_437150  size=0x12D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_437150(int a1, unsigned int a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // esi
  int v6; // edi
  int v7; // [esp+Ch] [ebp+Ch]

  if ( a2 <= 6 )
  {
    v4 = dword_8EEDB0;
    v5 = dword_8EEDB4;
    v6 = dword_8EEDAC;
    dword_89D224 = a3;
    dword_89D218 = a4;
    sub_47CFC0(&unk_4D0DCC, &unk_4D0DCC);
    dword_89D21C = a1;
    dword_89D220 = a2;
    dword_89D294 = (int)sub_437000;
    dword_89D298 = (int)sub_437100;
    dword_89E3E4 = (int)sub_437120;
    dword_89E3F4 = (int)sub_456360;
    dword_89E3E8 = (int)sub_436F80;
    sub_469880(dword_8EEDEC, cy, dword_8EEDF8, 0);
    sub_469640(0, 0, &dword_8EEDEC, 0, 0, dword_8EEDEC, cy);
    v7 = sub_47DD20(&unk_89D290, 0);
    sub_4688B0(&dword_89D24C);
    if ( v5 )
      sub_47C640(v5);
    else
      sub_47CFC0(v6, v4);
    if ( v7 )
    {
      dword_4B112C = a4;
      dword_4B1128 = a3;
    }
    else
    {
      dword_4B112C = -1;
      dword_4B1128 = -1;
    }
  }
}
