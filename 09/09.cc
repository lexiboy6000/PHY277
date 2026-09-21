#include <stdio.h>


int main(){

	float f = 0;
	double d = 0;

	for(int i=0;i<100;i++) f += 0.01;
	for(int i=0;i<100;i++) d += 0.01;

	printf("f = %lf\n", f);
	printf("d = %lf\n", d);

	printf(" d-f = %lf\n", (d-(double)f));



	return 0;
}
