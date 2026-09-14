// 函数 0x40e960  sub_40E960  size=0x1B7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40E960(int a1)
{
  int v1; // edi
  char *v2; // eax
  int v3; // esi
  __int16 v4; // cx
  char *v5; // eax
  int v7; // [esp+8h] [ebp-10Ch] BYREF
  int v8; // [esp+Ch] [ebp-108h] BYREF
  char Buffer[256]; // [esp+10h] [ebp-104h] BYREF

  v1 = dword_4C43DC + a1 * dword_4C43C8;
  v2 = (char *)&unk_4D10B8 + 189880 * *(char *)(v1 + 2);
  switch ( *(_BYTE *)(v1 + 7) )
  {
    case 0:
      v3 = *(_DWORD *)dword_4D1088 + 264;
      sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 272), v2 + 16);
      break;
    case 1:
      v3 = *(_DWORD *)dword_4D1088 + 528;
      sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 536), v2 + 16);
      break;
    case 2:
      v3 = *(_DWORD *)dword_4D1088 + 616;
      sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 624), v2 + 16);
      break;
    case 3:
      v3 = *(_DWORD *)dword_4D1088 + 352;
      sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 360), v2 + 16);
      break;
    case 4:
      v3 = *(_DWORD *)dword_4D1088 + 440;
      sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 448), v2 + 16);
      break;
    case 5:
      v4 = *(_WORD *)(v1 + 4);
      v3 = *(_DWORD *)dword_4D1088 + 176;
      v5 = v2 + 16;
      if ( v4 == -1 )
        sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 184), v5, byte_4A2869);
      else
        sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 184), v5, *(_DWORD *)dword_870814 + 72 * v4);
      break;
    default:
      v3 = v8;
      break;
  }
  sub_40D7C0((_DWORD *)v1, (int)&v8, (int)&v7);
  return sub_42B930(v8, v7, *(char *)(v1 + 2), Buffer, v3);
}
