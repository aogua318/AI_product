// 函数 0x475570  sub_475570  size=0x1FC  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__cdecl sub_475570(_DWORD *a1, int *a2, __int16 **a3)
{
  __int16 *v3; // eax
  int v4; // ebx
  __int16 *v5; // edi
  _DWORD *v6; // esi
  __int16 *v7; // ecx
  int v8; // ebx
  __int16 v9; // bx
  char v10; // al
  _DWORD *v11; // edi
  _DWORD *v12; // esi
  __int16 v14; // bx
  _DWORD *v15; // edi
  _DWORD *v16; // esi
  int *result; // eax
  int *v19; // edi
  int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int16 *v25; // [esp+Ch] [ebp-Ch]
  __int16 *v26; // [esp+10h] [ebp-8h]
  int v27; // [esp+14h] [ebp-4h]
  int *v28; // [esp+20h] [ebp+8h]
  __int16 *v29; // [esp+28h] [ebp+10h]
  int v30; // [esp+28h] [ebp+10h]
  int j; // [esp+28h] [ebp+10h]
  __int16 *v32; // [esp+28h] [ebp+10h]
  __int16 *i; // [esp+28h] [ebp+10h]

  v3 = a3[3];
  v4 = (_DWORD)v3 << (*((_BYTE *)a3 + 16) - 1);
  v5 = *a3;
  v26 = a3[5];
  v6 = a1;
  v25 = v3;
  v27 = v4;
  if ( a3[4] == (__int16 *)1 )
  {
    v32 = a3[3];
    if ( v3 )
    {
      do
      {
        v14 = *v5;
        *v6++ = (char)sub_474DE0(*v5);
        v32 = (__int16 *)((char *)v32 - 1);
        v5 += 2 * (1 << v14);
      }
      while ( v32 );
      v3 = v25;
      v4 = v27;
    }
    v15 = a1;
    v16 = &unk_8DBFA8;
    for ( i = v3; i; i = (__int16 *)((char *)i - 1) )
    {
      if ( *v15++ )
        *v16++ = (char)sub_474E40(2);
    }
  }
  else
  {
    v7 = a3[5];
    v29 = v7;
    if ( v26 )
    {
      do
      {
        v8 = *v5;
        *v6 = (char)sub_474DE0(v8);
        v6[1] = (char)sub_474DE0(v8);
        v6 += 2;
        v29 = (__int16 *)((char *)v29 - 1);
        v5 += 2 * (1 << v8);
      }
      while ( v29 );
      v3 = v25;
      v4 = v27;
      v7 = v26;
    }
    v30 = (char *)v3 - (char *)v7;
    if ( v3 != v7 )
    {
      do
      {
        v9 = *v5;
        v10 = sub_474DE0(*v5);
        *v6 = v10;
        v6[1] = v10;
        v6 += 2;
        --v30;
        v5 += 2 * (1 << v9);
      }
      while ( v30 );
      v4 = v27;
    }
    v11 = a1;
    v12 = &unk_8DBFA8;
    for ( j = v4; j; --j )
    {
      if ( *v11++ )
        *v12++ = (char)sub_474E40(2);
    }
  }
  result = a1;
  v19 = (int *)&unk_8DBFA8;
  if ( v4 )
  {
    while ( 1 )
    {
      v21 = *result++;
      v28 = result;
      if ( v21 )
      {
        v22 = *v19++;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( v23 == 1 )
            {
              result = (int *)sub_474E40(6);
              *a2 = (int)result;
            }
            else
            {
              *a2 = sub_474E40(6);
              result = (int *)sub_474E40(6);
            }
            a2[1] = (int)result;
          }
          else
          {
            v24 = sub_474E40(6);
            *a2 = v24;
            a2[1] = v24;
            result = (int *)sub_474E40(6);
          }
        }
        else
        {
          *a2 = sub_474E40(6);
          a2[1] = sub_474E40(6);
          result = (int *)sub_474E40(6);
        }
        a2[2] = (int)result;
        a2 += 3;
      }
      if ( !--v4 )
        break;
      result = v28;
    }
  }
  return result;
}
