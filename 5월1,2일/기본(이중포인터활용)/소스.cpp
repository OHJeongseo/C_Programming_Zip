#include<stdio.h>

/*
void main() {
	char*p[3];

	p[0] = "aaa";
	p[1] = "bbb";
	p[2] = "ccc";

	for (int i = 0; i < 3; i++) {
		printf("%s\n", p[i]);
	}
}
*/


/*
void main() {		   //�����͹迭�� 2�����迭ó�� ����� ���α׷�, 
	                       //���ڿ� ���ÿ��� ���ϰ� ����Ҽ��ִ�
	int a[4] = { 1,2,3,4 };				    //��
	int b[4] = { 10, 20, 30,40 };	        //��
	int c[4] = { 100,200,300,400 };		//��
	int *p[3];	 //�� 
	p[0] = a;
	p[1] = b;
	p[2] = c;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}
*/
   /*
void sub2(int **pp) {
	**pp = 10;
}


void sub(int *p) {			
	sub2(&p);
}

void main() {				      //���������͸� ����� ���α׷�
	int a = 0;
	sub(&a);
	printf("a=%d\n", a);
}
*/

/*
void  main() {	   //���� ������ ���α׷�
	int a = 10;
	int*p, **pp;

	p = &a;
	pp = &p;
	printf("%d %d %d \n", a, *p, **pp);

}
*/

				 /*

void sub(char  **pp, char  **qq) {		   //���������͸� �̿��ؼ� ���� ��ȯ�ϴ� ���α׷�
	char *t;
	t = *pp;
	*pp = *qq;
	*qq = t;
}
void main() {
	char*p = "aaa";
	char*q = "bbb";

	sub(&p, &q);
	
	printf("%s ,%s\n", p, q);
}


*/


/*
void sub(char *p[]) {	   // char *p[  ] == char**p��  �ۼ��ص� �ȴ�
	for (int i = 0; i < 3; i++) {
		printf("%s\n", p[i]);
	}
}

void main( ) {
	char *p[] = { "aaa", "bbb", "ccc" };

	sub(p);
}

*/


/*
void sub(int a[2][3]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void main() {
	int a[2][3] = { 1,2,3,4,5,6 };
	sub(a);
}

*/


	/*
int sum(int a, int b) {
	return a + b;
}

void main() {
	int a = 10;
	int b = 20;
	int c;

	int(*f)(int a, int b);
	f = sum;
	c = f(a, b);
	printf("sum=%d\n", c);
}
*/



#include<stdlib.h>


/*
void main() {			  // �����޸𸮸� �Ҵ��Ҽ� �ִ� ���α׷�
	int *p;
	//p = (int*)malloc(4 * 5); //����Ʈ���� ����	, malloc�� ����Ϸ��� <stdlib.h>�ۼ�
	p = (int*)calloc(4, 5);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &p[i]);
		printf("%d ", p[i]);
	}

	
}
*/


 /*
void main() {
	int *p, size = 3, cnt = 0, a;

	p = (int*)calloc(4, size);
	while (1) {
		scanf("%d", &a);
		if (a <= 0) break;
		if (cnt == size) {
			size += 3;
			p = (int*)realloc(p, size * 4); //�߰� 3����
		}
		p[cnt] = a;
		cnt++;
	}
	for (int i = 0; i < cnt; i++) {
		printf("%d ", p[i]);
	}
}

*/

/*
#include<string.h>
void main(int a,  char **ab) //�����Լ� ���� 
{
	int i;
	for (i = 0; i < a; i++) {
		if (strcmp(ab[i], "-a") == 0)
			printf("�ȳ��ϼ���\n");
		if (strcmp(ab[i], "-b") == 0)
			printf("�ݰ����ϴ�\n");

		//printf("%s\n", ab[i]);
	}
}
  */




