#include<stdio.h>
#include<string.h>
#include<stdlib.h>


 /*
struct student {		 // 구조체를 사용한 프로그램

	int a;
	double b;
	char c[10];

};


void main() {
	struct student s1;
	s1.a = 10;
	s1.b = 10.5;
	strcpy(s1.c, "홍길동");

	printf("%d , %.1lf,  %s\n", s1.a, s1.b, s1.c);

}

*/
// 구조체를 사용한 프로그램
/*
struct profile
{
	char na[20];
	int a;
	double h;
	char *i;
	
};

void main() {
	struct profile sam;

	strcpy(sam.na, "삼성");
	sam.a = 79;
	sam.h = 200.3;
	sam.i = (char*)malloc(80);	//메모리공간 할당
	printf("기업소개: ");
	gets_s(sam.i,80); //입력받을 값을 작성

	printf("기업명:%s\n", sam.na);
	printf("역사:%d\n", sam.a);
	printf("매출:%.1lf\n", sam.h);

	//printf("자기소개: %s\n", sam.i);

}
*/



	   /*
//구조체를 사용해서 학번, 이름, 학점을 비교해서 최대값을 출력하는 프로그램, 배열처럼사용할수도있다
struct school			
{
	int i;
	char na[20];
	double g;
};

 void main() {
	struct school s1 = { 313, "길동", 2.4 },
		s2 = { 314, "순신", 3.8 },
		s3 = { 315, "이도", 4.4 };


	struct school max;

	max = s1;
	if (s2.g > max.g)max = s2;
	if (s3.g > max.g)max = s3;

	printf("학번: %d\n", max.i);
	printf("이름: %s\n", max.na);
	printf("학점: %.1lf\n", max.g);

}
*/

   /*
struct  Ab {
		int a, b, c;
	};

	void main() {
		struct Ab  abc = { 10,20,30 };
		struct Ab  *p;
		p = &abc;

		printf("%d\n", p->a);
		printf("%d\n", p->b);
		printf("%d\n", p->c);


	}

	*/

struct address {					//구조체로 만든 주소록 프로그램
	char na[20];					//이름
	int n;							//나이
	char t[20];					 //번호
	char b[80];					 //맴버
};

void main() {
	struct address abc[3] = {			 //3개의 구조체 배열선언
		{"길동", 10, "111-1111", "독도"},
		{ "이신", 20, "222-2222", "서울"},
		{ "장보", 30, "333-3333", "완도"} };

	for (int i = 0; i < 3; i++) {					//출력 , 사람수만큼
		printf("%s %d %s %s\n", abc[i].na, abc[i].n, abc[i].t, abc[i].b);
	}
}