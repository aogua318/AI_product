// 函数 0x43f010  sub_43F010  size=0x2B9  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_43F010()
{
  unsigned int v0; // esi
  int v1; // edi
  int v2; // ebx
  int v3; // ebx
  int v4; // esi
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v9; // [esp+14h] [ebp-110h]
  __int16 *v10; // [esp+18h] [ebp-10Ch]
  int *v11; // [esp+1Ch] [ebp-108h]
  char Buffer[256]; // [esp+20h] [ebp-104h] BYREF

  v0 = *(_DWORD *)(dword_8A5CE0 + 7540);
  v1 = dword_4CCAAC + dword_4B1028 * dword_4CCA98;
  v9 = v1;
  v2 = *(_DWORD *)dword_4D0C94 + 68 * *(char *)(388 * dword_8A48C0 + *(_DWORD *)dword_4D0C8C + 78);
  if ( v0 >= dword_8A48C4 )
  {
    v0 = 0;
    sub_4801E0(0);
  }
  v3 = *(_DWORD *)dword_87081C + 116 * *(__int16 *)(v2 + 2 * dword_8A4870[v0] + 24);
  dword_8A48C8 = dword_8A4870[v0];
  sub_47FF50(*(_DWORD *)dword_870814 + 72 * *(unsigned __int8 *)(v3 + 1));
  v4 = 1440;
  v11 = (int *)(v3 + 28);
  v10 = (__int16 *)(v3 + 20);
  do
  {
    if ( *v10 == -1 )
    {
      sub_482060(v4 + dword_8A5CE0);
      sub_482060(v4 + dword_8A5CE0 + 1152);
    }
    else
    {
      v5 = *(_DWORD *)dword_870814 + 72 * *v10;
      sprintf(Buffer, "%.2f", (double)*v11 / (double)*(int *)(v5 + 24));
      sub_47FF50(Buffer);
      sub_482FE0(v4 + dword_8A5CE0 + 1152);
      strcpy(Buffer, (const char *)v5);
      sub_47FF50(Buffer);
      sub_482FE0(v4 + dword_8A5CE0);
      v1 = v9;
    }
    ++v10;
    ++v11;
    v4 += 288;
  }
  while ( v4 < 2592 );
  v6 = *(__int16 *)(v1 + 2 * *(unsigned __int8 *)(v3 + 1) + 240);
  if ( v6 == -1 )
  {
    sub_482FE0(dword_8A5CE0 + 4032);
  }
  else
  {
    dword_8A48CC = *(unsigned __int8 *)(v6 * dword_4CC8BC + dword_4CC8D0 + 1256);
    sub_482060(dword_8A5CE0 + 4032);
  }
  sub_47E650(dword_8A48CC + 4);
  _itoa(*(__int16 *)(v1 + 2 * (dword_8A48CC < 0 ? 0 : dword_8A48CC) + 768), Buffer, 10);
  sub_47FF50(Buffer);
  v7 = sub_4413A0(dword_8A48CC);
  _itoa(v7, Buffer, 10);
  return sub_47FF50(Buffer);
}
