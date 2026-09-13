int __thiscall sub_4FF6B0(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // edi
  int v9; // ebp
  int v10; // ebx
  int *v11; // eax
  int v12; // ecx
  int v13; // ebx
  int v14; // edi
  int v15; // eax
  int result; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ebp
  int v21; // edi
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // [esp-8h] [ebp-70h]
  int v26; // [esp-4h] [ebp-6Ch]
  int v27; // [esp+10h] [ebp-58h] BYREF
  int v28; // [esp+14h] [ebp-54h] BYREF
  int v29; // [esp+18h] [ebp-50h] BYREF
  int v30; // [esp+1Ch] [ebp-4Ch]
  int v31; // [esp+20h] [ebp-48h]
  int v32; // [esp+24h] [ebp-44h]
  int v33; // [esp+28h] [ebp-40h]
  int v34; // [esp+2Ch] [ebp-3Ch] BYREF
  int v35; // [esp+30h] [ebp-38h] BYREF
  int v36; // [esp+34h] [ebp-34h]
  int v37; // [esp+38h] [ebp-30h]
  int v38; // [esp+3Ch] [ebp-2Ch]
  char v39[8]; // [esp+40h] [ebp-28h] BYREF
  _BYTE v40[8]; // [esp+48h] [ebp-20h] BYREF
  int v41; // [esp+50h] [ebp-18h]
  int v42; // [esp+64h] [ebp-4h]

  sub_5676D2();
  sub_4FFF20(&a3, &v29, &v28, &v34);
  if ( v29 != -1 || v28 != -1 )
    return sub_500180(&a3, v29, v28, v34);
  v5 = sub_4FB340(this);
  if ( v5 )
  {
    v6 = *(this + 17);
    if ( (v6 & 2) != 0 && (v6 & 1) != 0 )
    {
      v31 = sub_4F8630(v5);
      v30 = sub_4F8670(v5);
      v7 = sub_4F86F0(v5);
      v32 = v7;
      v8 = sub_4F8700(v5);
      v33 = v8;
      v9 = v7 + sub_566428(1);
      v10 = v8 + sub_566428(0);
      sub_569C64(0);
      v26 = *(this + 23);
      v25 = *(this + 22);
      v42 = 0;
      sub_5139A0(v40, v25, v26);
      sub_4FADA0(v40);
      v35 = a3;
      LOBYTE(v42) = 1;
      v36 = a4;
      IAT_gdi32_DPtoLP(v41, &v35, 1);
      v11 = (int *)sub_4FAF90(v39);
      v37 = *v11;
      v12 = v11[1];
      v38 = v12;
      if ( v35 >= v37 )
      {
        if ( v36 < v12 )
        {
          v20 = v10 - v8;
          if ( v10 - v8 < v30 )
          {
            while ( 1 )
            {
              v21 = v20;
              if ( v20 < v10 )
                v21 = v33 + v20 - v10;
              v22 = sub_4FAEB0(v21);
              v37 = sub_4FB070(v37, v22);
              if ( v35 < v37 )
                break;
              if ( ++v20 >= v30 )
                goto LABEL_14;
            }
            sub_4FD570(v31 - 1, v21, 0, v21);
            goto LABEL_27;
          }
        }
      }
      else
      {
        if ( v36 < v12 )
        {
          sub_500F50(1);
LABEL_27:
          sub_4FADC0(&v27);
          v42 = -1;
          return sub_569CD6(v40);
        }
        v13 = v9 - v32;
        if ( v9 - v32 < v31 )
        {
          while ( 1 )
          {
            v14 = v13;
            if ( v13 < v9 )
              v14 = v32 + v13 - v9;
            v15 = sub_4FADD0(v14);
            v38 = sub_4FB1A0(v38, v15);
            if ( v36 < v38 )
              break;
            if ( ++v13 >= v31 )
              goto LABEL_14;
          }
          sub_4FD570(v14, v30 - 1, v14, 0);
          goto LABEL_27;
        }
      }
LABEL_14:
      sub_4FADC0(&v27);
      v42 = -1;
      sub_569CD6(v40);
    }
  }
  result = sub_4FF110(&a3, &v29, &v28);
  if ( result == 1 )
  {
    v17 = *(this + 19);
    v18 = *(this + 20);
    *(this + 271) = *(this + 18);
    v19 = *(this + 21);
    *(this + 272) = v17;
    *(this + 273) = v18;
    *(this + 274) = v19;
    *(this + 270) = 0;
    if ( (IAT_user32_GetKeyState(16) & 0x8000u) == 0 )
    {
      sub_4FD5B0(v29, v28, 0, 2, 1);
      if ( *(this + 18) == *(this + 271) && *(this + 19) == *(this + 272) )
        *(this + 270) = 1;
    }
    else
    {
      sub_4FD5B0(v29, v28, 1, 2, 1);
    }
    v23 = *(this + 7);
    *(this + 269) = 0;
    v24 = IAT_user32_SetCapture(v23);
    return sub_564C9B(v24);
  }
  return result;
}
