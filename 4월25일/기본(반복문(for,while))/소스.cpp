#include<stdio.h>
/*void main() {
	int a, b ;
	printf("����1�Է�:"); scanf("%d", &a);
	printf("����2�Է�:"); scanf("%d", &b);
	printf("���%d\n", a + b);
} */

/*void main() {
	int a = 0;

	while (a < 5)
	{
		puts("�ȳ�");	 //puts==printf("\n"), ��½ÿ��� �����ϰ� ��ȯ���ڴ� ��µ����ʴ´�
		a++;
	}
} */
 /*
void main(){ 
	int a = 1;	//�ʱ�ȭ

	while (a < 10)	 //���ǽ�
	{
		a = a * 2; //������
	}
	printf("a=%d\n", a);
}  */
	/*
void main() {
	
	for (int a = 0; a < 5; a++) {
		printf("�ȳ�\n");
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
		printf("��\n");
		//i = i + 2;
	}
} */

/*void main() {
	for (int a = 0; a < 5; a++) {
		puts("�ȳ�");
	}
} */

/*void main() {
	int a = 0;   //�ʱⰪ					   //int a=0;  //�ʱⰪ
	do										   //while(a<5)	{	 //���ǽ�
	{										   //printf("�ȳ�\n"); //�ݺ���
		puts("�ȳ�");	  //�ݺ��� ����		   //a++; 	  //������
		a++;								   //}
	} while (a < 5);	//����
} */

/*void main() {	 //2�� ��������� ���α׷�
	
	for (int i = 1; i <= 9; i++) {
		printf("%d*%d=%d\n", 2, i, 2 * i);
	}*/

/*void main() {		 //������ ��� ���α׷�
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

/*void main() {	  //���ܼ��� �� �Է��ؼ� ��������  ����ϴ� ���α׷�
	int a;
	int i = 1;
	printf("���� �Է��ϼ���:");  scanf("%d", &a);

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

/*void main() {	  //2��~9����ü ������α׷�
	int i, j;
	for (i = 2; i < 10; i++) {		  //i=���� 10���ݺ�

		for (j = 1; j <= 9; j++) {		 //j=���� 10�� �ݺ�
			printf("%d * %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
} */

/* void main()	{
int s = 0; // �������� �ʱ�ȭ�Ѵ�


for (int i = 1; i <= 5; i++) {
	if (i == 4) {		//i=4�� �ɰ�쿡 ����� �����ϰ� ���� ����Ѵ�(break)
		break;
	}
	s +=i;
	}
printf("s=%d\n", s);
} */

/*void main() {			  //1~10���� ����ϴ� ���α׷�
	int i = 1;
	int s = 0;

	while (i <= 10)	  //while(1)
	{
		s+=i;		  //s=s+1�� ����
		i++;
	    if(i>5)break;
	}
	printf("sum=%d\n", s);
} */


/*void main() {
	int s = 0; // �������� �ʱ�ȭ�Ѵ�


	for (int i = 1; i <= 5; i++) {

		if (i % 3 == 0)continue; //	i=3�̵ɶ� s+=1;�� �����ϰ� i++�� ����(i�� 1�� ������Ų��)

		s += i;		 //������
	}
		printf("s=%d\n", s);
	
}  */



//����22
/*void main() { // �����Է¹޾� 10���� ���������� �Ǵ��ϰ� ����Է¶Ǵ� �����ϴ� ���α׷�

	int a;

	do {
		int n;

		printf("������ �Է��ϼ���:");
		scanf("%d", &n);

		if (n % 10)
			printf("�̼��� 10���� �����������ʽ��ϴ�");
		else
			printf("�̼��� 10���� ���������ϴ�");

		printf("�ѹ� ��? [Yes ��0/No��9] :"); scanf("%d", &a);
	} while (a == 0);

}*/


//����23
/*
void main() { //����23, �����Է��� �Է¹��� ������ �������� ���
	int a;


	do {
		printf("�����ƴ� �����Է�:"); scanf("%d", &a);   //1003
		if (a < 0)
			puts("\a�����ƴ� ������ �Է��ϼ���");
	} while (a < 0);

	printf("%d�� �������� ������", a);

	do {
		printf("%d", a % 10); //a�� ���������� ���ʷ� ��� //3001
		a = a / 10; //a�� 10�������

	} while (a > 0); //a�� 0�̵ɋ� �ݺ��� �����ϰ� ���� ����϶�
	puts("�Դϴ�");
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
	
	//��
	for (i = 0; i < 3; i++) {
		  
		for (j = i+1; j <3; j++) {
			printf(" ");
		}	

		for (j = 0; j <=i*2; j++) {
			printf("*");
		}
		printf("\n");
	}
   //�Ʒ�
	for (i = 0; i < a; i++) {		 //�� ����

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
	//���
	printf("�:");
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
	//�ϴ�
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