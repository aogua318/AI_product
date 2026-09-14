// 函数 0x416690  sub_416690  size=0x80  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_416690()
{
  int v1; // [esp+4h] [ebp-10h] BYREF
  int v2; // [esp+8h] [ebp-Ch] BYREF
  int v3; // [esp+Ch] [ebp-8h] BYREF
  int v4; // [esp+10h] [ebp-4h] BYREF

  sub_4840E0(0, 0, &v4, &v3);
  v4 += *(_DWORD *)(dword_4CC8E0 + 32) * (*(_DWORD *)(dword_4CC8D8 + 188) - *(_DWORD *)(dword_4CC8E0 + 188));
  v3 += *(_DWORD *)(dword_4CC8E0 + 32) * (*(_DWORD *)(dword_4CC8D8 + 192) - *(_DWORD *)(dword_4CC8E0 + 192));
  sub_4837C0(v4, v3, &v1, &v2);
  return sub_484280(v1, v2);
}
