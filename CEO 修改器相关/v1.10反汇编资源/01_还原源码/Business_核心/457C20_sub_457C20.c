// 函数 0x457c20  sub_457C20  size=0x13D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_457C20()
{
  int v0; // ebx
  char *v1; // eax
  int v2; // esi
  char *v3; // edi
  char *v4; // eax
  int v5; // edx
  char v6; // cl
  int v7; // eax
  _BYTE v9[12]; // [esp+10h] [ebp-1Ch] BYREF
  int v10; // [esp+1Ch] [ebp-10h]
  int v11; // [esp+28h] [ebp-4h]

  sub_464410(v9);
  v0 = 0;
  v11 = 0;
  v1 = (char *)sub_47C740("data\\citys.csv");
  if ( !sub_464420(v1) )
  {
    MessageBoxA(hWnd, "load city set failed", "error", 0);
    exit(1);
  }
  dword_8C5A40 = v10 - 1;
  *(_DWORD *)dword_8C5970 = sub_465E40(36 * (v10 - 1), (int)"face_freeplay.cpp", 124);
  if ( dword_8C5A40 > 0 )
  {
    v2 = 1;
    do
    {
      v3 = (char *)(v0 + *(_DWORD *)dword_8C5970);
      v4 = (char *)sub_4646A0(0, v2);
      v5 = v3 - v4;
      do
      {
        v6 = *v4;
        v4[v5] = *v4;
        ++v4;
      }
      while ( v6 );
      *((_DWORD *)v3 + 5) = sub_4646D0(1, v2);
      *((_DWORD *)v3 + 6) = sub_4646D0(2, v2);
      *((_DWORD *)v3 + 7) = sub_4646D0(3, v2);
      v7 = sub_4646D0(4, v2++);
      v0 += 36;
      *((_DWORD *)v3 + 8) = v7;
    }
    while ( v2 - 1 < dword_8C5A40 );
  }
  sub_464650(v9);
  v11 = -1;
  sub_464B50(v9);
  return 1;
}
