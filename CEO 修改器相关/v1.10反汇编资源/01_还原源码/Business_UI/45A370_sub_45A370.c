// 函数 0x45a370  sub_45A370  size=0x2E1  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_45A370()
{
  int v0; // eax
  int v1; // ebx
  int v2; // edi
  __int16 *v3; // esi
  int v4; // esi
  int v5; // esi
  int *v7; // [esp+30h] [ebp-108h]
  char Buffer[256]; // [esp+34h] [ebp-104h] BYREF

  v0 = sub_47C740("face\\win_face.fce");
  sub_481C90(&unk_8CAE38, v0, 1);
  v1 = 0;
  v2 = 0;
  v7 = dword_4CDF1C;
  v3 = (__int16 *)&unk_4FF6AC;
  do
  {
    if ( *v7 != -1 )
    {
      sub_47E650(*(v3 - 29) + 36);
      sub_47FF50(v3);
      ++v1;
      v2 += 576;
    }
    ++v7;
    v3 += 94940;
  }
  while ( (int)v3 < (int)word_6158FC );
  if ( v1 < 6 )
  {
    v4 = 576 * v1;
    do
    {
      sub_482060(v4 + dword_8CAF60 + 12096);
      sub_482060(v4 + dword_8CAF60 + 12384);
      v4 += 576;
    }
    while ( v4 < 3456 );
  }
  sub_425920(dword_4CDEB8, Buffer);
  sub_47FF50(Buffer);
  v5 = sub_459B70(dword_8703A0);
  _itoa(dword_4D04AC, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(dword_8C8990, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(dword_8C898C, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(dword_8C8984, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(dword_8C8994, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(dword_8C897C, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(dword_8C8978, Buffer, 10);
  sub_47FF50(Buffer);
  _itoa(v5, Buffer, 10);
  sub_47FF50(Buffer);
  sub_47D1A0(&unk_8CAE38, sub_45A350, sub_45A2A0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  return 1;
}
