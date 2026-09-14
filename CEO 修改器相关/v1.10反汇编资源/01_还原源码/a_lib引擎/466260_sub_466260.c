// 函数 0x466260  sub_466260  size=0x11A  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_466260(int *this, int a2, int a3)
{
  int v4; // edi
  int v5; // ebx
  int v6; // edi
  int v8; // [esp+4h] [ebp-10014h]
  int v9; // [esp+Ch] [ebp-1000Ch] BYREF
  size_t Buffer; // [esp+10h] [ebp-10008h] BYREF
  _BYTE v11[65536]; // [esp+14h] [ebp-10004h] BYREF

  if ( *(this + 3) != 1 )
    return 0;
  v4 = *(this + 2);
  v5 = 0;
  v9 = 0;
  v8 = v4;
  *(this + 2) = v4 + 4;
  sub_46A2E0(v4 + 4);
  if ( a3 > 0 )
  {
    do
    {
      v6 = a3 - v5;
      if ( (unsigned int)(a3 - v5) > 0x8000 )
        v6 = 0x8000;
      Buffer = 0x10000;
      sub_46D790(v11, &Buffer, v5 + a2, v6, 1);
      sub_46A360(&Buffer, 4u);
      sub_46A360(v11, Buffer);
      ++v9;
      *(this + 2) += Buffer + 4;
      v5 += v6;
    }
    while ( v5 < a3 );
    v4 = v8;
  }
  sub_46A2E0(v4);
  sub_46A360(&v9, 4u);
  return 1;
}
