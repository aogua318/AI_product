int __thiscall sub_4FF2E0(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  int v6; // edi
  __int16 (__stdcall *v7)(int); // ebx
  int v9; // ebx
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  BOOL v18; // edi
  int v19; // [esp-10h] [ebp-4Ch]
  BOOL v20; // [esp-Ch] [ebp-48h]
  int v21; // [esp+10h] [ebp-2Ch]
  BOOL v22; // [esp+14h] [ebp-28h]
  int v23; // [esp+18h] [ebp-24h]
  int v24; // [esp+1Ch] [ebp-20h] BYREF
  int v25; // [esp+20h] [ebp-1Ch]
  int v26; // [esp+24h] [ebp-18h]
  int v27; // [esp+28h] [ebp-14h]
  char v28[16]; // [esp+2Ch] [ebp-10h] BYREF
  int v29; // [esp+40h] [ebp+4h]

  result = sub_4FB340();
  v6 = result;
  if ( result )
  {
    v7 = (__int16 (__stdcall *)(int))IAT_user32_GetKeyState;
    v22 = (IAT_user32_GetKeyState(16) & 0x8000u) != 0;
    result = v7(17) < 0;
    v21 = result;
    if ( a2 != 37 && a2 != 39 && a2 != 38 && a2 != 40 && a2 != 36 && a2 != 35 && a2 != 33 && a2 != 34 )
    {
      if ( a2 == 67 )
      {
        if ( !result )
          return result;
      }
      else if ( a2 == 86 )
      {
        if ( !result )
          return result;
      }
      else if ( a2 != 65 || !result )
      {
        return result;
      }
    }
    v29 = sub_4F86F0(v6);
    v9 = sub_4F8630(v6) - 1;
    v23 = sub_4F8700(v6);
    v10 = sub_4F8670(v6);
    v11 = *(this + 18);
    *(this + 272) = *(this + 19);
    v12 = *(this + 21);
    *(this + 271) = v11;
    v13 = *(this + 20);
    *(this + 274) = v12;
    v14 = v10 - 1;
    *(this + 273) = v13;
    v15 = sub_4FEDB0(v28, v13, v12);
    IAT_user32_CopyRect(&v24, v15);
    result = a2 - 33;
    switch ( a2 )
    {
      case '!':
        if ( v21 )
        {
          sub_4FD5B0(v29, v24, v22, 2, 1);
        }
        else
        {
          v17 = v25 - 10;
          if ( v29 > v25 - 10 )
            v17 = v29;
          sub_4FD5B0(v17, v24, v22, 2, 1);
        }
        goto LABEL_54;
      case '"':
        if ( !v21 && v9 >= v27 + 10 )
          v9 = v27 + 10;
        v20 = v22;
        v19 = v24;
        goto LABEL_53;
      case '#':
        if ( !v21 )
          v9 = v25;
        v20 = v22;
        v19 = v14;
LABEL_53:
        sub_4FD5B0(v9, v19, v20, 2, 1);
        goto LABEL_54;
      case '$':
        v16 = v29;
        if ( !v21 )
          v16 = v25;
        sub_4FD5B0(v16, v23, v22, 2, 1);
        goto LABEL_54;
      case '%':
        if ( v21 == 1 )
          sub_4FEFB0(0, 0, 0);
        else
          sub_4FD5B0(v25, v24 - 1, v22, 2, 1);
        goto LABEL_54;
      case '&':
        if ( v21 == 1 )
          sub_4FF050(0, 0, 0);
        else
          sub_4FD5B0(v25 - 1, v24, v22, 2, 1);
        goto LABEL_54;
      case '\'':
        if ( v21 == 1 )
          sub_4FEFB0(1, 0, 0);
        else
          sub_4FD5B0(v25, v26 + 1, v22, 2, 1);
        goto LABEL_54;
      case '(':
        if ( v21 == 1 )
          sub_4FF050(1, 0, 0);
        else
          sub_4FD5B0(v27 + 1, v24, v22, 2, 1);
        goto LABEL_54;
      case 'A':
        if ( v21 == 1 && (*(_BYTE *)(this + 17) & 1) != 0 )
          sub_500F50(1);
        goto LABEL_54;
      case 'C':
        if ( v21 == 1 )
          return sub_500A30(this);
        return result;
      case 'V':
        if ( v21 == 1 )
          return sub_500BB0(1);
        return result;
      default:
LABEL_54:
        result = *(this + 271) != *(this + 18) || *(this + 272) != *(this + 19);
        v18 = *(this + 273) != *(this + 20) || *(this + 274) != *(this + 21);
        if ( result == 1 )
          result = (*(int (__thiscall **)(_DWORD *))(*this + 184))(this);
        if ( v18 )
          result = (*(int (__thiscall **)(_DWORD *))(*this + 188))(this);
        break;
    }
  }
  return result;
}
