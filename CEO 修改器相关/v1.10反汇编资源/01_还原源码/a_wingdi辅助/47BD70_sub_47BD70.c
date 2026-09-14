// 函数 0x47bd70  sub_47BD70  size=0x4A0  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

LONG __thiscall sub_47BD70(int *this, int *a2, int a3, int a4, const char *a5, int a6, int a7, int a8, int a9, int a10)
{
  LONG result; // eax
  int v12; // eax
  const char *v13; // edi
  int v14; // ecx
  int v15; // ebx
  int v16; // esi
  int i; // edx
  signed int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // ebx
  int v22; // edx
  int v23; // ebx
  int v24; // edx
  signed int v25; // eax
  int v26; // edx
  int v27; // ecx
  int v28; // edx
  int v29; // ebx
  int v30; // ebx
  signed int v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // ebx
  signed int v35; // eax
  int v36; // ecx
  int v37; // [esp+10h] [ebp-14h]
  int v39; // [esp+34h] [ebp+10h]
  int v40; // [esp+34h] [ebp+10h]
  int v41; // [esp+34h] [ebp+10h]
  int v42; // [esp+34h] [ebp+10h]
  int v43; // [esp+38h] [ebp+14h]
  int v44; // [esp+38h] [ebp+14h]

  result = a2[3];
  if ( result == 16 || result == 32 )
  {
    if ( (dword_8EEB48 & 1) == 0 )
    {
      dword_8EEB48 |= 1u;
      sub_464A40(dword_8EEB40);
      atexit(sub_4A10C0);
    }
    sub_464A60(dword_8EEB40, ".f2.", 0xFFFFFFFF, 0, 0);
    if ( !a8 )
      a8 = *this;
    sub_469880(dword_8EEAD4, *this, *this, 8, 0);
    v12 = a2[3];
    if ( v12 == 16 )
    {
      sub_469880(dword_8EEB04, *this, *this, 24, 0);
    }
    else if ( v12 == 32 )
    {
      sub_469880(dword_8EEB04, *this, *this, 32, 0);
    }
    v13 = a5;
    v14 = strlen(a5);
    v15 = a4;
    v16 = a3;
    v37 = v14;
    v43 = a4;
    switch ( *(this + 1) )
    {
      case 0:
      case 3:
        if ( v14 <= 0 )
          goto LABEL_92;
        for ( i = 0; ; i = v39 )
        {
          v18 = *(unsigned __int8 *)v13;
          if ( *v13 < 0 )
          {
            v18 = *((unsigned __int8 *)v13 + 1) + (v18 << 8);
            v13 += 2;
            v22 = i + 2;
            v20 = 2;
          }
          else
          {
            v19 = i + 1;
            ++v13;
            v39 = v19;
            v20 = 1;
            if ( v18 != 13 && v18 != 10 )
              goto LABEL_23;
            v21 = *(unsigned __int8 *)v13;
            if ( v21 != 13 && v21 != 10 )
              goto LABEL_23;
            ++v13;
            v22 = v19 + 1;
          }
          v39 = v22;
LABEL_23:
          v23 = (a8 * v20 + 1) >> 1;
          if ( dword_8EEAD0 && (v23 + v16 > dword_8EEAC8 || v18 == 13 || v18 == 10) )
          {
            v16 = a3;
            v43 += a8;
            if ( v43 >= dword_8EEACC )
              goto LABEL_92;
          }
          if ( v18 != 13 && v18 != 10 )
          {
            sub_47B9F0(this, a2, v16, v43, v18, a6, a7, a8, a9, a10);
            v16 += v23;
          }
          if ( v39 >= v37 )
            goto LABEL_92;
        }
      case 1:
        if ( v14 <= 0 )
          goto LABEL_92;
        v24 = 0;
        while ( 2 )
        {
          LOBYTE(v25) = *v13;
          if ( *v13 != 128 && (v25 & 0x80u) != 0 )
          {
            v25 = *((unsigned __int8 *)v13 + 1) + ((unsigned __int8)v25 << 8);
            v13 += 2;
            v26 = v24 + 2;
            v27 = 2;
LABEL_44:
            v40 = v26;
            goto LABEL_45;
          }
          v25 = (unsigned __int8)v25;
          v28 = v24 + 1;
          ++v13;
          v40 = v28;
          v27 = 1;
          if ( (unsigned __int8)v25 == 13 || (unsigned __int8)v25 == 10 )
          {
            v29 = *(unsigned __int8 *)v13;
            if ( v29 == 13 || v29 == 10 )
            {
              ++v13;
              v26 = v28 + 1;
              goto LABEL_44;
            }
          }
LABEL_45:
          v30 = (a8 * v27 + 1) >> 1;
          if ( !dword_8EEAD0
            || v30 + v16 <= dword_8EEAC8 && v25 != 13 && v25 != 10
            || (v16 = a3, v43 += a8, v43 < dword_8EEACC) )
          {
            if ( v25 != 13 && v25 != 10 )
            {
              sub_47B9F0(this, a2, v16, v43, v25, a6, a7, a8, a9, a10);
              v16 += v30;
            }
            if ( v40 < v37 )
            {
              v24 = v40;
              continue;
            }
          }
          break;
        }
LABEL_92:
        sub_4688B0(dword_8EEB04);
        sub_4688B0(dword_8EEAD4);
        result = sub_464B40(dword_8EEB40);
        break;
      case 2:
        if ( v14 > 0 )
        {
          v41 = 0;
          do
          {
            v31 = *(unsigned __int8 *)v13;
            if ( (*v13 & 0xF0) != 0 && ((*v13 & 0xF0u) < 0xA0 || (*v13 & 0xF0u) > 0xD0) )
            {
              v31 = *((unsigned __int8 *)v13 + 1) + (v31 << 8);
              v13 += 2;
              v41 += 2;
              v32 = 2;
            }
            else
            {
              v32 = 1;
              ++v41;
              ++v13;
              if ( v31 == 13 || v31 == 10 )
              {
                v33 = *(unsigned __int8 *)v13;
                if ( v33 == 13 || v33 == 10 )
                {
                  ++v13;
                  ++v41;
                }
              }
            }
            v34 = (a8 * v32 + 1) >> 1;
            if ( dword_8EEAD0 && (v34 + v16 > dword_8EEAC8 || v31 == 13 || v31 == 10) )
            {
              v16 = a3;
              v43 += a8;
              if ( v43 >= dword_8EEACC )
                break;
            }
            if ( v31 != 13 && v31 != 10 )
            {
              sub_47B9F0(this, a2, v16, v43, v31, a6, a7, a8, a9, a10);
              v16 += v34;
            }
          }
          while ( v41 < v37 );
        }
        goto LABEL_92;
      default:
        if ( v14 > 0 )
        {
          v42 = (a8 + 1) >> 1;
          v44 = 0;
          do
          {
            v35 = *(unsigned __int8 *)v13;
            ++v44;
            ++v13;
            if ( v35 == 13 || v35 == 10 )
            {
              v36 = *(unsigned __int8 *)v13;
              if ( v36 == 13 || v36 == 10 )
              {
                ++v13;
                ++v44;
              }
            }
            if ( dword_8EEAD0 && (v16 + v42 > dword_8EEAC8 || v35 == 13 || v35 == 10) )
            {
              v15 += a8;
              v16 = a3;
              if ( v15 >= dword_8EEACC )
                break;
            }
            if ( v35 != 13 && v35 != 10 )
            {
              sub_47B9F0(this, a2, v16, v15, v35, a6, a7, a8, a9, a10);
              v16 += v42;
            }
          }
          while ( v44 < v37 );
        }
        goto LABEL_92;
    }
  }
  return result;
}
