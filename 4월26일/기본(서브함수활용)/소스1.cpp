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
		printf("¼ıÀÚ1:"); scanf("%d", &a);
		printf("¼ıÀÚ2:"); scanf("%d", &b);
		printf("ÀÔ·Â(1:µ¡¼À,   2:»¬¼À):"); scanf("%d", &c);

		if (c == 1) c = a + b;
		else if (c == 2)c = a - b;
		else  break;
		printf("°á°ú=%d\n", c);
	}
}