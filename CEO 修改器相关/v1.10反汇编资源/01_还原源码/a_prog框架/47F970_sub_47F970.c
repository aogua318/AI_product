// 函数 0x47f970  sub_47F970  size=0x7E  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_47F970(int *this)
{
  unsigned int v1; // edx
  int v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // edi
  _WORD *i; // ebx
  int v8; // [esp+Ch] [ebp-Ch]
  unsigned int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  v1 = (unsigned int)this;
  v2 = *this;
  v3 = *(__int16 *)(*this + 292);
  v4 = 0;
  v9 = v1;
  v8 = v2;
  v10 = v3;
  if ( v3 <= 0 )
    return 0;
  v5 = 0;
  for ( i = (_WORD *)(*(_DWORD *)(v2 + 296) + 4); *i != 6; i += 144 )
  {
LABEL_6:
    ++v4;
    v5 += 288;
    if ( v4 >= v3 )
      return 0;
  }
  if ( *(_WORD *)(v5 + *(_DWORD *)(v2 + 296) + 8) != (unsigned __int16)((v1 - *(_DWORD *)(v2 + 296)) / 0x120) )
  {
    v3 = v10;
    v1 = v9;
    v2 = v8;
    goto LABEL_6;
  }
  return 1;
}
