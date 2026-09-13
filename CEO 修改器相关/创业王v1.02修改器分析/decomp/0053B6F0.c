int __thiscall sub_53B6F0(void *this, int a2)
{
  if ( *(_DWORD *)(a2 + 4) == 256 && *(_DWORD *)(a2 + 8) == 13 && (IAT_user32_GetKeyState(17) & 0x8000u) != 0 )
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 196))(this);
  return sub_563F17(a2);
}
