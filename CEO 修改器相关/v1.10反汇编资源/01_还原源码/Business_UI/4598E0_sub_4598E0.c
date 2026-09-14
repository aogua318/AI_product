// 函数 0x4598e0  sub_4598E0  size=0x102  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4598E0()
{
  int i; // esi
  int result; // eax
  int v2; // [esp+8h] [ebp-10h] BYREF
  int v3; // [esp+10h] [ebp-8h]

  sub_464B60(&v2);
  sub_464B70(73, 401, 139, 473);
  for ( i = 0; i < 6; ++i )
  {
    if ( sub_464B90(dword_8EED88, dword_8EED8C) )
      break;
    v2 += 122;
    v3 += 122;
  }
  if ( i == 6 )
    return sub_459790(-1);
  result = sub_47CC90(&unk_8C6060);
  if ( !result )
  {
    result = sub_47CC90(&unk_8C5F30);
    if ( !result )
    {
      result = sub_47CC90(&unk_8C5CB8);
      if ( !result )
      {
        result = sub_47CC90(&unk_8C7458);
        if ( !result )
        {
          result = sub_47CC90(&unk_8C5B88);
          if ( !result )
          {
            result = sub_47CC90(&unk_8C6190);
            if ( !result )
            {
              result = sub_47CC90(&unk_8C5DE8);
              if ( !result )
                return sub_459790(i);
            }
          }
        }
      }
    }
  }
  return result;
}
