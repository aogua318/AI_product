// 函数 0x448550  sub_448550  size=0x56E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_448550()
{
  double *v0; // ebx
  unsigned __int64 v1; // kr00_8
  unsigned __int64 v2; // kr08_8
  unsigned __int64 v3; // kr10_8
  unsigned __int64 v4; // kr18_8
  unsigned __int64 v5; // kr20_8
  __int64 v6; // kr28_8
  __int64 v8; // [esp+Ch] [ebp-134h]
  __int64 v9; // [esp+14h] [ebp-12Ch]
  unsigned __int64 v10; // [esp+1Ch] [ebp-124h]
  unsigned __int64 v11; // [esp+24h] [ebp-11Ch]
  unsigned __int64 v12; // [esp+34h] [ebp-10Ch]
  char Buffer[256]; // [esp+3Ch] [ebp-104h] BYREF

  v0 = (double *)((char *)&unk_4D10B8 + 189880 * dword_8B4298[dword_8B4290]);
  sub_42EB70(v0);
  v9 = (unsigned __int64)v0[1];
  sub_438340(v9, Buffer);
  sub_47FF50(Buffer);
  v10 = (unsigned __int64)dbl_870318;
  sub_438340((unsigned __int64)dbl_870318, Buffer);
  sub_47FF50(Buffer);
  v11 = (unsigned __int64)dbl_870398;
  sub_438340((unsigned __int64)dbl_870398, Buffer);
  sub_47FF50(Buffer);
  v1 = (unsigned __int64)dbl_870390;
  sub_438340((unsigned __int64)dbl_870390, Buffer);
  sub_47FF50(Buffer);
  v2 = (unsigned __int64)dbl_870368[0] + v1;
  sub_438340((unsigned __int64)dbl_870368[0], Buffer);
  sub_47FF50(Buffer);
  v3 = (unsigned __int64)dbl_870380 + v2;
  sub_438340((unsigned __int64)dbl_870380, Buffer);
  sub_47FF50(Buffer);
  v4 = (unsigned __int64)dbl_870388 + v3;
  sub_438340((unsigned __int64)dbl_870388, Buffer);
  sub_47FF50(Buffer);
  v5 = (unsigned __int64)dbl_870370 + v4;
  sub_438340((unsigned __int64)dbl_870370, Buffer);
  sub_47FF50(Buffer);
  v6 = (unsigned __int64)dbl_870378 + v5;
  sub_438340((unsigned __int64)dbl_870378, Buffer);
  sub_47FF50(Buffer);
  sub_438340(v6, Buffer);
  sub_47FF50(Buffer);
  v12 = (unsigned __int64)dbl_870348;
  sub_438340((unsigned __int64)dbl_870348, Buffer);
  sub_47FF50(Buffer);
  v8 = v9 + v10 + v11 + v6 + v12;
  sub_438340(v8, Buffer);
  sub_47FF50(Buffer);
  sub_438340((unsigned __int64)v0[9], Buffer);
  sub_47FF50(Buffer);
  sub_438340(v8 - (unsigned __int64)v0[9], Buffer);
  sub_47FF50(Buffer);
  if ( (unsigned int)dword_8B42EC <= 2 )
    sub_4810E0(1);
  sprintf(Buffer, "%d%%", (unsigned int)(100 * v9 / v8));
  sub_47FF50(Buffer);
  sprintf(Buffer, "%d%%", (unsigned int)((__int64)(100 * v10) / v8));
  sub_47FF50(Buffer);
  sprintf(Buffer, "%d%%", (unsigned int)((__int64)(100 * v11) / v8));
  sub_47FF50(Buffer);
  sprintf(Buffer, "%d%%", (unsigned int)(100 * v6 / v8));
  sub_47FF50(Buffer);
  sprintf(Buffer, "%d%%", (unsigned int)((__int64)(100 * v12) / v8));
  return sub_47FF50(Buffer);
}
