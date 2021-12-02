#include<stdio.h>
//분할컴파일 활용
//sub파일
//
void input(int *p, int *q) {
	printf("두 정수 입력:");
	scanf("%d%d", p, q);

}
double average(int *p, int *q) {
	double a;
	a = (*p + *q) / 2.0;
	return a;
}