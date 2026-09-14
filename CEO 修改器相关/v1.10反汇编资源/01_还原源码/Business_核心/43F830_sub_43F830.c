// 函数 0x43f830  sub_43F830  size=0x13F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43F830(int a1, int a2)
{
  int result; // eax

  if ( dword_4B37C8 != a2 || dword_4B37CC != -1 || a1 != -1 || a2 != 3 || (result = sub_440020()) == 0 )
  {
    sub_440650(0, -1);
    sub_443920(0, -1);
    sub_4431F0(0, -1);
    sub_442AD0(0, -1);
    sub_442250(0, -1);
    result = sub_4412E0(0, -1);
    if ( a2 )
    {
      result = a2 - 1;
      dword_4B37C8 = a2;
      dword_4B37CC = a1;
      switch ( a2 )
      {
        case 1:
          if ( a1 == -1 )
          {
            result = sub_443920(1, -1);
          }
          else
          {
            sub_443920(1, a1);
            result = sub_442250(1, a1);
          }
          break;
        case 2:
          if ( a1 == -1 )
          {
            result = sub_4431F0(1, -1);
          }
          else
          {
            sub_4431F0(1, a1);
            result = sub_442250(1, a1);
          }
          break;
        case 3:
          if ( a1 == -1 )
          {
            result = sub_440650(1, -1);
          }
          else
          {
            sub_440650(1, a1);
            result = sub_442250(1, a1);
          }
          break;
        case 4:
          if ( a1 == -1 )
          {
            result = sub_442AD0(1, -1);
          }
          else
          {
            sub_442AD0(1, a1);
            result = sub_4412E0(1, a1);
          }
          break;
        default:
          return result;
      }
    }
  }
  return result;
}
