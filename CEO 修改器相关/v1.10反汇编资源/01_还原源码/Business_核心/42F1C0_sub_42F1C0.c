// 函数 0x42f1c0  sub_42F1C0  size=0x8F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_42F1C0(_DWORD *this, int a2)
{
  int v3; // ebx
  BOOL v4; // ecx
  int v5; // edi
  unsigned int v6; // ecx
  int v7; // esi
  int v10; // [esp+10h] [ebp-4h]
  int v11; // [esp+1Ch] [ebp+8h]

  v3 = 0;
  v4 = a2 < 0;
  v5 = byte_4CE045;
  v11 = 3;
  v10 = v4 ? 0 : a2;
  v6 = byte_4CE045 - 14;
  do
  {
    v7 = v5;
    if ( v5 > 13 )
      v7 = v5 - 13 * (v6 / 0xD + 1);
    if ( v7 < 0 )
      v7 += 13 * ((-1 - v7) / 0xDu) + 13;
    --v5;
    v3 += *(this + 106 * v7 + v10 + 7740);
    --v6;
    --v11;
  }
  while ( v11 );
  return v3 / 3;
}
