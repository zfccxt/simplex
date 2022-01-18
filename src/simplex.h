#ifndef ZFCCXT_SIMPLEX_H_
#define ZFCCXT_SIMPLEX_H_

#ifdef __cplusplus
extern "C" {
#endif

void   simplex_init();
double simplex_noise2d(double xin, double yin);
double simplex_noise3d(double xin, double yin, double zin);
double simplex_noise4d(double xin, double yin, double zin, double win);

#ifdef __cplusplus
}
#endif

#endif // ZFCCXT_SIMPLEX_H_
