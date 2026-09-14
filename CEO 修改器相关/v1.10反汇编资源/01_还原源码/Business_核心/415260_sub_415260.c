// 函数 0x415260  sub_415260  size=0x2A3  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_415260(char *this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // ebx
  int v8; // ecx
  int v9; // eax
  char *v10; // edi
  char v11; // al
  int v12; // eax
  double *v13; // eax
  char v14; // al
  double *v15; // eax
  char v16; // al
  int v17; // edi
  char *v19; // [esp-10h] [ebp-130h]
  int v20; // [esp-4h] [ebp-124h]
  int v21; // [esp+Ch] [ebp-114h]
  int v22; // [esp+10h] [ebp-110h] BYREF
  int v23; // [esp+14h] [ebp-10Ch] BYREF
  int v24; // [esp+18h] [ebp-108h]
  char Buffer[256]; // [esp+1Ch] [ebp-104h] BYREF

  v7 = dword_4CCAAC + dword_4CCA98 * *((__int16 *)this + 1);
  if ( a6 == -1 )
    v8 = 8;
  else
    v8 = word_4D10BA[94940 * a6];
  v9 = *this;
  v10 = (char *)&unk_4D10B8 + 189880 * *(char *)(v7 + 224);
  v21 = *(_DWORD *)dword_870814 + 72 * v9;
  if ( a4 )
  {
    if ( a3 <= 0 )
    {
      *(_DWORD *)&v10[4 * v9 + 104312] += a2;
      v13 = (double *)&v10[8 * *this + 86928];
      *v13 = *v13 - (double)a3;
      *((_DWORD *)this + v8 + 302) += a2;
      if ( a5 )
        *((_DWORD *)this + 202) -= a3;
      else
        *((_DWORD *)this + 227) -= a3;
      v14 = *(this + 8);
      if ( (v14 & 4) == 0 )
      {
        *(this + 8) = v14 | 4;
        v24 = *(_DWORD *)dword_4D1088 + 1760;
        sub_419920(&v23, &v22);
        sprintf(Buffer, (const char *const)(v24 + 8), v10 + 16, v7 + 204, *((_DWORD *)this + 3), v21);
        sub_42B930(v23, v22, *(char *)(v7 + 224), Buffer, v24);
        v10[*this + 189642] = 1;
      }
    }
    else
    {
      *(_DWORD *)&v10[4 * v9 + 53432] += a2;
      *((_DWORD *)this + 127) += a3;
      *((_DWORD *)this + 77) += a2;
      *((_DWORD *)this + v8 + 294) += a2;
      v11 = *(this + 8);
      if ( (v11 & 2) == 0 )
      {
        *(this + 8) = v11 | 2;
        v24 = *(_DWORD *)dword_4D1088 + 1672;
        sub_419920(&v23, &v22);
        v20 = v21;
        v12 = 4 * a3 * *(_DWORD *)(v21 + 24) / a2;
LABEL_15:
        v19 = v10 + 16;
        v17 = v24;
        sprintf(Buffer, (const char *const)(v24 + 8), v19, v7 + 204, v12, v20);
        sub_42B930(v23, v22, *(char *)(v7 + 224), Buffer, v17);
      }
    }
  }
  else
  {
    *(_DWORD *)&v10[4 * v9 + 121272] += a2;
    v15 = (double *)&v10[8 * *this + 154768];
    *v15 = *v15 - (double)a3;
    *((_DWORD *)this + v8 + 302) += a2;
    v16 = *(this + 8);
    *((_DWORD *)this + 90) += a2;
    *((_DWORD *)this + 252) -= a3;
    if ( (v16 & 8) == 0 )
    {
      *(this + 8) = v16 | 8;
      v24 = *(_DWORD *)dword_4D1088 + 1848;
      sub_419920(&v23, &v22);
      v12 = *((_DWORD *)this + 4);
      v20 = v21;
      goto LABEL_15;
    }
  }
  memcpy_0(this + 80, this + 72, 0x20u);
  *((_DWORD *)this + 19) = a3;
  *((_DWORD *)this + 18) = a2;
  return a2;
}
