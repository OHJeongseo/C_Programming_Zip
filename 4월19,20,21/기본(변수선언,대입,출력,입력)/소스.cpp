#include<stdio.h>

/*int main(void)
{
	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);

	printf("%d과 %d의 합은 %d입니다\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf =%.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	return 0;
} */

/*void main()
{
	int a;	     //int형 변수선언
	int b, c;    //두개의 int형 변수를 동시선언
	double da;	 //double형 변수선언
	char ch;	 //char형 변수선언

	a = 10;	   //int형 변수 a에 정수10을 대입
	b = 20;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	


	printf("변수 a의 값: %d\n", a);
	printf("변수 b의 값: %d\n", b);
	printf("변수 c의 값: %d\n", c);
	printf("변수 da의 값: %.1lf\n", da);
	printf("변수 ch의 값: %c\n", ch);

	return 0;
}*/

 //printf("a=%d\n", a)  = printf("변수 a의 값: %d\n", a)


/*void main()
{
	int a, b=0;

	a = 10;

	printf("%d\n", a);
	printf("%d\n", b);

	
}*/


/*void main() {
	char a = 'A';
	//아스키 코드값 출력

	printf("%c는 %d\n", a, a);
	printf("%d바이트\n", sizeof(int));



} */
#include<string.h>

/*void main() {
	char a[20] = "abcdefgh";
	strcpy(a, "bbbbb");
    printf("%s", a);
} */


/*void main()
{
	int a;
	double b;
	const double c = 0.1;

	a = 200;
	b = a*c;
	printf("세금:%.1lf\n", b);

}*/

	
/*void main()
{
	// 60 = 300*0.2
	int a;
	const double b = 0.2;  //const doulbe사용시 바로 초기화 선언
	double c;

	a = 300;
	c = a*b;

	printf("%lf\n", c);

} */

/*void main() {
	int a;
	double b;

	printf("나이와 키 입력:");
	scanf("%d%lf", &a,&b);
	//printf("키 입력: ");
	//scanf("%lf", &b);
	printf("나이:%d, 키:%.1lfcm\n", a, b);


} */


/*void main() {
	char a;
	char b[10];

	printf("학점입력:");   scanf("%c", &a); //한줄작성 가능 
	printf("이름입력:");   scanf("%s", b);
    printf("학점:%c, 이름:%s\n", a, b);

} */

/*void main() {
	int  a;
	char b[10];
	int c, d;
	int f;
	double g;


	printf("학번:"); scanf("%d", &a);
	printf("이름:"); scanf("%s", b);
	printf("국어:"); scanf("%d", &c);
	printf("영어:"); scanf("%d", &d);
	//printf("총점:"); scanf("%d", &f);
    //printf("평균:"); scanf("%lf", &g);

	f = c + d;
	g = f / 2;

	printf("학번:%d, 이름:%s\n", a, b);
	printf("국어:%d, 영어:%d\n", c, d);
	printf("총점:%d, 평균:%.1lf\n", f, g);

}*/


/*void main() {
	char a;
	char b;

	scanf_s("%c ", &a);		 //두글자를 쓸때 뛰어쓴다("%c " &a);
	scanf("%c", &b);
	printf("%c,%c\n", a, b);

} */


/*void main() {
	double a;
	int b, o;
	//int a=5, b=2;
	//double c;

	//1.c=(double)a/b;, 2.c= a/2.0; 실수형나누기 계산
	//printf("%.1lf\n",c);

	a = 5.0 / 2.0; //실수 출력시 .0를 작성한다
	b = 5 / 2;
	o = 5 % 2;

	printf("a:%.1lf\n",a);
	printf("b:%d\n",b);
	printf("o:%d\n",o);
	
} */


