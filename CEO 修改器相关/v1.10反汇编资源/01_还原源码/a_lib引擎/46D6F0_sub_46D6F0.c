// 函数 0x46d6f0  sub_46D6F0  size=0x5F  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

__int16 __cdecl sub_46D6F0(_WORD *a1)
{
  struct tm *v1; // eax
  __int16 result; // ax
  __time64_t Time; // [esp+0h] [ebp-8h] BYREF

  _time64(&Time);
  v1 = _localtime64(&Time);
  *a1 = LOWORD(v1->tm_year) + 1900;
  a1[1] = LOWORD(v1->tm_mon) + 1;
  a1[2] = v1->tm_wday;
  a1[3] = v1->tm_mday;
  a1[4] = v1->tm_hour;
  a1[5] = v1->tm_min;
  result = v1->tm_sec;
  a1[6] = result;
  return result;
}
