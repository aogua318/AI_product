// 函数 0x464bc0  sub_464BC0  size=0x11E  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __thiscall sub_464BC0(int *this, int *a2)
{
  int v2; // ebx
  _DWORD *v4; // ecx
  _DWORD *v5; // ecx
  int v6; // ebx
  int v7; // ebx
  _DWORD *v8; // ecx
  _DWORD *v9; // ecx
  int v10; // esi
  _DWORD *v11; // ecx
  int v12; // edi
  bool v13; // cc
  int v14; // ecx
  int v15; // eax
  bool v17; // cc
  int v18; // [esp+Ch] [ebp-14h]
  int v19; // [esp+10h] [ebp-10h]
  int v20; // [esp+14h] [ebp-Ch]
  int v21; // [esp+18h] [ebp-8h]
  int v22; // [esp+1Ch] [ebp-4h]

  v2 = a2[1];
  v19 = v2;
  v21 = *a2;
  if ( sub_464B90(this, *a2, v2) )
    return 1;
  if ( sub_464B90(v4, a2[2], v2) )
    return 1;
  v6 = a2[3];
  v18 = v6;
  if ( sub_464B90(v5, v21, v6) )
    return 1;
  if ( sub_464B90(this, a2[2], v6) )
    return 1;
  v7 = *(this + 1);
  v20 = *this;
  if ( sub_464B90(a2, *this, v7) )
    return 1;
  v22 = *(this + 2);
  if ( sub_464B90(v8, v22, v7) )
    return 1;
  v10 = *(this + 3);
  if ( sub_464B90(v9, v20, v10) || sub_464B90(v11, v22, v10) )
    return 1;
  v12 = a2[2];
  v13 = v21 <= v20;
  if ( v21 < v20 )
  {
    if ( v12 > v22 )
      goto LABEL_14;
    v13 = v21 <= v20;
  }
  if ( v13 || v12 >= v22 )
  {
    v14 = v19;
    v15 = v18;
    goto LABEL_20;
  }
LABEL_14:
  v14 = v19;
  if ( v19 > v7 && v19 < v10 )
    return 1;
  v15 = v18;
  if ( v18 > v7 && v18 < v10 )
    return 1;
LABEL_20:
  v17 = v14 <= v7;
  if ( v14 < v7 )
  {
    if ( v15 > v10 )
      return v21 > v20 && v21 < v22 || v12 > v20 && v12 < v22;
    v17 = v14 <= v7;
  }
  if ( !v17 && v15 < v10 )
    return v21 > v20 && v21 < v22 || v12 > v20 && v12 < v22;
  return 0;
}
