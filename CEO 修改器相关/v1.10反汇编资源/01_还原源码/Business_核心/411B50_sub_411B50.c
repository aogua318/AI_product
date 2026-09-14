// 函数 0x411b50  sub_411B50  size=0x93  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_411B50(int a1, int a2)
{
  int result; // eax
  int v3; // ecx
  char Buffer[100]; // [esp+0h] [ebp-68h] BYREF

  if ( a2 )
  {
    sprintf(Buffer, "%s\nline%d", "ceo_tasks.cpp", 90);
    MessageBoxA(hWnd, Buffer, aScriptErrorLan, 0);
    exit(1);
  }
  result = word_4D1110[94940 * dword_8703A0];
  v3 = 0;
  if ( result != -1 )
  {
    while ( 1 )
      v3 += *(__int16 *)(result * dword_4CCA98 + dword_4CCAAC + 1622);
  }
  return result;
}
