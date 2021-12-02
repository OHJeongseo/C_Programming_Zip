#include<stdio.h>


//분할컴파일	활용
//main파일
//
void input(int *p, int *q);
double average(int *p, int *q);

void main() {
	int a, b;
	double c;

	input(&a,&b);
	c = average(&a,&b);
	printf("%d / %d = %.1lf\n", a, b, c);

}