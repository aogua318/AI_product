// 函数 0x468d20  sub_468D20  size=0xB7  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void *__thiscall sub_468D20(int *this, int a2, int a3, int a4, int a5, char Src)
{
  int v6; // kr00_4
  int v7; // edx
  int v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // edi
  int v12; // ebx
  void *result; // eax
  char *v14; // ebx
  int v15; // [esp+18h] [ebp+Ch]
  int v16; // [esp+1Ch] [ebp+10h]
  int v17; // [esp+1Ch] [ebp+10h]
  int v18; // [esp+20h] [ebp+14h]
  int v19; // [esp+20h] [ebp+14h]

  v6 = *(this + 3);
  v7 = a2;
  v8 = a3;
  v16 = a2 + a4;
  v9 = v6 / 8;
  v18 = a5 + a3;
  if ( a2 < *(this + 5) )
    v7 = *(this + 5);
  if ( a3 < *(this + 6) )
    v8 = *(this + 6);
  if ( v16 > *(this + 7) )
    v16 = *(this + 7);
  v10 = v18;
  if ( v18 > *(this + 8) )
    v10 = *(this + 8);
  v19 = v10 - v8;
  v17 = v16 - v7;
  v11 = *(this + 2) - v17 * v9;
  v12 = v9 * v7 + *(this + 2) * v8;
  result = (void *)v19;
  v14 = (char *)(*(this + 9) + v12);
  if ( v19 > 0 )
  {
    do
    {
      result = (void *)v17;
      if ( v17 > 0 )
      {
        v15 = v17;
        do
        {
          if ( v9 > 0 )
          {
            result = memcpy(v14, &Src, v6 / 8);
            v14 += v9;
          }
          --v15;
        }
        while ( v15 );
      }
      v14 += v11;
      --v19;
    }
    while ( v19 );
  }
  return result;
}
