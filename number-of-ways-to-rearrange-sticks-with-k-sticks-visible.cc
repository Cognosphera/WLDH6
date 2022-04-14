#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define ROF(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (b); --i >= (a); )
typedef complex<double> cd;

const long MOD = 1000000007, SQ = 100000, NN = 1024;
const double IROOT = sqrt(double(MOD-SQ*SQ%MOD));
cd units[NN], aa[NN], bb[NN];

void fft_prepare(long n) {
  double ph = 2*M_PI/n;
  REP(i, n)
    units[i] = {cos(ph*i), sin(ph*i)};
}

void fft_dif2(cd a[], long n) { // sign = -1
  for (long m = n, dwi = 1; m >= 2; m >>= 1, dwi <<= 1)
    for (long r = 0; r < n; r += m) {
      cd *x = a+r, *y = a+r+(m>>1), *w = units;
      REP(j, m>>1) {
        cd v = *y, t = *x-v;
        *y++ = {t.real()*w->real()+t.imag()*w->imag(), t.imag()*w->real()-t.real()*w->imag()};
        *x++ += v;
        w += dwi;
      }
    }
}

void ifft_dit2(cd a[], long n) { // sign = 1
  for (long m = 2, dwi = n>>1; m <= n; m <<= 1, dwi >>= 1)
    for (long r = 0; r < n; r += m) {
      cd *x = a+r, *y = a+r+(m>>1), *w = units;
      REP(j, m>>1) {
        cd t{y->real()*w->real()-y->imag()*w->imag(), y->real()*w->imag()+y->imag()*w->real()};
        *y++ = *x-t;
        *x++ += t;
        w += dwi;
      }
    }
  REP(i, n)
    a[i] *= 1.0/n;
}

void fft_interleave(const vector<int>& a, long n, cd r[]) {
  REP(i, a.size()) {
    lon