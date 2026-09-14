// 函数 0x446880  sub_446880  size=0x9FE  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_446880()
{
  __int16 *v0; // ebx
  int *v1; // edi
  int v2; // esi
  int v3; // eax
  char Buffer[256]; // [esp+0h] [ebp-104h] BYREF

  if ( dword_8AA3E8 )
  {
    v0 = (__int16 *)(dword_4C43DC + dword_4B1024 * dword_4C43C8);
    v1 = (int *)(*(_DWORD *)dword_4C4434 + 72 * *v0);
    if ( *((char *)v0 + 3) >= 4 )
    {
      sub_47FF50(v1 + 10);
      sub_438320(v1[1], Buffer, 6);
      if ( strcmp((const char *)(dword_8AA518 + 8380), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(v1[2], Buffer, 6);
      if ( strcmp((const char *)(dword_8AA518 + 8668), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(v1[3], Buffer, 6);
      if ( strcmp((const char *)(dword_8AA518 + 8956), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(v1[4], Buffer, 6);
      if ( strcmp((const char *)(dword_8AA518 + 9244), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(v1[5], Buffer, 6);
      if ( strcmp((const char *)(dword_8AA518 + 9532), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(v1[6], Buffer, 6);
      if ( strcmp((const char *)(dword_8AA518 + 9820), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(v1[7], Buffer, 6);
      if ( strcmp((const char *)(dword_8AA518 + 10108), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(*((_DWORD *)v0 + 4) & 0x3FFFFFF, Buffer, 6);
      if ( strcmp((const char *)(dword_8AA518 + 4348), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(*((_DWORD *)v0 + 6) & 0x3FFFFFF, Buffer, 6);
      if ( strcmp((const char *)(dword_8AA518 + 4636), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(*((_DWORD *)v0 + 8) & 0x3FFFFFF, Buffer, 6);
      if ( strcmp((const char *)(dword_8AA518 + 4924), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(*((_DWORD *)v0 + 10) & 0x3FFFFFF, Buffer, 6);
      if ( strcmp((const char *)(dword_8AA518 + 5212), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(*((_DWORD *)v0 + 12) & 0x3FFFFFF, Buffer, 6);
      if ( strcmp((const char *)(dword_8AA518 + 5500), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(*((_DWORD *)v0 + 14) & 0x3FFFFFF, Buffer, 6);
      if ( strcmp((const char *)(dword_8AA518 + 5788), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(*((_DWORD *)v0 + 16) & 0x3FFFFFF, Buffer, 6);
      if ( strcmp((const char *)(dword_8AA518 + 6076), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(*((_DWORD *)v0 + 5), Buffer, 5);
      if ( strcmp((const char *)(dword_8AA518 + 10684), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(*((_DWORD *)v0 + 7), Buffer, 5);
      if ( strcmp((const char *)(dword_8AA518 + 12700), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(*((_DWORD *)v0 + 9), Buffer, 5);
      if ( strcmp((const char *)(dword_8AA518 + 12988), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(*((_DWORD *)v0 + 11), Buffer, 5);
      if ( strcmp((const char *)(dword_8AA518 + 13276), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(*((_DWORD *)v0 + 13), Buffer, 5);
      if ( strcmp((const char *)(dword_8AA518 + 13564), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(*((_DWORD *)v0 + 15), Buffer, 5);
      if ( strcmp((const char *)(dword_8AA518 + 13852), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(*((_DWORD *)v0 + 17), Buffer, 5);
      v2 = dword_8AA518;
      if ( strcmp((const char *)(dword_8AA518 + 14140), Buffer) )
      {
        sub_47FF50(Buffer);
        v2 = dword_8AA518;
      }
      if ( *(_DWORD *)(v2 + 16448) != 100 )
        sub_480A50(100);
      if ( *(_DWORD *)(dword_8AA518 + 16452) != sub_40E830(v0) )
      {
        v3 = sub_40E830(v0);
        sub_480A80(v3);
      }
      _itoa(10 * ((dword_4CD11C - *((_DWORD *)v0 + 3)) / 1536), Buffer, 10);
      if ( strcmp((const char *)(dword_8AA518 + 15292), Buffer) )
        sub_47FF50(Buffer);
      sub_438320(*((_DWORD *)v0 + 18), Buffer, 10);
      if ( strcmp((const char *)(dword_8AA518 + 14716), Buffer) )
        sub_47FF50(Buffer);
    }
    else
    {
      sub_4472C0(0, 0);
    }
  }
}
