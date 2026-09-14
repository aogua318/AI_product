// 函数 0x42c2f0  sub_42C2F0  size=0xE9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_42C2F0(__int16 *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int *v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // esi
  int result; // eax
  __int16 *v10; // [esp+Ch] [ebp-20h]
  int v11; // [esp+14h] [ebp-18h]
  int v12; // [esp+18h] [ebp-14h] BYREF
  int v13; // [esp+1Ch] [ebp-10h] BYREF
  int v14; // [esp+20h] [ebp-Ch] BYREF
  int v15; // [esp+24h] [ebp-8h] BYREF
  int v16; // [esp+28h] [ebp-4h]

  v2 = dword_4CCAAC + dword_4CCA98 * *(this + 7);
  v3 = *(_DWORD *)(v2 + 180) + *(_DWORD *)(v2 + 160) * *(this + 8);
  v10 = this;
  sub_483850(*(__int16 *)(v3 + 2), *(__int16 *)(v3 + 4), &v13, &v12);
  v4 = *(this + 7);
  v5 = 1;
  v16 = 1;
  v11 = v4;
  while ( 2 )
  {
    v6 = dword_4B32D4;
    do
    {
      v7 = v12 + v5 * *v6;
      v8 = v13 + v5 * *(v6 - 1);
      if ( sub_42BC50(v11, v8, v7) )
      {
        sub_483890(v8, v7, &v15, &v14);
        return sub_4866A0(v10[8], v15 + 16, v14 + 16, 0);
      }
      v5 = v16;
      v6 += 2;
    }
    while ( (int)v6 < (int)dword_4B32F4 );
    result = v16 + 1;
    v16 = result;
    if ( result < 100 )
    {
      v5 = v16;
      continue;
    }
    break;
  }
  return result;
}
