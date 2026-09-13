int __thiscall sub_4EAAE0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  unsigned int v4; // eax
  int result; // eax
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  int v14; // eax
  int v15; // ebx
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // ebx
  _DWORD *v20; // esi
  int v21; // eax
  int (__stdcall *v22)(_DWORD, _DWORD *); // edi
  int v23; // esi
  int v24; // eax
  unsigned int v25; // eax
  int Focus; // eax
  int v27; // eax
  int (__stdcall ***v28)(_DWORD, void *, int *); // eax
  int v29; // eax
  int v30; // eax
  _DWORD *v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // esi
  int v36; // ebx
  unsigned int v37; // eax
  int v38; // eax
  BOOL v39; // eax
  char v40; // bl
  int v41; // ebx
  _DWORD *v42; // esi
  int v43; // edi
  int v44; // esi
  int v45; // esi
  int v46; // eax
  int v47; // edi
  void (__stdcall *v48)(_DWORD, int, int); // edi
  int Parent; // eax
  int v50; // esi
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // ecx
  unsigned int v57; // eax
  int v58; // ecx
  unsigned __int16 v59; // ax
  unsigned int v60; // edx
  unsigned int v61; // eax
  unsigned int v62; // ecx
  __int16 (__stdcall *v63)(int); // esi
  unsigned int v64; // ecx
  unsigned __int16 v65; // ax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  __int16 (__stdcall *v69)(int); // esi
  unsigned int v70; // edx
  unsigned int v71; // eax
  unsigned int v72; // eax
  int v73; // [esp+10h] [ebp-98h]
  int v74; // [esp+10h] [ebp-98h]
  int v75; // [esp+10h] [ebp-98h]
  int v76; // [esp+18h] [ebp-90h]
  int v77; // [esp+18h] [ebp-90h]
  int v78; // [esp+18h] [ebp-90h]
  int v79; // [esp+28h] [ebp-80h] BYREF
  int *v80; // [esp+2Ch] [ebp-7Ch] BYREF
  int *v81; // [esp+30h] [ebp-78h] BYREF
  _DWORD v82[2]; // [esp+34h] [ebp-74h] BYREF
  int v83; // [esp+3Ch] [ebp-6Ch] BYREF
  int v84; // [esp+40h] [ebp-68h]
  _DWORD v85[2]; // [esp+44h] [ebp-64h] BYREF
  int v86; // [esp+4Ch] [ebp-5Ch]
  int v87; // [esp+50h] [ebp-58h]
  unsigned int v88; // [esp+54h] [ebp-54h]
  unsigned int v89; // [esp+58h] [ebp-50h]
  int v90; // [esp+5Ch] [ebp-4Ch]
  int v91; // [esp+68h] [ebp-40h]
  int v92; // [esp+6Ch] [ebp-3Ch]
  _DWORD v93[11]; // [esp+70h] [ebp-38h] BYREF
  int v94; // [esp+A4h] [ebp-4h]

  v2 = a2;
  v4 = a2[1];
  if ( v4 >= 0x100 && v4 <= 0x108 )
  {
    result = IAT_user32_IsWindowEnabled(*a2);
    if ( !result )
      return result;
  }
  v6 = a2[1];
  if ( v6 == 513 || v6 == 161 )
    sub_56A8B4(*a2);
  result = sub_56557F(a2);
  if ( result == 1 )
    return result;
  v7 = a2[1];
  if ( v7 >= 0x100 && v7 <= 0x108 )
  {
    v8 = *(this + 119);
    if ( v8 )
    {
      if ( IAT_user32_TranslateAcceleratorA(*(this + 7), v8, a2) )
        return 1;
    }
  }
  v9 = *(this + 53);
  v10 = *(this + 7);
  v84 = v10;
  if ( v9 || *a2 != v10 && !IAT_user32_IsChild(v10, *a2) )
    return IAT_user32_IsWindow(v84) == 0;
  v11 = sub_4E4C60(1001, 0, 0);
  v12 = *a2;
  v13 = v11;
  v14 = *(this + 7);
  v82[1] = v13;
  if ( v14 != v12 && !*(this + 54) )
  {
    v15 = 0;
    while ( 1 )
    {
      v73 = v15++;
      if ( !sub_4DFCD0(v73, &v79) )
        break;
      v16 = sub_4DF810(0, 0) + 24;
      v17 = sub_534350(v16) + v16;
      v18 = *(_DWORD *)(sub_534350(v17) + v17);
      if ( v18 )
        v18 = *(_DWORD *)(v18 + 28);
      if ( v18 == *a2 )
        return 0;
    }
  }
  if ( sub_4DFD10(*(this + 55), &v79, 0) == 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      v74 = v19++;
      v20 = (_DWORD *)sub_4DF810(v74, 0);
      if ( !v20 )
        break;
      if ( sub_4DFEF0(v19 - 1) != 1 )
      {
        v21 = sub_4E4C60(1002, *v20, 0);
        if ( v21 )
        {
          if ( (*(_BYTE *)(v21 + 20) & 0x20) != 0 )
          {
            v22 = (int (__stdcall *)(_DWORD, _DWORD *))(*(int (__stdcall **)(int))(v21 + 44))(11);
            if ( v22 )
            {
              v23 = (int)v20 + sub_534350(v20 + 6) + 24;
              v24 = sub_534350(v23);
              if ( v22(*(_DWORD *)(v24 + v23), a2) )
                return 1;
            }
            v2 = a2;
          }
        }
      }
    }
  }
  v25 = v2[1];
  if ( v25 >= 0x100 && v25 <= 0x108 || v25 >= 0x200 && v25 <= 0x209 )
  {
    Focus = IAT_user32_GetFocus();
    v27 = sub_564C9B(Focus);
    v28 = (int (__stdcall ***)(_DWORD, void *, int *))sub_4E9CC0(v27);
    if ( v28 )
    {
      if ( (**v28)(v28, &unk_5BF330, &v83) >= 0 && !(*(int (__stdcall **)(int, _DWORD *))(*(_DWORD *)v83 + 20))(v83, v2) )
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v83 + 8))(v83);
        return 1;
      }
      (*(void (__stdcall **)(int))(*(_DWORD *)v83 + 8))(v83);
    }
  }
  if ( *(this + 47) == 1 && v2[1] == 513 )
  {
    v29 = *(this + 7);
    if ( *v2 == v29 )
    {
      IAT_user32_PostMessageA(v29, 161, 2, 0);
      return 0;
    }
    if ( sub_4DFD10(*(this + 55), &v79, 0) == 1 )
    {
      v30 = sub_4E05A0(*v2, 0);
      if ( v30 != -1 )
      {
        v31 = (_DWORD *)sub_4DF810(v30, 0);
        v32 = sub_4E4C60(1002, *v31, 0);
        if ( v32 )
        {
          if ( (*(_DWORD *)(v32 + 20) & 0x4000000) != 0 )
          {
            IAT_user32_PostMessageA(*(this + 7), 161, 2, 0);
            return 1;
          }
        }
      }
    }
  }
  v33 = sub_4EC830(v2);
  if ( !(_WORD)v33 )
  {
    v54 = v2[1];
    if ( v54 == 32 )
    {
      result = sub_4EB820(*v2);
      if ( result == 1 )
        return result;
      goto LABEL_75;
    }
    if ( v54 != 262 && v54 != 258 || sub_4E9DB0(v2) != 1 )
      goto LABEL_75;
    return 1;
  }
  if ( (unsigned __int16)v33 > 0x28u )
  {
    if ( (unsigned __int16)v33 == 112 )
    {
      if ( !sub_4E9BE0(v33) && *(this + 43) == 1 )
      {
        sub_562FF7(this + 44);
        v94 = 0;
        if ( !*(v80 - 2) )
        {
          v52 = sub_4E4C60(2004, 0, 0);
          if ( v52 )
          {
            sub_5633BF(v52);
            sub_4EC760(&v80, aHlp_0);
          }
        }
        if ( *(v80 - 2) && sub_4EC6B0(v80) == 1 )
        {
          v53 = *(this + 45);
          *(this + 57) = 1;
          if ( v53 )
            IAT_user32_WinHelpA(*(this + 7), v80, 1, v53);
          else
            IAT_user32_WinHelpA(*(this + 7), v80, 11, 0);
          v94 = -1;
          sub_563282(&v80);
          return 1;
        }
        v94 = -1;
        sub_563282(&v80);
      }
      goto LABEL_75;
    }
    if ( (unsigned __int16)v33 == 16393 )
    {
      if ( !sub_4E9BE0(v33) )
      {
        sub_4E9F90(*v2, 0, 0, 0);
        return 1;
      }
      goto LABEL_75;
    }
    goto LABEL_96;
  }
  if ( (unsigned __int16)v33 >= 0x25u )
  {
    v39 = (_WORD)v33 == 39 || (_WORD)v33 == 40;
    result = sub_4E9EE0(*v2, v39);
    if ( result == 1 )
      return result;
    goto LABEL_75;
  }
  switch ( (unsigned __int16)v33 )
  {
    case 9u:
      if ( sub_4E9BE0(v33) )
        goto LABEL_75;
      goto LABEL_68;
    case 0xDu:
      if ( sub_4E9BE0(v33) )
        goto LABEL_75;
      v79 = 0;
      if ( *v2 )
      {
        if ( IAT_user32_IsChild(*(this + 7), *v2) )
        {
          if ( sub_4DFD10(*(this + 55), &v79, 0) == 1 )
          {
            v34 = sub_4E05A0(*v2, 0);
            if ( v34 != -1 )
            {
              result = sub_4EA9F0(v79, v34);
              if ( result == 1 )
                return result;
            }
          }
        }
      }
      if ( *(this + 41) == 1 )
      {
LABEL_68:
        sub_4E9F90(*v2, 1, 0, 0);
        return 1;
      }
      if ( !v79 && sub_4DFD10(*(this + 55), &v79, 0) != 1 )
        goto LABEL_75;
      v35 = 1;
      v36 = *(_DWORD *)(v79 + 24);
      if ( v36 <= 1 )
        goto LABEL_75;
      while ( sub_4EA9F0(v79, v35) != 1 )
      {
        if ( ++v35 >= v36 )
        {
LABEL_74:
          v2 = a2;
          goto LABEL_75;
        }
      }
      return 1;
    case 0x1Bu:
      if ( !sub_4E9BE0(v33) && *(this + 42) == 1 )
      {
        IAT_user32_SendMessageA(*(this + 7), 16, 0, 0);
        return 1;
      }
      goto LABEL_75;
  }
