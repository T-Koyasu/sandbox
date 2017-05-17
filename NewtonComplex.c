#include <stdio.h>
#include <math.h>
#include <complex.h>
#define eps 1.0e-6
double _Complex f(double _Complex z)
{
	return (z*z+5*z+7);
}
double _Complex fd(double _Complex z)
{
	return (2*z+5);
}
int main (void)
{
	double _Complex x0,x1;
	int i,n=10000;
	x0=-1.0+2.0*I;
	for(i=0;i<n;i++){
		x1=x0-f(x0)/fd(x0);
		if(cabs(f(x1))<eps){break;}
		x0=x1;
	}
	printf("x=%f+%fi¥n",creal(x1),cimag(x1));
    printf("x=%f-%fi¥n",creal(x1),cimag(x1));
    return 0;
}

/*実行結果
x=-2.500000+0.866025i
x=-2.500000-0.866025i
*/
