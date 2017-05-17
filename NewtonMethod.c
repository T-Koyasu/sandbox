#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define F(x)  exp(-0.5*x)-2*x*x			/*関数F（x）の定義*/
#define FD(x)  -0.5*exp(-0.5*x)-4*x			/*関数FD（x）の定義*/
#define EPS 1.e-5						/**/

int main(void)
{
	double x=0.0,fx,fdx,dx;
	int n=0;
	printf(" n      x      fd      fdx      dx¥n");
	do{
		fx= F(x);
		fdx= FD(x);
		dx=-fx/fdx;
		printf("%3d%8.5f%8.5f%8.5f%8.5f¥n",n,x,fx,fdx,dx);
		n++;
		x+=dx;
	}while(fabs(dx/x) > EPS);
	printf("¥n x=%7.5f¥n",x);
}
/*実行結果
n      x      fd      fdx      dx
0 0.00000　 1.00000　-0.50000　 2.00000
1 2.00000　-7.63212　-8.18394　-0.93257
2 1.06743　-1.69238　-4.56292　-0.37090
3 0.69653　-0.26439　-3.13907　-0.08423
4 0.61230　-0.01355　-2.81735　-0.00481
5 0.60749　-0.00004　-2.79899　-0.00002
6 0.60748　-0.00000　-2.79893　-0.00000

x=0.60748*/