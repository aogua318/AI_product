// 函数 0x45cd10  sub_45CD10  size=0x2E1  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_45CD10(int a1)
{
  int v1; // esi
  int v2; // ebx
  int v3; // eax
  char *v4; // ecx
  char v5; // dl

  dword_4CDEC0 = a1;
  sub_425D90();
  dword_8CDEAC = (int)sub_45C920;
  dword_8CDEB0 = (int)sub_45CC60;
  dword_8CF000 = (int)sub_45CCB0;
  dword_8CEFFC = (int)SteamAPI_RunCallbacks;
  dword_8CF004 = (int)sub_45CCE0;
  dword_8CF00C = (int)sub_45E2A0;
  sub_469880(dword_8EEDEC, cy, dword_8EEDF8, 0);
  sub_469640(0, 0, &dword_8EEDEC, 0, 0, dword_8EEDEC, cy);
  `dynamic atexit destructor for 'private: static std::tr1::shared_ptr<__ExceptionPtr> __ExceptionPtr::m_badAllocExceptionPtr''();
  SteamAPI_RunCallbacks();
  v1 = sub_47DD20(&unk_8CDEA8, 0);
  sub_4688B0(&dword_8CDE78);
  if ( v1 )
  {
    v2 = dword_4B3860;
    if ( dword_4B3860 == -1 )
    {
      if ( dword_4B3864 != -1 )
        v1 = dword_4B3864 + 10000;
    }
    else
    {
      v3 = *(_DWORD *)dword_4D0C60 + 648 * dword_4B3860;
      strcpy(byte_4D0414, (const char *)v3);
      dbl_4CDF00 = *(double *)(v3 + 64);
      dbl_4CDF08 = *(double *)(v3 + 80);
      dword_4CDF10 = *(__int16 *)(v3 + 60);
      dword_4CDF14 = *(__int16 *)(v3 + 62);
      dword_4D04A8 = *(_DWORD *)(v3 + 88);
      dword_4D04AC = *(_DWORD *)(v3 + 92);
      dword_4CDF1C[0] = *(_DWORD *)(v3 + 132);
      dword_4CDF20[0] = *(_DWORD *)(v3 + 136);
      dword_4CDF24[0] = *(_DWORD *)(v3 + 140);
      dword_4CDF28[0] = *(_DWORD *)(v3 + 144);
      dword_4CDF2C[0] = *(_DWORD *)(v3 + 148);
      dword_4CDF30[0] = *(_DWORD *)(v3 + 152);
      dword_4CDF34[0] = -1;
      dword_4CDF38 = -1;
      dbl_4CDF40 = *(double *)(v3 + 520);
      dbl_4CDF48 = *(double *)(v3 + 528);
      dbl_4CDF50 = *(double *)(v3 + 536);
      dword_4CDF58 = *(_DWORD *)(v3 + 604);
      dbl_4CDF60 = *(double *)(v3 + 608);
      dword_4CDF68 = -1;
      dbl_4CDF70 = -1.0;
      dword_4CDF78 = *(_DWORD *)(v3 + 544);
      dword_4CDF88 = *(_DWORD *)(v3 + 548);
      dword_4CDF8C = *(_DWORD *)(v3 + 552);
      dword_4CDF90 = *(_DWORD *)(v3 + 556);
      dword_4CDF94 = *(_DWORD *)(v3 + 560);
      dword_4CDF98 = *(_DWORD *)(v3 + 564);
      word_4CDF9C = *(_WORD *)(v3 + 568);
      word_4CDF9E = *(_WORD *)(v3 + 570);
      v4 = (char *)(v3 + 572);
      do
      {
        v5 = *v4;
        byte_4CDFA0[(_DWORD)v4 - 572 - v3] = *v4;
        ++v4;
      }
      while ( v5 );
      dword_4CDFC0 = *(_DWORD *)(v3 + 616);
      dword_4CDFFC = *(_DWORD *)(v3 + 620);
      dword_4CE000 = *(_DWORD *)(v3 + 624);
      dword_4CE004 = *(_DWORD *)(v3 + 628);
      dword_4CE008 = *(_DWORD *)(v3 + 632);
      dword_4D0B34 = *(_DWORD *)(v3 + 636);
      dword_4D0B30 = *(_DWORD *)(v3 + 640);
      dword_4D04A4 = v2;
      dbl_4CDF80 = *(double *)(v3 + 72);
      v1 = 1;
    }
  }
  sub_4262C0();
  sub_466C70(&unk_8CF030);
  return v1;
}
