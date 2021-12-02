#include<stdio.h>
/*void main() {
	int a, b ;
	printf("정수1입력:"); scanf("%d", &a);
	printf("정수2입력:"); scanf("%d", &b);
	printf("결과%d\n", a + b);
} */

/*void main() {
	int a = 0;

	while (a < 5)
	{
		puts("안녕");	 //puts==printf("\n"), 출력시에만 가능하고 변환문자는 출력되지않는다
		a++;
	}
} */
 /*
void main(){ 
	int a = 1;	//초기화

	while (a < 10)	 //조건식
	{
		a = a * 2; //증감식
	}
	printf("a=%d\n", a);
}  */
	/*
void main() {
	
	for (int a = 0; a < 5; a++) {
		printf("안녕\n");
	}
} */ 




/*void main() {
	int a;
	//int a=1;
    //for(inti=0;i<4;i++)
	//a=a*2;
	//printf("a:%d\n",a);
	
	for (a = 1; a < 10; a+2) {
		a = a * 2;
	}

	printf("a:%d\n",a);
} */


/*void main() {
	for (int i = 0; i < 10; i+=3) {
		printf("안\n");
		//i = i + 2;
	}
} */

/*void main() {
	for (int a = 0; a < 5; a++) {
		puts("안녕");
	}
} */

/*void main() {
	int a = 0;   //초기값					   //int a=0;  //초기값
	do										   //while(a<5)	{	 //조건식
	{										   //printf("안녕\n"); //반복문
		puts("안녕");	  //반복할 문장		   //a++; 	  //증감식
		a++;								   //}
	} while (a < 5);	//조건
} */

/*void main() {	 //2단 구구단출력 프로그램
	
	for (int i = 1; i <= 9; i++) {
		printf("%d*%d=%d\n", 2, i, 2 * i);
	}*/

/*void main() {		 //구구단 출력 프로그램
	int i = 1;
	while (i <= 9) {
		printf("%d*%d=%d\n", 2, i, 2 * i);
		i++;
	}
} */

/*void main() {
	int i = 1;
	int a = 2;
	do {
		printf("%d*%d=%d\n", a, i, a*i);
		i++;
	} while (i < 10);
}
  */

/*void main() {	  //구단숫자 를 입력해서 구구단을  출력하는 프로그램
	int a;
	int i = 1;
	printf("단을 입력하세요:");  scanf("%d", &a);

	while (i<10) {
		
		printf("%d*%d=%d\n", a, i, a*i);
			i++;
	}
} */       

/*void main() {
	int i, j;
	for (i = 0; i < 5; i++) {


		for (j = 0; j < 5; j++)
			printf("*");
		printf("\n");
	}

	printf("%d,%d\n", i, j);
} */

/*void main() {	  //2단~9단전체 출력프로그램
	int i, j;
	for (i = 2; i < 10; i++) {		  //i=세로 10번반복

		for (j = 1; j <= 9; j++) {		 //j=가로 10번 반복
			printf("%d * %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
} */

/* void main()	{
int s = 0; // 누적값은 초기화한다


for (int i = 1; i <= 5; i++) {
	if (i == 4) {		//i=4가 될경우에 계산을 중지하고 값을 출력한다(break)
		break;
	}
	s +=i;
	}
printf("s=%d\n", s);
} */

/*void main() {			  //1~10까지 계산하는 프로그램
	int i = 1;
	int s = 0;

	while (i <= 10)	  //while(1)
	{
		s+=i;		  //s=s+1과 같다
		i++;
	    if(i>5)break;
	}
	printf("sum=%d\n", s);
} */


/*void main() {
	int s = 0; // 누적값은 초기화한다


	for (int i = 1; i <= 5; i++) {

		if (i % 3 == 0)continue; //	i=3이될때 s+=1;를 무시하고 i++를 실행(i에 1를 증감시킨다)

		s += i;		 //증감식
	}
		printf("s=%d\n", s);
	
}  */



//예제22
/*void main() { // 정수입력받아 10으로 나누어지는 판단하고 계속입력또는 종료하는 프로그램

	int a;

	do {
		int n;

		printf("정수를 입력하세요:");
		scanf("%d", &n);

		if (n % 10)
			printf("이수는 10으로 나누어지지않습니다");
		else
			printf("이수는 10으로 나누어집니다");

		printf("한번 더? [Yes …0/No…9] :"); scanf("%d", &a);
	} while (a == 0);

}*/


//예제23
/*
void main() { //예제23, 정수입력후 입력받은 정수를 역순으로 출력
	int a;


	do {
		printf("음수아닌 정수입력:"); scanf("%d", &a);   //1003
		if (a < 0)
			puts("\a음수아닌 정수를 입력하세요");
	} while (a < 0);

	printf("%d을 역순으로 읽으면", a);

	do {
		printf("%d", a % 10); //a의 나머지값을 차례로 출력 //3001
		a = a / 10; //a를 10나누어라

	} while (a > 0); //a가 0이될떄 반복을 종료하고 값을 출력하라
	puts("입니다");
}
	*/

	 /*
void main() {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j=0;j<=i; j++) {
			printf(" ");
		}
			for (j = i; j < 5; j++) {
				printf("*");
		}
		printf("\n");
	}
}  */




/*void main() {
	int i, j;
	
	//위
	for (i = 0; i < 3; i++) {
		  
		for (j = i+1; j <3; j++) {
			printf(" ");
		}	

		for (j = 0; j <=i*2; j++) {
			printf("*");
		}
		printf("\n");
	}
   //아래
	for (i = 0; i < a; i++) {		 //행 설정

		for (j = 0; j <= i; j++) {
			printf(" ");
		}

		for (j =i*2; j <=2 ;j++) {
			printf("*");
		}
		printf("\n");
	}
} */

void main() {
	int i, j, a;
	//상단
	printf("몇개:");
	scanf("%d", &a);
	for (i = 0; i < a; i++) {
		for (j = i + 1; j < a; j++) {
			printf(" ");
		}
		for (j = 0; j <= i * 2; j++) {
			printf("*");
		}
		printf("\n");
	}
	//하단
	for (i = 0; i < a - 1; i++) {
		for (j = 0; j <= i; j++) {
			printf(" ");
		}
		for (j = 0; j < (a - 1 - i) * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}