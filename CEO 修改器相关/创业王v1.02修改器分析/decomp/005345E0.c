int __stdcall sub_5345E0(int a1, int a2, int a3)
{
  void (__stdcall *v3)(int, int, int, _DWORD, _DWORD); // ebx
  int (__stdcall *v5)(int, int, int, _DWORD, _DWORD); // ebx
  void (__stdcall *v6)(int, int, int, _DWORD, _DWORD); // ebx

  IAT_user32_SetPhysicalCursorPos(a1, a2);
  if ( a3 == 1 )
  {
    v6 = (void (__stdcall *)(int, int, int, _DWORD, _DWORD))IAT_user32_mouse_event;
    IAT_user32_mouse_event(2, a1, a2, 0, 0);
    v6(4, a1, a2, 0, 0);
    v6(2, a1, a2, 0, 0);
    return ((int (__stdcall *)(int, int, int, _DWORD, _DWORD))v6)(4, a1, a2, 0, 0);
  }
  else if ( a3 == 2 )
  {
    v5 = IAT_user32_mouse_event;
    IAT_user32_mouse_event(8, a1, a2, 0, 0);
    return v5(16, a1, a2, 0, 0);
  }
  else
  {
    v3 = (void (__stdcall *)(int, int, int, _DWORD, _DWORD))IAT_user32_mouse_event;
    if ( a3 == 3 )
    {
      IAT_user32_mouse_event(8, a1, a2, 0, 0);
      v3(16, a1, a2, 0, 0);
      v3(8, a1, a2, 0, 0);
      return ((int (__stdcall *)(int, int, int, _DWORD, _DWORD))v3)(16, a1, a2, 0, 0);
    }
    else
    {
      IAT_user32_mouse_event(2, a1, a2, 0, 0);
      return ((int (__stdcall *)(int, int, int, _DWORD, _DWORD))v3)(4, a1, a2, 0, 0);
    }
  }
}