LABEL_96:
  if ( (v33 & 0xE000) != 0x8000 )
    goto LABEL_75;
  LOBYTE(v83) = 0;
  v40 = v33;
  if ( (unsigned __int8)v33 < 0x30u || (unsigned __int8)v33 > 0x39u )
  {
    if ( (unsigned __int8)v33 < 0x41u || (unsigned __int8)v33 > 0x5Au )
      goto LABEL_75;
    LOBYTE(v83) = v33 + 32;
  }
  if ( sub_4E9BE0(v33) != 1 && sub_4DFD10(*(this + 55), &v79, 0) )
  {
    v82[0] = off_5DD8F4;
    v94 = 3;
    v81 = off_5DD8F4;
    v80 = off_5DD8F4;
    sub_560845(38);
    sub_563639(v40);
    if ( (_BYTE)v83 )
    {
      sub_560845(38);
      sub_563639(v83);
    }
    v41 = 0;
    while ( 1 )
    {
      v75 = v41++;
      v42 = (_DWORD *)sub_4DF810(v75, 0);
      if ( !v42 )
      {
        v83 = v41;
        LOBYTE(v94) = 2;
        sub_563282(&v80);
        LOBYTE(v94) = 1;
        sub_563282(&v81);
        v94 = -1;
        sub_563282(v82);
        goto LABEL_74;
      }
      if ( sub_4DFEF0(v41 - 1) != 1 )
      {
        v43 = sub_4E4C60(1002, *v42, 0);
        v44 = (int)v42 + sub_534350(v42 + 6) + 24;
        v45 = *(_DWORD *)(sub_534350(v44) + v44);
        if ( v43 )
        {
          if ( v45 )
          {
            if ( IAT_user32_IsWindow(*(_DWORD *)(v45 + 28)) )
            {
              if ( IAT_user32_IsWindowVisible(*(_DWORD *)(v45 + 28)) == 1 && sub_567690(v45) == 1 )
              {
                v46 = *(_DWORD *)(v43 + 20);
                if ( (v46 & 0x8000) == 0 && (v46 & 0x7C00) != 0 )
                {
                  sub_565666(&v80);
                  if ( sub_560B72(v82[0]) != -1 || (_BYTE)v83 && sub_560B72(v81) != -1 )
                    break;
                }
              }
            }
          }
        }
      }
    }
    v47 = *(_DWORD *)(v43 + 20);
    v83 = v41;
    if ( (v47 & 0x1C00) != 0 )
    {
      if ( (v47 & 0x1000) != 0 )
      {
        v48 = (void (__stdcall *)(_DWORD, int, int))IAT_user32_SendMessageA;
        v76 = 0;
        if ( IAT_user32_SendMessageA(*(_DWORD *)(v45 + 28), 240, 0, 0) == 1 )
          v48(*(_DWORD *)(v45 + 28), 241, 0);
        else
          v48(*(_DWORD *)(v45 + 28), 241, 1);
      }
      else if ( (v47 & 0x400) != 0 )
      {
        Parent = IAT_user32_GetParent(*(_DWORD *)(v45 + 28));
        sub_4E0760(Parent);
        IAT_user32_SendMessageA(*(_DWORD *)(v45 + 28), 241, 1, 0);
      }
      sub_56320D(v82, v76);
      sub_56320D(&v81, v77);
      sub_56320D(&v80, v78);
      v50 = *(this + 55);
      v51 = sub_4DF860(v83 - 1);
      v93[0] = v50;
      v93[1] = v51;
      v93[2] = 0;
      v93[3] = 0;
      v93[9] = 0;
      v93[10] = 0;
      sub_4E4C60(2008, v93, 0);
    }
    else if ( (v47 & 0x2000) != 0 )
    {
      sub_4E9F90(*(_DWORD *)(v45 + 28), 1, 0, 0);
    }
    else
    {
      sub_4E9F90(*(_DWORD *)(v45 + 28), 1, 0, *(_DWORD *)(v45 + 28));
    }
    LOBYTE(v94) = 2;
    sub_563282(&v80);
    LOBYTE(v94) = 1;
    sub_563282(&v81);
    v94 = -1;
    sub_563282(v82);
    return 1;
  }
