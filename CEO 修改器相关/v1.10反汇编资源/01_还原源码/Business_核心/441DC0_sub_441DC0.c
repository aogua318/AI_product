// 函数 0x441dc0  sub_441DC0  size=0x2E6  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_BYTE *__cdecl sub_441DC0(int a1)
{
  _BYTE *result; // eax
  _BYTE *v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // esi
  char Buffer[256]; // [esp+8h] [ebp-104h] BYREF

  result = (_BYTE *)GetTickCount();
  v2 = result;
  if ( !dword_8EED90 )
  {
    dword_8A696C = 0;
    return result;
  }
  v3 = 1;
  if ( !dword_8A696C )
  {
    dword_8A696C = 1;
    dword_8A6968 = (int)result;
  }
  result = *(_BYTE **)(a1 + 296);
  if ( (result[6057] & 8) != 0 )
  {
    sub_435570(3, 0);
    v4 = (int)&v2[-dword_8A6968 - 500] / 100;
    if ( v4 > 0 )
      v3 = v4 * v4;
    result = (_BYTE *)atoi((const char *)(*(_DWORD *)(a1 + 296) + 15004));
    v5 = (int)&result[-v3];
    if ( (int)&result[-v3] < 0 )
      v5 = 0;
    if ( (_BYTE *)v5 != result )
    {
LABEL_11:
      sub_415610((char *)(dword_4CC8D0 + dword_4B37E0 * dword_4CC8BC), 4 * v5);
      _itoa(v5, Buffer, 10);
      sub_47FF50(Buffer);
      return (_BYTE *)sub_4418B0();
    }
  }
  else if ( (result[6345] & 8) != 0 )
  {
    sub_435570(3, 0);
    v6 = (int)&v2[-dword_8A6968 - 500] / 100;
    if ( v6 <= 0 )
      v7 = 1;
    else
      v7 = v6 * v6;
    result = (_BYTE *)atoi((const char *)(*(_DWORD *)(a1 + 296) + 15004));
    v5 = (int)&result[v7];
    if ( v5 > 99999999 )
      v5 = 99999999;
    if ( (_BYTE *)v5 != result )
      goto LABEL_11;
  }
  else
  {
    if ( (result[9225] & 8) != 0 )
    {
      sub_435570(3, 0);
      v8 = (int)&v2[-dword_8A6968 - 500] / 100;
      if ( v8 > 0 )
        v3 = v8 * v8;
      result = (_BYTE *)atoi((const char *)(*(_DWORD *)(a1 + 296) + 15292));
      v9 = (int)&result[-v3];
      if ( (int)&result[-v3] < 0 )
        v9 = 0;
    }
    else
    {
      if ( (result[9513] & 8) == 0 )
        return result;
      sub_435570(3, 0);
      v10 = (int)&v2[-dword_8A6968 - 500] / 100;
      if ( v10 <= 0 )
        v11 = 1;
      else
        v11 = v10 * v10;
      result = (_BYTE *)atoi((const char *)(*(_DWORD *)(a1 + 296) + 15292));
      v9 = (int)&result[v11];
      if ( v9 > 99999999 )
        v9 = 99999999;
    }
    if ( (_BYTE *)v9 != result )
    {
      sub_415510((char *)(dword_4CC8D0 + dword_4B37E0 * dword_4CC8BC), v9);
      _itoa(v9, Buffer, 10);
      sub_47FF50(Buffer);
      return (_BYTE *)sub_4418B0();
    }
  }
  return result;
}
