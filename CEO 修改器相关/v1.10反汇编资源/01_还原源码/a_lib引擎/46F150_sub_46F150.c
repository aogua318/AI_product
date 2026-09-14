// 函数 0x46f150  sub_46F150  size=0x1BF  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_46F150(int this, char *FileName, const char *a3)
{
  _DWORD *v4; // ebx
  int v5; // edi
  _DWORD *v6; // eax
  int v7; // ecx
  int Offset; // [esp+Ch] [ebp-110h] BYREF
  _DWORD *v10; // [esp+10h] [ebp-10Ch]
  int v11; // [esp+14h] [ebp-108h] BYREF
  _BYTE Buffer[256]; // [esp+18h] [ebp-104h] BYREF

  if ( sub_46A040((FILE **)this, FileName) )
  {
    sub_46A320((FILE **)this, Buffer, 4u);
    if ( Buffer[0] == 65 && Buffer[1] == 80 && Buffer[2] == 75 && Buffer[3] == 71 )
    {
      sub_46A320((FILE **)this, &Offset, 4u);
      sub_46A320((FILE **)this, &v11, 4u);
      sub_46A2E0((FILE **)this, Offset);
      v4 = sub_465E40(40 * v11, "a_lib\\a_filepkg.cpp", 191);
      v10 = v4;
      sub_46A320((FILE **)this, v4, 40 * v11);
      sub_464100(a3);
      v5 = 0;
      if ( v11 > 0 )
      {
        while ( 1 )
        {
          sub_464100((const char *)v4);
          if ( !strcmp(a3, (const char *)v4) )
            break;
          ++v5;
          v4 += 10;
          if ( v5 >= v11 )
            goto LABEL_11;
        }
        v6 = &v10[10 * v5];
        v7 = v6[8];
        *(_DWORD *)(this + 8) = v7;
        *(_DWORD *)(this + 16) = v7;
        *(_DWORD *)(this + 12) = v6[9];
        sub_46A2E0((FILE **)this, v7);
LABEL_11:
        v4 = v10;
      }
      sub_465FE0((int)v4, "a_lib\\a_filepkg.cpp", 207);
      if ( v5 != v11 )
        return 1;
    }
    sub_46A1F0((int *)this);
  }
  return 0;
}
