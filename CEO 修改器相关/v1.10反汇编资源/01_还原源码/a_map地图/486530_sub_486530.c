// 函数 0x486530  sub_486530  size=0x169  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_486530(int *this, int a2, int a3, int a4, char a5, char a6, int a7)
{
  __int16 *v8; // edi
  char v9; // dl
  unsigned __int8 v10; // al
  unsigned int v11; // eax
  int v13; // [esp+Ch] [ebp-18h]
  int v14; // [esp+10h] [ebp-14h]
  int v15; // [esp+14h] [ebp-10h]
  int v16; // [esp+18h] [ebp-Ch]
  int v17; // [esp+1Ch] [ebp-8h]
  int v18; // [esp+20h] [ebp-4h]
  int v19; // [esp+40h] [ebp+1Ch]

  v8 = (__int16 *)(*(this + 45) + a2 * *(this + 40));
  if ( !a7 && *(_BYTE *)(*(this + 37) + 10 * *v8 + 6) != *(_BYTE *)(*(this + 37) + 10 * a3 + 6) )
    return 0;
  if ( *v8 == a3 && v8[3] == a4 || !*(this + 16) )
  {
    v19 = 0;
  }
  else
  {
    v19 = 1;
    sub_485B90(this, a2);
  }
  v13 = *(_DWORD *)v8;
  v16 = *((_DWORD *)v8 + 3);
  v14 = *((_DWORD *)v8 + 1);
  v15 = *((_DWORD *)v8 + 2);
  v17 = *((_DWORD *)v8 + 4);
  v18 = *((_DWORD *)v8 + 5);
  sub_4853B0(this, a2);
  v9 = *((_BYTE *)v8 + 10);
  v8[3] = a4;
  v10 = *((_BYTE *)v8 + 8);
  *((_BYTE *)v8 + 10) = a6 & 1 | v9 & 0xFC | (2 * (a5 & 1));
  *v8 = a3;
  if ( v10 >= *(_BYTE *)(*(this + 37) + 10 * a3 + 6) )
    *((_BYTE *)v8 + 8) = 0;
  v11 = *(unsigned __int8 *)(*(this + 37) + 10 * (__int16)a3 + 7);
  if ( (__int16)a4 >= v11 )
    v8[3] = v11 - 1;
  if ( !sub_485FE0(this, a2) )
  {
    *(_DWORD *)v8 = v13;
    *((_DWORD *)v8 + 1) = v14;
    *((_DWORD *)v8 + 2) = v15;
    *((_DWORD *)v8 + 3) = v16;
    *((_DWORD *)v8 + 4) = v17;
    *((_DWORD *)v8 + 5) = v18;
    sub_485FE0(this, a2);
    return 0;
  }
  if ( v19 )
    sub_485B90(this, a2);
  return 1;
}
