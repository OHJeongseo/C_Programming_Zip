#include<stdio.h>
//���ڿ� 
//����1 
/*
void main() {
	char ani[20];
	char why[80];

	printf("�����ϴ� ����:");
	scanf("%s", ani);
	printf("����:");
	getchar(); //enter�� �����ϰ� ���ڿ��� �ѹ� �� �Է��Ҽ��ִ�
	fgets(why, sizeof(why), stdin);
	printf("%s is %s", ani, why);
}   */





/*
//����2
void main()
{
	char na[10];
	char no[30];
	char juso[30];

	printf("�̸� :"); gets_s(na);		   //scanf�� ���� ����� �Լ�
	printf("��ȭ��ȣ :"); gets_s(no);
	printf("�ּ� :"); gets_s(juso);

	printf("%s, %s, %s\n", na, no, juso);
}
*/





//���ڿ� �Լ��� ����ϴ� ���
//���� 1
 
#include<string.h>
/*
void main() {
	char a[80]; char b[80];
	char *c;	//int c, d

	printf("�� �ܾ� �Է�:"); scanf("%s %s", a, b);
	if (strlen(a) < strlen(b)) 	c = b;	  //�� ���ڿ��� ������ Ȯ���ϴ� �Լ�		  //c= strlen(a);	      //d= strlen(b);
	else  c = a;																				  	 //if(c>d) printf("long :%s", a); else ("short:%s", b);
	printf("���̰� �� �ܾ�:  %s\n", c);

	if (strcmp(a, b)>0) c = b;		//�� ���ڸ� ���ϴ� �Լ�	 +������(�ƽ�Ű �ڵ尪)�� ���� ������ ���´�
	else c = a;
	printf("������ ���� ������ �ܾ�: %s\n", c);

}*/  










//���� 2	
/*
void main() {
	char a[80];

	int b = 1,c;  //c= ���ڱ��̸� Ȯ���ϱ� ���� ����
	do
	{
		printf("[��. ��. ��. ��%d]\n",b);
		printf("�ܾ� �Է�:"); scanf("%s", a);	 printf("�Է��� �ܾ�: %s ", a);
		c = strlen(a);
		printf("������ �ܾ�:");
		for (int i = 0; i < c; i++) {			//�Է��� ���ڰ� 5�� �̻��̸� *����ؼ� �����Ѵ�
			if (i < 5) printf("%c", a[i]);
			else printf("*");
		}
		printf("\n\n");
		b++;

	} while (1);

}			*/












// �Լ��� ������ �������
//����1
/*
void add(int *a, int *b, int *res) {
	*res = *a + *b;
}

void main()
{
	int a = 10, b = 20, res = 0;
	add(&a, &b, &res);
	printf("���:%d\n", res);
}  */










//���� 2
/*
int quot(int a, int b, int *res) {
	if (b == 0) return-1;
	*res = a / b;
	return *res;
}


void main() {
	int a, b, res;
	printf("�� �� �Է�:"); scanf("%d%d", &a, &b);

	if (quot(a, b,&res) == -1) printf("0���� ����������\n");  //���ϰų� ����Ҷ� �����Լ�(Ÿ��+return ���) �ۼ�
	else printf("%d�� %d�� ���� ���� %d", a, b, res);

}		   */







//���� 3
/*
void swap(double *pa, double *pb) {
	double t;
	t = *pa;
	*pa = *pb;
	*pb = t;

}
void main() {
	double a = 1.5, b = 3.4;
	swap(&a, &b);
	printf("a= %.1lf , b= %.1lf \n", a, b);

}		 */









//������ �迭
//���� 1
/*
void main() {
	int s[4][5]; int a=1;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%3d", a++);	  //s[i][j]=a; a++; printf("%3d", a[i][j]);
		}
		printf("\n");
	}
}	   	*/  





