// 函数 0x42a970  sub_42A970  size=0x120  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__thiscall sub_42A970(int *this, int a2, int a3)
{
  _DWORD *v4; // eax
  int v5; // eax

  *this = 0;
  *(this + 1) = 0;
  *((_BYTE *)this + 16) = 0;
  *((_BYTE *)this + 24) = 0;
  *(this + 7) = 0;
  *(this + 5) = (int)&CCallback<CSteamAchievements,UserStatsReceived_t,0>::`vftable';
  *(this + 8) = 0;
  *(this + 9) = 0;
  if ( sub_42A380 )
  {
    *(this + 8) = (int)this;
    *(this + 9) = (int)sub_42A380;
    SteamAPI_RegisterCallback(this + 5, 1101);
  }
  *((_BYTE *)this + 44) = 0;
  *(this + 12) = 0;
  *(this + 10) = (int)&CCallback<CSteamAchievements,UserStatsStored_t,0>::`vftable';
  *(this + 13) = 0;
  *(this + 14) = 0;
  if ( nullsub_1 )
  {
    *(this + 13) = (int)this;
    *(this + 14) = (int)nullsub_1;
    SteamAPI_RegisterCallback(this + 10, 1102);
  }
  *((_BYTE *)this + 64) = 0;
  *(this + 17) = 0;
  *(this + 15) = (int)&CCallback<CSteamAchievements,UserAchievementStored_t,0>::`vftable';
  *(this + 18) = 0;
  *(this + 19) = 0;
  if ( nullsub_1 )
  {
    *(this + 18) = (int)this;
    *(this + 19) = (int)nullsub_1;
    SteamAPI_RegisterCallback(this + 15, 1103);
  }
  v4 = (_DWORD *)SteamInternal_ContextInit(&off_4B3128);
  v5 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v4 + 36))(*v4);
  *(this + 2) = a2;
  *this = v5;
  *(this + 1) = 0;
  *(this + 3) = a3;
  sub_42A2B0();
  return this;
}
