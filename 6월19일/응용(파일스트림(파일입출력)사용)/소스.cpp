#include<stdio.h>
//포인터 +(이중포인터) 활용
//포인터:  변수의 주소 값을 참조 
//포인터 자체 역시 메모리에 저장 공간을 갖는 하나의 변수

//이중 포인터 활용 함수 선언
/*
void swap(char **pa, char **pb);

void main() {
	char *a = "abc";	  //문자열(String)과 비슷하다
	char *b = "dfg";
	char *t;	 //교환을 위한 포인터 변수

	printf("교환 전에 문자열\n");
	printf("a :%s  ", a);
	printf("b :%s\n", b);
	

	swap (&a, &b);
	printf("swap 함수(이중 포인터)에서의 교환\n");
	printf("a :%s  ", a);
	printf("b :%s\n", b);
}

void swap(char **pa, char **pb) {			 //이중 포인터 활용 (매개변수: 메인 함수의 *a,*b의 주소 값을 참조하겠다 => 이중포인터를 사용, 주소값을 가르킨다)
	char *pt;
	pt = *pa;
	*pa = *pb;
	*pb = pt;



}		   */




//2차원 배열 + 배열포인터 활용
/*
void sub(int (*a)[3]) {				//포인터 활용시에 행을 생략사용할수있다
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
}

void main() {
	int a[2][3] = { 1,2,3,4,5,6 };
	sub(a);
}		*/






//연습문제 
/*
int conut_num(int (*a1)[4], int(*a2)[4], int  same_num[12][2]){
	int cnt = 0;
	for (int i = 0; i < 3; i++) {	  //2차원 배열의 값을 일치하는 확인하는 코드
		for (int j = 0; j < 4; j++) {
			if (a1[i][j] == a2[i][j])
			{
				same_num[cnt][0] = i;
				same_num[cnt][1] = j;
				cnt++;
			}
		}
	}
	return cnt;
}

void main() {
	int a1[3][4] = {
		{15, 3, 9, 11},
		{23, 7, 10, 12},
		{0, 17, 55, 24} };

	int a2[3][4] = {
		{13, 8, 9, 15},
		{23, 0, 10, 11},
		{29, 17, 43, 3} };
	int same_num[12][2];
	int i, cnt;

	cnt = conut_num(a1, a2, same_num);
	printf("일치하는 번호 수: %d\n", cnt); 
	printf("배열에서의 위치(행, 열)... \n");
	for (i = 0; i < cnt; i++) {
		printf("(%d ,%d)\n", same_num[i][0], same_num[i][1]);
	}

}*/



//연습문제
#include<stdlib.h> //동적 할당 메모리 함수를 사용시 선언
/*
void main() {
	double *max, *min;	//포인터 사용
	max=(double*)malloc(sizeof(double)); //동적할당 함수 사용(타입의 사이즈크기만큼 할당)
	min = (double*)malloc(8);


	printf("최고 기온과 최저기온을 입력하세요:"); scanf("%lf%lf", max, min);

	if (max || min == NULL) {	 //입력 값 확인(동적 할당메모리를 확인) 0일경우 연산하지않고 프로그램을 종료
		printf("하나의 메모리가 부족합니다!\n");
		exit(1);	   // 프로그램 종료
	}
	printf("일교차는 %.1lf입니다",*max-*min);
	free (max);	   //메모리 반환
	free (min);
} */











//파일 입출력
//
//

  /* 1
int main() {
	FILE *in;	  //파일 포인터

	//in = fopen("a.txt", "r");	 //파일 읽기 전용으로 오픈(개방)
	in = fopen("b.txt", "w");   //파일이 없을 경우 새로 생성한다 "w"	(파일이 있을경우 지우고 쓸수있다)
	in = fopen("c.txt", "a");   //"a" = 파일을 지우지않고 추가할수있다 (파일이 없을 경우 새로 생성한다)

	if (in == NULL) {			  //파일 존재 확인하는 조건문(없음 = null)
		printf("파일 없음 \n");
		return 1;
	}
	printf("파일있음\n");

}	*/





