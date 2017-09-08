#include <stdio.h>
#include <math.h>

#define N 4 /* データ数 */


int main(void) {
  int i;

  double x[N] = { 2,4,6,8};
  double y[N] = { 8.8,10.5,13.0,16.5};

  double a = 0, b = 0;
  double sum_xy = 0, sum_x = 0, sum_y = 0, sum_x2 = 0;

  for (i=0; i<N; i++) {
    sum_xy += x[i] * y[i];
    sum_x += x[i];
    sum_y += y[i];
    sum_x2 += pow(x[i], 2);
  }
  
  a = (N * sum_xy - sum_x * sum_y) / (N * sum_x2 - pow(sum_x, 2));
  b = (sum_x2 * sum_y - sum_xy * sum_x) / (N * sum_x2 - pow(sum_x, 2));

  printf("a = %f\n", a);
  printf("b = %f\n", b);

  return 0;
}


/*実行結果
a = 1.280000
b = 5.800000
*/