// 函数 0x40fc00  sub_40FC00  size=0x1D9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40FC00(int a1)
{
  int v1; // esi
  int result; // eax
  double *v3; // edi
  _WORD *i; // ecx
  int v5; // eax
  __int16 v6; // ax
  char *v7; // edi
  int v8; // ebx
  __int16 v9; // di
  int v10; // [esp+14h] [ebp-118h] BYREF
  int v11; // [esp+18h] [ebp-114h] BYREF
  int v12; // [esp+1Ch] [ebp-110h]
  int v13; // [esp+20h] [ebp-10Ch]
  int v14; // [esp+24h] [ebp-108h]
  char Buffer[256]; // [esp+28h] [ebp-104h] BYREF

  v1 = dword_4C43DC + a1 * dword_4C43C8;
  result = 0;
  v3 = (double *)((char *)&unk_4D10B8 + 189880 * *(char *)(v1 + 2));
  v14 = 0;
  if ( dword_4C4438 > 0 )
  {
    for ( i = (_WORD *)(*(_DWORD *)dword_4C4434 + 2); *i != *(_WORD *)v1; i += 36 )
    {
      if ( ++result >= dword_4C4438 )
      {
        v14 = result;
        return result;
      }
    }
    v14 = result;
    v13 = sub_40F570((_DWORD *)(dword_4C43DC + a1 * dword_4C43C8), 1);
    v5 = sub_40F570((_DWORD *)v1, 0) - *(_DWORD *)(v1 + 92);
    v12 = v5;
    if ( v5 <= 0 )
    {
      if ( v5 < 0 )
        v3[1405] = (double)v12 + v3[1405];
    }
    else
    {
      v3[1380] = (double)v12 + v3[1380];
    }
    sub_42EDA0((double)v13);
    v6 = *(_WORD *)(v1 + 4);
    v7 = (char *)(v3 + 2);
    if ( v6 == -1 )
    {
      v8 = *(_DWORD *)dword_4D1088 + 1584;
      sprintf(Buffer, (const char *const)(*(_DWORD *)dword_4D1088 + 1592), v7, v13);
    }
    else
    {
      v8 = *(_DWORD *)dword_4D1088 + 1496;
      sprintf(
        Buffer,
        (const char *const)(*(_DWORD *)dword_4D1088 + 1504),
        v7,
        v13,
        *(unsigned __int8 *)(v1 + 6),
        *(_DWORD *)dword_870814 + 72 * v6);
    }
    sub_40D7C0((_DWORD *)v1, (int)&v11, (int)&v10);
    sub_42B930(v11, v10, *(char *)(v1 + 2), Buffer, v8);
    v9 = v14;
    result = sub_486530(*(_DWORD *)(v1 + 80), *(__int16 *)(*(_DWORD *)dword_4C4434 + 72 * v14), 0, 0, 0, 0);
    *(_WORD *)v1 = v9;
    *(_WORD *)(v1 + 2) = 255;
    *(_DWORD *)(v1 + 12) = dword_4CD11C;
  }
  return result;
}
