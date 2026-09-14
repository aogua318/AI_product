// 函数 0x45c670  sub_45C670  size=0x80  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_45C670()
{
  int result; // eax

  if ( !dword_8CDA28 )
  {
    result = -1;
    dword_8CDA28 = 1;
    if ( dword_4B3860 == -1 )
    {
      if ( dword_4B3864 == -1 )
      {
LABEL_7:
        dword_8CDA28 = 0;
        return result;
      }
    }
    else if ( (unsigned int)(*(_DWORD *)(dword_8CF170 + 35476) - *(_DWORD *)(dword_8CF170 + 35472)) > 6 )
    {
      result = sub_45C620();
      dword_8CDA28 = 0;
      return result;
    }
    result = sub_4810E0(1);
    goto LABEL_7;
  }
  return result;
}