LABEL_75:
  v37 = v2[1];
  if ( v37 != 256 && v37 != 257 && v37 != 260 && v37 != 261 && v37 != 258 && (v37 < 0x200 || v37 > 0x209) && v37 != 522
    || sub_4DFD10(*(this + 55), &v79, 0) != 1 )
  {
    return IAT_user32_IsWindow(v84) == 0;
  }
  if ( *v2 != *(this + 7) )
  {
    v38 = sub_4E05A0(*v2, 0);
    if ( v38 != -1 )
      goto LABEL_154;
    return IAT_user32_IsWindow(v84) == 0;
  }
  v38 = 0;
LABEL_154:
  v55 = sub_4DF860(v38);
  v56 = *(this + 55);
  v85[1] = v55;
  v57 = v2[1];
  v85[0] = v56;
  v58 = -7;
  v87 = 0;
  v91 = 0;
  v92 = 0;
  if ( v57 > 0x200 )
  {
    switch ( v57 )
    {
      case 0x201u:
        v58 = -6;
        goto LABEL_173;
      case 0x202u:
LABEL_173:
        ++v58;
        goto LABEL_174;
      case 0x203u:
LABEL_174:
        ++v58;
        goto LABEL_175;
      case 0x204u:
LABEL_175:
        ++v58;
        goto LABEL_176;
      case 0x205u:
LABEL_176:
        ++v58;
        goto LABEL_177;
      case 0x20Au:
        v69 = (__int16 (__stdcall *)(int))IAT_user32_GetKeyState;
        v70 = (int)((unsigned __int64)(2290649225LL * (__int16)HIWORD(v2[2])) >> 32) >> 6;
        v86 = -12;
        v87 = 2;
        v88 = (v70 >> 31) + v70;
        v89 = 0;
        if ( (IAT_user32_GetKeyState(17) & 0x8000u) != 0 )
        {
          v71 = v89;
          LOBYTE(v71) = v89 | 1;
          v89 = v71;
        }
        if ( v69(16) < 0 )
          v89 |= 2u;
        if ( v69(18) < 0 )
        {
          v72 = v89;
          LOBYTE(v72) = v89 | 4;
          v89 = v72;
        }
        if ( !sub_4E4C60(2008, v85, 0) )
          return IAT_user32_IsWindow(v84) == 0;
        result = 1;
        if ( v91 != 1 || v92 )
          return IAT_user32_IsWindow(v84) == 0;
        return result;
      default:
        return IAT_user32_IsWindow(v84) == 0;
    }
  }
  if ( v57 != 512 )
  {
    switch ( v57 )
    {
      case 0x100u:
      case 0x104u:
        v58 = -6;
        goto LABEL_158;
      case 0x101u:
      case 0x105u:
LABEL_158:
        v86 = v58 - 3;
        v59 = sub_4EC860(v2);
        v60 = v59;
        BYTE1(v60) = HIBYTE(v59) & 0x1F;
        v87 = 2;
        v88 = v60;
        v89 = (v59 & 0x2000) != 0;
        if ( (v59 & 0x4000) != 0 )
          v89 |= 2u;
        if ( (v59 & 0x8000u) != 0 )
        {
          v61 = v89;
          LOBYTE(v61) = v89 | 4;
          v89 = v61;
        }
        if ( !sub_4E4C60(2008, v85, 0) || v91 != 1 || v92 )
          return IAT_user32_IsWindow(v84) == 0;
        return 1;
      case 0x102u:
        v62 = v2[2];
        v86 = -11;
        v87 = 1;
        v88 = v62;
        if ( !sub_4E4C60(2008, v85, 0) || v91 != 1 )
          return IAT_user32_IsWindow(v84) == 0;
        if ( !v92 )
          return 1;
        v2[2] = v92;
        break;
      default:
        return IAT_user32_IsWindow(v84) == 0;
    }
    return IAT_user32_IsWindow(v84) == 0;
  }
LABEL_177:
  v63 = (__int16 (__stdcall *)(int))IAT_user32_GetKeyState;
  v86 = v58 + 1;
  v64 = v2[3];
  v65 = *((_WORD *)v2 + 6);
  v87 = 3;
  v88 = v65;
  v89 = HIWORD(v64);
  v90 = 0;
  if ( (IAT_user32_GetKeyState(17) & 0x8000u) != 0 )
  {
    v66 = v90;
    LOBYTE(v66) = v90 | 1;
    v90 = v66;
  }
  if ( v63(16) < 0 )
  {
    v67 = v90;
    LOBYTE(v67) = v90 | 2;
    v90 = v67;
  }
  if ( v63(18) < 0 )
  {
    v68 = v90;
    LOBYTE(v68) = v90 | 4;
    v90 = v68;
  }
  if ( !sub_4E4C60(2008, v85, 0) )
    return IAT_user32_IsWindow(v84) == 0;
  result = 1;
  if ( v91 != 1 || v92 )
    return IAT_user32_IsWindow(v84) == 0;
  return result;
}
