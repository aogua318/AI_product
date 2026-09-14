// 函数 0x45bbb0  sub_45BBB0  size=0x95  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_45BBB0@<eax>(const char *a1@<ebx>, int a2@<edi>)
{
  const char *v2; // eax
  char *v3; // esi
  char v5; // al
  char v6; // [esp+7h] [ebp-1h]

  sub_482FE0(dword_8CF170 + 32 * (9 * a2 + 981));
  v2 = sub_45BB70(28, a1);
  v3 = (char *)v2;
  if ( v2 )
  {
    v5 = *v2;
    *v3 = 0;
    v6 = v5;
    sub_47FF50(a1);
    *v3 = v6;
    sub_482060(dword_8CF170 + 32 * (9 * a2 + 990));
    sub_47FF50(v3);
    return a2 + 2;
  }
  else
  {
    sub_47FF50(a1);
    return a2 + 1;
  }
}
