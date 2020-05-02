#include <stdio.h>
#include "mymath.h"
int main(void)
{
	double a,b;
	printf("Enter first no: ");
	scanf("%lf",&a);
	printf("Enter Second no: ");
	scanf("%lf",&b);
	printf("Add = %lf\n",myadd(a,b));
	printf("Sub = %lf\n",a-b);
	printf("Mul = %lf\n",a*b);
	if(b!=0)
		printf("Div = %lf\n",a/b);
	else
		printf("Div = 0\n");


	return 0;
}
