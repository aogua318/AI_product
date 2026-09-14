// 函数 0x435060  sub_435060  size=0x322  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_435060()
{
  int v0; // esi
  char *v1; // eax
  char v2; // di
  char v3; // bl
  _BYTE v5[16]; // [esp+10h] [ebp-1Ch] BYREF
  int v6; // [esp+28h] [ebp-4h]

  sub_464410(v5);
  v0 = 0;
  v6 = 0;
  v1 = (char *)sub_47C740("data\\smapclr.csv");
  if ( sub_464420(v1) )
  {
    do
    {
      v2 = sub_4646D0(1, v0);
      v3 = sub_4646D0(2, v0);
      word_870920[v0] = ((int)sub_4646D0(3, v0) >> 3) | (4 * (v3 & 0xF8 | (32 * (v2 & 0xF8))));
      ++v0;
    }
    while ( v0 < 58 );
    sub_464650(v5);
  }
  dword_870918 = (unsigned __int16)word_870946;
  dword_8709E8 = (unsigned __int16)word_870948;
  dword_8709EC = (unsigned __int16)word_870990;
  dword_87091C = (unsigned __int16)word_870992;
  word_870870[0] = word_870946;
  word_870872 = word_870946;
  word_870874 = word_870946;
  word_870876 = word_870948;
  word_870878 = word_870948;
  word_87087A = word_870948;
  word_87087C = word_870946;
  word_87087E = word_870946;
  word_870880 = word_870946;
  word_870882 = word_870946;
  word_870884 = word_870946;
  word_870886 = word_870946;
  word_870888 = word_870946;
  word_87088A = word_870946;
  word_87088C = word_870948;
  word_87088E = word_870948;
  word_870890 = word_870948;
  word_870892 = word_870948;
  word_870894 = word_870948;
  word_870896 = word_870948;
  word_870898 = word_870948;
  word_87089A = word_870948;
  word_87089C = word_870946;
  word_87089E = word_870946;
  word_8708A0 = word_870946;
  word_8708A2 = word_870946;
  word_8708A4 = word_870946;
  word_8708A6 = word_870946;
  word_8708A8 = word_870946;
  word_8708AA = word_870946;
  word_8708AC = word_870990;
  word_8708AE = word_870990;
  word_8708B0 = word_870990;
  word_8708B2 = word_870946;
  word_8708B4 = word_870946;
  word_8708B6 = word_870946;
  word_8708B8 = word_870946;
  word_8708BA = word_870946;
  word_8708BC = word_870946;
  word_8708BE = word_870946;
  word_8708C0 = word_870946;
  word_8708C2 = word_870990;
  word_8708C4 = word_870990;
  word_8708C6 = word_870990;
  word_8708C8 = word_870990;
  word_8708CA = word_870990;
  word_8708CC = word_870990;
  word_8708CE = word_870990;
  word_8708D0 = word_870990;
  word_8708D2 = word_870946;
  word_8708D4 = word_870946;
  word_8708D6 = word_870946;
  word_8708D8 = word_870946;
  word_8708DA[0] = word_870946;
  word_8708DC = word_870946;
  word_8708DE = word_870946;
  word_8708E0 = word_870946;
  word_8708E2 = word_870992;
  word_8708E4 = word_870992;
  word_8708E6 = word_870992;
  word_8708E8 = word_870948;
  word_8708EA = word_870948;
  word_8708EC = word_870948;
  word_8708EE = word_870948;
  word_8708F0 = word_870948;
  word_8708F2 = word_870948;
  word_8708F4 = word_870948;
  word_8708F6 = word_870948;
  word_8708F8 = word_870992;
  word_8708FA = word_870992;
  word_8708FC = word_870992;
  word_8708FE = word_870992;
  word_870900 = word_870992;
  word_870908 = word_870948;
  word_87090A = word_870948;
  word_87090C = word_870948;
  word_87090E = word_870948;
  word_870910 = word_870948;
  word_870912 = word_870948;
  word_870914 = word_870948;
  word_870916 = word_870948;
  word_870902 = word_870992;
  word_870904 = word_870992;
  word_870906 = word_870992;
  v6 = -1;
  return sub_464B50(v5);
}
