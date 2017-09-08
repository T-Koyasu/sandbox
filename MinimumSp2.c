#include <stdio.h>
#include <math.h>

#define N 5  /* データ数 */


int main(void) {
  int i;

  double x[N] = { 20,40,60,80,100};
  double y[N] = { 1.31,2.93,3.21,4.58,5.46};

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
a = 0.049750
b = 0.513000
*/