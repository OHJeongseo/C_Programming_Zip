#include<stdio.h>
//�迭 
//������ �迭 ������ ���
/*	 ���� 1
void main()
{
	double a[5] = { 1.0, 2.1,3.2,4.3,5.4 };

	for (int i = 0; i <5; i++)
	{
		printf("%6.1lf", a[4-i]);		 //�ڸ�����(6).�Ҽ�����¼�(1)
	}

}
*/


//����2
//�迭a���� b�� �ݺ� ���
/*
void main()
{
	int a[3] = { 1,2,3 };
	int b[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 3 == 0) b[i] = a[0];
		else if (i % 3 == 1)b[i] = a[1];
		else b[i] = a[2];

	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", b[i]);
	}

}		  */




/*
//����3
void main() {
	int a[10] = { 1,2 };

	for (int i = 2; i < 10; i++) {
		a[i] = a[i-2] + a[i-1];
	}
	
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	
} */








/*���� 4
void main() {		 
	//�ִ밪�� �ּҰ��� ������ ���� ���+��հ��


	int a[5];
	int max = -99999, min = 999999;
	int tot = 0;

	printf("�ɻ� ���� �Է�:");

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);

		if (max < a[i]) max = a[i];
		if (min > a[i]) min = a[i];
	}
	printf("��ȿ ����:");
	for (int i = 0; i < 5; i++) {
		if (a[i] == max || a[i] == min)
			continue;
		tot += a[i];
		printf("%d ", a[i]);
	}

	printf("���:%.1lf\n", tot / 3.);

}					*/




//���� 5

#include<string.h>
   //�빮�ڸ� �ҹ��ڷ� �ٲ㼭 ���
/*
void main()
{
	char a[30];
	int len, cnt = 0;

	printf("���� �Է�:");
	gets_s(a);
	len = strlen(a);
	printf("�ٲ� ����:");
	for (int i = 0; i < len; i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			a[i] = a[i] + ('a' - 'A');	   //�빮�ڸ� �ҹ��ڷ� �ٲٴ� �ڵ�
		}
		else if (a[i] >= 'a' && a[i] <= 'z') {
			a[i] = a[i] + ('A' - 'a');     //�ҹ��ڸ� �빮�ڷ� �ٲٴ� �ڵ�
		}
		printf("%c", a[i]);
	}
}		 */
 




//���� 6
/*
void main() {
	//�����͸� �Է¹޾Ƽ� ���� ��� �ٽ� �Է°��� �޴� ���α׷�
	int a[6];

	for (int i = 0; i < 6; i++) {
		printf("�ζ� ��ȣ�Է�:");
		scanf("%d", &a[i]);
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				printf("���� ��ȣ!\n");
				i--;
				break;
			}
		}
	}
	printf("�Էµ� ��ȣ:");
	for (int i = 0; i < 6; i++) {
		printf("%d", a[i]);
	}
	printf("\n");
}		   */









//������


//���� 1
/*
int assign(int *a)
{
	*a = 10;
	return *a;
}

void main()
{
	int a = 0;
	assign(&a);
	printf("a=%d\n", a);

}	 */




//���� 2
/*
void func(int *a, int *b)
{
	int s; printf("����Է�: "); scanf("%d", &s);
	*a = s / 4;
	*b = s % 4;

}

void main()
{

	int m, r;
	func(&m, &r);
	printf("��:  %d, ������: %d\n", m, r);
}   */





//���� 3
//�������� ��� ���α׷�+swap�Լ��� ���
/*
void swap(double *pa, double*pb)
{
	double temp;

	temp = *pa;		//�������ּ��� �ӽ����庯��(temp)�� ����
	*pa = *pb;		//�������ּҿ� ū���ּҸ� ����
	*pb = temp;	   //ū���ּҿ� �������ּҸ� ����
}

void line_up(double*a, double*b, double*c)
{
	if (*a < *b) swap(a, b);
	if (*a < *c)swap(a, c);
	if (*b < *c)swap(b, c);


}


void main()
{
	double max, mid, min;

	printf("�Ǽ��Է�(3��):"); scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("���ĵ� �� ���: %.1lf, %.1lf,%.1lf\n", max, mid, min);
}	  */






