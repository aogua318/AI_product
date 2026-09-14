// 函数 0x40e830  sub_40E830  size=0x87  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_40E830(_BYTE *this)
{
  int *v1; // edi
  int v2; // ecx
  int v3; // ebx
  _DWORD *v4; // esi
  int v5; // eax
  int v8; // [esp+10h] [ebp-8h]
  int v9; // [esp+14h] [ebp-4h]
  int v10; // [esp+14h] [ebp-4h]

  v1 = (int *)(*(_DWORD *)dword_4C4434 + 72 * *(__int16 *)this + 4);
  v2 = 0;
  v3 = 0;
  v4 = this + 16;
  v9 = 7;
  do
  {
    v5 = *v4 & 0x3FFFFFF;
    if ( v5 > *v1 )
      v5 = *v1;
    v2 += v5;
    v3 += *v1;
    v4 += 2;
    ++v1;
    --v9;
  }
  while ( v9 );
  v8 = v3;
  v10 = v2;
  if ( !v3 )
    v8 = 1;
  if ( *(this + 2) == 6 )
    v10 = 2 * v2;
  return (int)((double)v10 * 100.0 / (double)v8);
}
