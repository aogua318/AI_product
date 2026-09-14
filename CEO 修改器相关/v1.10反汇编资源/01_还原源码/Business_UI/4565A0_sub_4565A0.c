// 函数 0x4565a0  sub_4565A0  size=0x32F  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4565A0()
{
  int v0; // ecx
  signed int v1; // edi
  int v2; // ebx
  int v3; // esi
  char *v4; // edi
  char *v5; // eax
  int v6; // eax
  signed int v8; // [esp+4h] [ebp-10Ch]
  signed int v9; // [esp+8h] [ebp-108h]
  char Buffer[256]; // [esp+Ch] [ebp-104h] BYREF

  v0 = dword_8C5968;
  v1 = *(_DWORD *)(dword_8C5968 + 44080);
  v9 = v1;
  v8 = v1 + 12;
  if ( !__OFSUB__(v1, v1 + 12) )
  {
    v2 = 56 * v1;
    v3 = 12960;
    while ( 1 )
    {
      if ( v1 >= (int)dword_8C462C )
      {
        sub_47FF50(byte_4A2869);
        sub_47FF50(byte_4A2869);
        sub_47FF50(byte_4A2869);
        sub_47FF50(byte_4A2869);
        sub_47FF50(byte_4A2869);
        sub_47FF50(byte_4A2869);
        sub_47FF50(byte_4A2869);
        sub_47FF50(byte_4A2869);
        sub_47FF50(byte_4A2869);
      }
      else
      {
        v4 = (char *)dword_8C4628 + v2;
        v5 = (char *)&unk_4D10B8 + 189880 * *(_DWORD *)((char *)dword_8C4628 + v2);
        *(_WORD *)(v3 + v0 - 5742) = word_87094E[*((__int16 *)v5 + 1)];
        sub_47FF50(v5 + 16);
        sub_438190(*((_QWORD *)v4 + 1), Buffer, 10);
        sub_47FF50(Buffer);
        sub_438190(*((_QWORD *)v4 + 2), Buffer, 10);
        sub_47FF50(Buffer);
        sub_438190(*((_QWORD *)v4 + 3), Buffer, 10);
        sub_47FF50(Buffer);
        sub_438190(*((_QWORD *)v4 + 4), Buffer, 10);
        sub_47FF50(Buffer);
        sub_438320(*((_DWORD *)v4 + 10), Buffer, 4);
        sub_47FF50(Buffer);
        sub_438320(*((_DWORD *)v4 + 11), Buffer, 4);
        sub_47FF50(Buffer);
        sub_438320(*((_DWORD *)v4 + 12), Buffer, 4);
        sub_47FF50(Buffer);
        sub_438320(*((_DWORD *)v4 + 13), Buffer, 4);
        sub_47FF50(Buffer);
        v1 = v9;
      }
      ++v1;
      v3 += 288;
      v2 += 56;
      v9 = v1;
      if ( v1 >= v8 )
        break;
      v0 = dword_8C5968;
    }
  }
  v6 = sub_464D00(110, 143, 127, 423);
  return sub_47C950(v6);
}