//����2
/*
void main() {
	//���ڿ��� �Է��ؼ� ���� ���ڱ��̰� �� ���ڿ��� ���
	char str[5][20]; int max=0, pos,len;

	printf("������ �̸��Է�(5):");
	for (int i = 0; i < 5; i++) {
		scanf("%s", str[i]);
	}

	for (int i = 0; i < 5; i++) {
		len = strlen(str[i]);
		if (len > max) {
			pos = i;
			max = len;
		}
	}
		
	printf("���̰� ���� ū �����̸�:  %s\n", str[pos]);

}		 */








//���� 3
/*
void main() {
	char mark[5][5] = { 0 };

	for (int i = 0; i < 5; i++) 
	{
		for (int j = 0; j < 5; j++) 
		{
			if (i == j||i+j==4) mark[i][j] = 'X';
			printf("%2c", mark[i][j]);	 //%2c= �ΰ��� ���� ������ Ȱ���ؼ� 'X'�� ����ϰڴ�
		}
		printf("\n");
	}
}		*/







//����  ���� �� �����ڵ�
#include<stdlib.h>
#include<time.h>

void main() {
	int pc, my,res;	   int money = 500;

	while (1) {
		srand((unsigned)time(NULL));
		pc = rand() % 3;

		printf("����(0) ����(1) ��(2) �����ϼ���\n"); printf("My="); scanf("%d", &my);
		printf("PC=%d\n", pc);
		if (my == pc) printf("�����ϴ�\n");

		res = my - pc;	  //��� ���� res�� ����									   //if(pc==my) printf("�����ϴ�");
																						       //else if(res==1||res==-2) printf("���� �̱�");
		if (res== 1 || res == -2 ) {													   //else printf("pc�� �̱�");
			printf("���� �̰���ϴ�\n");	
			money *= 2;
		}

		if (res == 2 || res == -1) {
			printf("PC�� �̰���ϴ�\n");
			money=0;
		}

	
	
		printf("money=%d\n\n", money);
		if (money==0) break; 
	}
}					  







//�迭������
//���� 1
//�� 2���� �迭�� ���� ��ġ�� ���� ���� Ȯ���ؼ� ���
/*
int count_num(int (*a)[4], int b[3][4], int same_num[12][2]) {
	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if (a[i][j] == b[i][j]) {
					same_num[cnt][0] = i;
					same_num[cnt][1] = j;
					cnt++;
			}
		}
	}
	return cnt;
}

void main() {
	int a[3][4] = {
		{15,3,9,11},
		{23,7,10,12},
		{0,17,55,24} };
	int b[3][4] = {
		{13,8,9,15},
		{23,0,10,11},
		{29,17,43,3} };

	int same_num[12][2];
	int cnt;
	cnt = count_num(a, b, same_num);
   
	printf("��ġ�ϴ� ��ȣ�� ��:  %d\n", cnt);
	printf("�迭��ġ(��,��).......\n");
	for (int i = 0; i < cnt; i++) {
		printf("(%d,%d)\n", same_num[i][0], same_num[i][1]);
	}
}	   */





	
//����2	
/*
void main() {
	char a[10][20];
	char b[10];
	int i = 0;
	printf("=====<����>=====\n");
	while (1) {
		printf("�̸�:"); scanf("%s", b);

		if (strcmp(b, "end") == 0) break;		  //�ݺ� �ߴ� ����
		int j;

		for (j = 0; j < i; j++) {			//���� �̸��� �ִ� ���ϴ� �ݺ���
			if (strcmp(a[j], b) == 0) {
				printf("# �̹� �̸��� ��ϵǾ����ϴ�.\n");
				break;
			}
		}
		if (i == j) {
			strcpy(a[i], b);
			i++;
		}
	}
		for (int j = 0; j < i; j++) {
			printf("%s\n", a[j]);
		}
		printf("# �� %d�� ��ϵǾ����ϴ�\n", i);
	}		*/



//�ƽ�Ű �ڵ� �� =���ĺ� ���
/*
void main() {
	char ch = 'a';
	while (ch <= 'z')
	{
		printf("%c ", ch);
		ch++;
	}
}		  */
























