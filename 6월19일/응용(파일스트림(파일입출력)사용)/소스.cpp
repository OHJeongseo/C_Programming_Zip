#include<stdio.h>
//������ +(����������) Ȱ��
//������:  ������ �ּ� ���� ���� 
//������ ��ü ���� �޸𸮿� ���� ������ ���� �ϳ��� ����

//���� ������ Ȱ�� �Լ� ����
/*
void swap(char **pa, char **pb);

void main() {
	char *a = "abc";	  //���ڿ�(String)�� ����ϴ�
	char *b = "dfg";
	char *t;	 //��ȯ�� ���� ������ ����

	printf("��ȯ ���� ���ڿ�\n");
	printf("a :%s  ", a);
	printf("b :%s\n", b);
	

	swap (&a, &b);
	printf("swap �Լ�(���� ������)������ ��ȯ\n");
	printf("a :%s  ", a);
	printf("b :%s\n", b);
}

void swap(char **pa, char **pb) {			 //���� ������ Ȱ�� (�Ű�����: ���� �Լ��� *a,*b�� �ּ� ���� �����ϰڴ� => ���������͸� ���, �ּҰ��� ����Ų��)
	char *pt;
	pt = *pa;
	*pa = *pb;
	*pb = pt;



}		   */




//2���� �迭 + �迭������ Ȱ��
/*
void sub(int (*a)[3]) {				//������ Ȱ��ÿ� ���� ��������Ҽ��ִ�
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
}

void main() {
	int a[2][3] = { 1,2,3,4,5,6 };
	sub(a);
}		*/






//�������� 
/*
int conut_num(int (*a1)[4], int(*a2)[4], int  same_num[12][2]){
	int cnt = 0;
	for (int i = 0; i < 3; i++) {	  //2���� �迭�� ���� ��ġ�ϴ� Ȯ���ϴ� �ڵ�
		for (int j = 0; j < 4; j++) {
			if (a1[i][j] == a2[i][j])
			{
				same_num[cnt][0] = i;
				same_num[cnt][1] = j;
				cnt++;
			}
		}
	}
	return cnt;
}

void main() {
	int a1[3][4] = {
		{15, 3, 9, 11},
		{23, 7, 10, 12},
		{0, 17, 55, 24} };

	int a2[3][4] = {
		{13, 8, 9, 15},
		{23, 0, 10, 11},
		{29, 17, 43, 3} };
	int same_num[12][2];
	int i, cnt;

	cnt = conut_num(a1, a2, same_num);
	printf("��ġ�ϴ� ��ȣ ��: %d\n", cnt); 
	printf("�迭������ ��ġ(��, ��)... \n");
	for (i = 0; i < cnt; i++) {
		printf("(%d ,%d)\n", same_num[i][0], same_num[i][1]);
	}

}*/



//��������
#include<stdlib.h> //���� �Ҵ� �޸� �Լ��� ���� ����
/*
void main() {
	double *max, *min;	//������ ���
	max=(double*)malloc(sizeof(double)); //�����Ҵ� �Լ� ���(Ÿ���� ������ũ�⸸ŭ �Ҵ�)
	min = (double*)malloc(8);


	printf("�ְ� ��°� ��������� �Է��ϼ���:"); scanf("%lf%lf", max, min);

	if (max || min == NULL) {	 //�Է� �� Ȯ��(���� �Ҵ�޸𸮸� Ȯ��) 0�ϰ�� ���������ʰ� ���α׷��� ����
		printf("�ϳ��� �޸𸮰� �����մϴ�!\n");
		exit(1);	   // ���α׷� ����
	}
	printf("�ϱ����� %.1lf�Դϴ�",*max-*min);
	free (max);	   //�޸� ��ȯ
	free (min);
} */











//���� �����
//
//

  /* 1
int main() {
	FILE *in;	  //���� ������

	//in = fopen("a.txt", "r");	 //���� �б� �������� ����(����)
	in = fopen("b.txt", "w");   //������ ���� ��� ���� �����Ѵ� "w"	(������ ������� ����� �����ִ�)
	in = fopen("c.txt", "a");   //"a" = ������ �������ʰ� �߰��Ҽ��ִ� (������ ���� ��� ���� �����Ѵ�)

	if (in == NULL) {			  //���� ���� Ȯ���ϴ� ���ǹ�(���� = null)
		printf("���� ���� \n");
		return 1;
	}
	printf("��������\n");

}	*/





