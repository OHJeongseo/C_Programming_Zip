#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
void  main()
{
	//  if���� ���� ���� �ڵ�
	 //���� 1	   //���밪
   /*
   int a;	 printf("a�� ��: ");
   scanf("%d", &a);
   if (a < 0)
	   a = -a;
   printf("%d", a);
	  */


	  //¦���� Ȧ���� ���ϴ� �ݺ���
	 /*
	 int a;	printf("a�� ��: ");
	 scanf("%d", &a);
	 if (a % 2 == 0)
		 a = 2;
	 else
		 a = 1;
	 printf("%d", a);
	   */





	   //����2	//if~ else if�� ���
	   /*
	   int che = 95;
	   char size;

	   if (che <= 90)
	   {
		   size = 'S';
	   }
	   else if (che > 90 && che <= 100) //�ΰ��� ������ ����(&&)
	   {
		   size = 'M';
	   }
	   else {
		   size = 'L';
	   }

	   printf("%c\n", size);
		 */



		 //���� 3
		 /*
		 double cm=179.5, kg=75.0;

		 if (cm >= 187.5 && kg <80.0)
			 printf("Ok\n");
		 else
			 printf("canel\n");
		*/


		//���� 4
		/*
		int a=10, b=3,c;


		if (a > b)
			c = a / b;
		else if (a <= b)
			c = a%b;

		printf("%d\n", c);
		*/

		//���� 5

				 /*
		int sum = 259;
		double avg =(double)sum / 3;
		char sch;

		if (avg >= 90)						  //(avg>=90.0)
			sch = 'A';
		else if (avg <90 && avg>80)		  //(avg>=80.0)
			sch = 'B';
		else if (avg < 80 && avg>70)	     //(avg>=70.0)
			sch = 'C';
		else
			sch = 'D';

		printf("��� :%.1lf  ���� :%c \n", avg, sch);
				 */


				 //���� 6
				 /*
				 int a, b=2, res;
				 printf("a: "); scanf("%d", &a);

				 if (a >= 10)
				 {
					 res = a;
				 }
				 else if (b != 0)	   //else{ if(b!=0)  res= a/b; }
				 {
					 res = a / b;
				 }
				 printf("%d", res);
					   */


//���� 7
	  /*
	int a = 10, b;
	switch (a)
	{
	case 3:
		b = 1;
		break;
	case 5:
		b = 2;
		break;
	case 7:
		b = 3;
		break;
	default:
		b = 0;
		break;
	}
	printf("%d\n", b);




}	 */



   /*
void main()
{
	//���� 8
	/*
	int age, hi;
	printf("�ʻ�����(����, �����ѷ�):");
	scanf("%d %d",&age, &hi);
	char size;

	if (age < 20)  //���� ���ǹ�
	{
		if (hi < 85) size = 'S';	 //���� �ѷ� ���ǹ�
		else if (hi >=85 && hi< 95) size = 'M';
		else size = 'L';
	}
	if (age > 20)
	{
		if (hi < 90) size = 'S';	 //���� �ѷ� ���ǹ�
		else if (hi>= 95 && hi <100) size = 'M';
		else size = 'L';
	}

	printf("������ %c �Դϴ�\n", size);
	*/


	//���� 9
	/*
	int a, b, res;
	char p;
	printf("��Ģ���� �Է�:"); scanf("%d%c%d", &a,&p,&b);
	/*
	//if�� ��� ��Ģ����
	if (p == '+')
	{
		res = a + b;
		printf("%d+%d=%d", a, b, res);
	}
	else if (p=='-')
	{
		res = a - b;
		printf("%d-%d=%d", a, b, res);
	}
	else if (p=='*')
	{
		res = a * b;
		printf("%d*%d=%d", a, b, res);
	}
	else if (p=='/')
	{
		res = a / b;
		printf("%d/%d=%d", a, b, res);
	}
	//switch�� ��� ��Ģ����
	/*
	switch (p) {
	case'+': res = a + b;
		break;
	case'-': res = a - b;
		break;
	case'*': res = a * b;
		break;
	case'/': res = a / b;
		break;
	}
	*/

	//printf("%d%c%d =%d", a, p, b, res);







	//���� 10
	/*
	int mone= 50,schm=100,sc1; double sch = 4.1;
	//mone ����, schm ��ϱ�, sc1 ���б�, sch ����
	if (mone >= 100)	//100���� ũ�ų� ������				            //if(mone>=100&&sch>=4.0)
	{																				// sc1 =schm*0.2
		if (sch > 4.0)  sc1 = 20;  //�������б�
		printf("��ϱ���%d�Դϴ�\n", schm-sc1);						//else if(mone<100)
	}																				//sc1=schm*0.4
	if (mone < 100)
	{
		if (sch > 4.0)  sc1 = 20+40; //����+���� ���б�
		printf("��ϱ���%d�Դϴ�\n", schm-sc1);
	}
	  */









	  //���� 11
	  // �����ݰ��
	  //�⺻��� +��뷮*kw�� ���+����
  /*
	  int kw;
	  double r, mone;
	  printf("�����뷮�� �Է��ϼ���(kw): "); scanf("%d", &kw);


	  if (kw > 1 && kw <= 100)
		  mone = 370 + kw*52.0;
	  else if (kw <= 200)
		  mone = 660 + 100 * 52.0 + (kw % 100)*88.5;
	  else if (kw  <= 300)
		  mone = 1130 + 100 * 52.0 + 100 * 88.5 + (kw % 100)*127.8;
	  else if (kw > 300 && kw <= 400)
		  mone = 2710 + 100 * 52.0 + 100 * 88.5 + 100 * 127.8 + (kw % 100)*184.3;
	  else if (kw > 400 && kw <= 500)
		  mone = 5130 + 100 * 52.0 + 100 * 88.5 + 100 * 127.8 + 100 * 184.3 + (kw % 100) * 274.3;
	  else
		  mone = 9330 + 100 * 52.0 + 100 * 88.5 + 100 + 127.8 + 100 * 184.3 + 100 * 274.3 + (kw % 100)*494.0;

	  r = mone*0.09;
	  printf("�̹��� ����� %.0lf���Դϴ�\n", mone + r);
	*/




	//�ݺ��� ���
	 //����12
	/*
	int a; 
	scanf("%d", &a);
	while (a < 0) {     //do~while���� �� ���� �ڵ带 �ۼ��Ҽ��ִ�
		scanf("%d", &a);
	}
	printf("%d", a);
	
	*/

	/*
 int i;
 for (i = 0; i < 5; i++)
 {
	 puts("Be happy");
 }
   */


   //���� 13
/*
	for (int i = 0; i < 10; i++)
	{
		printf("$");
	}
	printf("\n"); */



//���� 14
		/*	
	for (int i = 1; i <= 15; i++)
	{
		printf("*");
		if (i % 5==0) printf("\n");
	}	 

 

//����15
			/*
	int a=0;
	for (int i = 1; i <= 100; i++) {
		a = a + i;
	}
	printf("%d", a);
			 */


	   /*
  //����16
int a,b=0;
for (;;)
{


	printf("����Է�:"); scanf("%d", &a);
	if (a < 0)
		break;
	b = a + b;





}
printf("������ ��: %d", b);
}	   
*/





/*void main() {
	//��ø �ݺ��� �������� 1
	/*
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("$");
		}
		printf("\n");
	}
	*/



	//��ø �ݺ��� �������� 2
	/*
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("@");
		}
		printf("\n");
	}
   */


   //��ø �ݺ��� �������� 3
	/*

	for (int i = 1; i <= 5; i++) {
		for (int j = i; j < 5; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i * 2 - 1; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
*/

 //��ø �ݺ��� �������� 4
	/*
for (int i = 0; i < 5; i++)	{
	for (int j = 0; j < 5; j++){
		if(i==j || i+j==4)	printf("*");
		else printf(" ");
	}
	printf("\n");
}
*/

//���� 5

	/*
	printf(" *���ڸ��߱� ����*\n");
	int a, b=0,num;
	srand((unsigned int)time(NULL));
	num = (rand() % 30) + 1;
	do
	{
		printf("�����Է�(1~30):"); scanf("%d", &a);
		b++;
		if (a > num) printf("���ڰ� Ů�ϴ�\n");
		else if (a < num)printf("���ڰ� �۽��ϴ�\n");
		if(a==num) break;
	} while (1);
	printf("����: %d �ݺ�Ƚ��:%d\n",a, b);
	//�������α׷�+�ζ�
	/*
	int num;
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 6; i++) {
	num = (rand() % 45) + 1;
	printf("%d ", num);
	}


}
*/




//�Լ� 
//�Լ� ��� ���α׷�

  //���� 1
/*
	double avg(double a, double b){
		double te;
		te = a + b;
		return(te / 2.0);
	}

	int main() {
		double a=1.5, b=3.4, res;

		res = avg(a, b);
		printf("%.1lf\n", res);
	}		 */






	 //���� 2

/*
double mit(double cm) {
	double	box;
	box = cm / 100;
	return box;
}

int main() {
	double cm = 187, res;
	res = mit(cm);
	printf("%.2lfm\n", res);
}
*/


 

  //���� 3
/*
int power(int a, int b)
{
	int box=1;	  
	for (int i = 0; i < b; i++) {
		box = box * a;		//1= 1*2; 10�� �ݺ�
	}
	return box;
}
int main()
{
	int a=2, b=10, res;
	res = power(a, b);
	printf("%d\n",res);
}
*/








//���� 4


/*
int prch(int a) {
	for (int i = 2; i < a; i++) {
		if (a%i == 0)
			return 0;
	}
	return 1;
}


int main() {
	int b;
	b = prch(32767);
	if (b == 1)printf("�Ҽ�\n");
	else printf("No�Ҽ�\n");
}
		*/





//���� 5
//����Լ� ��� ���α׷�
/*
int sum(int a) {
	int box = 0;
	for (int i = 1; i <= a; i++) {
		box = box + i;
	}
	printf("1~ %d�� ��: %d\n", a, box);
	return box;
	sum(a);
}



void main() {
	sum(10);
	sum(100);
}

*/




//���� 6
/*
int menu() {
	int food;
	printf("1. ������\n");	printf("2.�ᳪ������\n"), printf("3.����Į����\n");
	printf("\n#�޴��� �����ϼ��� :");	scanf("%d", &food);
	return food;
}

void main()
{
	int food;
	food = menu();
	printf("���õ� �޴��� %d�� �Դϴ�\n", food);
}
*/





//���� 7

int tot(int kor, int eng, int mat);
double avg(int tot);
void print();  


void main()
{
	int a, b, c,d;
	double e;
	printf("�� ������ ���� �Է�:");
	scanf("%d%d%d", &a, &b, &c);
	d = tot(a, b, c);
	e = avg(d);
	printf("=========<����ǥ>========\n\n");
	print();
	printf("���� ���� ���� ���� ���\n");
	print();
	printf("%d   %d   %d   %d   %.1lf\n\n", a, b, c, d, e);
	
}	



int tot(int kor, int eng, int mat)	 // ���� ��� �Լ�
{
	int sum;
	sum=  kor + eng + mat;
	return sum;
}



double avg(int tot) {	 //��հ�� �Լ�
	double a = tot / 3.0;
	return a;
}


void print() {		   //����ǥ ��� �Լ�
	
	printf("------------------------------------------------\n");

}



