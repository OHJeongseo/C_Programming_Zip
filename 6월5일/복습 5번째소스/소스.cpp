#include<stdio.h>
#include<stdlib.h>			 //동적할당메모리함수 사용시 헤더파일선언




//동적 할당 함수
// malloc, calloc, realloc, free 사용한 프로그램

 //연습1
/*
void main() {

	double *ondmax, *ondmin;


	ondmax = (double*)malloc(4);		//동적할당사용
	ondmin = (double*)malloc(4);


	printf("최고기온 과 최저기온을 입력하세요: "); scanf("%lf%lf", ondmax, ondmin);
	printf("일교차는 %.1lf입니다", *ondmax - *ondmin);	   //연산시에 포인터를 사용한다



	//free(ondmax);			//동적 할당 영역 반환
	//free(ondmin);
}			   */









//연습2
/*
void main() {											 	//교수님 코드
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















//구조체
//연습 1
/*
struct dodofood
{	 //구조체 멤버 선언
	char a[10];
	int b[6];
	double c;

};
void main() {
	
	struct dodofood s1[4]	//구조체 초기화선언(구조체배열사용)
		= { {"관악점", 70,45,100,92,150,81},
		   {"강남점",88,92,77,30,52,55},
		   {"명동점",50,90,88,75,77,49},
		   {"대림점",120,92,80,150,130,105}};


	
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
	printf("\n실적별 출력.....\n");
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






//연습 2
/*
struct cracker
{
	int a;
	int b;
};

void main() {
	cracker aa;
	printf("바사각의 가격과 열량을 입력: "); scanf("%d%d", &aa.a, &aa.b);
	printf("바사삭의 가격: %d원\n", aa.a);
	printf("바사삭의 열량:%dkal\n", aa.b);
}				  */














//연습3
			  /*
struct student    //구조체 선언
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
	student abc = { 315, "홍길동", 82, 93, 74, 90, 65 };
	print_avg(&abc);
	printf("학번: %d\n", abc.num);
	printf("이름: %s\n", abc.name);
	printf("점수: ");
	int c = 0;
	for (int i = 0; i < 5; i++) {
		printf("%3d", abc.score[i]);
	}
	printf("\n평균: %.1lf\n", abc.avg);
}		 					  */








//연습 4	   
	/*
struct profile {
	char name[10];
	double grade;
	int english;
};
void input_data(struct profile staff[5]) {
	printf("이름, 학점, 영어 점수를 입력하세요.\n");
	for (int i = 0; i < 5; i++) {
		scanf("%s%lf%d", &staff[i].name, &staff[i].grade, &staff[i].english);
	}
}

void elite(struct profile staff[5]) {
	printf("엘리트 사원 정보\n");
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










//연습 5
/*			//저금통 프로그램
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
		printf("동전의 금액과 개수 : "); 
		scanf("%d", &a);  
		if (a == -1) break;
		scanf("%d", &b);
		save(&m, a, b);
		
	}
	printf("총 저금액 %d원\n",total(&m));
}						  */

   




//연습 6
/*
typedef struct
{
	int num;
	char name[10];
	double weight;
}fitness;


void main() {
	fitness f[10];			   //열 명입력
	int i = 0, pos;
	double max = -9999,tot = 0;
	while (1) {
		printf("회원정보 :"); scanf("%d", &f[i].num);
		if (f[i].num == -1)break;
		printf("이름: "); scanf("%s", &f[i].name);
		printf("체중: ");	scanf("%lf", &f[i].weight);
		if (f[i].weight > max) {			//가장 큰 체중을 확인하는 조건문
			max = f[i].weight;
			pos = i;
		}
		tot += f[i].weight;		  //입력된 전체회원의 몸무게를 합산
		i++;
	}
	printf("# 총 회원수 :%\n", i);
	printf("# 평균 체중:%.1lf\n", (double)tot / i);
	printf("# 체중이 가장 무거운 회원은 ?\n");
	printf("회원정보 :%d\n", f[pos].num);
	printf("이름: %s\n", f[pos].name);
	printf("체중:%.1lf\n", f[pos].weight);


}					 */







//연습 7
#define NUM 3		 //입력횟수 설정
typedef struct           //구조체 재정의 해서 사용하는 코드
{
	int a;			  //학번
	char name[10];		 //이름
	int b, c, d;		//국어, 영어, 수학 점수
	int tot = 0;	  //총점
	double avg;			 //평균
	char grade;				//학점
}as; //구조체의 새이름 as

void main() {
	as s1[NUM];					 //구조체 배열 변수선언
	int i = 0, tot;
	for (i = 0; i < NUM; i++) {
		printf("학번:"); scanf("%d", &s1[i].a);
		printf("이름:"); scanf("%s", &s1[i].name);
		printf("국어, 영어, 수학 점수: "); scanf("%d%d%d", &s1[i].b, &s1[i].c, &s1[i].d);
		s1[i].tot = s1[i].b + s1[i].c + s1[i].d;
		s1[i].avg = (double)s1[i].tot / NUM;
		if (s1[i].avg >= 90) s1[i].grade = 'A';
		else if (s1[i].avg >= 80) s1[i].grade = 'B';
		else if (s1[i].avg >= 70) s1[i].grade = 'C';
		else s1[i].grade = 'F';
	}

	printf("정렬 전 데이터....\n");
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

		printf("정렬 후 데이터....\n");
		for (int j = 0; j < NUM; j++) {
			printf("%3d %3s %3d %3d %3d %3d %.1lf %c\n",
				s1[j].a, s1[j].name, s1[j].b, s1[j].c, s1[j].d, s1[j].tot, s1[j].avg, s1[j].grade);
		}

}
		



	





