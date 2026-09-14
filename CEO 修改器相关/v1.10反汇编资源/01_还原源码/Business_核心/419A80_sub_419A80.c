// 函数 0x419a80  sub_419A80  size=0x127  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_419A80(int this, int a2)
{
  __int16 *v2; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  __int16 v11; // dx
  int v13; // [esp+Ch] [ebp-18h] BYREF
  int v14; // [esp+10h] [ebp-14h] BYREF
  int v15; // [esp+14h] [ebp-10h]
  int v16; // [esp+18h] [ebp-Ch]
  int v17; // [esp+1Ch] [ebp-8h] BYREF
  int v18; // [esp+20h] [ebp-4h] BYREF

  v2 = (__int16 *)(dword_89E57C + a2 * dword_89E568);
  v4 = *(__int16 *)(this + 2 * *((unsigned __int8 *)v2 + 16) + 240);
  v5 = dword_4CC8BC * (v4 < 0 ? 0 : v4);
  v6 = *(__int16 *)(this + 758);
  v15 = dword_4CC8D0 + v5;
  if ( v6 == -1 )
  {
LABEL_12:
    if ( sub_419950(this, *((unsigned __int8 *)v2 + 16), &v18, &v17) )
    {
      v11 = v17;
      *v2 = v18;
      v2[1] = v11;
    }
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v7 = dword_8703D0 + v6 * dword_8703BC;
      if ( *(char *)(v7 + 31) == *(unsigned __int8 *)(v15 + 1257) )
      {
        sub_430CA0(&v13, &v14);
        sub_4198B0((_DWORD *)this, v13, v14, &v18, &v17);
        v8 = *v2;
        v16 = v18 - v8 < 0 ? v8 - v18 : v18 - v8;
        v9 = v2[1];
        v10 = v17 - v9 < 0 ? v9 - v17 : v17 - v9;
        if ( v16 + v10 < 2 && !*(_BYTE *)(v7 + 30) )
          break;
      }
      v6 = *(__int16 *)(v7 + 4);
      if ( v6 == -1 )
        goto LABEL_12;
    }
    sub_430CF0(a2);
    return 1;
  }
}
