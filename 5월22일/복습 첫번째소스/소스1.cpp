#include<stdio.h>
	/*
int main(void)
{

	/*
	char str[ ] = "mrcrosoft"; //���ڿ� ����
	char ch = 'c';	   //�ѹ���
	printf("%c\n", ch);	 //�ѹ��� ���
	puts(str);	//���ڿ� ���
	printf("%s\n", str); //���ڿ� ���
	const int a = 127;	 //���
	double b = 125.55;	//�Ǽ�
	printf("%d %.1lf\n", a, b);	 //���, �Ǽ� ���

	double i= 2, k = 12;
	printf(" %.0lf / %.0lf= %.2lf \n", i, k, i/k);
	 */
	 /*
	 int a = 0;
	 for (int i = 10; i > a; a++)   //���������� ���(0~9)
	 {
	 printf("%d\n", a);
	 }
	 */






	 //���� 1	 //��ȯ���ڻ�����
	 /*printf("%d �� %d�� ������ %.1lf", 1,2, 0.5);  */



	 //���� 2	//�����̻�� ���+��ȯ���� ���
	 /*
	 printf("�й� :%d\n", 12345);
	 printf("�̸�: %s\n", "����");	 //���ڿ�
	 printf("����: %c\n", 'B');	 //�ѹ���
	   */





	   //���� 3	 //������ ���� ���
	   /*
	   int kor=70, eng=80, mah=90;
	   int sum = kor+eng+mah;
	   printf("����: %d\n", kor);
	   printf("����: %d\n", eng);
	   printf("����: %d\n", mah);  printf("����: %d\n", sum);
	   */



	   //���� 4	  //�Ǽ���, ������ ���� ���
	   /*char gr = 'B';
	   double avg = 84.5;
	   printf("��� : %.1lf ", avg);	 printf("����: %c\n", gr); */



	   //���� 5	   //���ڿ�, �Ǽ�������+�����ڸ� ���
	   /*char nam[] = "ȫ�浿"; int ag = 17; char P[] = "AB";
	   double k = 190.0;
	   puts("10������ ������...");
	   printf("�̸� :%s\n", nam);
	   printf("���� :%d��\n", ag + 10);
	   printf("Ű :%.1lfcm\n", k - 0.5);
	   printf("������: %s��\n", P);  */




	   //���� 6 //�Է¹� ���
	   /*
	   char f[20]; int cnt;
	   printf("�����ϴ� ���� :"); scanf("%s", f);
	   printf("� : "); scanf("%d", &cnt);
	   printf("%s�� %d�� �帳�ϴ�\n", f, cnt);
	   */




	   //���� 7 //�ƽ�Ű�ڵ� ���
	   /*
	   char cha;
	   printf("�����Է�: "); scanf("%c", &cha);
	   printf("%c�� �ƽ�Ű�ڵ� ���� %d�Դϴ�\n", cha,cha); */




	   //���� 8	  // ���ڿ�,����+�Ǽ������� + �Է¹�  ��� ���
	   /*char chr[10];
	   printf("�̸��Է� :");  scanf("%s", chr);
	   int ag; double k;
	   printf("���� �� Ű(cm) �Է�:");   scanf("%d  %lf", &ag, &k);	//��ȯ���ڴ� . 1��� ����
	   printf("%s   %d��   %.1lfcm", chr, ag, k);	  */



	   //���� 9 	
	   //�� ������ ���� �Է� -> ����� ���
		/*
		int a, b; double c;
		printf("�� ������ ���� : "); scanf("%d %d", &a, &b);
		c = (a + b)/2.0;
		printf("���: %.1lf\n", c);
		*/




		//���� 10
			 /*
		  int a = 3, b = 5, c=4;	 //����
		  double kor = 3.8, eng = 4.4, mah = 3.9;   //����
		  int sum = a + b + c;	 //������
		  double avg = (kor + eng + mah) / 3; //���� ���


		  if (sum>10 && avg>= 4.0)
			  printf("1\n");
			   */



			   //����11 //
			   /*
				 int in; scanf("%d", &in);
				 printf("%d���� = %.1lf��ġ�Դϴ�", in,  in*39.37);	 // == (a*100)/2.54;
				  */

				  //���� 12
				  /*
				   int mone = 1000;
				   int rama = 70, ba = 30, mins,obak, bak,os,s ;

				   mins = 1000 - (rama * 2 + ba * 3);

				   printf("�ǶǸ� ��ü�ݾ�: %d\n", rama * 2);
				   printf("�ǲǹ� ��ü�ݾ�: %d\n", ba * 3);
				   printf("�Ž��� ��: %d\n", mins);

				   puts("�Ž��� ���� ����...");
				   obak = mins / 500;	   //���������
				   bak =  (mins%500)/100;	  //��� ����
				   os =(mins%100)/50;		 //���ʿ� ����
				   s =(mins%50)/10;	  //�ʿ�����
				   printf("500�� %d�� , 100�� %d��, 50�� %d��, 10�� %d��", obak, bak, os, s);
					   */





					   //���� 13
					 /*
					  int t= 70, in = 65;	//t= ���¼��� , in=���尴��
					  double p =(double)in/t *100 ;
					  printf("������ : %.1lf%%\n", p);
						*/


						//����	14
						//��= ��, ��, �ʷ� ��ȯ -> ���
						/*
					   double t = 3.76,  c;
					   int h, m, s;
					   c = t;   // 3.76
					   h= (int)t;			//(int)3.76 ->3
					   t = (t - h) * 60;	 //(3.76-3)*60 -> 45.6
					   m = (int)t;			//45
					   t = (t -m) * 60;	   //(45.6-45)*60 -> 5.99999
					   s = (int)t;			  //35.9999 -> 35
					   printf(" %.2lf�ð��� %d�� %d�� %d�� ",c, h,m,s );
					   */


					   //����  15	  //bmi=(��ü ��������) Ȯ��
					   /*
						int kg;	double cm ,bmi;
						printf("������(kg), Ű(cm) �Է�:"); scanf("%d %lf", &kg, &cm);

						cm = cm / 100;
						bmi = kg / (cm*cm);

						if (bmi >= 20 && bmi < 25)
							printf("ǥ��\n");
						else
							printf("���� �ʿ�\n");

						printf("bmi= %.1lf\n", bmi);
						 */


						 //���� 16 
					  /*
					  int mone = 10000, a, b, c, w5000, w1000, w500, w100, w50, w10;
					  printf("���� �� ���� ���� �Է��ϼ���: "); scanf("%d %d %d", &a, &b, &c);
					  int mins= mone-(a+b+c);
					  printf("�Ž������� %d �Դϴ�\n", mins);
					  w5000 = mins / 5000;
					  w1000 = (mins % 5000) / 1000;
					  w500 = (mins % 1000) / 500;
					  w100 = (mins % 500) / 100;
					  w50 = (mins % 100) / 50;
					  w10 = (mins % 50) / 10;
					  printf("��õ���� %d��\n", w5000);
					  printf("õ���� %d�� \n", w1000);
					  printf("���������: %d��\n", w500);
					  printf("�������: %d��\n", w100);
					  printf("���ʿ�����: %d��\n", w50);
					  printf("�ʿ�����: %d��\n", w10);
			}*/

int main(void)		
{	   //�Ÿ��� �ӵ��� �Է��ؼ� �ҿ�ð��� ����ϴ� ���α׷�
	int km, spee, h, m;
	double tim,box,s;
	
	printf("�Ÿ��� �ӷ��Է�: "); scanf("%d %d", &km, &spee);

	tim =(double) km / spee;


	box = tim; // ������� �ڵ�
	//tim�� Ȱ���ؼ� ��, ��, ���� ���� �����ϴ� �κ�
	h = (int)tim ;  //�ð�  = 6
	tim = (tim - h) * 60;// ��
	m =(int)tim;
	tim = (tim - m) * 60; //��
	s = tim;
	 //

	printf("�ҿ� �ð���%d�� %d�� %.3lf�� �Դϴ�\n", h, m, s);


 
	




}










 
     



	




