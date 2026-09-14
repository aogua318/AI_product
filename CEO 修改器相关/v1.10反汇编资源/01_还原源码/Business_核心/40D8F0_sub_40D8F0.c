// 函数 0x40d8f0  sub_40D8F0  size=0xDF  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_40D8F0(_DWORD *this)
{
  int v1; // esi
  _DWORD *v2; // ecx
  int v3; // edx
  int v4; // edi
  int result; // eax
  int v6; // [esp+20h] [ebp-8h] BYREF
  int v7; // [esp+24h] [ebp-4h] BYREF

  v1 = *(_DWORD *)dword_4C4434 + 72 * *(__int16 *)this;
  sub_40D7C0(this, (int)&v7, (int)&v6);
  v7 >>= 5;
  v6 >>= 5;
  v2 = (_DWORD *)(*(_DWORD *)dword_4C5DF4 + 9208 * (v7 + v6 * dword_4C5DEC));
  v3 = v2[2] + v2[1] + *v2 + v2[3];
  v4 = *(_DWORD *)(v1 + 64)
     * (*(__int16 *)(v1 + 58) + *(__int16 *)(v1 + 56) + *(__int16 *)(v1 + 62) + *(__int16 *)(v1 + 60));
  *v2 -= *(__int16 *)(v1 + 56);
  v2[1] -= *(__int16 *)(v1 + 58);
  v2[2] -= *(__int16 *)(v1 + 60);
  v2[3] -= *(__int16 *)(v1 + 62);
  v2[4] = (v3 * v2[4] - v4) / (v2[3] + v2[1] + *v2 + v2[2] + 1);
  --dword_4D0470;
  result = v2[2] + v2[1] + *v2 + v2[3];
  dword_4D0478 -= result;
  return result;
}
