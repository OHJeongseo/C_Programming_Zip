#include<stdio.h>
//���������� Ȱ��
//sub����
//
void input(int *p, int *q) {
	printf("�� ���� �Է�:");
	scanf("%d%d", p, q);

}
double average(int *p, int *q) {
	double a;
	a = (*p + *q) / 2.0;
	return a;
}