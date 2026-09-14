// 函数 0x480750  sub_480750  size=0xE2  模块=a_prog框架
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_480750(int this, int a2, int a3)
{
  int *v4; // eax
  int v5; // edx
  int v6; // eax
  int v8; // [esp+4h] [ebp-20h] BYREF
  int v9; // [esp+8h] [ebp-1Ch]
  int v10; // [esp+Ch] [ebp-18h]
  int v11; // [esp+10h] [ebp-14h]
  int v12; // [esp+14h] [ebp-10h] BYREF
  int v13; // [esp+18h] [ebp-Ch]
  int v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]

  sub_464B60(&v8);
  sub_464B60(&v12);
  v4 = sub_47FFB0((__int16 *)this);
  v8 = *v4;
  v9 = v4[1];
  v10 = v4[2];
  v11 = v4[3];
  if ( sub_464B90(&v8, dword_8EED88, dword_8EED8C) )
  {
    v12 = v8;
    v5 = *(unsigned __int8 *)(this + 21);
    v14 = v10;
    v13 = v9;
    v15 = v5 + v9 + 1;
    if ( sub_464B90(&v12, dword_8EED88, dword_8EED8C) )
      return 1;
    while ( 1 )
    {
      v6 = *(unsigned __int8 *)(this + 20) + *(unsigned __int8 *)(this + 21);
      v13 += v6;
      v15 += v6;
      if ( v15 > v11 )
        v15 = v11;
      if ( v13 >= v11 )
        break;
      if ( sub_464B90(&v12, dword_8EED88, dword_8EED8C) )
        return 1;
    }
  }
  return 0;
}
