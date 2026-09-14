// 函数 0x45b890  sub_45B890  size=0x132  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_45B890(int a1, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // esi
  const char *v6; // eax
  int v7; // [esp-8h] [ebp-110h]
  char Buffer[256]; // [esp+4h] [ebp-104h] BYREF

  if ( a2 == 69 )
  {
    result = dword_8CC73C;
    if ( *(_BYTE *)(1048 * dword_8CC73C + *(_DWORD *)dword_8CC738 + 64) )
    {
      sub_47C920(dword_8CC73C);
      goto LABEL_4;
    }
  }
  else
  {
    result = a2 - 70;
    if ( a2 == 70 )
    {
      sub_47C920(-1);
LABEL_4:
      sub_47C930(v4, v3);
      return sub_435570(1, 0);
    }
    if ( a2 < 59 || a2 > 68 )
    {
      if ( a2 >= 19 && a2 <= 28 )
      {
        dword_8CC73C = a2 - 19;
        return sub_435570(1, 0);
      }
    }
    else
    {
      sub_435570(1, 0);
      v5 = 1048 * (a2 - 59);
      result = sub_45B6B0((void *)(v5 + *(_DWORD *)dword_8CC738));
      if ( result )
      {
        sub_423550((void *)(*(_DWORD *)dword_8CC738 + v5), a2 - 59);
        dword_8CC73C = a2 - 59;
        sub_45B770();
        v7 = dword_8CC73C;
        v6 = (const char *)sub_47C740("save\\slot");
        sprintf(Buffer, "%s%d", v6, v7);
        return sub_469DD0(Buffer);
      }
    }
  }
  return result;
}
