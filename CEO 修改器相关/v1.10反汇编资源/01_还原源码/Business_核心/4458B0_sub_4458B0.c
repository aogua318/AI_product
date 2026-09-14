// 函数 0x4458b0  sub_4458B0  size=0x34B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_4458B0(int a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // eax
  int v4; // eax
  char *v5; // ecx
  char *v6; // edx
  char v7; // al
  int v8; // esi
  int v9; // ecx
  int v10; // edi
  int i; // esi
  int v12; // eax
  int v13; // [esp-Ch] [ebp-134h]
  char Buffer[256]; // [esp+24h] [ebp-104h] BYREF

  if ( a1 )
  {
    if ( !dword_8A8D5C && dword_4B1024 != -1 )
    {
      v1 = dword_4C43DC + dword_4B1024 * dword_4C43C8;
      if ( *(_WORD *)(v1 + 4) == 0xFFFF )
      {
        v2 = sub_47C740("face\\ToBuildFirm.fce");
        sub_481C90(&unk_8A8E90, v2, 1);
        if ( *(_BYTE *)(v1 + 2) == 0xFF )
          v13 = sub_4646A0(6, 0);
        else
          v13 = sub_4646A0(6, 1);
        sub_47FF50(v13);
      }
      else
      {
        v3 = sub_47C740("face\\ToBuildFirm-Mine.fce");
        sub_481C90(&unk_8A8E90, v3, 1);
        v4 = sub_4646A0(6, *(_BYTE *)(v1 + 2) != 0xFF);
        sub_47FF50(v4);
        v5 = (char *)(*(_DWORD *)dword_870814 + 72 * *(__int16 *)(v1 + 4));
        v6 = Buffer;
        do
        {
          v7 = *v5;
          *v6++ = *v5++;
        }
        while ( v7 );
        sub_47FF50(Buffer);
        sub_438320(*(_DWORD *)(v1 + 8), Buffer, 7);
        sub_47FF50(Buffer);
        _itoa(*(unsigned __int8 *)(v1 + 6), Buffer, 10);
        sub_47FF50(Buffer);
      }
      sub_4820C0(dword_8A8FB8);
      sub_4820C0(dword_8A8FB8 + 288);
      v8 = sub_40DEC0(dword_4B1024, 0);
      if ( v8 != -1 )
      {
        v9 = dword_8A8FB8;
        if ( dword_4CD128 >= 50 )
          v9 = dword_8A8FB8 + 288;
        sub_483040(v9);
        sub_438320(*(_DWORD *)(*(_DWORD *)dword_4C4434 + 72 * v8 + 60), Buffer, 6);
        sub_47FF50(Buffer);
      }
      v10 = 1;
      for ( i = 288; i < 1728; i += 288 )
      {
        v12 = sub_40DEC0(dword_4B1024, v10);
        if ( v12 == -1 )
        {
          sub_47FF50(byte_4A2869);
          sub_4820C0(i + dword_8A8FB8 + 288);
        }
        else
        {
          sub_438320(*(_DWORD *)(*(_DWORD *)dword_4C4434 + 72 * v12 + 60), Buffer, 6);
          sub_47FF50(Buffer);
          sub_483040(i + dword_8A8FB8 + 288);
        }
        ++v10;
      }
      sub_47D1A0(&unk_8A8E90, sub_4454A0, 0, 0, sub_4456E0, 0, 0, 0, 0, 0, 0, 0);
      dword_8A8D5C = 1;
    }
  }
  else if ( dword_8A8D5C )
  {
    sub_47CCD0(&unk_8A8E90);
    dword_8A8D5C = 0;
    sub_445630(0);
    sub_47E260(&unk_8A8E90);
  }
}
