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

	printf("결과=%d\n",c);
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


	printf("포인터로 a값 출력:%u\n", *p);
	//printf("변수명 a값을 출력:%d\n", a);
	printf("포인터로 b값 출력:%u\n", *o);
	printf("포인터p와 o를 더한값은:%d\n", *p+*o);

}
*/

/*
void main() {
	int a;
	int *p = &a;   //포인터 선언시에만 대입이 가능하다
	//int *p;
	//p=&a;

	scanf("%d", p);	//입력시에는 주소위치로 받는다
	printf("결과=%d\n", *p);
}
*/


/*
void main() {
	int a = 10, b = 15, t;
	double vb;
	int *p, *o;	 //a값 ,b값
	int *s = &t;  //t값(총점)
	double *ss = &vb;  //vb값(평균) ,포인터선언과 동시에 vb주소를 저장(연결)

	p = &a;	//a=10;
	o = &b; //b=15;

	*s = *p + *o; //a + b ;
	*ss = *s / 2.0;	//s / 2 ;

	printf("두 정수의 값: %d ,%d\n", *p, *o);//a,b값 출력
	printf("두 정수의 합: %d\n", *s);  //포인터s값을 출력= a+b값을 출력
	printf("두 정수의 값: %.1lf\n", *ss); //포인터ss값을 출력=포인터s/2값을 출력
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
			if (a[i] > a[j]) {	  //오름차순 구하는 반복문
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
	strcpy(p, "LG"); //a = p에 hi를 저장한다
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

//예제4.10	
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
void main() {		   //예제로 작성한 부분
	int a, b;    
	//int a,b,c;
	//int *pa=&a, *pa=&b; 포인터를 사용해서 a,b주소를 저장
	puts("두개의 정수입력"); 
	//==
	printf("정수1:"); scanf("%d", &a);
	//==
	printf("정수2:"); scanf("%d", &b);
	//==
	//int t =*pa; 두수를 교환하는 부분,예제프로그램은 포인터를 사용 
	//*pa =*pb;
	//*pb = t;
	puts("입력 값을 교환"); //==

	
	int t = a;    //두수의 교환은 for반복문을 사용할 필요가 없다
	a = b;
	b = t;
	
	printf("정수1은%d이다\n", a);
	printf("정수2은%d이다\n", b);
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