#include<stdio.h>


//*지역변수
/*
void sub() {
	int a = 10;	 //sub의 지역변수

	printf("sub() a=%d\n", a);
}

void main() {

	int a = 0;	//main의 지역변수
	sub();
	printf("main() a=%d\n", a);
}
*/

/*void main() {
	int a = 10;

	//중괄호의 안의 변수는 사용후 없어진다
	{
		int a = 20; //서로다른a변수
		printf("a=%d ", a);
	}

	printf("a=%d", a);
}
*/
		/*
void main() {
	int a = 10;
	int b = 20;


	int t = a;
	a = b;
	b = t;
	printf("교환후 a:%d b:%d\n", a,b);
	
}		  */






//*전역변수

			/*
int a;	   //전역변수는 선언시에 자동초기화된다



void sub() {
	a = 10;
}
void sub2() {
	int a;	//지역변수int a는{ }가 끝나면 소멸, 출력에 관여하지못한다
	a = 20;
}
void main() {
	printf("a=%d\n", a);  //0
	sub();
	printf("a=%d\n", a);   //10
	sub2();
	printf("a=%d\n", a);   //10

}			   */



	 //*정적지역변수
/*
void sub() {
	static int a ;	//자동 초기화 실행,한번실행
					//값을 다시 초기화하지않고 계속사용하는것, static 
	a++;
	printf("a=%d\n", a);
}
void main() {
	for (int i = 0; i < 3; i++) {
		sub();
	}
} */
			 

/*
int  *sub(int *a) {
	static int b;
	b = *a + 10;
	return &b;
}
void main() {
	int a = 10;
	int *p;

	p=sub(&a);
	printf("*p=%d\n", *p);
} 
  */

		/*
void main() {
	int a[3][4];	//3명의 4과목 점수를 저장할 배열선언
	int t[3];		   //총점 저장변수
	double ab[3];		//평균 
		   //for문에 사용할 변수 초기화

	for (int i = 0; i < 3; i++)
	{	 //3명의 수만큼 반복
		t[i] = 0;
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &a[i][j]);	//점수입력
			t[i] += a[i][j];
		}
		ab[i] = t[i] / 4.;

	}
	for (int i = 0; i < 3; i++)
		printf("t=%d, a=%.1lf\n", t[i], ab[i]);

}

*/


  
void main() {
	int a[4][4];
	int c = 1;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			a[i][j] = c;
			c++;
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%3d", a[j][i]);
		}

		printf("\n");
	}
}



				/*
void output(int a[5][5]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (a[i][j] == 0)
				printf("* ");
			else if (a[i][j] == 1)
				printf("# ");
		}
		printf("\n");
	}
}



void main() {
	int a[5][5] = { 0 };
	int x, y;		//y행 x열
	while (1) {
		output(a);
		printf("행, 열 입력:");
		scanf("%d%d", &y,&x);
		a[y][x] = 1;
	}
}
*/

/*
void output(int a[5][5]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (a[i][j] == 0)
				printf("* ");
			else if (a[i][j] == 1)
				printf("# ");
		}
		printf("\n");
	}
}



void main() {
	int a[5][5] = { 0,0,0,0,0,
					  0,1,1,0,0,
					  0,0,1,0,0,
					  0,0,1,0,0,
					  0,0,0,0,0 };

	output(a);
	}

	*/


/*
void main() {
	char a[3][20];

	for (int i = 0; i < 3; i++) {
		scanf("%s", a[i]);		   // %s 행 
	}
	for (int i = 0; i < 3; i++) {
		printf("%s\n", a[i]);
	}
}
*/


/*
void main() {				  //두개의 2차원배열의 값을 더하고 출력하는 프로그램
	int a[2][3] = { 1,2,3,4,5,6 };
	int b[2][3] = { 1,2,3,4,5,6 };
	int c[2][3];	   //결과값을 저장하는 2차원배열 

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			c[i][j] = a[i][j] + b[i][j];   //두개의 2차원배열을 더한 다음에 2차원배열'c'에 저장
		}
	}
for (int i = 0; i < 2; i++) {
	for (int j = 0; j < 3; j++) {
		printf("%d  ",  c[i][j]);
	}
	printf("\n");
}
}
		  */


   /*			  문제1
void main() {		   //a를 입력해서 오름차순으로 출력
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		printf("%d\n", i);
	}
}
	 */

  /*	   문제2
void main() {			   //a를 입력해서 내림차순으로 출력
	int a;
	scanf("%d", &a);
	for (int i = a; i >= 1; i--) {
		printf("%d\n", i);
	}

}	*/

 /*			   문제3

void main() {					  //   a를 입력받아서 a의 구구단을 출력
	int a;
	scanf("%d", &a);

	
		for (int i = 1; i <= 9; i++) 
			printf("%d*%d=%d\n", a, i, a*i);
	
	
}
*/


/*					문제4
void main() {					//a를 입력받아 a값만큼 *출력
	int a; scanf("%d", &a);

	for (int i =1; i <= a; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}			   */
/*실행결과 
5
*
**
***
****
*****
계속하려면 아무 키나 누르십시오 . . .
*/


/*				문제5
void main() {			//월 일 을 입력해서 요일을 출력하는 프로그램
	int a, b, c = 0;
	scanf("%d %d", &a, &b);
	for (int i = 1; i < a; i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			c += 31;
		else if (i == 2)
			c += 28;
		else
			c += 30;
	}
	c +=b;	   //달의 날수 더하기
	if (c % 7 == 1)	printf("월\n");
	else if (c % 7 == 2)	printf("화\n");
	else if (c % 7 == 3)	printf("수\n");
	else if (c % 7 == 4)	printf("목\n");
	else if (c % 7 == 5)	printf("금\n");
	else if (c % 7 == 6)	printf("토\n");
	else 	printf("일\n");

}


*/



	
	   		 
	
			  /*    문제 6
	void main() {
		int a, s=0; 			         // int a, b=0
		scanf("%d", &a);           	// scanf("%d", &a);
		int i = 1;				        // for(int i=1; i<=a; i++) {
		while ( i <= 10)	       // b+=i
		{							   //   }
			s = s + i;				   //printf("%d\n", b);
			i++;
			if (i > a) break;
		}
		printf("%d", s);

	}
	
				 */

/*    문자 7
#include<string.h>
void main() {  //문자를 열개씩 끊어서 하나씩 출력
	char a[100] = "Baekjoon0nlineJudge";
	int b;
	b = strlen(a);	 //글자수를 확인
	for (int i = 0; i < b; i++) {
		if (i != 0 && i % 10 == 0)printf("\n");

		printf("%c", a[i]);
	}
}

			   */