/*2*/
/*
int main() {
	FILE *in , *out;	  //파일 포인터
	char ch;

	//in = fopen("a.txt", "r");	 //파일 읽기 전용으로 오픈
	in = fopen("a.txt", "r"); 
	out = fopen("b.txt", "w");	   //파일이 없을 경우 새로 생성한다 "w"	(파일이 있을경우 지우고 쓸수있다)

	if (in == NULL) {			  //파일 존재 확인하는 조건문(없음 = null)
		printf("파일 없음 \n");
		return 1;
	}

	//파일 복사 
	while (1)
	{
		ch= fgetc(in);	   //문자입력함수	(1자씩 읽기)
		if (ch == -1) break;   //-1 == EOF
		//printf("%c", ch);
		fputc(ch, out);		 //문자출력함수

	}
	printf("종료\n");
}	*/






/* 3 */
/*
int main() {
	FILE *in, *out;	  //파일 포인터
	int  ch;

	
	//in = fopen("a.txt", "r");	 //파일 읽기 전용으로 오픈

	//이미지 복사(aa.jpg => bb.jpg(새로 생성해서 이미지를 복사)
	//바이너리 파일 
	in = fopen("aa.jpg", "rb");   
	out = fopen("bb.jpg", "wb");	  //파일이 없을 경우 새로 생성한다 "w"파일이 있을경우 지우고 쓸수있다)

	if (in == NULL) {			  //파일 존재 확인하는 조건문(없음 = null)
		printf("파일 없음 \n");
		return 1;
	}

	
	while (1)
	{
		ch = fgetc(in);	   //문자입력함수	(1자씩 읽기)
		if (ch == -1) break;   //-1 == EOF
	//printf("%c", ch);
		fputc(ch, out);		 //문자출력함수
	}
	printf("종료\n");
}	 */





/* 4 */
/*
void main() {
	FILE *os;
	int ch,cnt =0;
	os = fopen("ccc.txt", "r");

	while (1)
	{
		ch = fgetc(os);	   //문자입력함수	(1자씩 읽기)
		if (ch == -1)	break;   //-1 == EOF

		printf("%c", ch);
		if (ch == '.') {	   //. = 개행, . =2개면 또한번 개행
			printf("\n");
			cnt++;
			if (cnt % 2 == 0) printf("\n");
		}	
	}
	printf("종료\n");

}		 */












/* 5 */
/*	   //fgets 사용
void main() {
	FILE *os;
	char *res, str[100];	 	 //문자열 활용
	os = fopen("ccc.txt", "r");

	while (1)
	{
		res = fgets(str, 100, os);	  
		if (res == 0)	break;   

			printf("%s", str);
	
	}
	printf("\n");
} */







/* 6 */
//	fscanf, fprintf 활용
// 텍스트 파일에 이름과 국어,영어,수학 점수를 입력해서(읽기전용)
//새로운 텍스트파일(출력전용)에 이름, 총점, 평균을 출력하는 프로그램(+fscanf,fprintf사용)
  /*
int main(){
	FILE *ifp, *ofp;
	char name[20];
	int kor, eng, mat;
	int tot;
	double avg;
	int res;

	ifp = fopen("a.txt", "r");
	if (ifp == NULL) {
		printf("입력 파일을 열지 못함\n");
		return 1;
	}		  

	ofp = fopen("b.txt", "w");	  //출력 파일을 쓰기 전용 개방
	if (ofp == NULL) {	  //개방여부 확인
		printf("입력 파일을 열지 못함\n");
		return 1;
	}

	while (1) {
		res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &mat);
		if (res == -1) {
			break;
		}
		tot = kor + eng + mat;
		avg = tot / 3.0;
		fprintf(ofp, "%s%5d%7.1lf\n", name, tot, avg);
	}
	
	fclose(ifp);   //입력 파일 닫기
	fclose(ofp); //출력파일 닫기
	
	return 0;

	}   */






//scanf, gets_s 사용
void main() {	 //키보드로부터 데이터를 입력받아서 저장된 파일에 출력하는 프로그램
	int a; char b[10];
	char c[50];

	FILE *out = fopen("c.txt", "w");

	while (1) {
		printf("학번 : "); scanf("%d", &a);
		if (a < 0) break;

		printf("이름 : "); scanf("%s", b);    //scanf 사용
		printf("전공 : "); getchar(); gets_s(c);

		fprintf(out, "학번:%d\n", a);
		fprintf(out, "이름:%s\n", b);
		fprintf(out, "전공:%s\n", c);

	}
}


