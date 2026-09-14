// 函数 0x47f700  sub_47F700  size=0x172  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__thiscall sub_47F700(int this)
{
  int *result; // eax
  int *v3; // eax
  __int16 v4; // bx
  int *v5; // eax
  int v6; // edi
  char v7; // bl
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  __int16 v11; // bx
  int *v12; // eax
  int v13; // edi
  char v14; // bl
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  __int16 v18; // bx
  int *v19; // eax
  int v20; // edi
  char v21; // bl
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  __int16 v25; // si
  int v26; // [esp+4h] [ebp-10h] BYREF
  int v27; // [esp+8h] [ebp-Ch]
  int v28; // [esp+Ch] [ebp-8h]
  int v29; // [esp+10h] [ebp-4h]

  sub_464B60(&v26);
  result = sub_47F430((__int16 *)this);
  if ( *result <= *(_DWORD *)(dword_8F2ABC + 28)
    && result[1] <= *(_DWORD *)(dword_8F2ABC + 32)
    && result[2] >= *(_DWORD *)(dword_8F2ABC + 20) )
  {
    result = (int *)result[3];
    if ( (int)result >= *(_DWORD *)(dword_8F2ABC + 24) )
    {
      v3 = sub_47F430((__int16 *)this);
      v4 = *(_WORD *)(this + 40);
      v26 = *v3;
      v27 = v3[1];
      v28 = v3[2];
      v29 = v3[3];
      sub_468D20((int *)dword_8F2ABC, v26, v27, v28 - v26, v29 - v27, v4);
      v5 = sub_47F470((__int16 *)this);
      v6 = *v5;
      v7 = *(_BYTE *)(this + 8);
      v26 = *v5;
      v8 = v5[1];
      v27 = v8;
      v9 = v5[2];
      v28 = v9;
      v10 = v5[3];
      v29 = v10;
      if ( (v7 & 1) == 0 )
        goto LABEL_8;
      if ( (v7 & 8) != 0 )
        v11 = *(_WORD *)(this + 38);
      else
LABEL_8:
        v11 = *(_WORD *)(this + 36);
      sub_468D20((int *)dword_8F2ABC, v6, v8, v9 - v6, v10 - v8, v11);
      v12 = sub_47F530((__int16 *)this);
      v13 = *v12;
      v14 = *(_BYTE *)(this + 8);
      v26 = *v12;
      v15 = v12[1];
      v27 = v15;
      v16 = v12[2];
      v28 = v16;
      v17 = v12[3];
      v29 = v17;
      if ( (v14 & 2) == 0 )
        goto LABEL_12;
      if ( (v14 & 0x10) != 0 )
        v18 = *(_WORD *)(this + 38);
      else
LABEL_12:
        v18 = *(_WORD *)(this + 36);
      sub_468D20((int *)dword_8F2ABC, v13, v15, v16 - v13, v17 - v15, v18);
      result = sub_47F5B0((int *)this);
      if ( result )
      {
        v19 = sub_47F5B0((int *)this);
        v20 = *v19;
        v21 = *(_BYTE *)(this + 8);
        v26 = *v19;
        v22 = v19[1];
        v27 = v22;
        v23 = v19[2];
        v28 = v23;
        v24 = v19[3];
        v29 = v24;
        if ( (v21 & 4) != 0 && (v21 & 0x20) != 0 )
          v25 = *(_WORD *)(this + 44);
        else
          v25 = *(_WORD *)(this + 42);
        return (int *)sub_468D20((int *)dword_8F2ABC, v20, v22, v23 - v20, v24 - v22, v25);
      }
    }
  }
  return result;
}
