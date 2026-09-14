// 函数 0x415700  sub_415700  size=0x2CF  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_415700(int *this)
{
  int v2; // edx
  int v3; // eax
  char *v4; // esi
  int v5; // ecx
  double v6; // st7
  int v7; // esi
  __int64 v8; // rax
  int v9; // eax
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int result; // eax
  int v16; // [esp+10h] [ebp-4h]

  v2 = *(this + 5);
  v3 = *(char *)this;
  v4 = (char *)&unk_4D10B8 + 189880 * *(char *)(dword_4CCA98 * *((__int16 *)this + 1) + dword_4CCAAC + 224);
  v5 = *(_DWORD *)&v4[4 * v3 + 172152];
  v6 = (double)*(int *)&v4[4 * v3 + 189112];
  v16 = *((char *)this + 1);
  *(_DWORD *)&v4[4 * v3 + 172152] = v5 + v2;
  *(_DWORD *)&v4[4 * *(char *)this + 189112] = (int)((v6 * (double)v5 + (double)v16 * (double)v2)
                                                   / (double)*(int *)&v4[4 * *(char *)this + 172152]);
  v7 = *(_DWORD *)dword_870814 + 72 * *(char *)this;
  *(this + byte_4CE044 + 40) = *(this + 28) / *(_DWORD *)(v7 + 24);
  *(this + byte_4CE044 + 52) = *(this + 34) / *(_DWORD *)(v7 + 24);
  memcpy_0(this + 29, this + 28, 0x14u);
  memcpy_0(this + 35, this + 34, 0x14u);
  v8 = *(this + 64);
  *(this + 28) = 0;
  *(this + 34) = 0;
  *(this + byte_4CE044 + 65) = v8 / *(int *)(v7 + 24);
  LODWORD(v8) = *(this + 77);
  *(this + 64) = 0;
  *(this + byte_4CE044 + 78) = (int)v8 / *(_DWORD *)(v7 + 24);
  LODWORD(v8) = *(this + 90);
  *(this + 77) = 0;
  *(this + byte_4CE044 + 91) = (int)v8 / *(_DWORD *)(v7 + 24);
  *(this + 90) = 0;
  if ( byte_4CE046 < 0 )
    v9 = 0;
  else
    v9 = byte_4CE046;
  *(this + v9 + 103) = *(this + 202) + *(this + 227) + *(this + 252) - *(this + 177) - *(this + 152) - *(this + 127);
  *(this + byte_4CE046 + 128) = *(this + 127);
  v10 = *(this + 152);
  *(this + 127) = 0;
  *(this + byte_4CE046 + 153) = v10;
  v11 = *(this + 177);
  *(this + 152) = 0;
  *(this + byte_4CE046 + 178) = v11;
  v12 = *(this + 202);
  *(this + 177) = 0;
  *(this + byte_4CE046 + 203) = v12;
  v13 = *(this + 227);
  *(this + 202) = 0;
  *(this + byte_4CE046 + 228) = v13;
  v14 = *(this + 252);
  *(this + 227) = 0;
  *(this + byte_4CE046 + 253) = v14;
  *(this + 252) = 0;
  result = 3 * (dword_4B1120 / 3);
  if ( dword_4B1120 % 3 == 1 )
  {
    qmemcpy(this + 277, this + 294, 0x20u);
    qmemcpy(this + 285, this + 302, 0x24u);
    *(this + 294) = 0;
    *(this + 295) = 0;
    *(this + 296) = 0;
    *(this + 297) = 0;
    *(this + 298) = 0;
    *(this + 299) = 0;
    *(this + 300) = 0;
    *(this + 301) = 0;
    *(this + 302) = 0;
    *(this + 303) = 0;
    *(this + 304) = 0;
    *(this + 305) = 0;
    *(this + 306) = 0;
    *(this + 307) = 0;
    *(this + 308) = 0;
    *(this + 309) = 0;
    *(this + 310) = 0;
  }
  return result;
}
