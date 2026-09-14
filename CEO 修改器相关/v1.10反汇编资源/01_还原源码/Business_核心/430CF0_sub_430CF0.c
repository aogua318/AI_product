// 函数 0x430cf0  sub_430CF0  size=0x172  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char __thiscall sub_430CF0(__int16 *this, int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // ebx
  __int16 v6; // ax
  __int16 v7; // dx
  __int16 v8; // ax
  int v9; // eax
  _WORD *v10; // esi
  int v11; // ebx
  int v12; // ecx
  int v14; // [esp+Ch] [ebp-8h]
  int v15; // [esp+Ch] [ebp-8h]
  int v16; // [esp+10h] [ebp-4h] BYREF

  v3 = dword_4CCAAC + dword_4CCA98 * *this;
  v4 = *(this + 3);
  v5 = dword_89E57C + a2 * dword_89E568;
  v14 = *(unsigned __int8 *)(v4 * *(_DWORD *)(v3 + 160) + *(_DWORD *)(v3 + 180) + 8);
  *(this + 14) = a2;
  sub_483850(
    *(__int16 *)(v4 * *(_DWORD *)(v3 + 160) + *(_DWORD *)(v3 + 180) + 2),
    *(__int16 *)(v4 * *(_DWORD *)(v3 + 160) + *(_DWORD *)(v3 + 180) + 4),
    &v16,
    &a2);
  v6 = sub_486480(382, v16, a2, v14, 0, 0, 0, 0, 0);
  v7 = *(this + 16);
  *(this + 13) = v6;
  sub_483BD0(v6, 9, v7);
  sub_483D50(*(this + 13), 0, 2, &v16, &a2);
  v8 = sub_486480(381, v16, a2, v14, 0, 0, 0, 0, 0);
  *(this + 12) = v8;
  sub_483BD0(v8, 9, *(this + 16));
  LOWORD(v9) = *this;
  if ( *this == *(_WORD *)(v5 + 4) )
  {
    *((_BYTE *)this + 30) = 1;
  }
  else
  {
    *((_BYTE *)this + 30) = 2;
    v10 = this + 4;
    v11 = v5 - (_DWORD)this;
    v15 = 4;
    do
    {
      v9 = *(__int16 *)((char *)v10 + v11);
      *v10 = v9;
      if ( v9 != -1 )
      {
        v12 = dword_4D0BAC + v9 * dword_4D0B98;
        *(_WORD *)(v12 + 4) = *this;
        LOBYTE(v9) = sub_421C70((unsigned __int8 *)v12, 3, *(this + 3));
      }
      ++v10;
      --v15;
    }
    while ( v15 );
  }
  return v9;
}
