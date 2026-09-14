// 函数 0x474bd4  DirectSoundCreate  size=0x6  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

// attributes: thunk
HRESULT __stdcall DirectSoundCreate(LPCGUID pcGuidDevice, LPDIRECTSOUND *ppDS, LPUNKNOWN pUnkOuter)
{
  return __imp_DirectSoundCreate(pcGuidDevice, ppDS, pUnkOuter);
}
