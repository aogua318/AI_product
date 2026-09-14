// 函数 0x4866a0  sub_4866A0  size=0x121  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4866A0(int *this, int a2, unsigned int a3, unsigned int a4, int a5)
{
  int v6; // eax
  int v7; // edi
  int v9; // [esp+4h] [ebp-18h]
  int v10; // [esp+8h] [ebp-14h]
  int v11; // [esp+Ch] [ebp-10h]
  int v12; // [esp+10h] [ebp-Ch]
  int v13; // [esp+14h] [ebp-8h]
  int v14; // [esp+18h] [ebp-4h]
  int v15; // [esp+28h] [ebp+Ch]

  v6 = *(this + 8);
  if ( a3 >= v6 * *(this + 6) || a4 >= v6 * *(this + 7) )
    return 0;
  v7 = *(this + 45) + a2 * *(this + 40);
  if ( *(__int16 *)(v7 + 2) == a3 && *(__int16 *)(v7 + 4) == a4 && *(unsigned __int8 *)(v7 + 9) == a5 )
    return 0;
  sub_4853B0(this, a2);
  if ( *(this + 16) )
    sub_485B90(this, a2);
  v10 = *(_DWORD *)(v7 + 4);
  v11 = *(_DWORD *)(v7 + 8);
  v9 = *(_DWORD *)v7;
  v13 = *(_DWORD *)(v7 + 16);
  v14 = *(_DWORD *)(v7 + 20);
  v12 = *(_DWORD *)(v7 + 12);
  *(_WORD *)(v7 + 4) = a4;
  *(_BYTE *)(v7 + 9) = a5;
  *(_WORD *)(v7 + 2) = a3;
  v15 = sub_485FE0(this, a2);
  if ( v15 )
  {
    if ( *(this + 16) )
      sub_485B90(this, a2);
    return v15;
  }
  else
  {
    *(_DWORD *)v7 = v9;
    *(_DWORD *)(v7 + 4) = v10;
    *(_DWORD *)(v7 + 8) = v11;
    *(_DWORD *)(v7 + 12) = v12;
    *(_DWORD *)(v7 + 16) = v13;
    *(_DWORD *)(v7 + 20) = v14;
    sub_485FE0(this, a2);
    return 0;
  }
}
