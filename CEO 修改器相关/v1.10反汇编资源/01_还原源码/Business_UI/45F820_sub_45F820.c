// 函数 0x45f820  sub_45F820  size=0x1C6  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __usercall sub_45F820(int a1@<edi>, int a2)
{
  int v2; // ebx
  __int16 *v3; // esi
  int v4; // eax
  int v5; // eax
  _DWORD v6[9]; // [esp+0h] [ebp-28h] BYREF

  if ( dword_4B38BC != a1 || a2 )
  {
    if ( a1 == -1 )
    {
      sub_482060(dword_8D62D8 + 12384);
      sub_482060(dword_8D62D8 + 12672);
LABEL_13:
      dword_4B38BC = a1;
      return;
    }
    v2 = dword_4CCAAC + dword_4B1028 * dword_4CCA98;
    if ( a1 >= 4 )
      v3 = &word_8D5F70[16 * a1 - 64];
    else
      v3 = &word_8D5FF0[16 * a1];
    if ( *((_DWORD *)v3 + 2) != -1 )
    {
      sub_482FE0(dword_8D62D8 + 12384);
      sub_482FE0(dword_8D62D8 + 12672);
      sub_47FF50(*(_DWORD *)dword_870814 + 72 * *v3);
      v4 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v2 + 2 * *v3 + 240);
      v6[0] = (unsigned __int16)word_87094E[0];
      v6[1] = (unsigned __int16)word_870950;
      v6[2] = (unsigned __int16)word_870952;
      v6[3] = (unsigned __int16)word_870954;
      v6[4] = (unsigned __int16)word_870956;
      v6[5] = (unsigned __int16)word_870958;
      v6[6] = (unsigned __int16)word_87095A;
      v6[7] = (unsigned __int16)word_87095C;
      v6[8] = 0x7FFF;
      if ( a1 >= 4 )
        sub_45DD50(0x1AA00000236LL, 26, 9, v4 + 1140, (int)v6);
      else
        sub_45DD50(0x1AA00000236LL, 26, 8, v4 + 1108, (int)v6);
      sub_467680(11);
      sub_466CA0(&dword_8EEDEC, 537, 397);
      v5 = sub_467100(537, 397);
      sub_47C950(v5);
      goto LABEL_13;
    }
  }
}
