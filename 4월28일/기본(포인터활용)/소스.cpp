#include<stdio.h>
/*
void sub(int*p, int *q, int *r) {
	*p = 11;
	*q = 33;
	*r = *p + *q;
}
void main() {
	int a,b,c;
	
	sub(&a,&b,&c);

	printf("���=%d\n",c);
}
  */

		   /*
void main() {
	int a,b;
	int	*p, *o;
	

	p = &a;
	o = &b;
	*p = 10; 
	*o = 20;


	printf("�����ͷ� a�� ���:%u\n", *p);
	//printf("������ a���� ���:%d\n", a);
	printf("�����ͷ� b�� ���:%u\n", *o);
	printf("������p�� o�� ���Ѱ���:%d\n", *p+*o);

}
*/

/*
void main() {
	int a;
	int *p = &a;   //������ ����ÿ��� ������ �����ϴ�
	//int *p;
	//p=&a;

	scanf("%d", p);	//�Է½ÿ��� �ּ���ġ�� �޴´�
	printf("���=%d\n", *p);
}
*/


/*
void main() {
	int a = 10, b = 15, t;
	double vb;
	int *p, *o;	 //a�� ,b��
	int *s = &t;  //t��(����)
	double *ss = &vb;  //vb��(���) ,�����ͼ���� ���ÿ� vb�ּҸ� ����(����)

	p = &a;	//a=10;
	o = &b; //b=15;

	*s = *p + *o; //a + b ;
	*ss = *s / 2.0;	//s / 2 ;

	printf("�� ������ ��: %d ,%d\n", *p, *o);//a,b�� ���
	printf("�� ������ ��: %d\n", *s);  //������s���� ���= a+b���� ���
	printf("�� ������ ��: %.1lf\n", *ss); //������ss���� ���=������s/2���� ���
}

*/




		   /*
void samsung(int *pa, int* pb);

void main() {
	int a = 10,b = 20;


	samsung(&a,&b);
	printf("a:%d, b:%d\n", a, b);

}

void samsung(int *pa, int *pb)
{
	int t;

	t = *pa;
	*pa = *pb;
	*pb = t;
}
			 */


			 /*
void main(){
	int a[3] = { 20,30,10 };
	int t;

	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (a[i] > a[j]) {	  //�������� ���ϴ� �ݺ���
				t = a[i];
				a[i] = a[j];
			    a[j] = t;
			}
			
		}
	}
		for (int i = 0; i < 3; i++) {
			printf("%d\n",a [i]);
		}
	}
			   */


/*
void sub(int a) {
	a = 10;
}
void sub2(int *a) {
	*a = 20;
}

void main() {
	int a = 5;
	printf("a=%d\n", a);
	sub(a);
	printf("a=%d\n", a);
	sub2(&a);
	printf("a=%d\n", a);
}
  */


/*
void main() {
	int a[3];
	int *p;

	p = a;
	*p = 10;
	*(p + 1) = *a + 1;
	*(p + 2) = 30;


	for (int i = 0; i < 3; i++) {
		printf("%d\n", p[i]);
	}
}
*/



/*
void s(int a[3]) {

	for (int i = 0; i < 3; i++) {
		printf("%d\n", a[i]);
	}
}

	void main()
	{

		int a[3] = { 10,20,30 };
		int *p;

		s(a);

	}
	*/

			  /*
void LG(int *a,int b) {	 
	int i = 0;

	for (int i = 0; i < b; i++) {
		printf("%d ", a[i]);
	}
	puts(" ");
}


void main() {
	    int a[3] = { 10,20,30 };
		int b[5] = { 10,20,30,40,50 };

		LG(a, 3);
		LG(b, 5);
	}
				*/

			  /*
void sub(double *p, int b) {
	for (int i = 0; i < b; i++)
		scanf("%lf", p + i);
}
void sub2(double *p, int b, double *m) {
	for (int i = 1; i < b; i++) {
		if (*m < p[i]) *m = p[i];
	}
}
void main() {
	double a[3];
	double max;

	sub(a, 3);
	sub2(a, 3,&max);
	for (int i = 0; i < 3; i++)
		printf("%.1lf ", a[i]);
	   

	printf(" max=%.1lf", max);
}

				*/

#include<string.h>
/*
void main() {
	char a[10] = "samsung";
	char *p;

	p = a;

	puts(a);
	puts(a);
	strcpy(p, "LG"); //a = p�� hi�� �����Ѵ�
	puts(a);
	puts(a);

}
	   */
			 /*
void sub(char a[10]) {
	puts(a);
}
void sub2(char*a) {
	puts(a);
}
void main() {
	char a[10] = "samsung";
	sub(a);
	sub2(a);
}
			   */

//����4.10	
/*
void  sub(int *p) {
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	
}
void main() {
	int a[5] = { 0 };
	sub(a);
	for (int i = 0; i < 5; i++) {
		printf("a[%d]=%d\n", i, a[i]);
		
	}
	
	
}
  */

/*
void main() {		   //������ �ۼ��� �κ�
	int a, b;    
	//int a,b,c;
	//int *pa=&a, *pa=&b; �����͸� ����ؼ� a,b�ּҸ� ����
	puts("�ΰ��� �����Է�"); 
	//==
	printf("����1:"); scanf("%d", &a);
	//==
	printf("����2:"); scanf("%d", &b);
	//==
	//int t =*pa; �μ��� ��ȯ�ϴ� �κ�,�������α׷��� �����͸� ��� 
	//*pa =*pb;
	//*pb = t;
	puts("�Է� ���� ��ȯ"); //==

	
	int t = a;    //�μ��� ��ȯ�� for�ݺ����� ����� �ʿ䰡 ����
	a = b;
	b = t;
	
	printf("����1��%d�̴�\n", a);
	printf("����2��%d�̴�\n", b);
}
*/


void main() {
	int a[3] = { 20,30,10 };
	int t;

	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (a[i] > a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("%d ", a[i]);
	}
}