#include<stdio.h>


//*��������
/*
void sub() {
	int a = 10;	 //sub�� ��������

	printf("sub() a=%d\n", a);
}

void main() {

	int a = 0;	//main�� ��������
	sub();
	printf("main() a=%d\n", a);
}
*/

/*void main() {
	int a = 10;

	//�߰�ȣ�� ���� ������ ����� ��������
	{
		int a = 20; //���δٸ�a����
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
	printf("��ȯ�� a:%d b:%d\n", a,b);
	
}		  */






//*��������

			/*
int a;	   //���������� ����ÿ� �ڵ��ʱ�ȭ�ȴ�



void sub() {
	a = 10;
}
void sub2() {
	int a;	//��������int a��{ }�� ������ �Ҹ�, ��¿� �����������Ѵ�
	a = 20;
}
void main() {
	printf("a=%d\n", a);  //0
	sub();
	printf("a=%d\n", a);   //10
	sub2();
	printf("a=%d\n", a);   //10

}			   */



	 //*������������
/*
void sub() {
	static int a ;	//�ڵ� �ʱ�ȭ ����,�ѹ�����
					//���� �ٽ� �ʱ�ȭ�����ʰ� ��ӻ���ϴ°�, static 
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
	int a[3][4];	//3���� 4���� ������ ������ �迭����
	int t[3];		   //���� ���庯��
	double ab[3];		//��� 
		   //for���� ����� ���� �ʱ�ȭ

	for (int i = 0; i < 3; i++)
	{	 //3���� ����ŭ �ݺ�
		t[i] = 0;
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &a[i][j]);	//�����Է�
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
	int x, y;		//y�� x��
	while (1) {
		output(a);
		printf("��, �� �Է�:");
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
		scanf("%s", a[i]);		   // %s �� 
	}
	for (int i = 0; i < 3; i++) {
		printf("%s\n", a[i]);
	}
}
*/


/*
void main() {				  //�ΰ��� 2�����迭�� ���� ���ϰ� ����ϴ� ���α׷�
	int a[2][3] = { 1,2,3,4,5,6 };
	int b[2][3] = { 1,2,3,4,5,6 };
	int c[2][3];	   //������� �����ϴ� 2�����迭 

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			c[i][j] = a[i][j] + b[i][j];   //�ΰ��� 2�����迭�� ���� ������ 2�����迭'c'�� ����
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


   /*			  ����1
void main() {		   //a�� �Է��ؼ� ������������ ���
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		printf("%d\n", i);
	}
}
	 */

  /*	   ����2
void main() {			   //a�� �Է��ؼ� ������������ ���
	int a;
	scanf("%d", &a);
	for (int i = a; i >= 1; i--) {
		printf("%d\n", i);
	}

}	*/

 /*			   ����3

void main() {					  //   a�� �Է¹޾Ƽ� a�� �������� ���
	int a;
	scanf("%d", &a);

	
		for (int i = 1; i <= 9; i++) 
			printf("%d*%d=%d\n", a, i, a*i);
	
	
}
*/


/*					����4
void main() {					//a�� �Է¹޾� a����ŭ *���
	int a; scanf("%d", &a);

	for (int i =1; i <= a; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}			   */
/*������ 
5
*
**
***
****
*****
����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . .
*/


/*				����5
void main() {			//�� �� �� �Է��ؼ� ������ ����ϴ� ���α׷�
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
	c +=b;	   //���� ���� ���ϱ�
	if (c % 7 == 1)	printf("��\n");
	else if (c % 7 == 2)	printf("ȭ\n");
	else if (c % 7 == 3)	printf("��\n");
	else if (c % 7 == 4)	printf("��\n");
	else if (c % 7 == 5)	printf("��\n");
	else if (c % 7 == 6)	printf("��\n");
	else 	printf("��\n");

}


*/



	
	   		 
	
			  /*    ���� 6
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

/*    ���� 7
#include<string.h>
void main() {  //���ڸ� ������ ��� �ϳ��� ���
	char a[100] = "Baekjoon0nlineJudge";
	int b;
	b = strlen(a);	 //���ڼ��� Ȯ��
	for (int i = 0; i < b; i++) {
		if (i != 0 && i % 10 == 0)printf("\n");

		printf("%c", a[i]);
	}
}

			   */


