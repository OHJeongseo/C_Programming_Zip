#include<stdio.h>
#include<stdlib.h>			 //�����Ҵ�޸��Լ� ���� ������ϼ���




//���� �Ҵ� �Լ�
// malloc, calloc, realloc, free ����� ���α׷�

 //����1
/*
void main() {

	double *ondmax, *ondmin;


	ondmax = (double*)malloc(4);		//�����Ҵ���
	ondmin = (double*)malloc(4);


	printf("�ְ��� �� ��������� �Է��ϼ���: "); scanf("%lf%lf", ondmax, ondmin);
	printf("�ϱ����� %.1lf�Դϴ�", *ondmax - *ondmin);	   //����ÿ� �����͸� ����Ѵ�



	//free(ondmax);			//���� �Ҵ� ���� ��ȯ
	//free(ondmin);
}			   */









//����2
/*
void main() {											 	//������ �ڵ�
	int a1[3][4] = { {1,2,3,4},			           //int a[3][4], b[3][4], c[3][4];
						{5,6,7,8},					  //int cnt=1;
						{9,10,11,12} };			   
	int a2[3][4] = { { 12,11,10,9 },
						{ 8,7,6,5 },
						{ 4,3,2,1} };

	int c[3][4];


	for (int i = 0; i < 3; i++) {					  //for(int i=0; i<3; i++){
		for (int j = 0; j < 4; j++) {				  //for(int j=0; j<4;j++){
			c[i][j] = a1[i][j] + a2[i][j];				  // a[i][j]= cnt;
			printf("%3d", c[i][j]);					  //b[i][j]=13-cnt;
		}												  //c[i][j]= a[i][j] +b[i][j];
		printf("\n");								      //cnt++; }   }
	}
}														  //for(int i=0; i<3 ;i++){ for(int j=0; j<4;j++){
														  //printf("%3d", c[i][j]); }  }
*/















//����ü
//���� 1
/*
struct dodofood
{	 //����ü ��� ����
	char a[10];
	int b[6];
	double c;

};
void main() {
	
	struct dodofood s1[4]	//����ü �ʱ�ȭ����(����ü�迭���)
		= { {"������", 70,45,100,92,150,81},
		   {"������",88,92,77,30,52,55},
		   {"����",50,90,88,75,77,49},
		   {"�븲��",120,92,80,150,130,105}};


	
	int tot;
	for (int i = 0; i < 4; i++) {
		printf("%s", s1[i].a);
		tot = 0;
		for (int j = 0; j < 6; j++) {
			printf("%4d ", s1[i].b[j]);
			tot += s1[i].b[j];
		}
		s1[i].c = tot / 6.0;
		printf(" %.0lf\n", s1[i].c);
	}


	struct  dodofood temp;
	printf("\n������ ���.....\n");
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 4; j++) {
			if (s1[i].c < s1[j].c) {
				temp = s1[i];
				s1[i] = s1[j];
				s1[j] = temp;
			}
		}
	}
	for(int i=0; i<4;i++){
		printf("%s", s1[i].a);
		for(int j=0; j<6; j++){
			printf("%4d ", s1[i].b[j]);
		}
		printf(" %.0lf\n", s1[i].c);
	}
				
			

}			*/






//���� 2
/*
struct cracker
{
	int a;
	int b;
};

void main() {
	cracker aa;
	printf("�ٻ簢�� ���ݰ� ������ �Է�: "); scanf("%d%d", &aa.a, &aa.b);
	printf("�ٻ���� ����: %d��\n", aa.a);
	printf("�ٻ���� ����:%dkal\n", aa.b);
}				  */














//����3
			  /*
struct student    //����ü ����
{
	int num;
	char name[10];
	int score[5];
	double avg;
};		



void print_avg(struct student *abc){
	int tot = 0;
	for (int i = 0; i < 5; i++) {
		tot += abc->score[i];
	}
		abc->avg = tot / 5.0;
}
   

void main() {
	student abc = { 315, "ȫ�浿", 82, 93, 74, 90, 65 };
	print_avg(&abc);
	printf("�й�: %d\n", abc.num);
	printf("�̸�: %s\n", abc.name);
	printf("����: ");
	int c = 0;
	for (int i = 0; i < 5; i++) {
		printf("%3d", abc.score[i]);
	}
	printf("\n���: %.1lf\n", abc.avg);
}		 					  */








