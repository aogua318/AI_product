// 函数 0x436d70  sub_436D70  size=0x167  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_436D70()
{
  int v0; // edi
  char *v1; // eax
  int v2; // esi
  int v3; // ebx
  char *v4; // eax
  _BYTE v6[16]; // [esp+10h] [ebp-1Ch] BYREF
  int v7; // [esp+28h] [ebp-4h]

  sub_464410(v6);
  v0 = 0;
  v7 = 0;
  dword_89D22C = 31744;
  dword_89D230 = 32384;
  dword_89D234 = 32736;
  dword_89D238 = 800;
  dword_89D23C = 6168;
  dword_89D240 = 671;
  dword_89D244 = 17439;
  *(_DWORD *)dword_89D248 = sub_465E40(56, (int)"TALK.CPP", 28);
  v1 = (char *)sub_47C740("data\\talk_idx.csv");
  if ( !sub_464420(v1) )
    goto LABEL_6;
  v2 = 1;
  v3 = 26;
  do
  {
    *(_DWORD *)(v0 + *(_DWORD *)dword_89D248) = sub_4646D0(2, v2);
    *(_DWORD *)(v0 + *(_DWORD *)dword_89D248 + 4) = sub_4646D0(3, v2);
    *(_DWORD *)(v0 + *(_DWORD *)dword_89D248 + 8) = sub_4646D0(4, v2++);
    v0 += 12;
    --v3;
  }
  while ( v3 );
  sub_464650(v6);
  v4 = (char *)sub_47C740("data\\talk.csv");
  if ( sub_464420(v4) )
  {
    v7 = -1;
    sub_464B50(v6);
    return 1;
  }
  else
  {
LABEL_6:
    v7 = -1;
    sub_464B50(v6);
    return 0;
  }
}
