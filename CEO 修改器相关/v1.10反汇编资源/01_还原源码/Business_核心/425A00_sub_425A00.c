// 函数 0x425a00  sub_425A00  size=0x384  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_425A00(int a1, unsigned int *a2, int *a3)
{
  char *v3; // eax
  int v4; // ebx
  char *v5; // eax
  CHAR *v6; // edx
  char v7; // cl
  const char *v8; // esi
  unsigned int v9; // eax
  char *v10; // edi
  int v12; // eax
  CHAR v13; // cl
  char *v14; // eax
  int v16; // eax
  _BYTE *v17; // eax
  int v18; // edx
  char v19; // cl
  int v20; // eax
  int v21; // esi
  int *v22; // edi
  double v23; // st7
  int v24; // eax
  double v25; // st7
  int *v26; // eax
  bool v27; // zf
  int v28; // ecx
  int v29; // eax
  int v31; // [esp+10h] [ebp-264h] BYREF
  int v32; // [esp+14h] [ebp-260h]
  int v33; // [esp+40h] [ebp-234h]
  int v34; // [esp+44h] [ebp-230h]
  int v35; // [esp+48h] [ebp-22Ch]
  _BYTE v36[12]; // [esp+4Ch] [ebp-228h] BYREF
  int v37; // [esp+58h] [ebp-21Ch]
  int *v38; // [esp+5Ch] [ebp-218h]
  unsigned int *v39; // [esp+60h] [ebp-214h] BYREF
  char v40[255]; // [esp+64h] [ebp-210h] BYREF
  char v41; // [esp+163h] [ebp-111h] BYREF
  CHAR Text[256]; // [esp+164h] [ebp-110h] BYREF
  int v43; // [esp+270h] [ebp-4h]

  v38 = a3;
  v39 = a2;
  sub_464410(v36);
  v43 = 0;
  sub_468830(&v31);
  LOBYTE(v43) = 1;
  v35 = 0;
  v3 = (char *)sub_47C740("data\\maps.csv");
  if ( sub_464420(v3) )
  {
    v4 = 1;
    if ( v37 > 1 )
    {
      while ( sub_464780(0, v4) )
      {
        if ( sub_4646D0(0, v4) == a1 )
        {
          v35 = 1;
          v5 = (char *)sub_47C740("maps\\");
          v6 = (CHAR *)(Text - v5);
          do
          {
            v7 = *v5;
            v5[(_DWORD)v6] = *v5;
            ++v5;
          }
          while ( v7 );
          v8 = (const char *)sub_4646A0(1, v4);
          v9 = strlen(v8) + 1;
          v10 = &v41;
          while ( *++v10 )
            ;
          qmemcpy(v10, v8, v9);
          v12 = 0;
          do
          {
            v13 = Text[v12];
            v40[v12++] = v13;
          }
          while ( v13 );
          v14 = (char *)&v39 + 3;
          while ( *++v14 )
            ;
          strcpy(v14, "g.tga");
          if ( sub_469910((int)v40, 0) )
          {
            if ( (v31 & 3) != 0 || (v32 & 3) != 0 )
              MessageBoxA(hWnd, &byte_4A2F6C, byte_4A2869, 0);
            v16 = v32;
            *v39 = (v31 + 3) & 0xFFFFFFFC;
            *v38 = (v16 + 3) & 0xFFFFFFFC;
            v17 = (_BYTE *)sub_4646A0(1, v4);
            v18 = &unk_4D03D4 - (_UNKNOWN *)v17;
            do
            {
              v19 = *v17;
              v17[v18] = *v17;
              ++v17;
            }
            while ( v19 );
            sub_4688B0(&v31);
          }
          else
          {
            sprintf(Text, "file not fond\n%s", v40);
            MessageBoxA(hWnd, Text, "error", 0);
          }
          v20 = *v38;
          dword_4D0C5C = *v39;
          dword_4D0C58 = v20;
          v39 = 0;
          v21 = 3;
          v38 = (int *)&unk_4D0AE0;
          v22 = dword_4D0AB4;
          v34 = 10;
          do
          {
            *v22 = sub_4646D0(v21, v4);
            v23 = sub_464720(v21, v4) * 256.0;
            *(_DWORD *)((char *)dword_870824 + (_DWORD)v39) = (int)v23;
            v24 = sub_4646D0(v21 + 10, v4);
            v39 += 28;
            v33 = v24;
            v25 = (double)v24;
            v26 = v38 + 2;
            ++v22;
            *(double *)v38 = v25;
            ++v21;
            v27 = v34-- == 1;
            v38 = v26;
          }
          while ( !v27 );
          sub_425230();
          v28 = 0;
          if ( dword_870818 > 0 )
          {
            v29 = 0;
            do
            {
              *(_DWORD *)((char *)dword_870824 + v29 + 104) = -27648;
              ++v28;
              v29 += 112;
            }
            while ( v28 < dword_870818 );
          }
          break;
        }
        if ( ++v4 >= v37 )
          break;
      }
    }
    sub_464650(v36);
  }
  LOBYTE(v43) = 0;
  sub_469860(&v31);
  v43 = -1;
  sub_464B50(v36);
  return v35;
}
