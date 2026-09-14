// 函数 0x40d800  sub_40D800  size=0xE4  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_40D800(_DWORD *this)
{
  int v1; // esi
  int v2; // ecx
  _DWORD *v3; // ecx
  int v4; // edx
  int v5; // edi
  int result; // eax
  int v7; // [esp+Ch] [ebp-20h]
  int v8; // [esp+10h] [ebp-1Ch]
  int v9; // [esp+14h] [ebp-18h]
  int v10; // [esp+18h] [ebp-14h]
  int v11; // [esp+24h] [ebp-8h] BYREF
  int v12; // [esp+28h] [ebp-4h] BYREF

  v1 = *(_DWORD *)dword_4C4434 + 72 * *(__int16 *)this;
  sub_40D7C0(this, (int)&v12, (int)&v11);
  v2 = (v12 >> 5) + (v11 >> 5) * dword_4C5DEC;
  v12 >>= 5;
  v3 = (_DWORD *)(*(_DWORD *)dword_4C5DF4 + 9208 * v2);
  v11 >>= 5;
  v8 = v3[3];
  v4 = v8 + v3[2] + v3[1] + *v3;
  v7 = *(_DWORD *)(v1 + 64);
  v9 = v3[2];
  v10 = v3[1];
  v5 = *(__int16 *)(v1 + 58) + *(__int16 *)(v1 + 56) + *(__int16 *)(v1 + 62) + *(__int16 *)(v1 + 60);
  *v3 += *(__int16 *)(v1 + 56);
  v3[1] = v10 + *(__int16 *)(v1 + 58);
  v3[2] = v9 + *(__int16 *)(v1 + 60);
  v3[3] = v8 + *(__int16 *)(v1 + 62);
  result = (v7 * v5 + v4 * v3[4]) / (v4 + v5);
  v3[4] = result;
  ++dword_4D0470;
  dword_4D0478 += v3[2] + v3[1] + *v3 + v3[3];
  return result;
}
