// 函数 0x45b220  sub_45B220  size=0x324  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_BYTE *__cdecl sub_45B220(int a1, int a2)
{
  _BYTE *result; // eax
  char *v3; // esi
  char *v4; // eax
  char *v5; // edx
  char v6; // cl
  char *v7; // eax
  char *v8; // edx
  char v9; // cl
  char *v10; // eax
  char *v11; // edx
  char v12; // cl
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // [esp-8h] [ebp-10Ch]
  char v19[256]; // [esp+0h] [ebp-104h] BYREF

  result = (_BYTE *)(a2 - 2);
  switch ( a2 )
  {
    case 2:
      result = *(_BYTE **)(a1 + 296);
      if ( result[604] )
        goto LABEL_6;
      break;
    case 4:
      if ( *(_BYTE *)(*(_DWORD *)(a1 + 296) + 1180) )
        result = (_BYTE *)sub_481010(7);
      break;
    case 7:
      result = *(_BYTE **)(a1 + 296);
      if ( result[2044] )
      {
        if ( result[604] )
        {
          if ( result[1180] )
            goto LABEL_13;
LABEL_6:
          result = (_BYTE *)sub_481010(4);
        }
        else
        {
          result = (_BYTE *)sub_481010(2);
        }
      }
      break;
    case 8:
LABEL_13:
      sub_435570(1, 0);
      v3 = (char *)dword_8CB318;
      memset(dword_8CB318, 0, 0x418u);
      v4 = (char *)(dword_8CC730 + 604);
      v5 = &v19[-dword_8CC730 - 604];
      do
      {
        v6 = *v4;
        v4[(_DWORD)v5] = *v4;
        ++v4;
      }
      while ( v6 );
      if ( strlen(v19) > 0x12 )
      {
        do
          sub_47B930(v19, 0);
        while ( strlen(v19) > 0x12 );
        v3 = (char *)dword_8CB318;
      }
      strcpy(v3, v19);
      v7 = (char *)(dword_8CC730 + 1180);
      v8 = &v19[-dword_8CC730 - 1180];
      do
      {
        v9 = *v7;
        v7[(_DWORD)v8] = *v7;
        ++v7;
      }
      while ( v9 );
      if ( strlen(v19) > 0xA )
      {
        do
          sub_47B930(v19, 0);
        while ( strlen(v19) > 0xA );
        v3 = (char *)dword_8CB318;
      }
      strcpy(v3 + 40, v19);
      v10 = (char *)(dword_8CC730 + 2044);
      v11 = &v19[-dword_8CC730 - 2044];
      do
      {
        v12 = *v10;
        v10[(_DWORD)v11] = *v10;
        ++v10;
      }
      while ( v12 );
      if ( strlen(v19) > 0xA )
      {
        do
          sub_47B930(v19, 0);
        while ( strlen(v19) > 0xA );
        v3 = (char *)dword_8CB318;
      }
      strcpy(v3 + 64, v19);
      v13 = *(__int16 *)(dword_8CC730 + 2894) - 7;
      v18 = 1;
      *((_DWORD *)v3 + 15) = v13;
      sub_47C920(v18);
      sub_47C930(v15, v14);
      result = (_BYTE *)sub_435570(1, 0);
      break;
    case 9:
      sub_435570(1, 0);
      sub_47C920(0);
      sub_47C930(v17, v16);
      result = (_BYTE *)sub_435570(1, 0);
      break;
    case 11:
      sub_435570(1, 0);
      if ( sub_47CC90(&unk_8CC4D8) )
        result = (_BYTE *)sub_47CCD0(&unk_8CC4D8);
      else
        result = (_BYTE *)sub_47D1A0(&unk_8CC4D8, sub_45B1E0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      break;
    default:
      return result;
  }
  return result;
}
