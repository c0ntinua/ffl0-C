typedef double real;
typedef real* field;
typedef Color color;
const int R = 100;
const int C = 100;
const int H = 10; //pix height
const int W = 10; //pix width
const int F = 10; //max num filters
const int L =100; //max weights in filter
typedef struct {
    int length;
    int r[L];
    int c[L];
    real a[L];
} filter;
int reading = 0;
real power = 2.0;
int r_span =4;
int c_span = 4;
int num_filters = 3;
filter f[10];
real B[2][R][C];






