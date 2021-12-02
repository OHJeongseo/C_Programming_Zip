#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
void  main()
{
	//  if문의 실행 순서 코드
	 //연습 1	   //절대값
   /*
   int a;	 printf("a의 값: ");
   scanf("%d", &a);
   if (a < 0)
	   a = -a;
   printf("%d", a);
	  */


	  //짝수와 홀수를 구하는 반복문
	 /*
	 int a;	printf("a의 값: ");
	 scanf("%d", &a);
	 if (a % 2 == 0)
		 a = 2;
	 else
		 a = 1;
	 printf("%d", a);
	   */





	   //연습2	//if~ else if문 사용
	   /*
	   int che = 95;
	   char size;

	   if (che <= 90)
	   {
		   size = 'S';
	   }
	   else if (che > 90 && che <= 100) //두개의 조건을 만족(&&)
	   {
		   size = 'M';
	   }
	   else {
		   size = 'L';
	   }

	   printf("%c\n", size);
		 */



		 //연습 3
		 /*
		 double cm=179.5, kg=75.0;

		 if (cm >= 187.5 && kg <80.0)
			 printf("Ok\n");
		 else
			 printf("canel\n");
		*/


		//연습 4
		/*
		int a=10, b=3,c;


		if (a > b)
			c = a / b;
		else if (a <= b)
			c = a%b;

		printf("%d\n", c);
		*/

		//연습 5

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

		printf("평균 :%.1lf  학점 :%c \n", avg, sch);
				 */


				 //연습 6
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


//연습 7
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
	//연습 8
	/*
	int age, hi;
	printf("옷사이즈(나이, 가슴둘레):");
	scanf("%d %d",&age, &hi);
	char size;

	if (age < 20)  //나이 조건문
	{
		if (hi < 85) size = 'S';	 //가슴 둘레 조건문
		else if (hi >=85 && hi< 95) size = 'M';
		else size = 'L';
	}
	if (age > 20)
	{
		if (hi < 90) size = 'S';	 //가슴 둘레 조건문
		else if (hi>= 95 && hi <100) size = 'M';
		else size = 'L';
	}

	printf("사이즈 %c 입니다\n", size);
	*/


	//연습 9
	/*
	int a, b, res;
	char p;
	printf("사칙연산 입력:"); scanf("%d%c%d", &a,&p,&b);
	/*
	//if문 사용 사칙연산
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
	//switch문 사용 사칙연산
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







	//연습 10
	/*
	int mone= 50,schm=100,sc1; double sch = 4.1;
	//mone 형편, schm 등록금, sc1 장학금, sch 학점
	if (mone >= 100)	//100보다 크거나 같으면				            //if(mone>=100&&sch>=4.0)
	{																				// sc1 =schm*0.2
		if (sch > 4.0)  sc1 = 20;  //학점장학금
		printf("등록금은%d입니다\n", schm-sc1);						//else if(mone<100)
	}																				//sc1=schm*0.4
	if (mone < 100)
	{
		if (sch > 4.0)  sc1 = 20+40; //학점+형편 장학금
		printf("등록금은%d입니다\n", schm-sc1);
	}
	  */









	  //연습 11
	  // 전기요금계산
	  //기본요금 +사용량*kw당 요금+세금
  /*
	  int kw;
	  double r, mone;
	  printf("전기사용량을 입력하세요(kw): "); scanf("%d", &kw);


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
	  printf("이번달 요금은 %.0lf원입니다\n", mone + r);
	*/




	//반복문 사용
	 //연습12
	/*
	int a; 
	scanf("%d", &a);
	while (a < 0) {     //do~while문이 더 나은 코드를 작성할수있다
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


   //연습 13
/*
	for (int i = 0; i < 10; i++)
	{
		printf("$");
	}
	printf("\n"); */



//연습 14
		/*	
	for (int i = 1; i <= 15; i++)
	{
		printf("*");
		if (i % 5==0) printf("\n");
	}	 

 

//연습15
			/*
	int a=0;
	for (int i = 1; i <= 100; i++) {
		a = a + i;
	}
	printf("%d", a);
			 */


	   /*
  //연습16
int a,b=0;
for (;;)
{


	printf("양수입력:"); scanf("%d", &a);
	if (a < 0)
		break;
	b = a + b;





}
printf("누적된 값: %d", b);
}	   
*/





/*void main() {
	//중첩 반복문 연습문제 1
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



	//중첩 반복문 연습문제 2
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


   //중첩 반복문 연습문제 3
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

 //중첩 반복문 연습문제 4
	/*
for (int i = 0; i < 5; i++)	{
	for (int j = 0; j < 5; j++){
		if(i==j || i+j==4)	printf("*");
		else printf(" ");
	}
	printf("\n");
}
*/

//연습 5

	/*
	printf(" *숫자맞추기 게임*\n");
	int a, b=0,num;
	srand((unsigned int)time(NULL));
	num = (rand() % 30) + 1;
	do
	{
		printf("숫자입력(1~30):"); scanf("%d", &a);
		b++;
		if (a > num) printf("숫자가 큽니다\n");
		else if (a < num)printf("숫자가 작습니다\n");
		if(a==num) break;
	} while (1);
	printf("정답: %d 반복횟수:%d\n",a, b);
	//랜덤프로그램+로또
	/*
	int num;
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 6; i++) {
	num = (rand() % 45) + 1;
	printf("%d ", num);
	}


}
*/




//함수 
//함수 사용 프로그램

  //연습 1
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






	 //연습 2

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


 

  //연습 3
/*
int power(int a, int b)
{
	int box=1;	  
	for (int i = 0; i < b; i++) {
		box = box * a;		//1= 1*2; 10번 반복
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








//연습 4


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
	if (b == 1)printf("소수\n");
	else printf("No소수\n");
}
		*/





//연습 5
//재귀함수 사용 프로그램
/*
int sum(int a) {
	int box = 0;
	for (int i = 1; i <= a; i++) {
		box = box + i;
	}
	printf("1~ %d의 합: %d\n", a, box);
	return box;
	sum(a);
}



void main() {
	sum(10);
	sum(100);
}

*/




//연습 6
/*
int menu() {
	int food;
	printf("1. 볶음밥\n");	printf("2.콩나물국밥\n"), printf("3.수제칼국수\n");
	printf("\n#메뉴를 선택하세요 :");	scanf("%d", &food);
	return food;
}

void main()
{
	int food;
	food = menu();
	printf("선택된 메뉴는 %d번 입니다\n", food);
}
*/





//연습 7

int tot(int kor, int eng, int mat);
double avg(int tot);
void print();  


void main()
{
	int a, b, c,d;
	double e;
	printf("세 과목의 점수 입력:");
	scanf("%d%d%d", &a, &b, &c);
	d = tot(a, b, c);
	e = avg(d);
	printf("=========<성적표>========\n\n");
	print();
	printf("국어 영어 수학 총점 평균\n");
	print();
	printf("%d   %d   %d   %d   %.1lf\n\n", a, b, c, d, e);
	
}	



int tot(int kor, int eng, int mat)	 // 총점 계산 함수
{
	int sum;
	sum=  kor + eng + mat;
	return sum;
}



double avg(int tot) {	 //평균계산 함수
	double a = tot / 3.0;
	return a;
}


void print() {		   //성적표 출력 함수
	
	printf("------------------------------------------------\n");

}



