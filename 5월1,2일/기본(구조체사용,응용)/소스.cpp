#include<stdio.h>
#include<string.h>
#include<stdlib.h>


 /*
struct student {		 // ����ü�� ����� ���α׷�

	int a;
	double b;
	char c[10];

};


void main() {
	struct student s1;
	s1.a = 10;
	s1.b = 10.5;
	strcpy(s1.c, "ȫ�浿");

	printf("%d , %.1lf,  %s\n", s1.a, s1.b, s1.c);

}

*/
// ����ü�� ����� ���α׷�
/*
struct profile
{
	char na[20];
	int a;
	double h;
	char *i;
	
};

void main() {
	struct profile sam;

	strcpy(sam.na, "�Ｚ");
	sam.a = 79;
	sam.h = 200.3;
	sam.i = (char*)malloc(80);	//�޸𸮰��� �Ҵ�
	printf("����Ұ�: ");
	gets_s(sam.i,80); //�Է¹��� ���� �ۼ�

	printf("�����:%s\n", sam.na);
	printf("����:%d\n", sam.a);
	printf("����:%.1lf\n", sam.h);

	//printf("�ڱ�Ұ�: %s\n", sam.i);

}
*/



	   /*
//����ü�� ����ؼ� �й�, �̸�, ������ ���ؼ� �ִ밪�� ����ϴ� ���α׷�, �迭ó������Ҽ����ִ�
struct school			
{
	int i;
	char na[20];
	double g;
};

 void main() {
	struct school s1 = { 313, "�浿", 2.4 },
		s2 = { 314, "����", 3.8 },
		s3 = { 315, "�̵�", 4.4 };


	struct school max;

	max = s1;
	if (s2.g > max.g)max = s2;
	if (s3.g > max.g)max = s3;

	printf("�й�: %d\n", max.i);
	printf("�̸�: %s\n", max.na);
	printf("����: %.1lf\n", max.g);

}
*/

   /*
struct  Ab {
		int a, b, c;
	};

	void main() {
		struct Ab  abc = { 10,20,30 };
		struct Ab  *p;
		p = &abc;

		printf("%d\n", p->a);
		printf("%d\n", p->b);
		printf("%d\n", p->c);


	}

	*/

struct address {					//����ü�� ���� �ּҷ� ���α׷�
	char na[20];					//�̸�
	int n;							//����
	char t[20];					 //��ȣ
	char b[80];					 //�ɹ�
};

void main() {
	struct address abc[3] = {			 //3���� ����ü �迭����
		{"�浿", 10, "111-1111", "����"},
		{ "�̽�", 20, "222-2222", "����"},
		{ "�庸", 30, "333-3333", "�ϵ�"} };

	for (int i = 0; i < 3; i++) {					//��� , �������ŭ
		printf("%s %d %s %s\n", abc[i].na, abc[i].n, abc[i].t, abc[i].b);
	}
}