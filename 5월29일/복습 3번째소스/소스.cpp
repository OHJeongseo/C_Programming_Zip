#include<stdio.h>
//배열 
//마지막 배열 값부터 출력
/*	 연습 1
void main()
{
	double a[5] = { 1.0, 2.1,3.2,4.3,5.4 };

	for (int i = 0; i <5; i++)
	{
		printf("%6.1lf", a[4-i]);		 //자리설정(6).소수점출력수(1)
	}

}
*/


//연습2
//배열a값을 b에 반복 출력
/*
void main()
{
	int a[3] = { 1,2,3 };
	int b[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 3 == 0) b[i] = a[0];
		else if (i % 3 == 1)b[i] = a[1];
		else b[i] = a[2];

	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", b[i]);
	}

}		  */




/*
//연습3
void main() {
	int a[10] = { 1,2 };

	for (int i = 2; i < 10; i++) {
		a[i] = a[i-2] + a[i-1];
	}
	
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	
} */








/*연습 4
void main() {		 
	//최대값과 최소값을 제외한 값을 출력+평균계산


	int a[5];
	int max = -99999, min = 999999;
	int tot = 0;

	printf("심사 점수 입력:");

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);

		if (max < a[i]) max = a[i];
		if (min > a[i]) min = a[i];
	}
	printf("유효 점수:");
	for (int i = 0; i < 5; i++) {
		if (a[i] == max || a[i] == min)
			continue;
		tot += a[i];
		printf("%d ", a[i]);
	}

	printf("평균:%.1lf\n", tot / 3.);

}					*/




//연습 5

#include<string.h>
   //대문자를 소문자로 바꿔서 출력
/*
void main()
{
	char a[30];
	int len, cnt = 0;

	printf("문장 입력:");
	gets_s(a);
	len = strlen(a);
	printf("바뀐 문장:");
	for (int i = 0; i < len; i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			a[i] = a[i] + ('a' - 'A');	   //대문자를 소문자로 바꾸는 코드
		}
		else if (a[i] >= 'a' && a[i] <= 'z') {
			a[i] = a[i] + ('A' - 'a');     //소문자를 대문자로 바꾸는 코드
		}
		printf("%c", a[i]);
	}
}		 */
 




//연습 6
/*
void main() {
	//데이터를 입력받아서 같을 경우 다시 입력값을 받는 프로그램
	int a[6];

	for (int i = 0; i < 6; i++) {
		printf("로또 번호입력:");
		scanf("%d", &a[i]);
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				printf("같은 번호!\n");
				i--;
				break;
			}
		}
	}
	printf("입력된 번호:");
	for (int i = 0; i < 6; i++) {
		printf("%d", a[i]);
	}
	printf("\n");
}		   */









//포인터


//연습 1
/*
int assign(int *a)
{
	*a = 10;
	return *a;
}

void main()
{
	int a = 0;
	assign(&a);
	printf("a=%d\n", a);

}	 */




//연습 2
/*
void func(int *a, int *b)
{
	int s; printf("양수입력: "); scanf("%d", &s);
	*a = s / 4;
	*b = s % 4;

}

void main()
{

	int m, r;
	func(&m, &r);
	printf("몫:  %d, 나머지: %d\n", m, r);
}   */





//연습 3
//내림차순 출력 프로그램+swap함수를 사용
/*
void swap(double *pa, double*pb)
{
	double temp;

	temp = *pa;		//작은값주소을 임시저장변수(temp)에 저장
	*pa = *pb;		//작은값주소에 큰값주소를 저장
	*pb = temp;	   //큰값주소에 작은값주소를 저장
}

void line_up(double*a, double*b, double*c)
{
	if (*a < *b) swap(a, b);
	if (*a < *c)swap(a, c);
	if (*b < *c)swap(b, c);


}


void main()
{
	double max, mid, min;

	printf("실수입력(3개):"); scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("정렬된 값 출력: %.1lf, %.1lf,%.1lf\n", max, mid, min);
}	  */






