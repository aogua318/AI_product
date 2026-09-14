// 函数 0x40e280  sub_40E280  size=0x560  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_40E280(int this, int a2)
{
  int v3; // ebx
  bool v4; // zf
  int v5; // eax
  int v6; // ebx
  int v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // ecx
  __int16 v10; // dx
  __int16 v11; // si
  __int16 v12; // si
  _WORD *v13; // eax
  int result; // eax
  __int16 v15; // di
  int v16; // ecx
  int v17; // ecx
  int v18; // edi
  int v19; // ecx
  __int16 *v20; // ebx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  char v25; // dl
  unsigned int v26; // edx
  unsigned int v27; // edx
  unsigned int v28; // edx
  unsigned int v29; // edx
  unsigned int v30; // edx
  unsigned int v31; // edx
  unsigned int v32; // edx
  int v33; // [esp+Ch] [ebp-24h] BYREF
  int v34; // [esp+10h] [ebp-20h]
  int v35; // [esp+14h] [ebp-1Ch]
  int v36; // [esp+18h] [ebp-18h]
  int v37; // [esp+1Ch] [ebp-14h]
  _WORD *v38; // [esp+20h] [ebp-10h]
  int v39; // [esp+24h] [ebp-Ch]
  unsigned int v40; // [esp+28h] [ebp-8h] BYREF
  unsigned int v41; // [esp+2Ch] [ebp-4h] BYREF
  int v42; // [esp+38h] [ebp+8h]
  unsigned int v43; // [esp+38h] [ebp+8h]
  int v44; // [esp+38h] [ebp+8h]

  sub_464B60(&v33);
  v3 = dword_89E57C + a2 * dword_89E568;
  v4 = *(_WORD *)(this + 76) == 0xFFFF;
  v38 = (_WORD *)v3;
  if ( v4 )
  {
    sub_483D50(*(_DWORD *)(v3 + 20), -1, 0, &v41, &v40);
    if ( v41 >= dword_4D0E80
      || v40 >= dword_4D0E84
      || *(_DWORD *)(dword_4D0EF4 + 4 * (v41 + v40 * dword_4D0E80)) != *(_DWORD *)(this + 80) )
    {
      sub_483D50(*(_DWORD *)(v3 + 20), 1, 0, &v41, &v40);
      if ( v41 >= dword_4D0E80
        || v40 >= dword_4D0E84
        || *(_DWORD *)(dword_4D0EF4 + 4 * (v41 + v40 * dword_4D0E80)) != *(_DWORD *)(this + 80) )
      {
        sub_483D50(*(_DWORD *)(v3 + 20), -1, 1, &v41, &v40);
        if ( v41 >= dword_4D0E80
          || v40 >= dword_4D0E84
          || *(_DWORD *)(dword_4D0EF4 + 4 * (v41 + v40 * dword_4D0E80)) != *(_DWORD *)(this + 80) )
        {
          sub_483D50(*(_DWORD *)(v3 + 20), 1, 1, &v41, &v40);
          if ( v41 >= dword_4D0E80
            || v40 >= dword_4D0E84
            || *(_DWORD *)(dword_4D0EF4 + 4 * (v41 + v40 * dword_4D0E80)) != *(_DWORD *)(this + 80) )
          {
            v5 = sub_485A70(*(_DWORD *)(this + 80));
            sub_464CE0(v5);
            v6 = sub_4640D0() % 4;
            v7 = v36;
            v8 = v40;
            v9 = v41;
            v42 = v6;
            v10 = v6;
            v11 = v6;
            v39 = 0;
            while ( 1 )
            {
              switch ( v6 )
              {
                case 0:
                  v9 = (v35 + v33) / 2;
                  v8 = v7 + 1;
                  v10 = v9;
                  v11 = v7;
                  goto LABEL_21;
                case 1:
                  v12 = v35;
                  v9 = v35 + 1;
                  goto LABEL_20;
                case 2:
                  v11 = v34;
                  v9 = (v35 + v33) / 2;
                  v8 = v34 - 1;
                  v10 = v9;
                  goto LABEL_21;
                case 3:
                  v12 = v33;
                  v9 = v33 - 1;
LABEL_20:
                  v8 = (v7 + v34) / 2;
                  v10 = v12;
                  v11 = v8;
LABEL_21:
                  v40 = v8;
                  v41 = v9;
                  break;
                default:
                  break;
              }
              if ( v9 < dword_4D0E80 && v8 < dword_4D0E84 )
              {
                if ( *(__int16 *)(dword_4D0EE4 + 2 * (v9 + v8 * dword_4D0E80)) > 0 )
                {
                  v13 = v38;
                  v38[1] = v11;
                  *v13 = v10;
                  return 0;
                }
                v7 = v36;
              }
              if ( ++v42 == 4 )
                v42 = 0;
              if ( ++v39 >= 4 )
                return 0;
              v6 = v42;
            }
          }
        }
      }
    }
    goto LABEL_38;
  }
  sub_438DE0(&v41, &v40);
  v15 = *(_WORD *)(this + 76);
  if ( (int)(v41 - v15) < 0 )
    v43 = v15 - v41;
  else
    v43 = v41 - v15;
  v16 = *(__int16 *)(this + 78);
  if ( (int)(v40 - v16) < 0 )
    v17 = v16 - v40;
  else
    v17 = v40 - v16;
  if ( (int)(v43 + v17) <= 2 )
  {
LABEL_38:
    v18 = *(unsigned __int8 *)(v3 + 17);
    v19 = 0;
    v44 = 0;
    if ( *(_BYTE *)(v3 + 17) )
    {
      v20 = (__int16 *)(v3 + 8);
      v39 = v18;
      do
      {
        v21 = dword_4D0BAC + dword_4D0B98 * *v20;
        v22 = *(_DWORD *)(v21 + 20) + v19;
        v23 = (*(_DWORD *)(v21 + 16) + 128) / 256;
        *(_DWORD *)(this + 72) += v23;
        v44 += v23;
        v37 = v22;
        sub_420B10(*v20);
        v19 = v37;
        ++v20;
        --v39;
      }
      while ( v39 );
      v3 = (int)v38;
    }
    v24 = v44 / v18;
    *(_BYTE *)(v3 + 17) = 0;
    v25 = *(_BYTE *)(this + 3);
    if ( v25 != 4 && v25 != 5 && v25 != 6 && v25 != 1 )
      return 1;
    switch ( *(_BYTE *)(v3 + 16) )
    {
      case 2:
        if ( v18 > ((*(_DWORD *)(this + 32) >> 26) & 0xF) )
          v18 = (*(_DWORD *)(this + 32) >> 26) & 0xF;
        v28 = *(_DWORD *)(this + 32)
            ^ (*(_DWORD *)(this + 32)
             ^ ((*(_DWORD *)(this + 32) & 0xFC000000) - (v18 << 26)))
            & 0x3C000000;
        *(_DWORD *)(this + 36) = v24;
        *(_DWORD *)(this + 32) = v28 ^ (v28 ^ (v28 + v19)) & 0x3FFFFFF;
        result = 1;
        break;
      case 8:
        if ( v18 > ((*(_DWORD *)(this + 16) >> 26) & 0xF) )
          v18 = (*(_DWORD *)(this + 16) >> 26) & 0xF;
        v26 = *(_DWORD *)(this + 16)
            ^ (*(_DWORD *)(this + 16)
             ^ ((*(_DWORD *)(this + 16) & 0xFC000000) - (v18 << 26)))
            & 0x3C000000;
        *(_DWORD *)(this + 20) = v24;
        *(_DWORD *)(this + 16) = v26 ^ (v26 ^ (v26 + v19)) & 0x3FFFFFF;
        result = 1;
        break;
      case 9:
        if ( v18 > ((*(_DWORD *)(this + 24) >> 26) & 0xF) )
          v18 = (*(_DWORD *)(this + 24) >> 26) & 0xF;
        v27 = *(_DWORD *)(this + 24)
            ^ (*(_DWORD *)(this + 24)
             ^ ((*(_DWORD *)(this + 24) & 0xFC000000) - (v18 << 26)))
            & 0x3C000000;
        *(_DWORD *)(this + 28) = v24;
        *(_DWORD *)(this + 24) = v27 ^ (v27 ^ (v27 + v19)) & 0x3FFFFFF;
        result = 1;
        break;
      case 0xC:
        if ( v18 > ((*(_DWORD *)(this + 64) >> 26) & 0xF) )
          v18 = (*(_DWORD *)(this + 64) >> 26) & 0xF;
        v32 = *(_DWORD *)(this + 64)
            ^ (*(_DWORD *)(this + 64)
             ^ ((*(_DWORD *)(this + 64) & 0xFC000000) - (v18 << 26)))
            & 0x3C000000;
        *(_DWORD *)(this + 64) = v32 ^ (v32 ^ (v32 + v19)) & 0x3FFFFFF;
        *(_DWORD *)(this + 68) = v24;
        return 1;
      case 0xE:
        if ( v18 > ((*(_DWORD *)(this + 48) >> 26) & 0xF) )
          v18 = (*(_DWORD *)(this + 48) >> 26) & 0xF;
        v30 = *(_DWORD *)(this + 48)
            ^ (*(_DWORD *)(this + 48)
             ^ ((*(_DWORD *)(this + 48) & 0xFC000000) - (v18 << 26)))
            & 0x3C000000;
        *(_DWORD *)(this + 52) = v24;
        *(_DWORD *)(this + 48) = v30 ^ (v30 ^ (v30 + v19)) & 0x3FFFFFF;
        result = 1;
        break;
      case 0xF:
        if ( v18 > ((*(_DWORD *)(this + 40) >> 26) & 0xF) )
          v18 = (*(_DWORD *)(this + 40) >> 26) & 0xF;
        v29 = *(_DWORD *)(this + 40)
            ^ (*(_DWORD *)(this + 40)
             ^ ((*(_DWORD *)(this + 40) & 0xFC000000) - (v18 << 26)))
            & 0x3C000000;
        *(_DWORD *)(this + 44) = v24;
        *(_DWORD *)(this + 40) = v29 ^ (v29 ^ (v29 + v19)) & 0x3FFFFFF;
        result = 1;
        break;
      case 0x1D:
        if ( v18 > ((*(_DWORD *)(this + 56) >> 26) & 0xF) )
          v18 = (*(_DWORD *)(this + 56) >> 26) & 0xF;
        v31 = *(_DWORD *)(this + 56)
            ^ (*(_DWORD *)(this + 56)
             ^ ((*(_DWORD *)(this + 56) & 0xFC000000) - (v18 << 26)))
            & 0x3C000000;
        *(_DWORD *)(this + 60) = v24;
        *(_DWORD *)(this + 56) = v31 ^ (v31 ^ (v31 + v19)) & 0x3FFFFFF;
        result = 1;
        break;
      default:
        return 1;
    }
    return result;
  }
  *(_WORD *)v3 = v15;
  *(_WORD *)(v3 + 2) = *(_WORD *)(this + 78);
  return 0;
}
