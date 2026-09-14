// 函数 0x49807e  start_7  size=0x234  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

double __usercall start_7@<st0>(int a1@<ecx>, __m128d a2@<xmm0>, int a3)
{
  __int16 v3; // ax
  __m128d v4; // xmm0
  __m128d v5; // xmm1
  int v6; // edx
  __m128d v7; // xmm1
  __m128d v8; // xmm4
  __m128d v9; // xmm0
  double v10; // xmm5_8
  __m128d v11; // xmm2
  __m128d v12; // xmm0
  double v13; // xmm3_8
  __m128d *v14; // eax
  __m128d v15; // xmm2
  __m128d v16; // xmm0
  __m128d v17; // xmm7
  __m128d v18; // xmm2
  __m128d v19; // xmm1
  __m128d v20; // xmm4
  __m128d v21; // xmm3
  __m128d v22; // xmm0
  __m128d v23; // xmm7
  __m128d v24; // xmm1
  __m128d v25; // xmm0
  __m128d v26; // xmm4
  __m128d v27; // xmm1
  __m128d v28; // xmm4
  __m128d v29; // xmm7
  double result; // st7

  v3 = (_mm_extract_epi16((__m128i)a2, 3) & 0x7FFF) - 14368;
  if ( (unsigned __int16)v3 > 0x8A8u )
  {
    if ( v3 > 2216 )
    {
      result = _fload_withFB(a1, &a3);
      start_3(a3);
    }
    else
    {
      return (3.602879701896397e16 * a2.m128d_f64[0] + a2.m128d_f64[0]) * 2.775557561562891e-17;
    }
  }
  else
  {
    v4 = _mm_unpacklo_pd(a2, a2);
    v5 = _mm_mul_pd((__m128d)xmmword_4AD4A0, v4);
    v6 = (int)v5.m128d_f64[0];
    v7 = _mm_sub_pd(_mm_add_pd(v5, (__m128d)xmmword_4AD4B0), (__m128d)xmmword_4AD4B0);
    v8 = _mm_mul_pd((__m128d)xmmword_4AD4D0, v7);
    v9 = _mm_sub_pd(v4, _mm_mul_pd((__m128d)xmmword_4AD4C0, v7));
    v10 = 6.716466596857464e-14 * v7.m128d_f64[0] + v9.m128d_f64[0];
    v11 = v9;
    v12 = _mm_sub_pd(v9, v8);
    *(_QWORD *)&v10 &= 0xFFFFFFFFFFFC0000uLL;
    v13 = v12.m128d_f64[0];
    v14 = (__m128d *)((char *)&unk_4ABEA0 + 176 * (v6 & 0x1F));
    v15 = _mm_sub_pd(v11, v12);
    v16 = _mm_unpackhi_pd(v12, v12);
    v17 = _mm_mul_pd(v14[1], v16);
    v18 = _mm_sub_pd(_mm_sub_pd(v15, v8), _mm_mul_pd(v7, (__m128d)xmmword_4AD4E0));
    v19 = _mm_mul_pd(v14[3], v16);
    v20 = _mm_mul_pd(v14[6], v16);
    v18.m128d_f64[0] = v18.m128d_f64[0] + v13 - v10;
    v21 = v16;
    v22 = _mm_mul_pd(v16, v16);
    v23 = _mm_add_pd(_mm_add_pd(v17, *v14), _mm_mul_pd(_mm_add_pd(v19, v14[2]), v22));
    v24 = _mm_mul_pd(v14[7], v22);
    v25 = _mm_mul_pd(v22, v22);
    v26 = _mm_add_pd(_mm_add_pd(v20, v14[5]), v24);
    v27 = _mm_mul_pd(v21, v14[9]);
    v28 = _mm_mul_pd(v26, _mm_mul_pd(v21, v25));
    v21.m128d_f64[0] = v27.m128d_f64[0];
    v29 = _mm_add_pd(_mm_add_pd(v23, _mm_mul_pd(v14[4], v25)), v28);
    v28.m128d_f64[0] = v27.m128d_f64[0];
    v27.m128d_f64[0] = _mm_unpackhi_pd(v27, v27).m128d_f64[0];
    v21.m128d_f64[0] = v21.m128d_f64[0] + v27.m128d_f64[0];
    v27.m128d_f64[0] = v27.m128d_f64[0] + v28.m128d_f64[0] - v21.m128d_f64[0];
    v28.m128d_f64[0] = v18.m128d_f64[0];
    v25.m128d_f64[0] = v25.m128d_f64[0] * v25.m128d_f64[0] * v29.m128d_f64[0]
                     + _mm_unpackhi_pd(v29, v29).m128d_f64[0]
                     + (v14[9].m128d_f64[0] + v14[9].m128d_f64[1]) * _mm_unpackhi_pd(v18, v18).m128d_f64[0]
                     + v14[8].m128d_f64[1]
                     + v27.m128d_f64[0];
    *(_QWORD *)&v18.m128d_f64[0] = COERCE_UNSIGNED_INT64(v14[10].m128d_f64[1]) & COERCE_UNSIGNED_INT64(1.0 / v10);
    return v25.m128d_f64[0]
         + v21.m128d_f64[0]
         - (v18.m128d_f64[0]
          - v14[8].m128d_f64[0]
          + v21.m128d_f64[0]
          - (v18.m128d_f64[0]
           - v14[8].m128d_f64[0]))
         - (1.0 - v10 * v18.m128d_f64[0] - v28.m128d_f64[0] * (1.0 / v10)) * (1.0 / v10 * v14[10].m128d_f64[0])
         + v21.m128d_f64[0]
         - (v18.m128d_f64[0]
          - v14[8].m128d_f64[0]);
  }
  return result;
}
