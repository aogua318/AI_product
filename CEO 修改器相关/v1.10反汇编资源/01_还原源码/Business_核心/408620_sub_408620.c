// 函数 0x408620  sub_408620  size=0x37F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_408620(int a1)
{
  __int16 *v1; // edi
  char v2; // al
  _DWORD *v3; // eax
  int v4; // eax
  int v5; // esi
  unsigned int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  size_t v14; // ebx
  char *v15; // eax
  char *v16; // ebx
  int v17; // ecx
  int v18; // eax
  __int16 v20; // [esp+4h] [ebp-Ch] BYREF
  __int16 v21; // [esp+8h] [ebp-8h] BYREF
  unsigned int v22; // [esp+Ch] [ebp-4h]

  v1 = (__int16 *)(dword_4C43DC + a1 * dword_4C43C8);
  v22 = 0;
  v2 = *((_BYTE *)v1 + 3);
  if ( v2 >= 4 && v2 <= 6 )
  {
    v3 = (_DWORD *)(*(_DWORD *)dword_4C4434 + 72 * *v1);
    switch ( dword_4C2CF0 )
    {
      case 0:
        v4 = v3[3]
           - *(_DWORD *)(*(_DWORD *)dword_870814 + 168) * ((*((_DWORD *)v1 + 8) >> 26) & 0xF)
           - (*((_DWORD *)v1 + 8) & 0x3FFFFFF);
        if ( v4 > 0 )
        {
          v5 = (*(_DWORD *)(*(_DWORD *)dword_870814 + 168) + v4 - 1) / *(_DWORD *)(*(_DWORD *)dword_870814 + 168);
          if ( v5 > 12 )
            v5 = 12;
          v6 = *((_DWORD *)v1 + 8);
          goto LABEL_8;
        }
        break;
      case 1:
        v8 = v3[1]
           - *(_DWORD *)(*(_DWORD *)dword_870814 + 600) * ((*((_DWORD *)v1 + 4) >> 26) & 0xF)
           - (*((_DWORD *)v1 + 4) & 0x3FFFFFF);
        if ( v8 > 0 )
        {
          v5 = (*(_DWORD *)(*(_DWORD *)dword_870814 + 600) + v8 - 1) / *(_DWORD *)(*(_DWORD *)dword_870814 + 600);
          if ( v5 > 12 )
            v5 = 12;
          v6 = *((_DWORD *)v1 + 4);
          goto LABEL_8;
        }
        break;
      case 2:
        v9 = v3[2]
           - *(_DWORD *)(*(_DWORD *)dword_870814 + 672) * ((*((_DWORD *)v1 + 6) >> 26) & 0xF)
           - (*((_DWORD *)v1 + 6) & 0x3FFFFFF);
        if ( v9 > 0 )
        {
          v5 = (*(_DWORD *)(*(_DWORD *)dword_870814 + 672) + v9 - 1) / *(_DWORD *)(*(_DWORD *)dword_870814 + 672);
          if ( v5 > 12 )
            v5 = 12;
          v6 = *((_DWORD *)v1 + 6);
          goto LABEL_8;
        }
        break;
      case 3:
        v10 = v3[7]
            - *(_DWORD *)(*(_DWORD *)dword_870814 + 888) * ((*((_DWORD *)v1 + 16) >> 26) & 0xF)
            - (*((_DWORD *)v1 + 16) & 0x3FFFFFF);
        if ( v10 > 0 )
        {
          v5 = (*(_DWORD *)(*(_DWORD *)dword_870814 + 888) + v10 - 1) / *(_DWORD *)(*(_DWORD *)dword_870814 + 888);
          if ( v5 > 12 )
            v5 = 12;
          v6 = *((_DWORD *)v1 + 16);
          goto LABEL_8;
        }
        break;
      case 4:
        v11 = v3[5]
            - *(_DWORD *)(*(_DWORD *)dword_870814 + 1032) * ((*((_DWORD *)v1 + 12) >> 26) & 0xF)
            - (*((_DWORD *)v1 + 12) & 0x3FFFFFF);
        if ( v11 > 0 )
        {
          v5 = (*(_DWORD *)(*(_DWORD *)dword_870814 + 1032) + v11 - 1) / *(_DWORD *)(*(_DWORD *)dword_870814 + 1032);
          if ( v5 > 12 )
            v5 = 12;
          v6 = *((_DWORD *)v1 + 12);
          goto LABEL_8;
        }
        break;
      case 5:
        v12 = v3[4]
            - *(_DWORD *)(*(_DWORD *)dword_870814 + 1104) * ((*((_DWORD *)v1 + 10) >> 26) & 0xF)
            - (*((_DWORD *)v1 + 10) & 0x3FFFFFF);
        if ( v12 > 0 )
        {
          v5 = (*(_DWORD *)(*(_DWORD *)dword_870814 + 1104) + v12 - 1) / *(_DWORD *)(*(_DWORD *)dword_870814 + 1104);
          if ( v5 > 12 )
            v5 = 12;
          v6 = *((_DWORD *)v1 + 10);
          goto LABEL_8;
        }
        break;
      case 6:
        v13 = v3[6]
            - *(_DWORD *)(*(_DWORD *)dword_870814 + 2112) * ((*((_DWORD *)v1 + 14) >> 26) & 0xF)
            - (*((_DWORD *)v1 + 14) & 0x3FFFFFF);
        if ( v13 > 0 )
        {
          v5 = (*(_DWORD *)(*(_DWORD *)dword_870814 + 2112) + v13 - 1) / *(_DWORD *)(*(_DWORD *)dword_870814 + 2112);
          if ( v5 > 12 )
            v5 = 12;
          v6 = *((_DWORD *)v1 + 14);
LABEL_8:
          v7 = (v6 >> 26) & 0xF;
          if ( v5 > (unsigned int)(15 - v7) )
            v5 = 15 - v7;
          v22 = v6 >> 30;
          goto LABEL_36;
        }
        break;
      default:
        v5 = a1;
LABEL_36:
        if ( v5 > 0 )
        {
          v14 = dword_4C2D00;
          if ( dword_4C2D00 == 10000 )
          {
            MessageBoxA(hWnd, "buffer full", "error", 0);
            v14 = dword_4C2D00;
          }
          v15 = (char *)dword_870824 + 112 * dword_4C2CEC;
          v16 = (char *)dword_4C2CFC + 16 * v14;
          *(_DWORD *)v16 = a1;
          if ( v22 )
          {
            if ( v22 == 1 )
            {
              v17 = 4 * *((_DWORD *)v15 + 22) + 1000;
              v18 = 8 * *((_DWORD *)v15 + 23) + 1000;
              if ( v17 > v18 )
                v18 = v17;
            }
            else
            {
              v18 = 8 * *((_DWORD *)v15 + 22) + 2000;
            }
            *((_DWORD *)v16 + 1) = v18;
          }
          else
          {
            *((_DWORD *)v16 + 1) = 56 * *((_DWORD *)v15 + 23) / 10 + 1000;
          }
          *((_WORD *)v16 + 4) = v5;
          sub_40D7C0(&v21, &v20);
          ++dword_4C2D00;
          dword_4C2D08 += v5;
          *((_WORD *)v16 + 5) = v21;
          *((_WORD *)v16 + 6) = v20;
        }
        break;
    }
  }
  return 0;
}