/*
//����4
//enterŰ�� ���������� 3���� ������ġ�� �̵���Ű�� ���α׷�
void rotate(int *pa, int*pb, int *pc)
{
	int t;  t = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = t;
}

void main(){
	int a = 1, b = 2, c = 3;
	char d;
	while (1) {
		printf("%d:%d:%d", a, b, c);
		scanf("%c", &d);
		if (d == '\n') {
			rotate(&a, &b, &c);
		}
		else break;
	}

}		*/











//������ +�迭
//����1
/*		   //3��° �迭���~�������迭��� ���
void main() {
	double a[5] = { 1.2, 3.5, 7.4, 0.5, 10.0 };
	double *pa = a;
	double *pb = a + 2;
	printf("�迭����� ��:");
	for (int i = 0; i < 3; i++) {
		printf("%.1lf ", *pb);
		pb++;
	}
	printf("\n");
}
*/
	



//����2
/* ������ ��� 
void main() {
	double a[5] = { 1.2, 3.5, 7.4, 0.5, 10.0 };
	double *pa = a;
	double tot = 0, avg;

	for (int i = 0; i < 5; i++) {
		printf("%.1lf  ", *pa);
		tot += *pa;
		pa++;	 //�����迭��ҷ� �̵�

	}
	avg = tot / 5.0;
	printf("\n���: %.2lf\n", avg);
}					*/




//��������	3,4,5
/*
int sub(int *m) {
	//�迭���� 31�� ������ Ȯ��+��ȯ
	int cnt = 0;
	for (int i = 0; i < 12; i++) {
		if (m[i] == 31)	    // *(m+i)
			cnt++;  
	}
	return cnt;
}
void change_2(int *m) {
	m[1] = 29;	  //�迭 
}

void sub3(int *month) {
	for (int i = 0; i < 12; i++) {
		if (i % 5 == 0) printf("\n"); //�迭��Ҹ� �ټ��� ����� ���������� �̵�
		printf("%d ", month[i]);
	}
	printf("\n");
}
void main() {
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int a;
	a = sub(month);
	change_2(month);
	printf("31���� ���� ��: %d\n", a);
	printf("2���� �ϼ�: %d\n", month[1]);	 
	sub3(month);
}		   */








//����6
//�迭��Ҹ� ��ȯ�ϴ� ���α׷�
/*
void reverse(double *a, int n) {
	double t; //�ӽ� ���庯��
	for (int i = 0; i < n/2; i++) {
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;

	}
}

void main() {
	double a[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	reverse(a, 5);


	for (int i = 0; i < 5; i++) {
		printf("%.1lf  ", a[i]);
	}
}		  */








//���� 7 
//�迭�� ���� ���� ���׷����� ����ϴ� ���α׷�(*1= 5��)
  /*
void print_graph(int *ps, int size) {
	int star;
	for (int i = 0; i < 5; i++) {		 //i<size
		star = *(ps+i) / 5;				   //ps[i]/5
		printf("(%3d)", *(ps + i));		 //%3d = 3ĭ�� Ȯ���ϰ� %d�� ����ϰڴ�
		for (int j = 0; j < star; j++) {
			printf("*");
		}
		printf("\n");
	}

}

void main()
{
	int score[5] = { 72, 88, 95, 64, 100 };
	print_graph(score, 5);
	
}	  */





//���� 8

int check(int *lotto_n, int *my_n) {
	int cnt=0;

	for (int i = 0; i < 6; i++) {
		for(int j=0; j<6;j++)
			{
				if (*(lotto_n + j) == *(my_n + i))	   //�ΰ��� �����Ͱ��� �ΰ��� for���� ����ؼ� ���Ѵ�
				{
					cnt++;
				}
			}

	}
	return cnt;
}


void main()
{
	int sup;
	int lotto_n[6] = {4, 10, 25, 30, 41, 43 };
	int my_n[6] = { 1, 4, 7, 30, 43, 45 };

	sup = check(lotto_n, my_n);
	printf("��ġ�ϴ� ��ȣ�� ����:  %d\n", sup);
}	







