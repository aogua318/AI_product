// 函数 0x410890  sub_410890  size=0x3A2  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_410890(int a1)
{
  __int16 *v1; // esi
  __int16 *v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // edx
  __int16 v6; // ax
  int v7; // ecx
  int v8; // edx
  const char *v9; // eax
  int v10; // ebx
  int v11; // ebx
  __int16 v12; // ax
  BOOL v14; // [esp+Ch] [ebp-10Ch] BYREF
  __int16 *v15; // [esp+10h] [ebp-108h] BYREF
  char Buffer[256]; // [esp+14h] [ebp-104h] BYREF

  v1 = (__int16 *)(dword_4C43DC + a1 * dword_4C43C8);
  v2 = (__int16 *)(*(_DWORD *)dword_4C4434 + 72 * *v1);
  v3 = *((char *)v1 + 3);
  v15 = v2;
  switch ( v3 )
  {
    case 0:
      if ( !dword_8CAF68 && sub_4640D0() % 1000 < 20 )
        goto LABEL_19;
      break;
    case 2:
      v14 = 0;
      if ( dword_4CDB54 > 0 )
      {
        if ( dword_4CD11C - *((_DWORD *)v1 + 3) <= (int)&unk_546000 )
        {
          v10 = sub_4640D0() % (100 - (dword_4CD11C - *((_DWORD *)v1 + 3)) / 55296);
          if ( v10 <= sub_4640D0() % 10 )
          {
            v11 = v15[28] + v15[29] + v15[30] + v15[31];
            v14 = sub_4640D0() % 400 > v11;
          }
          v2 = v15;
        }
        else
        {
          v14 = 1;
        }
        --dword_4CDB54;
      }
      sub_40EE90(v1);
      if ( v14 )
LABEL_19:
        sub_40F920(a1);
      else
        ++dword_4D0B60;
      break;
    case 4:
      sub_40E8C0(a1);
      if ( sub_40E830(v1) > 33 )
      {
        v4 = *((_DWORD *)v1 + 20);
        *((_BYTE *)v1 + 3) = 5;
        sub_486530(v4, *v2, 0, 0, 0, 0);
        goto LABEL_15;
      }
      break;
    case 5:
      sub_40E8C0(a1);
      if ( sub_40E830(v1) > 66 )
      {
        v5 = *((_DWORD *)v1 + 20);
        *((_BYTE *)v1 + 3) = 6;
        sub_486530(v5, *v2, 1, 0, 0, 0);
        goto LABEL_15;
      }
      break;
    case 6:
      sub_40E8C0(a1);
      if ( sub_40E830(v1) > 99 )
      {
        v6 = v2[16];
        if ( v6 == 2 )
        {
          v7 = *((_DWORD *)v1 + 20);
          *((_BYTE *)v1 + 3) = 2;
          sub_486530(v7, *v2, 2, 0, 0, 0);
          if ( dword_4B1024 == a1 )
            sub_40DD00(a1);
          sub_40D800(v1);
        }
        else if ( v6 == 3 )
        {
          v8 = 94940 * *((char *)v1 + 2);
          *((_BYTE *)v1 + 3) = 3;
          sub_486530(*((_DWORD *)v1 + 20), *v2, word_4D10BA[v8] + 2, 0, 0, 0);
          v1[8] = -1;
          sub_41B350(a1);
          sub_40E960(a1);
          if ( *((char *)v1 + 2) == dword_8703A0 )
          {
            v9 = (const char *)sub_436F10(19, 0);
            if ( v9 )
            {
              sprintf(Buffer, v9, dword_4CCA98 * v1[8] + dword_4CCAAC + 204);
              sub_40D7C0(v1, (int)&v15, (int)&v14);
              sub_437150(Buffer, 0, v15, v14);
            }
          }
        }
LABEL_15:
        if ( dword_4B1024 == a1 )
          sub_40DD00(a1);
      }
      break;
    default:
      break;
  }
  if ( v2[16] == 2 )
    ++dword_4CD4AC;
  v12 = v1[2];
  if ( v12 == -1 )
  {
    if ( !*((_BYTE *)v1 + 3) )
      ++dword_4CDB50;
  }
  else
  {
    ++dword_4D0B38[v12];
  }
  if ( dword_4B1130
    && !dword_8CAF68
    && *((char *)v1 + 2) != dword_8703A0
    && v2[16] == 3
    && *((_BYTE *)v1 + 3) != 3
    && dword_4CD11C - *((_DWORD *)v1 + 3) > 165888 )
  {
    sub_40F100(a1);
    sub_40FC00(a1);
  }
  return 0;
}
