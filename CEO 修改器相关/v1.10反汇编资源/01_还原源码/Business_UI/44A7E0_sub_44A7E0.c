// 函数 0x44a7e0  sub_44A7E0  size=0x27A  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_44A7E0()
{
  int v0; // eax
  int v1; // edx
  char *v2; // eax
  char *v3; // esi
  char v4; // cl
  const char *v5; // esi
  char *v6; // edi
  int v7; // ebx
  char *v8; // esi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // esi
  __int16 v12; // ax
  char *v13; // ecx

  v0 = sub_47C740("face\\ProductBook.fce");
  sub_481C90(&unk_8B8BA0, v0, 1);
  v1 = dword_4D0C98;
  v2 = (char *)(dword_8B8CC8 + 2044);
  v3 = (char *)&unk_8B6A30 + 12 * dword_4D0C98 - (dword_8B8CC8 + 2044);
  do
  {
    v4 = *v2;
    v2[(_DWORD)v3] = *v2;
    ++v2;
  }
  while ( v4 );
  if ( v1 > 0 )
  {
    v5 = *(const char **)dword_4D0C94;
    v6 = (char *)&unk_8B6A30;
    v7 = v1;
    do
    {
      strcpy(v6, v5);
      v6 += 12;
      v5 += 68;
      --v7;
    }
    while ( v7 );
  }
  v8 = (char *)&unk_8B72F8;
  do
  {
    v9 = sub_47C740("face\\ProductBook_Board.fce");
    sub_481C90(v8, v9, 1);
    v8 += 304;
  }
  while ( (int)v8 < (int)byte_8B77B8 );
  v10 = sub_47C740("face\\ProductBook_list.fce");
  sub_481C90(&unk_8B8A70, v10, 1);
  sub_481AC0(&unk_8B6A30, 12, dword_4D0C98 + 1, 0);
  sub_481A70(dword_4D0C98 + 1);
  sub_47D1A0(&unk_8B8BA0, sub_44A690, sub_449B70, 0, 0, 0, 0, 0, 0, sub_449F00, sub_449F30, 100);
  v11 = -1;
  if ( (_DWORD *)dword_4C2D38 != dword_4D0E68 )
  {
    if ( dword_4B101C == -1 )
    {
      if ( dword_4B1198 == -1 )
      {
        if ( dword_4B32BC == -1 )
        {
          if ( dword_4B32A0 == -1 )
            goto LABEL_23;
          v11 = *(__int16 *)(dword_4B32A0 * dword_4D106C + dword_4D1080 + 4);
        }
        else
        {
          v11 = *(__int16 *)(dword_4B32BC * dword_870854 + dword_870868 + 8);
        }
      }
      else
      {
        v13 = (char *)(dword_4D0C84 + dword_4B1198 * dword_4D0C70);
        if ( (v13[18] & 1) == 0 )
          goto LABEL_23;
        v11 = sub_4275A0(v13);
      }
    }
    else
    {
      v12 = *(_WORD *)(dword_4C4378 + dword_4B101C * dword_4C4364 + 2);
      if ( v12 == -1 )
        goto LABEL_23;
      v11 = *(unsigned __int8 *)(dword_4D0B98 * v12 + dword_4D0BAC);
    }
    if ( v11 != -1 )
    {
      sub_449BE0(v11);
      if ( dword_8B6A28 <= 0 )
      {
        v11 = -1;
        dword_8B72B0 = -1;
      }
      else
      {
        dword_8B72B0 = dword_8B6B20[0];
      }
    }
  }
LABEL_23:
  if ( v11 >= dword_870818 )
    v11 = -1;
  if ( dword_8B72B0 >= (unsigned int)dword_870818 )
    dword_8B72B0 = 0;
  if ( v11 == -1 )
  {
    sub_449D30(0xFFFFFFFF);
    sub_4801E0(dword_8B72B0);
    sub_449A80();
  }
  sub_44A120(dword_8B72B0, 0);
  return 1;
}
