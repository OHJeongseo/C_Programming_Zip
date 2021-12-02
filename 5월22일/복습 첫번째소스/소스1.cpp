#include<stdio.h>
	/*
int main(void)
{

	/*
	char str[ ] = "mrcrosoft"; //문자열 선언
	char ch = 'c';	   //한문자
	printf("%c\n", ch);	 //한문자 출력
	puts(str);	//문자열 출력
	printf("%s\n", str); //문자열 출력
	const int a = 127;	 //상수
	double b = 125.55;	//실수
	printf("%d %.1lf\n", a, b);	 //상수, 실수 출력

	double i= 2, k = 12;
	printf(" %.0lf / %.0lf= %.2lf \n", i, k, i/k);
	 */
	 /*
	 int a = 0;
	 for (int i = 10; i > a; a++)   //순차적으로 출력(0~9)
	 {
	 printf("%d\n", a);
	 }
	 */






	 //연습 1	 //변환문자사용출력
	 /*printf("%d 을 %d로 나누면 %.1lf", 1,2, 0.5);  */



	 //연습 2	//변수미사용 출력+변환문자 사용
	 /*
	 printf("학번 :%d\n", 12345);
	 printf("이름: %s\n", "마소");	 //문자열
	 printf("학점: %c\n", 'B');	 //한문자
	   */





	   //연습 3	 //정수형 변수 사용
	   /*
	   int kor=70, eng=80, mah=90;
	   int sum = kor+eng+mah;
	   printf("국어: %d\n", kor);
	   printf("영어: %d\n", eng);
	   printf("국어: %d\n", mah);  printf("총점: %d\n", sum);
	   */



	   //연습 4	  //실수형, 문자형 변수 사용
	   /*char gr = 'B';
	   double avg = 84.5;
	   printf("평균 : %.1lf ", avg);	 printf("학점: %c\n", gr); */



	   //연습 5	   //문자열, 실수형변수+연산자를 사용
	   /*char nam[] = "홍길동"; int ag = 17; char P[] = "AB";
	   double k = 190.0;
	   puts("10년후의 프로필...");
	   printf("이름 :%s\n", nam);
	   printf("나이 :%d살\n", ag + 10);
	   printf("키 :%.1lfcm\n", k - 0.5);
	   printf("혈액형: %s형\n", P);  */




	   //연습 6 //입력문 사용
	   /*
	   char f[20]; int cnt;
	   printf("좋아하는 과일 :"); scanf("%s", f);
	   printf("몇개 : "); scanf("%d", &cnt);
	   printf("%s를 %d개 드립니다\n", f, cnt);
	   */




	   //연습 7 //아스키코드 출력
	   /*
	   char cha;
	   printf("문자입력: "); scanf("%c", &cha);
	   printf("%c의 아스키코드 값은 %d입니다\n", cha,cha); */




	   //연습 8	  // 문자열,정수+실수형변수 + 입력문  사용 출력
	   /*char chr[10];
	   printf("이름입력 :");  scanf("%s", chr);
	   int ag; double k;
	   printf("나이 와 키(cm) 입력:");   scanf("%d  %lf", &ag, &k);	//변환문자는 . 1사용 금지
	   printf("%s   %d살   %.1lfcm", chr, ag, k);	  */



	   //연습 9 	
	   //두 과목의 점수 입력 -> 평균을 출력
		/*
		int a, b; double c;
		printf("두 과목의 점수 : "); scanf("%d %d", &a, &b);
		c = (a + b)/2.0;
		printf("평균: %.1lf\n", c);
		*/




		//연습 10
			 /*
		  int a = 3, b = 5, c=4;	 //학점
		  double kor = 3.8, eng = 4.4, mah = 3.9;   //평점
		  int sum = a + b + c;	 //총학점
		  double avg = (kor + eng + mah) / 3; //평점 평균


		  if (sum>10 && avg>= 4.0)
			  printf("1\n");
			   */



			   //연습11 //
			   /*
				 int in; scanf("%d", &in);
				 printf("%d미터 = %.1lf인치입니다", in,  in*39.37);	 // == (a*100)/2.54;
				  */

				  //연습 12
				  /*
				   int mone = 1000;
				   int rama = 70, ba = 30, mins,obak, bak,os,s ;

				   mins = 1000 - (rama * 2 + ba * 3);

				   printf("또또면 전체금액: %d\n", rama * 2);
				   printf("꽁꽁바 전체금액: %d\n", ba * 3);
				   printf("거스름 돈: %d\n", mins);

				   puts("거스름 돈의 개수...");
				   obak = mins / 500;	   //오백원개수
				   bak =  (mins%500)/100;	  //백원 개수
				   os =(mins%100)/50;		 //오십원 개수
				   s =(mins%50)/10;	  //십원개수
				   printf("500원 %d개 , 100원 %d개, 50원 %d개, 10원 %d개", obak, bak, os, s);
					   */





					   //연습 13
					 /*
					  int t= 70, in = 65;	//t= 총좌석수 , in=입장객수
					  double p =(double)in/t *100 ;
					  printf("입장율 : %.1lf%%\n", p);
						*/


						//연습	14
						//값= 시, 분, 초로 변환 -> 출력
						/*
					   double t = 3.76,  c;
					   int h, m, s;
					   c = t;   // 3.76
					   h= (int)t;			//(int)3.76 ->3
					   t = (t - h) * 60;	 //(3.76-3)*60 -> 45.6
					   m = (int)t;			//45
					   t = (t -m) * 60;	   //(45.6-45)*60 -> 5.99999
					   s = (int)t;			  //35.9999 -> 35
					   printf(" %.2lf시간은 %d시 %d분 %d초 ",c, h,m,s );
					   */


					   //연습  15	  //bmi=(신체 질량지수) 확인
					   /*
						int kg;	double cm ,bmi;
						printf("몸무게(kg), 키(cm) 입력:"); scanf("%d %lf", &kg, &cm);

						cm = cm / 100;
						bmi = kg / (cm*cm);

						if (bmi >= 20 && bmi < 25)
							printf("표준\n");
						else
							printf("관리 필요\n");

						printf("bmi= %.1lf\n", bmi);
						 */


						 //연습 16 
					  /*
					  int mone = 10000, a, b, c, w5000, w1000, w500, w100, w50, w10;
					  printf("물건 세 개의 값을 입력하세요: "); scanf("%d %d %d", &a, &b, &c);
					  int mins= mone-(a+b+c);
					  printf("거스름돈은 %d 입니다\n", mins);
					  w5000 = mins / 5000;
					  w1000 = (mins % 5000) / 1000;
					  w500 = (mins % 1000) / 500;
					  w100 = (mins % 500) / 100;
					  w50 = (mins % 100) / 50;
					  w10 = (mins % 50) / 10;
					  printf("오천원권 %d장\n", w5000);
					  printf("천원권 %d장 \n", w1000);
					  printf("오백원동전: %d개\n", w500);
					  printf("백원동전: %d개\n", w100);
					  printf("오십원동전: %d개\n", w50);
					  printf("십원동전: %d개\n", w10);
			}*/

int main(void)		
{	   //거리와 속도를 입력해서 소요시간을 출력하는 프로그램
	int km, spee, h, m;
	double tim,box,s;
	
	printf("거리와 속력입력: "); scanf("%d %d", &km, &spee);

	tim =(double) km / spee;


	box = tim; // 상관없는 코드
	//tim을 활용해서 시, 분, 초의 값을 저장하는 부분
	h = (int)tim ;  //시간  = 6
	tim = (tim - h) * 60;// 분
	m =(int)tim;
	tim = (tim - m) * 60; //초
	s = tim;
	 //

	printf("소요 시간은%d시 %d분 %.3lf초 입니다\n", h, m, s);


 
	




}










 
     



	




