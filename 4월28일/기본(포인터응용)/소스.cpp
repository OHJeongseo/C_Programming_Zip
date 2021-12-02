#include<stdio.h>
/*
void main() {
	char *p;
	p = "hello";   //임시저장공간에 "hello"저장, 변경할수없다.
	p = "world";      //임시위치주소변경으로 "world" 변경할수있다
	printf("%s\n", p);

	char a[10] = "world";
	printf("%s\n", a); //
}
*/


/*
void main() {
	char *p;
	int c = 0;
	p = "hello";

	while (*p != '\0') {
		if (*p == 'l')c++;		//'l'가 몇개인지 확인하는 부분

		printf("%c",*p);
		p++;
	}
	printf("\n");
	printf("c=%d\n", c);
}
  */

			   /*
void main() {			  //같은 문자열을 사용
	                      //주소값이 같은지 확인하는 프로그램
	char*a, *b;
	a = "aaa";
	b = "aaa";

	printf("%u\n", a);
	printf("%u\n", b);

}				 */
			/*  
void main() {
	char a[20];	   //a[20],b[20];

	scanf("%s", a);
	printf("%s", a);  //printf("%s\n", a);

	
	gets_s(a);	  //scanf()와 같은기능이다	, gets_s(b)
	printf("%s", a); //	  printf("%s\n", b);
}				
*/


	 /*
void main() {
	char s[60];

	printf("입력");
	gets_s(s);
	printf("입력한 문자%s", s);
}
	   */


/*
void get(char *p) {		//gets_s의 작동 프로그램
	char c;
	while ((c = getchar()) != '\n') {
		*p = c;
		p++;
	}
	*p = 0;
}

void main() {
	char a[20];

	get(a);
	printf("%s\n", a);
}
*/
				/*
void main() {
	int a;
	char na[20];

	printf("나이입력:"); scanf("%d", &a);
	getchar();	                              
	printf("이름입력:"); gets_s(na);	    //배열이름을 주고 scanf의 입력값을 반복
	printf("나이: %d, 이름: %s\n", a, na);

}
				  */


#include<string.h>

void main(void)
{
	char s1[80] = "strawberry";
	char s2[80] = "apple";
	char *pa1 = "banana";
	char *pa2 = s2;


	printf("최초문자열:%s\n", s1);	//strawberry
	strcpy(s1, s2);	 //s2값을 s1에 복사
	printf("바꾼 문자열:%s\n", s1);	 //apple

	strcpy(s1, pa1);  //pa1값을 s1에 복사
	printf("바꾼 문자열:%s\n", s1);	//banana


	int c = strlen(s1);		  //문자길이 출력, 11
	printf("바꾼 문자열:%d\n", c);


	int d = strcmp(s1, s2);	  //s1과 s2를 아스키코드로 비교하는 함수
	if (d > 0) puts("s1가 크다");
	else if (d == 0) puts("s1와 s2가 같다");
	else puts("s2숫자가 더크다");
		
	strcat(s1, pa1);  //s1과 pa1의 문자열 붙여서 출력하는 함수
	printf("붙이기:%s \n", s1);	//banana



}
