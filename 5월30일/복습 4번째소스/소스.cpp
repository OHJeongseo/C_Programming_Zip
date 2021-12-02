#include<stdio.h>
//문자열 
//연습1 
/*
void main() {
	char ani[20];
	char why[80];

	printf("좋아하는 동물:");
	scanf("%s", ani);
	printf("이유:");
	getchar(); //enter를 무시하고 문자열을 한번 더 입력할수있다
	fgets(why, sizeof(why), stdin);
	printf("%s is %s", ani, why);
}   */





/*
//연습2
void main()
{
	char na[10];
	char no[30];
	char juso[30];

	printf("이름 :"); gets_s(na);		   //scanf와 같은 기능의 함수
	printf("전화번호 :"); gets_s(no);
	printf("주소 :"); gets_s(juso);

	printf("%s, %s, %s\n", na, no, juso);
}
*/





//문자열 함수를 사용하는 방법
//연습 1
 
#include<string.h>
/*
void main() {
	char a[80]; char b[80];
	char *c;	//int c, d

	printf("두 단어 입력:"); scanf("%s %s", a, b);
	if (strlen(a) < strlen(b)) 	c = b;	  //두 문자열의 길이을 확인하는 함수		  //c= strlen(a);	      //d= strlen(b);
	else  c = a;																				  	 //if(c>d) printf("long :%s", a); else ("short:%s", b);
	printf("길이가 긴 단어:  %s\n", c);

	if (strcmp(a, b)>0) c = b;		//두 문자를 비교하는 함수	 +작은수(아스키 코드값)가 먼저 사전에 나온다
	else c = a;
	printf("사전에 먼저 나오는 단어: %s\n", c);

}*/  










//연습 2	
/*
void main() {
	char a[80];

	int b = 1,c;  //c= 문자길이를 확인하기 위한 변수
	do
	{
		printf("[실. 행. 결. 과%d]\n",b);
		printf("단어 입력:"); scanf("%s", a);	 printf("입력한 단어: %s ", a);
		c = strlen(a);
		printf("생략할 단어:");
		for (int i = 0; i < c; i++) {			//입력한 문자가 5자 이상이면 *출력해서 생략한다
			if (i < 5) printf("%c", a[i]);
			else printf("*");
		}
		printf("\n\n");
		b++;

	} while (1);

}			*/












// 함수의 데이터 공유방법
//연습1
/*
void add(int *a, int *b, int *res) {
	*res = *a + *b;
}

void main()
{
	int a = 10, b = 20, res = 0;
	add(&a, &b, &res);
	printf("결과:%d\n", res);
}  */










//연습 2
/*
int quot(int a, int b, int *res) {
	if (b == 0) return-1;
	*res = a / b;
	return *res;
}


void main() {
	int a, b, res;
	printf("두 수 입력:"); scanf("%d%d", &a, &b);

	if (quot(a, b,&res) == -1) printf("0으로 나눌수없다\n");  //비교하거나 출력할때 서브함수(타입+return 결과) 작성
	else printf("%d를 %d로 나눈 몫은 %d", a, b, res);

}		   */







//연습 3
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









//다차원 배열
//연습 1
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





//연습2
/*
void main() {
	//문자열을 입력해서 가장 문자길이가 긴 문자열을 출력
	char str[5][20]; int max=0, pos,len;

	printf("과일의 이름입력(5):");
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
		
	printf("길이가 가장 큰 과일이름:  %s\n", str[pos]);

}		 */








//연습 3
/*
void main() {
	char mark[5][5] = { 0 };

	for (int i = 0; i < 5; i++) 
	{
		for (int j = 0; j < 5; j++) 
		{
			if (i == j||i+j==4) mark[i][j] = 'X';
			printf("%2c", mark[i][j]);	 //%2c= 두개의 수의 공간을 활용해서 'X'를 출력하겠다
		}
		printf("\n");
	}
}		*/







//가위  바위 보 게임코드
#include<stdlib.h>
#include<time.h>

void main() {
	int pc, my,res;	   int money = 500;

	while (1) {
		srand((unsigned)time(NULL));
		pc = rand() % 3;

		printf("가위(0) 바위(1) 보(2) 선택하세요\n"); printf("My="); scanf("%d", &my);
		printf("PC=%d\n", pc);
		if (my == pc) printf("비겼습니다\n");

		res = my - pc;	  //결과 값을 res에 저장									   //if(pc==my) printf("비겼습니다");
																						       //else if(res==1||res==-2) printf("내가 이김");
		if (res== 1 || res == -2 ) {													   //else printf("pc가 이김");
			printf("내가 이겼습니다\n");	
			money *= 2;
		}

		if (res == 2 || res == -1) {
			printf("PC가 이겼습니다\n");
			money=0;
		}

	
	
		printf("money=%d\n\n", money);
		if (money==0) break; 
	}
}					  







//배열포인터
//연습 1
//두 2차원 배열을 같은 위치의 같은 값의 확인해서 출력
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
   
	printf("일치하는 번호의 수:  %d\n", cnt);
	printf("배열위치(행,열).......\n");
	for (int i = 0; i < cnt; i++) {
		printf("(%d,%d)\n", same_num[i][0], same_num[i][1]);
	}
}	   */





	
//연습2	
/*
void main() {
	char a[10][20];
	char b[10];
	int i = 0;
	printf("=====<방명록>=====\n");
	while (1) {
		printf("이름:"); scanf("%s", b);

		if (strcmp(b, "end") == 0) break;		  //반복 중단 조건
		int j;

		for (j = 0; j < i; j++) {			//같은 이름이 있는 비교하는 반복문
			if (strcmp(a[j], b) == 0) {
				printf("# 이미 이름을 등록되었습니다.\n");
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
		printf("# 총 %d명 등록되었습니다\n", i);
	}		*/



//아스키 코드 값 =알파벳 출력
/*
void main() {
	char ch = 'a';
	while (ch <= 'z')
	{
		printf("%c ", ch);
		ch++;
	}
}		  */
