/*
//연습4
//enter키를 누르때마다 3개의 변수위치를 이동시키는 프로그램
void rotate(int *pa, int*pb, int *pc)
{
	int t;  t = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = t;
}

void main(){
	int a = 1, b = 2, c = 3;
	char d;
	while (1) {
		printf("%d:%d:%d", a, b, c);
		scanf("%c", &d);
		if (d == '\n') {
			rotate(&a, &b, &c);
		}
		else break;
	}

}		*/











//포인터 +배열
//연습1
/*		   //3번째 배열요소~마지막배열요소 출력
void main() {
	double a[5] = { 1.2, 3.5, 7.4, 0.5, 10.0 };
	double *pa = a;
	double *pb = a + 2;
	printf("배열요소의 값:");
	for (int i = 0; i < 3; i++) {
		printf("%.1lf ", *pb);
		pb++;
	}
	printf("\n");
}
*/
	



//연습2
/* 포인터 평균 
void main() {
	double a[5] = { 1.2, 3.5, 7.4, 0.5, 10.0 };
	double *pa = a;
	double tot = 0, avg;

	for (int i = 0; i < 5; i++) {
		printf("%.1lf  ", *pa);
		tot += *pa;
		pa++;	 //다음배열요소로 이동

	}
	avg = tot / 5.0;
	printf("\n평균: %.2lf\n", avg);
}					*/




//연습문제	3,4,5
/*
int sub(int *m) {
	//배열에서 31의 개수를 확인+반환
	int cnt = 0;
	for (int i = 0; i < 12; i++) {
		if (m[i] == 31)	    // *(m+i)
			cnt++;  
	}
	return cnt;
}
void change_2(int *m) {
	m[1] = 29;	  //배열 
}

void sub3(int *month) {
	for (int i = 0; i < 12; i++) {
		if (i % 5 == 0) printf("\n"); //배열요소를 다섯개 출력후 다음행으로 이동
		printf("%d ", month[i]);
	}
	printf("\n");
}
void main() {
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int a;
	a = sub(month);
	change_2(month);
	printf("31일의 달의 수: %d\n", a);
	printf("2월의 일수: %d\n", month[1]);	 
	sub3(month);
}		   */








//연습6
//배열요소를 교환하는 프로그램
/*
void reverse(double *a, int n) {
	double t; //임시 저장변수
	for (int i = 0; i < n/2; i++) {
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;

	}
}

void main() {
	double a[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	reverse(a, 5);


	for (int i = 0; i < 5; i++) {
		printf("%.1lf  ", a[i]);
	}
}		  */








//연습 7 
//배열의 값에 따라 별그래프를 출력하는 프로그램(*1= 5점)
  /*
void print_graph(int *ps, int size) {
	int star;
	for (int i = 0; i < 5; i++) {		 //i<size
		star = *(ps+i) / 5;				   //ps[i]/5
		printf("(%3d)", *(ps + i));		 //%3d = 3칸을 확보하고 %d를 출력하겠다
		for (int j = 0; j < star; j++) {
			printf("*");
		}
		printf("\n");
	}

}

void main()
{
	int score[5] = { 72, 88, 95, 64, 100 };
	print_graph(score, 5);
	
}	  */





//연습 8

int check(int *lotto_n, int *my_n) {
	int cnt=0;

	for (int i = 0; i < 6; i++) {
		for(int j=0; j<6;j++)
			{
				if (*(lotto_n + j) == *(my_n + i))	   //두개의 포인터값을 두개의 for문을 사용해서 비교한다
				{
					cnt++;
				}
			}

	}
	return cnt;
}


void main()
{
	int sup;
	int lotto_n[6] = {4, 10, 25, 30, 41, 43 };
	int my_n[6] = { 1, 4, 7, 30, 43, 45 };

	sup = check(lotto_n, my_n);
	printf("일치하는 번호의 개수:  %d\n", sup);
}	