/*2*/
/*
int main() {
	FILE *in , *out;	  //���� ������
	char ch;

	//in = fopen("a.txt", "r");	 //���� �б� �������� ����
	in = fopen("a.txt", "r"); 
	out = fopen("b.txt", "w");	   //������ ���� ��� ���� �����Ѵ� "w"	(������ ������� ����� �����ִ�)

	if (in == NULL) {			  //���� ���� Ȯ���ϴ� ���ǹ�(���� = null)
		printf("���� ���� \n");
		return 1;
	}

	//���� ���� 
	while (1)
	{
		ch= fgetc(in);	   //�����Է��Լ�	(1�ھ� �б�)
		if (ch == -1) break;   //-1 == EOF
		//printf("%c", ch);
		fputc(ch, out);		 //��������Լ�

	}
	printf("����\n");
}	*/






/* 3 */
/*
int main() {
	FILE *in, *out;	  //���� ������
	int  ch;

	
	//in = fopen("a.txt", "r");	 //���� �б� �������� ����

	//�̹��� ����(aa.jpg => bb.jpg(���� �����ؼ� �̹����� ����)
	//���̳ʸ� ���� 
	in = fopen("aa.jpg", "rb");   
	out = fopen("bb.jpg", "wb");	  //������ ���� ��� ���� �����Ѵ� "w"������ ������� ����� �����ִ�)

	if (in == NULL) {			  //���� ���� Ȯ���ϴ� ���ǹ�(���� = null)
		printf("���� ���� \n");
		return 1;
	}

	
	while (1)
	{
		ch = fgetc(in);	   //�����Է��Լ�	(1�ھ� �б�)
		if (ch == -1) break;   //-1 == EOF
	//printf("%c", ch);
		fputc(ch, out);		 //��������Լ�
	}
	printf("����\n");
}	 */





/* 4 */
/*
void main() {
	FILE *os;
	int ch,cnt =0;
	os = fopen("ccc.txt", "r");

	while (1)
	{
		ch = fgetc(os);	   //�����Է��Լ�	(1�ھ� �б�)
		if (ch == -1)	break;   //-1 == EOF

		printf("%c", ch);
		if (ch == '.') {	   //. = ����, . =2���� ���ѹ� ����
			printf("\n");
			cnt++;
			if (cnt % 2 == 0) printf("\n");
		}	
	}
	printf("����\n");

}		 */












/* 5 */
/*	   //fgets ���
void main() {
	FILE *os;
	char *res, str[100];	 	 //���ڿ� Ȱ��
	os = fopen("ccc.txt", "r");

	while (1)
	{
		res = fgets(str, 100, os);	  
		if (res == 0)	break;   

			printf("%s", str);
	
	}
	printf("\n");
} */







/* 6 */
//	fscanf, fprintf Ȱ��
// �ؽ�Ʈ ���Ͽ� �̸��� ����,����,���� ������ �Է��ؼ�(�б�����)
//���ο� �ؽ�Ʈ����(�������)�� �̸�, ����, ����� ����ϴ� ���α׷�(+fscanf,fprintf���)
  /*
int main(){
	FILE *ifp, *ofp;
	char name[20];
	int kor, eng, mat;
	int tot;
	double avg;
	int res;

	ifp = fopen("a.txt", "r");
	if (ifp == NULL) {
		printf("�Է� ������ ���� ����\n");
		return 1;
	}		  

	ofp = fopen("b.txt", "w");	  //��� ������ ���� ���� ����
	if (ofp == NULL) {	  //���濩�� Ȯ��
		printf("�Է� ������ ���� ����\n");
		return 1;
	}

	while (1) {
		res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &mat);
		if (res == -1) {
			break;
		}
		tot = kor + eng + mat;
		avg = tot / 3.0;
		fprintf(ofp, "%s%5d%7.1lf\n", name, tot, avg);
	}
	
	fclose(ifp);   //�Է� ���� �ݱ�
	fclose(ofp); //������� �ݱ�
	
	return 0;

	}   */






//scanf, gets_s ���
void main() {	 //Ű����κ��� �����͸� �Է¹޾Ƽ� ����� ���Ͽ� ����ϴ� ���α׷�
	int a; char b[10];
	char c[50];

	FILE *out = fopen("c.txt", "w");

	while (1) {
		printf("�й� : "); scanf("%d", &a);
		if (a < 0) break;

		printf("�̸� : "); scanf("%s", b);    //scanf ���
		printf("���� : "); getchar(); gets_s(c);

		fprintf(out, "�й�:%d\n", a);
		fprintf(out, "�̸�:%s\n", b);
		fprintf(out, "����:%s\n", c);

	}
}


