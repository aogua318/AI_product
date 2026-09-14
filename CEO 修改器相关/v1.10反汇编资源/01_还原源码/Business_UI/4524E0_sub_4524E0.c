// 函数 0x4524e0  sub_4524E0  size=0xB8  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4524E0(int a1, int a2)
{
  int result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+4h] [ebp-Ch]
  int v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  sub_464B60(&v3);
  result = a2;
  if ( a2 )
  {
    sub_464CE0(a2);
    result = v3;
    if ( v3 == 228 )
    {
      if ( v4 != 456 || v5 != 575 || v6 != 517 )
        return result;
      goto LABEL_11;
    }
    if ( v3 )
      goto LABEL_12;
    if ( !v4 && v5 == 800 && v6 == 600 )
    {
LABEL_11:
      sub_44BB20();
      result = v3;
LABEL_12:
      if ( result == 598 )
      {
        if ( v4 != 451 || v5 != 668 || v6 != 521 )
          return result;
      }
      else if ( result || v4 || v5 != 800 || v6 != 600 )
      {
        return result;
      }
      return sub_452130();
    }
  }
  return result;
}
