#include<stdio.h>
void som(int a, int b, int c);

int  main() {
	int a = 0;
	int b = 0;
	int c = 0; 
	som(a, b ,c);
}

void  som(int a, int b, int c) {
	while (1) {
		printf("����1:"); scanf("%d", &a);
		printf("����2:"); scanf("%d", &b);
		printf("�Է�(1:����,   2:����):"); scanf("%d", &c);

		if (c == 1) c = a + b;
		else if (c == 2)c = a - b;
		else  break;
		printf("���=%d\n", c);
	}
}