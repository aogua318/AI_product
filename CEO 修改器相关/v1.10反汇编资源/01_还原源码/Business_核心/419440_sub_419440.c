// 函数 0x419440  sub_419440  size=0x133  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_419440()
{
  int result; // eax
  int v1; // ecx
  int v2; // [esp-8h] [ebp-10h]
  int v3; // [esp-4h] [ebp-Ch]
  int v4; // [esp+0h] [ebp-8h] BYREF
  int v5; // [esp+4h] [ebp-4h] BYREF

  result = dword_8EED88;
  if ( dword_4CCAB8 != dword_8EED88 || dword_4CCAB4 != dword_8EED8C )
  {
    v3 = dword_8EED8C;
    v2 = dword_8EED88;
    sub_464D00(9, 41, 615, 560);
    result = sub_464B90(v2, v3);
    if ( result )
    {
      dword_4CCAB4 = dword_8EED8C;
      dword_4CCAB8 = dword_8EED88;
      result = sub_484120(dword_8EED88, dword_8EED8C, &v4, &v5);
      if ( (_DWORD *)dword_4C2D38 != dword_4D0E68 )
      {
        result = dword_4B119C;
        if ( dword_4B119C == -1 )
        {
          if ( dword_4B1020 == -1 )
          {
            if ( dword_4B1104 == -1 )
            {
              if ( dword_4B32C0 == -1 )
              {
                if ( dword_4B32B8 == -1 )
                  return result;
                sub_4307E0(dword_4B1028, v4, v5, -1);
              }
              else
              {
                sub_434280(0, v4, v5, -1);
              }
            }
            else
            {
              sub_413C50(v4, v5, -1);
            }
          }
          else
          {
            sub_40C120(v4, v5, -1);
          }
        }
        else
        {
          sub_4268F0(dword_4B1028, dword_4B119C, v4, v5, -1);
        }
        result = sub_461900(v1);
        if ( result )
          return sub_487220(&unk_4C42A0);
      }
    }
  }
  return result;
}
