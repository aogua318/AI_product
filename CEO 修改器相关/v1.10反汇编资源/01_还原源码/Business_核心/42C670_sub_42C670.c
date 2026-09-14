// 函数 0x42c670  sub_42C670  size=0xB0  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_42C670(int a1, int a2)
{
  int v2; // ecx
  int v3; // esi
  int v4; // edx
  int v5; // ebx
  int result; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // edi
  bool v10; // zf
  signed int v11; // eax
  int v12; // [esp+8h] [ebp-4h]
  int v13; // [esp+14h] [ebp+8h]

  v3 = dword_4CCAAC + a1 * dword_4CCA98;
  v4 = sub_4640D0(v2) % 10;
  v5 = *(__int16 *)(v3 + 760);
  result = -1;
  v12 = -1;
  v13 = v4 - 1;
  if ( v5 != -1 )
  {
    do
    {
      v7 = dword_870868 + v5 * dword_870854;
      if ( *(_WORD *)(v7 + 12) != 0xFFFF && *(__int16 *)(v7 + 8) == a2 && (*(_BYTE *)(v7 + 14) & 4) == 0 )
      {
        v9 = (*(_BYTE *)(v7 + 15) != 0 ? 0x64 : 0) + sub_434650(dword_870868 + v5 * dword_870854);
        if ( v9 > v13 )
          goto LABEL_10;
        if ( v9 == v13 )
        {
          v11 = sub_4640D0(v8) & 0x80000001;
          v10 = v11 == 0;
          if ( v11 < 0 )
            v10 = (((_BYTE)v11 - 1) | 0xFFFFFFFE) == -1;
          if ( !v10 )
          {
LABEL_10:
            v13 = v9;
            v12 = v5;
          }
        }
      }
      v5 = *(__int16 *)(v7 + 4);
    }
    while ( v5 != -1 );
    return v12;
  }
  return result;
}
