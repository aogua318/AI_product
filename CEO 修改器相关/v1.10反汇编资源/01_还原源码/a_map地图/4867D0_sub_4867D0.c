// 函数 0x4867d0  sub_4867D0  size=0x106  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_4867D0(int *this, int a2, int a3)
{
  __int16 *v5; // edi
  int v6; // ecx
  int i; // eax
  int v9; // [esp+Ch] [ebp-18h]
  int v10; // [esp+10h] [ebp-14h]
  int v11; // [esp+14h] [ebp-10h]
  int v12; // [esp+18h] [ebp-Ch]
  int v13; // [esp+1Ch] [ebp-8h]
  int v14; // [esp+20h] [ebp-4h]
  int v15; // [esp+2Ch] [ebp+8h]
  int v16; // [esp+30h] [ebp+Ch]

  v5 = (__int16 *)(*(this + 45) + a2 * *(this + 40));
  if ( *((unsigned __int8 *)v5 + 8) == a3 )
    return 0;
  v9 = *(_DWORD *)v5;
  v10 = *((_DWORD *)v5 + 1);
  v11 = *((_DWORD *)v5 + 2);
  v12 = *((_DWORD *)v5 + 3);
  v13 = *((_DWORD *)v5 + 4);
  v14 = *((_DWORD *)v5 + 5);
  sub_4853B0(this, a2);
  v6 = *(unsigned __int8 *)(*(this + 37) + 10 * *v5 + 6);
  v15 = v6;
  if ( *(this + 16) )
  {
    sub_485B90(this, a2);
    v6 = v15;
  }
  for ( i = a3; i < 0; i += v6 )
    ;
  for ( ; i >= v6; i -= v6 )
    ;
  *((_BYTE *)v5 + 8) = i;
  v16 = sub_485FE0(this, a2);
  if ( v16 )
  {
    if ( *(this + 16) )
      sub_485B90(this, a2);
    return v16;
  }
  else
  {
    *(_DWORD *)v5 = v9;
    *((_DWORD *)v5 + 1) = v10;
    *((_DWORD *)v5 + 2) = v11;
    *((_DWORD *)v5 + 3) = v12;
    *((_DWORD *)v5 + 4) = v13;
    *((_DWORD *)v5 + 5) = v14;
    sub_485FE0(this, a2);
    return 0;
  }
}
