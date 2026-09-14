// 函数 0x468900  sub_468900  size=0x97  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

FILE *__thiscall sub_468900(size_t *this)
{
  size_t v2; // esi
  _DWORD *v3; // eax
  int v4; // ebx
  char *v5; // eax
  char *v6; // edi
  int v8; // [esp+Ch] [ebp-Ch]
  void *Src; // [esp+10h] [ebp-8h]
  char *v10; // [esp+14h] [ebp-4h]

  v2 = *(this + 2);
  v3 = sub_465E40(v2, "a_lib\\a_graph.cpp", 588);
  v4 = *(this + 1) - 1;
  Src = v3;
  v5 = (char *)*(this + 9);
  v6 = &v5[v2 * v4];
  v8 = 0;
  v10 = v5;
  if ( v4 > 0 )
  {
    while ( 1 )
    {
      memcpy(Src, v5, v2);
      memcpy(v10, v6, v2);
      memcpy(v6, Src, v2);
      v10 += v2;
      --v4;
      v6 -= v2;
      if ( ++v8 >= v4 )
        break;
      v5 = v10;
    }
  }
  return sub_465FE0((int)Src, "a_lib\\a_graph.cpp", 604);
}
