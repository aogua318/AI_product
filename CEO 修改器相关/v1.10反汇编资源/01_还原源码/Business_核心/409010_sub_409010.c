// 函数 0x409010  sub_409010  size=0xAD  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_409010(__int16 *this, void *a2, int a3, int a4, const char *a5, int a6, int a7)
{
  int result; // eax
  int v8; // ebx
  const char *v9; // edi
  int i; // [esp+24h] [ebp+14h]
  int v13; // [esp+28h] [ebp+18h]

  result = strlen(a5);
  v8 = a6;
  if ( a7 == 1 )
  {
    v8 = -a6;
    v13 = -1;
    v9 = &a5[result - 1];
  }
  else
  {
    v13 = 1;
    v9 = a5;
  }
  if ( result > 0 )
  {
    for ( i = result; i; --i )
    {
      result = *(unsigned __int8 *)v9;
      if ( (unsigned int)(result - 48) > 9 )
      {
        switch ( result )
        {
          case '+':
            result = 10;
LABEL_9:
            sub_467680(*(this + result + 8));
            result = sub_466CA0(a2, a3, a4);
            goto LABEL_10;
          case '-':
            result = 11;
            goto LABEL_9;
          case '.':
            result = 12;
            goto LABEL_9;
        }
      }
      else
      {
        result -= 48;
      }
      if ( result <= 12 )
        goto LABEL_9;
LABEL_10:
      v9 += v13;
      a3 += v8;
    }
  }
  return result;
}