//���� 4	   
	/*
struct profile {
	char name[10];
	double grade;
	int english;
};
void input_data(struct profile staff[5]) {
	printf("�̸�, ����, ���� ������ �Է��ϼ���.\n");
	for (int i = 0; i < 5; i++) {
		scanf("%s%lf%d", &staff[i].name, &staff[i].grade, &staff[i].english);
	}
}

void elite(struct profile staff[5]) {
	printf("����Ʈ ��� ����\n");
	for (int i = 0; i < 5; i++) {
		if(staff[i].grade>=4.0 && staff[i].english>=900)
		printf("%s %.1lf %d\n", staff[i].name, staff[i].grade, staff[i].english);
	}
}

void main() {
	struct profile staff[5];
	input_data(staff);
	elite(staff);
}				 			*/










//���� 5
/*			//������ ���α׷�
struct money_box
{
	int w500;
	int w100;
	int w50;
	int w10;
};
typedef struct money_box Moneybox;

void init(Moneybox *s) {
	s->w500 =  s->w100 = s->w50 =  s->w10 = 0;
}

void save(Moneybox *s , int a, int b) {
	if (a == 500)s->w500 += b;
	else if (a == 100) s->w100 += b;
	else if (a == 50)s->w50 += b;
	else if (a == 10)s->w10 += b;
}

int  total(Moneybox *s) {
	return s->w500*500+s->w100*100+s->w50*50+s->w10*10;
}


void main() {
	Moneybox m = { 0 };
	int a, b; 
	init(&m);
	while (1)
	{
		printf("������ �ݾװ� ���� : "); 
		scanf("%d", &a);  
		if (a == -1) break;
		scanf("%d", &b);
		save(&m, a, b);
		
	}
	printf("�� ���ݾ� %d��\n",total(&m));
}						  */

   




//���� 6
/*
typedef struct
{
	int num;
	char name[10];
	double weight;
}fitness;


void main() {
	fitness f[10];			   //�� ���Է�
	int i = 0, pos;
	double max = -9999,tot = 0;
	while (1) {
		printf("ȸ������ :"); scanf("%d", &f[i].num);
		if (f[i].num == -1)break;
		printf("�̸�: "); scanf("%s", &f[i].name);
		printf("ü��: ");	scanf("%lf", &f[i].weight);
		if (f[i].weight > max) {			//���� ū ü���� Ȯ���ϴ� ���ǹ�
			max = f[i].weight;
			pos = i;
		}
		tot += f[i].weight;		  //�Էµ� ��üȸ���� �����Ը� �ջ�
		i++;
	}
	printf("# �� ȸ���� :%\n", i);
	printf("# ��� ü��:%.1lf\n", (double)tot / i);
	printf("# ü���� ���� ���ſ� ȸ���� ?\n");
	printf("ȸ������ :%d\n", f[pos].num);
	printf("�̸�: %s\n", f[pos].name);
	printf("ü��:%.1lf\n", f[pos].weight);


}					 */







//���� 7
#define NUM 3		 //�Է�Ƚ�� ����
typedef struct           //����ü ������ �ؼ� ����ϴ� �ڵ�
{
	int a;			  //�й�
	char name[10];		 //�̸�
	int b, c, d;		//����, ����, ���� ����
	int tot = 0;	  //����
	double avg;			 //���
	char grade;				//����
}as; //����ü�� ���̸� as

void main() {
	as s1[NUM];					 //����ü �迭 ��������
	int i = 0, tot;
	for (i = 0; i < NUM; i++) {
		printf("�й�:"); scanf("%d", &s1[i].a);
		printf("�̸�:"); scanf("%s", &s1[i].name);
		printf("����, ����, ���� ����: "); scanf("%d%d%d", &s1[i].b, &s1[i].c, &s1[i].d);
		s1[i].tot = s1[i].b + s1[i].c + s1[i].d;
		s1[i].avg = (double)s1[i].tot / NUM;
		if (s1[i].avg >= 90) s1[i].grade = 'A';
		else if (s1[i].avg >= 80) s1[i].grade = 'B';
		else if (s1[i].avg >= 70) s1[i].grade = 'C';
		else s1[i].grade = 'F';
	}

	printf("���� �� ������....\n");
	for (int j = 0; j < NUM; j++) {
		printf("%3d %3s %3d %3d %3d %3d %.1lf %c\n",
			s1[j].a, s1[j].name, s1[j].b, s1[j].c, s1[j].d, s1[j].tot, s1[j].avg, s1[j].grade);
	}
	as temp;
	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (s1[i].avg < s1[j].avg) {
				temp = s1[i];
				s1[i] = s1[j];
				s1[j] = temp;
			}
	  }

		printf("���� �� ������....\n");
		for (int j = 0; j < NUM; j++) {
			printf("%3d %3s %3d %3d %3d %3d %.1lf %c\n",
				s1[j].a, s1[j].name, s1[j].b, s1[j].c, s1[j].d, s1[j].tot, s1[j].avg, s1[j].grade);
		}

}
		



	





