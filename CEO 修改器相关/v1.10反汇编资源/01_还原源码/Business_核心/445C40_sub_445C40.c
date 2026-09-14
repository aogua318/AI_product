// 函数 0x445c40  sub_445C40  size=0x42A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_445C40(int a1)
{
  int result; // eax
  __int16 *v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  char *v13; // eax
  char *v14; // ecx
  char v15; // dl
  int v16; // edi
  int v17; // eax
  int v18; // eax
  _DWORD v19[6]; // [esp+0h] [ebp-130h] BYREF
  int (__cdecl *v20)(int); // [esp+18h] [ebp-118h]
  int v21; // [esp+1Ch] [ebp-114h]
  int v22; // [esp+20h] [ebp-110h]
  int v23; // [esp+24h] [ebp-10Ch] BYREF
  int v24; // [esp+28h] [ebp-108h] BYREF
  char Buffer[256]; // [esp+2Ch] [ebp-104h] BYREF

  result = 0;
  memset(v19, 0, sizeof(v19));
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( a1 )
  {
    if ( !dword_8A8FC0 )
    {
      result = dword_4B1024;
      if ( dword_4B1024 != -1 )
      {
        v2 = (__int16 *)(dword_4C43DC + dword_4B1024 * dword_4C43C8);
        v3 = *(_DWORD *)dword_4C4434 + 72 * *v2 + 40;
        v4 = dword_4D0EFC + 10 * *(__int16 *)(dword_4D0F08 * *((_DWORD *)v2 + 20) + dword_4D0F1C);
        sprintf(Buffer, "%d x %d", *(unsigned __int8 *)(v4 + 4), *(unsigned __int8 *)(v4 + 5));
        if ( v2[2] == -1 )
        {
          v5 = sub_47C740("face\\forsale.fce");
          sub_481C90(&unk_8A8FC8, v5, 1);
          sub_47FF50(Buffer);
          v6 = sub_4646A0(6, 0);
          sub_47FF50(v6);
          v7 = sub_40F570(v2, 1);
          _itoa(v7, Buffer, 10);
          sub_47FF50(Buffer);
          v20 = sub_447280;
          sub_40D7C0(v2, (int)&v24, (int)&v23);
          v8 = *(char *)(*(_DWORD *)dword_4D0B64 + v23 * dword_4D0E80 + v24);
          v9 = sub_4646A0(7, v8 / 3 + 1);
          sub_47FF50(v9);
          v10 = v8 % 3;
        }
        else
        {
          v11 = sub_47C740("face\\forsale-mine.fce");
          sub_481C90(&unk_8A8FC8, v11, 1);
          sub_47FF50(Buffer);
          sub_47FF50(v3);
          v12 = sub_40F570(v2, 1);
          _itoa(v12, Buffer, 10);
          sub_47FF50(Buffer);
          v13 = (char *)(*(_DWORD *)dword_870814 + 72 * v2[2]);
          v14 = Buffer;
          do
          {
            v15 = *v13;
            *v14++ = *v13++;
          }
          while ( v15 );
          sub_47FF50(Buffer);
          sub_438320(*((_DWORD *)v2 + 2), Buffer, 7);
          sub_47FF50(Buffer);
          sub_438320(*((_DWORD *)v2 + 2) / *(_DWORD *)(*(_DWORD *)dword_870814 + 72 * v2[2] + 24), Buffer, 7);
          sub_47FF50(Buffer);
          _itoa(*((unsigned __int8 *)v2 + 6), Buffer, 10);
          sub_47FF50(Buffer);
          v20 = sub_447280;
          sub_40D7C0(v2, (int)&v24, (int)&v23);
          v16 = *(char *)(*(_DWORD *)dword_4D0B64 + v23 * dword_4D0E80 + v24);
          v17 = sub_4646A0(7, v16 / 3 + 1);
          sub_47FF50(v17);
          v10 = v16 % 3;
        }
        v18 = sub_4646A0(8, v10 + 1);
        sub_47FF50(v18);
        v19[0] = sub_445C00;
        v22 = 100;
        result = sub_408FC0((int)&unk_8A8FC8, (int)v19);
        dword_8A8FC0 = 1;
      }
    }
  }
  else if ( dword_8A8FC0 )
  {
    sub_47CCD0(&unk_8A8FC8);
    dword_8A8FC0 = 0;
    return sub_47E260(&unk_8A8FC8);
  }
  return result;
}
