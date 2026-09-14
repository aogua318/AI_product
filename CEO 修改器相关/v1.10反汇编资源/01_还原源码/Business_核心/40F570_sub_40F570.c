// 函数 0x40f570  sub_40F570  size=0x130  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_40F570(_DWORD *this, int a2)
{
  int v2; // ebx
  __int16 *v3; // esi
  int v5; // edi
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // esi
  _DWORD *v11; // ecx
  int v12; // edx
  int v13; // ebx
  int v14; // eax
  int v15; // edi
  int v16; // esi
  __int16 *v18; // [esp+Ch] [ebp-18h]
  int v19; // [esp+10h] [ebp-14h]
  int v20; // [esp+14h] [ebp-10h]
  int v21; // [esp+18h] [ebp-Ch]
  int v22; // [esp+1Ch] [ebp-8h] BYREF
  int v23; // [esp+20h] [ebp-4h] BYREF

  v2 = (int)this;
  v3 = (__int16 *)(*(_DWORD *)dword_4C4434 + 72 * *(__int16 *)this);
  v18 = v3;
  if ( v3[16] == 2 )
    return 999999999;
  sub_40D7C0(this, (int)&v23, (int)&v22);
  v5 = (v22 >> 5) - 1;
  v6 = (v22 >> 5) + 1;
  v7 = v23 >> 5;
  v8 = 0;
  v20 = v23 >> 5;
  v21 = 0;
  v22 = v5;
  v19 = v6;
  if ( v5 <= v6 )
  {
    v9 = dword_4C5DEC;
    do
    {
      if ( v5 < (unsigned int)dword_4C5DD8 )
      {
        v10 = v7 - 1;
        v23 = v7 - 1;
        if ( !__OFSUB__(v7 - 1, v7 + 1) || v7 - 1 == v7 + 1 )
        {
          do
          {
            if ( v10 < v9 )
            {
              v11 = (_DWORD *)(*(_DWORD *)dword_4C5DF4 + 9208 * (v10 + v5 * v9));
              v12 = v11[1] + 2 * v11[2];
              v13 = *v11 + v11[3];
              v9 = dword_4C5DEC;
              v14 = v12 + v8 + 2 * v12;
              ++v21;
              v7 = v20;
              v8 = v14 + 2 * v13;
            }
            v23 = ++v10;
          }
          while ( (int)v10 <= v7 + 1 );
        }
      }
      v22 = ++v5;
    }
    while ( v5 <= v19 );
    v3 = v18;
    v2 = (int)this;
  }
  v15 = *(unsigned __int8 *)(dword_4D0EFC + 10 * *v3 + 4);
  v16 = 300 * v15 * v15 * ((dword_4D049C + 3) * (v8 / v21 + 1000) / 6);
  if ( a2 )
    v16 += sub_40CEF0(v2);
  return v16;
}
