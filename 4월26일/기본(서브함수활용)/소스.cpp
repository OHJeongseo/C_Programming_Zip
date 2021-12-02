#include<stdio.h>

/*void main() {		  //0을 입력할때까지 그외에 숫자를  무한으로 입력하는  프로그램
	int a;
	while (1) {
		printf("입력:");
		scanf("%d", &a);
		if (a == 0)break;
	}
} */





/*void sub();
void main() {
	for (int i = 0; i < 5; i++); {
		sub();
}
	void sub()
{
	for (int j = 0; j < 5; j++);
	printf("*");
} */






/*
double add(int  d, int e) {	   //double	함수선언+전달받을 (a,b)사용
	double  c;
	c = (double)d / e;	   //double 계산식
	return c;
}
void main() {
	int a = 5, b = 2;
	double c;	 //c= double이면  호출함수,계산식도 double로 설정한다
				 //double 변수
	c = add(a ,b);	 //전달할 a,b변수을 선언
	printf("c=%.1lf\n", c);
} */
  /*
void sub2(int a, int b) {
	int c = a + b;
	printf("결과=%d\n", c);
}
void main() {
	sub2(10, 20);
}
	*/
	   /*
int sub3() {		   //리턴 타입
	int a;
	printf("입력:");
	scanf("%d", &a);
	return a;
}
void main() {
	int c;
	c = sub3();						  
	printf("입력값=%d\n", c);
}	
		 */


 	/*
void sub4() {
	printf("프로그램 실행\n");
}

void main() {
	sub4();
}	  */



//반환값이 없는 함수 
/*
void com_char(char ch, int a);

int main(void)
{
	com_char('@', 5);

	return 0;

}
void com_char(char ch, int a) {
	int i;

	for (i = 0; i < a; i++)
	{
		printf("%c", ch);
	}
}
					   */


  		 /*
void com_char(char ch, int b);

void main()
{
	com_char('@', 5);

}
void com_char(char ch, int b)
{
	int i;

	if (b > 10) return; // 함수의 실행을 종료하라는뜻
	for (i = 0; i < b; i++) {
		printf("%c", ch);
	}
}
		   */









		 /*
void com_po(void);

int main(void) {

	com_po();
	printf("학번    이름       전공      학점\n");
	com_po();

	return 0;

}

void  com_po() {
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("-");
	}
	printf("\n");
   }

		   */

		/*
int pl(int a, int b) {			 //두가지의 숫자를 입력해서 조건에따라서 덧셈과 뺄셈을 반복, 출력하는프로그램 
	int c;
	c = a + b;
	return c;
}
int mi(int a, int b) {
	int c;
	c = a - b;
	return c;
}
void main() {
	int a, b, c;
	while (1) {
		printf("숫자1:"); scanf("%d", &a);
		printf("숫자2:"); scanf("%d", &b);
		printf("입력(1:덧셈, 2:뺄셈):"); scanf("%d", &c);

		if (c == 1) c = pl(a,b);
		else if (c == 2)c = mi(a,b);
		else  break;	  
		printf("결과=%d\n", c);
	}
}
		  */


//재귀함수=반복문과 특징이 비슷하다
/*
void f(int a) {
	if (a > 5) {
		printf("\n");
		return; //함수를 종료시에는 return문을 사용한다 
	}
	printf("%d ", a);
	f(a + 1);
	printf("%d ", a);
}

void main() {
	f(1);
}
  */

	/*
	//예제ex36

void main() {
	int i, j;
	printf("  |");
	for (i = 1; i <= 9; i++) {

		printf("%2d ",i);	  //printf("%3d",i)

	}
	
	printf("\n-----------------------------\n");

	for (i = 1; i <= 9; i++) {
		printf("%3d|", i);

		for (int j = 1; j <= 9; j++) {

			printf("%3d", i*j);
		}
		printf("\n");

	}

}
//실행결과
| 1  2  3  4  5  6  7  8  9
---------------------------- -
1 | 1  2  3  4  5  6  7  8  9
2 | 2  4  6  8 10 12 14 16 18
3 | 3  6  9 12 15 18 21 24 27
4 | 4  8 12 16 20 24 28 32 36
5 | 5 10 15 20 25 30 35 40 45
6 | 6 12 18 24 30 36 42 48 54
7 | 7 14 21 28 35 42 49 56 63
8 | 8 16 24 32 40 48 56 64 72
9 | 9 18 27 36 45 54 63 72 81
계속하려면 아무 키나 누르십시오 . . .

*/






	/*
void main() {		  //예제37
	int a, b;
	puts("직사각형을 만들자");
	printf("가로 :"); scanf("%d", &a);
	printf("세로 :"); scanf("%d", &b);

	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			printf("*");
		}
		printf("\n");
	}
}
	  */


/*
void main() {			//예제38
	int a,i,j;
	printf("몇 단입니까:"); scanf("%d", &a);

	for (i = 1; i <= a; i++) {	 //중첩사용시 {는 출력결과에 
	따라서 하나만 사용해도 되고 for문마다 {사용하기도 한다
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
		}
		
	}

	실행결과
	몇단입니까:5
	*
	**
	***
	****
	*****

		  */

/*void main() {		//예제1.ex43
	int i, j;
	for (int k = 0; k < 3; k++) { //세로 출력
		for (i = 0; i < 4; i++) {	 //개수  출력
			for (j = 0; j < 5; j++) {	 //가로출력
				printf("*");
			}
			printf(" ");
		}
		printf("\n");
	}

} */
  /*		  예제2.1
int abc(int a, int b);
void main() {
	int a, b;
	printf("입력: "); scanf("%d", &a);
	printf("입력: "); scanf("%d", &b);
	printf("작은 값=%d\n", abc(a, b));
}
int abc(int a, int b) {
	if (a < b) return a;
	else return b;
}	*/


 /*
//예제 2.3 프로그램
int pu(int a, int b)
{
	return a + b;
}
int ma(int a, int b) {
	if (a > b)return a - b;
	else return b - a;
}

void main() {
	int a, b, c, d;
	printf("입력: "); scanf("%d", &a);
	printf("입력: "); scanf("%d", &b);
	c = pu(a, b);
	d = ma(a, b);
	printf("합=%d\n", c);
	printf("차=%d\n", d);
}
   */
 
void main() {
	for (int i = 0; i < 15; i++) {

	}
}
