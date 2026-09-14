// 函数 0x42c590  sub_42C590  size=0xD9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_42C590(int this)
{
  __int16 v2; // ax
  int v3; // ecx
  int v4; // esi
  int v5; // edi
  int v6; // eax
  int v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h] BYREF
  int v10; // [esp+14h] [ebp-4h] BYREF

  if ( (*(_BYTE *)(this + 11) & 0xF) == 2 )
    goto LABEL_6;
  v2 = *(_WORD *)(this + 26);
  if ( v2 == -1 )
  {
    if ( *(_WORD *)(this + 28) != 0xFFFF )
    {
      sub_430CA0(&v9, &v10);
      goto LABEL_7;
    }
LABEL_6:
    sub_42C290((__int16 *)this, (int)&v9, (int)&v10);
    goto LABEL_7;
  }
  sub_426BF0((__int16 *)(dword_4D0C84 + dword_4D0C70 * v2), (int)&v9, (int)&v10);
LABEL_7:
  v4 = sub_4640D0(v3) % 10;
  v8 = sub_4640D0(10) % 10;
  v5 = sub_4640D0(10) % 10;
  v6 = sub_4640D0(10);
  return sub_42C450((__int16 *)this, v9 + v4 - v8, v10 + v5 - v6 % 10, 0, 1);
}
