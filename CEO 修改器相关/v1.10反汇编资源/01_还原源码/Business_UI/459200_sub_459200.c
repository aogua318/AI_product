// 函数 0x459200  sub_459200  size=0x56C  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_BYTE *sub_459200()
{
  _BYTE *result; // eax
  _BYTE *v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  char Buffer[256]; // [esp+0h] [ebp-104h] BYREF

  result = (_BYTE *)GetTickCount();
  if ( (int)&result[-dword_8C76B8] > 100 )
  {
    dword_8C76B8 = (int)result;
    v1 = (_BYTE *)dword_8C76B0;
    if ( (*(_BYTE *)(dword_8C76B0 + 18153) & 8) != 0 )
    {
      ++dword_8C5978;
    }
    else if ( (*(_BYTE *)(dword_8C76B0 + 17289) & 8) != 0 )
    {
      --dword_8C5978;
    }
    if ( dword_8C5978 )
    {
      sub_435570(3, 0);
      v2 = dword_8C5978 + atoi((const char *)(dword_8C76B0 + 17596));
      if ( v2 >= 1 )
      {
        if ( v2 > 99999 )
          v2 = 99999;
      }
      else
      {
        v2 = 1;
      }
      sprintf(Buffer, "%d", v2);
      sub_47FF50(Buffer);
      v1 = (_BYTE *)dword_8C76B0;
    }
    if ( (v1[19305] & 8) != 0 )
    {
      ++dword_8C597C;
    }
    else if ( (v1[18441] & 8) != 0 )
    {
      --dword_8C597C;
    }
    if ( dword_8C597C )
    {
      sub_435570(3, 0);
      v3 = dword_8C597C + atoi((const char *)(dword_8C76B0 + 18748));
      if ( v3 >= 1 )
      {
        if ( v3 > 99999 )
          v3 = 99999;
      }
      else
      {
        v3 = 1;
      }
      sprintf(Buffer, "%d", v3);
      sub_47FF50(Buffer);
      v1 = (_BYTE *)dword_8C76B0;
    }
    if ( (v1[20457] & 8) != 0 )
    {
      ++dword_8C5980;
    }
    else if ( (v1[19593] & 8) != 0 )
    {
      --dword_8C5980;
    }
    if ( dword_8C5980 )
    {
      sub_435570(3, 0);
      v4 = dword_8C5980 + atoi((const char *)(dword_8C76B0 + 19900));
      if ( v4 >= 1 )
      {
        if ( v4 > 99999 )
          v4 = 99999;
      }
      else
      {
        v4 = 1;
      }
      sprintf(Buffer, "%d", v4);
      sub_47FF50(Buffer);
      v1 = (_BYTE *)dword_8C76B0;
    }
    if ( (v1[21609] & 8) != 0 )
    {
      ++dword_8C5984;
    }
    else if ( (v1[20745] & 8) != 0 )
    {
      --dword_8C5984;
    }
    if ( dword_8C5984 )
    {
      sub_435570(3, 0);
      v5 = dword_8C5984 + atoi((const char *)(dword_8C76B0 + 21052));
      if ( v5 >= 1 )
      {
        if ( v5 > 9999 )
          v5 = 9999;
      }
      else
      {
        v5 = 1;
      }
      sprintf(Buffer, "%d", v5);
      sub_47FF50(Buffer);
      v1 = (_BYTE *)dword_8C76B0;
    }
    if ( (v1[22761] & 8) != 0 )
    {
      ++dword_8C5988;
    }
    else if ( (v1[21897] & 8) != 0 )
    {
      --dword_8C5988;
    }
    if ( dword_8C5988 )
    {
      sub_435570(3, 0);
      v6 = dword_8C5988 + atoi((const char *)(dword_8C76B0 + 22204));
      if ( v6 >= 1 )
      {
        if ( v6 > 9999 )
          v6 = 9999;
      }
      else
      {
        v6 = 1;
      }
      sprintf(Buffer, "%d", v6);
      sub_47FF50(Buffer);
      v1 = (_BYTE *)dword_8C76B0;
    }
    if ( (v1[29961] & 8) != 0 )
    {
      ++dword_8C598C;
    }
    else if ( (v1[29673] & 8) != 0 )
    {
      --dword_8C598C;
    }
    if ( dword_8C598C )
    {
      sub_435570(3, 0);
      v7 = dword_8C598C + atoi((const char *)(dword_8C76B0 + 30268));
      if ( v7 >= 1 )
      {
        if ( v7 > 999 )
          v7 = 999;
      }
      else
      {
        v7 = 1;
      }
      sprintf(Buffer, "%d", v7);
      sub_47FF50(Buffer);
      sprintf(Buffer, "%d", dword_4B383C);
      sub_47FF50(Buffer);
      sprintf(Buffer, "%d", v7 + dword_4B383C);
      sub_47FF50(Buffer);
      v1 = (_BYTE *)dword_8C76B0;
    }
    if ( (v1[31401] & 8) != 0 )
    {
      ++dword_8C5990;
    }
    else if ( (v1[31113] & 8) != 0 )
    {
      --dword_8C5990;
    }
    if ( dword_8C5990 )
    {
      sub_435570(3, 0);
      v8 = dword_8C5990 + atoi((const char *)(dword_8C76B0 + 31708));
      if ( v8 >= 1 )
      {
        if ( v8 > 999 )
          v8 = 999;
      }
      else
      {
        v8 = 1;
      }
      sprintf(Buffer, "%d", v8);
      sub_47FF50(Buffer);
      v1 = (_BYTE *)dword_8C76B0;
    }
    v9 = 0;
    result = v1 + 37449;
    while ( 1 )
    {
      if ( (result[1728] & 8) != 0 )
      {
        ++dword_8C5994[v9];
      }
      else if ( (*result & 8) != 0 )
      {
        --dword_8C5994[v9];
      }
      if ( dword_8C5994[v9] )
        break;
      ++v9;
      result += 288;
      if ( v9 >= 6 )
        return result;
    }
    sub_435570(3, 0);
    v10 = dword_8C5994[v9] + atoi((const char *)(288 * v9 + dword_8C76B0 + 40924));
    if ( v10 < dword_4B383C )
      v10 = dword_4B383C;
    sprintf(Buffer, "%d", v10);
    return (_BYTE *)sub_47FF50(Buffer);
  }
  return result;
}
