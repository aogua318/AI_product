// 函数 0x469910  sub_469910  size=0x437  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_469910(int *this, char *FileName, char *Src)
{
  int result; // eax
  int v4; // edi
  _DWORD *v5; // esi
  unsigned int v6; // eax
  int v7; // ecx
  size_t v8; // ebx
  int v9; // edi
  int v10; // edx
  _WORD *v11; // eax
  int v12; // ecx
  int v13; // eax
  char *v14; // ecx
  char *v15; // edi
  int v16; // eax
  char *v17; // ecx
  char *v18; // edi
  unsigned int v19; // edx
  char *v20; // esi
  int v21; // kr00_4
  int v22; // esi
  char *v23; // edi
  int v24; // eax
  char *v25; // ecx
  char *v26; // esi
  bool v27; // cc
  unsigned int v28; // edx
  int v29; // edx
  int v30; // edi
  char v31; // [esp+12h] [ebp-42h]
  char v32; // [esp+21h] [ebp-33h]
  _BYTE v33[8]; // [esp+24h] [ebp-30h] BYREF
  int v34; // [esp+2Ch] [ebp-28h]
  int v35; // [esp+30h] [ebp-24h]
  char ArgList[4]; // [esp+34h] [ebp-20h] BYREF
  char *v37; // [esp+38h] [ebp-1Ch]
  unsigned int v38; // [esp+3Ch] [ebp-18h]
  _DWORD *v39; // [esp+40h] [ebp-14h]
  int *v40; // [esp+44h] [ebp-10h]
  int v41; // [esp+50h] [ebp-4h]
  char *FileNamea; // [esp+5Ch] [ebp+8h]
  char *FileNameb; // [esp+5Ch] [ebp+8h]
  char *FileNamec; // [esp+5Ch] [ebp+8h]
  char *FileNamed; // [esp+5Ch] [ebp+8h]
  char *FileNamee; // [esp+5Ch] [ebp+8h]
  char *FileNamef; // [esp+5Ch] [ebp+8h]
  char *Srca; // [esp+60h] [ebp+Ch]
  char *Srcb; // [esp+60h] [ebp+Ch]
  char *Srcc; // [esp+60h] [ebp+Ch]
  char *Srcd; // [esp+60h] [ebp+Ch]

  v40 = this;
  Concurrency::details::_ReaderWriterLock::_ReaderWriterLock((Concurrency::details::_ReaderWriterLock *)v33);
  v41 = 0;
  if ( !sub_46A040(FileName) )
    goto LABEL_2;
  v4 = sub_46A270(v33);
  v5 = sub_465E40(v4, "a_lib\\a_graph.cpp", 269);
  v39 = v5;
  sub_46A320(v5, v4);
  sub_46A1F0(v33);
  v6 = *((unsigned __int8 *)v5 + 16);
  v31 = *((_BYTE *)v5 + 2);
  v7 = *((unsigned __int16 *)v5 + 7);
  v32 = *((_BYTE *)v5 + 17);
  v8 = *((unsigned __int16 *)v5 + 6);
  v9 = 18;
  v37 = (char *)v7;
  FileNamea = (char *)v6;
  if ( v6 < 8 )
  {
    sub_465FE0((int)v5, "a_lib\\a_graph.cpp", 293);
LABEL_2:
    v41 = -1;
    nullsub_2(v33);
    return 0;
  }
  if ( v31 != 1 && v31 != 2 && v31 != 9 && v31 != 10 && v31 != 3 && v31 != 11 )
  {
    sub_465FE0((int)v5, "a_lib\\a_graph.cpp", 300);
    goto LABEL_2;
  }
  sub_468790((int)ArgList, v8, v7, v6);
  sub_469880(v40, v8, (int)v37, (int)FileNamea, 0);
  v10 = (int)FileNamea;
  if ( FileNamea == (char *)8 )
  {
    if ( v31 == 3 || v31 == 11 )
    {
      if ( Src )
      {
        v13 = 0;
        v14 = Src + 2;
        do
        {
          *(v14 - 2) = v13;
          *(v14 - 1) = v13;
          *v14 = v13;
          v14[1] = 0;
          ++v13;
          v14 += 4;
        }
        while ( v13 < 256 );
      }
    }
    else
    {
      v11 = Src + 2;
      v12 = 256;
      do
      {
        if ( Src )
        {
          *((_BYTE *)v11 - 2) = *((_BYTE *)v5 + v9);
          *((_BYTE *)v11 - 1) = *((_BYTE *)v5 + v9 + 1);
          *v11 = *((unsigned __int8 *)v5 + v9 + 2);
        }
        v9 += 3;
        v11 += 2;
        --v12;
      }
      while ( v12 );
      v10 = 8;
    }
  }
  switch ( v31 )
  {
    case 1:
    case 3:
      v38 = (v8 + 3) & 0xFFFFFFFC;
      Srca = (char *)v5 + v9;
      v15 = (char *)v40[9];
      if ( (int)v37 > 0 )
      {
        FileNameb = v37;
        do
        {
          memcpy(v15, Srca, v8);
          v15 += v38;
          Srca += v8;
          --FileNameb;
        }
        while ( FileNameb );
      }
      goto LABEL_64;
    case 2:
      v21 = v8 * v10;
      v22 = (int)(v8 * v10) / 8;
      Srcc = (char *)v39 + v9;
      v23 = (char *)v40[9];
      if ( (int)v37 > 0 )
      {
        FileNamee = v37;
        do
        {
          memcpy(v23, Srcc, v21 / 8);
          Srcc += v22;
          v23 += (v22 + 3) & 0xFFFFFFFC;
          --FileNamee;
        }
        while ( FileNamee );
      }
      goto LABEL_63;
    case 9:
    case 11:
      v16 = 0;
      v37 = (char *)((v8 + 3) & 0xFFFFFFFC);
      v17 = (char *)v40[9];
      v18 = (char *)v5 + v9;
      Srcb = 0;
      if ( *(int *)(*(_DWORD *)ArgList + 8) <= 0 )
        goto LABEL_64;
      do
      {
        v19 = (unsigned __int8)*v18;
        v20 = Srcb;
        ++v18;
        v38 = v19;
        if ( (v19 & 0x80u) == 0 )
        {
          FileNamed = (char *)(v38 + 1);
          do
          {
            *v17 = *v18;
            ++v16;
            ++v17;
            ++v18;
            if ( v16 == v8 )
            {
              v16 = 0;
              ++v20;
              v17 = &v37[(_DWORD)v17 - v8];
            }
            --FileNamed;
          }
          while ( FileNamed );
          Srcb = v20;
        }
        else
        {
          FileNamec = (char *)((v19 & 0x7F) + 1);
          do
          {
            *v17 = *v18;
            ++v16;
            ++v17;
            if ( v16 == v8 )
            {
              v16 = 0;
              ++v20;
              v17 = &v37[(_DWORD)v17 - v8];
            }
            --FileNamec;
          }
          while ( FileNamec );
          Srcb = v20;
          ++v18;
        }
      }
      while ( (int)v20 < *(_DWORD *)(*(_DWORD *)ArgList + 8) );
LABEL_63:
      v5 = v39;
LABEL_64:
      sub_465FE0(*(int *)ArgList, "a_lib\\a_graph.cpp", 434);
      sub_465FE0((int)v5, "a_lib\\a_graph.cpp", 435);
      if ( (v32 & 0x20) == 0 )
        sub_468900((size_t *)v40);
      sub_468850(v40);
      v41 = -1;
      nullsub_2(v33);
      result = 1;
      break;
    case 10:
      FileNamef = 0;
      Srcd = 0;
      v24 = v10 / 8;
      v35 = v8 * (v10 / 8);
      v37 = (char *)((v35 + 3) & 0xFFFFFFFC);
      v25 = (char *)v40[9];
      v26 = (char *)v5 + v9;
      v27 = *(_DWORD *)(*(_DWORD *)ArgList + 8) <= 0;
      v34 = v10 / 8;
      if ( !v27 )
      {
        do
        {
          v28 = (unsigned __int8)*v26++;
          v38 = v28;
          if ( (v28 & 0x80u) == 0 )
          {
            ++v38;
            do
            {
              if ( v24 > 0 )
              {
                v30 = v24;
                do
                {
                  *v25++ = *v26++;
                  --v30;
                }
                while ( v30 );
              }
              if ( ++FileNamef == (char *)v8 )
              {
                ++Srcd;
                FileNamef = 0;
                v25 = &v37[(_DWORD)v25 - v35];
              }
              --v38;
            }
            while ( v38 );
          }
          else
          {
            v38 = (v28 & 0x7F) + 1;
            do
            {
              v29 = 0;
              if ( v24 > 0 )
              {
                do
                {
                  *v25 = v26[v29];
                  v24 = v34;
                  ++v29;
                  ++v25;
                }
                while ( v29 < v34 );
              }
              if ( ++FileNamef == (char *)v8 )
              {
                ++Srcd;
                FileNamef = 0;
                v25 = &v37[(_DWORD)v25 - v35];
              }
              --v38;
            }
            while ( v38 );
            v26 += v24;
          }
        }
        while ( (int)Srcd < *(_DWORD *)(*(_DWORD *)ArgList + 8) );
      }
      goto LABEL_63;
  }
  return result;
}
