// 函数 0x40f6a0  sub_40F6A0  size=0x279  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

__int16 *__thiscall sub_40F6A0(__int16 *this)
{
  __int16 *result; // eax
  int v3; // edi
  int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // edx
  int v7; // ebx
  int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // ebx
  __int16 v13; // dx
  __int16 v14; // dx
  __int16 v15; // cx
  __int16 v16; // dx
  int v17[4]; // [esp+4h] [ebp-58h] BYREF
  unsigned int v18; // [esp+14h] [ebp-48h]
  int v19; // [esp+18h] [ebp-44h]
  unsigned int v20; // [esp+1Ch] [ebp-40h]
  unsigned int v21; // [esp+20h] [ebp-3Ch]
  unsigned int v22; // [esp+24h] [ebp-38h]
  int v23; // [esp+28h] [ebp-34h]
  int v24; // [esp+2Ch] [ebp-30h]
  signed int v25; // [esp+30h] [ebp-2Ch]
  unsigned int v26; // [esp+34h] [ebp-28h] BYREF
  int v27; // [esp+38h] [ebp-24h]
  int v28; // [esp+3Ch] [ebp-20h]
  int v29; // [esp+40h] [ebp-1Ch]
  int v30; // [esp+44h] [ebp-18h]
  unsigned int i; // [esp+48h] [ebp-14h]
  __int16 *v32; // [esp+4Ch] [ebp-10h]
  unsigned int v33; // [esp+50h] [ebp-Ch]
  unsigned int v34; // [esp+54h] [ebp-8h] BYREF
  unsigned int v35; // [esp+58h] [ebp-4h]

  v32 = this;
  sub_464B60(v17);
  result = (__int16 *)(*(_DWORD *)dword_4C4434 + 72 * *this);
  *(this + 38) = -1;
  *(this + 39) = -1;
  if ( result[16] == 2 )
  {
    v3 = dword_4D0EFC + 10 * result[1];
    sub_40D7C0(this, (int)&v26, (int)&v34);
    v4 = sub_483C60(
           v26,
           v34,
           *(unsigned __int8 *)(v3 + 4),
           *(unsigned __int8 *)(v3 + 5),
           *(unsigned __int8 *)(dword_4D0F08 * *((_DWORD *)this + 20) + dword_4D0F1C + 8));
    sub_464CE0(v4);
    result = (__int16 *)sub_40CFD0(v17);
    if ( result == (__int16 *)-1 )
    {
      v5 = v26;
      v6 = v34;
      v7 = 1;
      v21 = 1 - v26;
      v24 = dword_4D0E80 * (v34 + 1);
      v22 = v26 - 1;
      v8 = -dword_4D0E80;
      v19 = -dword_4D0E80;
      v23 = dword_4D0E80 * (v34 - 1);
      while ( 1 )
      {
        v25 = v7;
        if ( v7 > 0 )
          break;
LABEL_21:
        v24 += dword_4D0E80;
        v23 += v8;
        --v22;
        ++v7;
        ++v21;
      }
      v9 = v22;
      v33 = v6;
      v30 = v34 * dword_4D0E80;
      v28 = v34 * dword_4D0E80;
      v27 = v23;
      v29 = v24;
      v10 = v34 - v5;
      v35 = v5 + v7;
      v7 = v25;
      for ( i = v34 - v5; ; v10 = i )
      {
        v11 = v35 + v10;
        v12 = v9 + v7;
        v20 = v12;
        v18 = v11;
        if ( v12 < dword_4D0E80 && v11 < dword_4D0E84 && *(__int16 *)(dword_4D0EE4 + 2 * (v29 + v12)) > 0 )
        {
          result = v32;
          v13 = v18;
          v32[38] = v20;
          result[39] = v13;
          return result;
        }
        if ( v35 < dword_4D0E80 && v33 < dword_4D0E84 && *(__int16 *)(dword_4D0EE4 + 2 * (v30 + v35)) > 0 )
        {
          result = v32;
          v14 = v33;
          v32[38] = v35;
          result[39] = v14;
          return result;
        }
        v18 = v9 + i;
        if ( v5 < dword_4D0E80 && v9 + i < dword_4D0E84 && *(__int16 *)(dword_4D0EE4 + 2 * (v5 + v27)) > 0 )
        {
          result = v32;
          v15 = v18;
          v32[38] = v5;
          result[39] = v15;
          return result;
        }
        v18 = v5 + i;
        if ( v9 < dword_4D0E80 && v5 + i < dword_4D0E84 && *(__int16 *)(dword_4D0EE4 + 2 * (v9 + v28)) > 0 )
          break;
        v7 = v25;
        v30 += dword_4D0E80;
        v29 -= dword_4D0E80;
        v28 -= dword_4D0E80;
        v27 += dword_4D0E80;
        ++v33;
        --v35;
        --v5;
        if ( (int)(++v9 + v21) >= v25 )
        {
          v5 = v26;
          v8 = v19;
          v6 = v34;
          goto LABEL_21;
        }
      }
      result = v32;
      v16 = v18;
      v32[38] = v9;
      result[39] = v16;
    }
  }
  return result;
}
