// 函数 0x4045a0  sub_4045A0  size=0x25B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_4045A0(int a1, int a2, int a3)
{
  char *v3; // eax
  __int16 v4; // cx
  double v5; // st7
  bool v6; // zf
  int v7; // esi
  int i; // esi
  __int16 v9; // ax
  __int16 v10; // ax
  int v11; // [esp+4h] [ebp-218h] BYREF
  double v12; // [esp+8h] [ebp-214h]
  int v13; // [esp+10h] [ebp-20Ch] BYREF
  int v14; // [esp+14h] [ebp-208h]
  _DWORD v15[64]; // [esp+18h] [ebp-204h] BYREF
  _DWORD v16[64]; // [esp+118h] [ebp-104h] BYREF

  v3 = (char *)dword_870824 + 112 * a2;
  v4 = *((_WORD *)v3 + 6);
  if ( v4 != -1 && (!a3 || *((int *)v3 + 4) <= 4) )
  {
    v14 = sub_42A0F0(*(_DWORD *)dword_4D0C8C + 388 * v4);
    v5 = (double)v14 * 1.5 + 1.0;
    v6 = byte_4FF604[189880 * a1 + a2] == 0;
    v12 = v5;
    if ( v6 )
      v5 = sub_41EE50(a2) + v12;
    if ( !word_4B9C78[a2] )
    {
      v12 = v5 + 10000000.0;
      if ( sub_4010C0(a2, v15, &v11, v16, &v13) )
      {
        v7 = 0;
        if ( v11 > 0 )
        {
          while ( 1 )
          {
            v10 = *((_WORD *)dword_870824 + 56 * v15[v7] + 6);
            if ( v10 == -1 )
              break;
            v14 = sub_42A0F0(*(_DWORD *)dword_4D0C8C + 388 * v10);
            ++v7;
            v12 = (double)v14 * 1.5 + v12 + 10000000.0;
            if ( v7 >= v11 )
              goto LABEL_10;
          }
        }
        else
        {
LABEL_10:
          for ( i = 0; i < v13; v12 = (double)v14 * 1.5 + v12 + 10000000.0 )
          {
            v9 = *((_WORD *)dword_870824 + 56 * v16[i] + 6);
            if ( v9 == -1 )
              break;
            v14 = sub_42A0F0(*(_DWORD *)dword_4D0C8C + 388 * v9);
            ++i;
          }
        }
      }
    }
  }
}
