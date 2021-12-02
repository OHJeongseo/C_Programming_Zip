#include<stdio.h>
void main() {
	int a , b ;
	double c;
	int d;

	a = 20;
	b = 3;
	printf("a=%d, b=%d\n", a, b);
	c = ((double)a) / b;

	printf("c =%.1lf\n", c);

	d = (int)c;
	printf("d=%d\n", d);

}