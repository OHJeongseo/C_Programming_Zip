#include<stdio.h>


//����������	Ȱ��
//main����
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