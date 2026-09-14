// 函数 0x461100  sub_461100  size=0x35D  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_461100()
{
  int v0; // ebx
  const char *v1; // esi
  char *v2; // edi
  char *v3; // eax
  int v4; // edi
  int i; // esi
  char *v6; // eax
  int v7; // edx
  char v8; // cl
  char *v9; // eax
  char v10; // cl
  int v11; // edi
  int j; // esi
  char *v13; // eax
  int v14; // edx
  char v15; // cl
  char *v16; // eax
  char v17; // cl
  int v18; // edi
  int k; // esi
  char *v20; // eax
  int v21; // edx
  char v22; // cl
  char *v23; // eax
  char v24; // cl
  _BYTE v26[256]; // [esp+0h] [ebp-104h] BYREF

  sub_482060(dword_8D7B88);
  switch ( dword_4CE034 )
  {
    case 1:
      v0 = dword_4D0C98;
      if ( dword_4D0C98 > 0 )
      {
        v1 = *(const char **)dword_4D0C94;
        v2 = (char *)&unk_8D78C8;
        do
        {
          strcpy(v2, v1);
          v2 += 20;
          v1 += 68;
          --v0;
        }
        while ( v0 );
        v0 = dword_4D0C98;
      }
      sub_481AC0(&unk_8D78C8, 20, v0, 0);
      sub_481A70(dword_4D0C98);
      sub_4801E0(word_4CE038);
      v3 = (char *)&unk_8D7708 + 20 * word_4CE03A;
      goto LABEL_31;
    case 2:
      v4 = 0;
      for ( i = &unk_8D78C8 - (_UNKNOWN *)v26; ; i += 20 )
      {
        v6 = (char *)sub_4646A0(2, v4 + 1);
        v7 = v26 - v6;
        do
        {
          v8 = *v6;
          v6[v7] = *v6;
          ++v6;
        }
        while ( v8 );
        v9 = v26;
        do
        {
          v10 = *v9;
          v9[i] = *v9;
          ++v9;
        }
        while ( v10 );
        if ( !v26[0] )
          break;
        ++v4;
      }
      sub_481AC0(&unk_8D78C8, 20, v4, 0);
      sub_481A70(v4);
      sub_4801E0(word_4CE03E);
      sub_47FF50((char *)&unk_8D78C8 + 20 * word_4CE03E);
      break;
    case 3:
      v11 = 0;
      for ( j = &unk_8D78C8 - (_UNKNOWN *)v26; ; j += 20 )
      {
        v13 = (char *)sub_4646A0(3, v11 + 1);
        v14 = v26 - v13;
        do
        {
          v15 = *v13;
          v13[v14] = *v13;
          ++v13;
        }
        while ( v15 );
        v16 = v26;
        do
        {
          v17 = *v16;
          v16[j] = *v16;
          ++v16;
        }
        while ( v17 );
        if ( !v26[0] )
          break;
        ++v11;
      }
      sub_481AC0(&unk_8D78C8, 20, v11, 0);
      sub_481A70(v11);
      sub_4801E0(word_4CE040);
      sub_47FF50((char *)&unk_8D78C8 + 20 * word_4CE040);
      break;
    case 4:
      v18 = 0;
      for ( k = &unk_8D78C8 - (_UNKNOWN *)v26; ; k += 20 )
      {
        v20 = (char *)sub_4646A0(4, v18 + 1);
        v21 = v26 - v20;
        do
        {
          v22 = *v20;
          v20[v21] = *v20;
          ++v20;
        }
        while ( v22 );
        v23 = v26;
        do
        {
          v24 = *v23;
          v23[k] = *v23;
          ++v23;
        }
        while ( v24 );
        if ( !v26[0] )
          break;
        ++v18;
      }
      sub_481AC0(&unk_8D78C8, 20, v18, 0);
      sub_481A70(v18);
      sub_4801E0(word_4CE042);
      v3 = (char *)&unk_8D78C8 + 20 * word_4CE042;
LABEL_31:
      sub_47FF50(v3);
      break;
    default:
      break;
  }
  if ( (_DWORD *)dword_4C2D38 == dword_4D0E68 && dword_4CE034 && dword_4CE034 != 5 )
  {
    sub_482FE0(dword_8D7DF8 + 1440);
    sub_482FE0(dword_8D7DF8 + 2016);
    return sub_482FE0(dword_8D7DF8 + 1728);
  }
  else
  {
    sub_482060(dword_8D7DF8 + 1440);
    sub_482060(dword_8D7DF8 + 2016);
    sub_482060(dword_8D7DF8 + 1728);
    sub_482060(dword_8D7CB8);
    return sub_482060(dword_8D7B88);
  }
}
