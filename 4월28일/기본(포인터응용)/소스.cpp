#include<stdio.h>
/*
void main() {
	char *p;
	p = "hello";   //�ӽ���������� "hello"����, �����Ҽ�����.
	p = "world";      //�ӽ���ġ�ּҺ������� "world" �����Ҽ��ִ�
	printf("%s\n", p);

	char a[10] = "world";
	printf("%s\n", a); //
}
*/


/*
void main() {
	char *p;
	int c = 0;
	p = "hello";

	while (*p != '\0') {
		if (*p == 'l')c++;		//'l'�� ����� Ȯ���ϴ� �κ�

		printf("%c",*p);
		p++;
	}
	printf("\n");
	printf("c=%d\n", c);
}
  */

			   /*
void main() {			  //���� ���ڿ��� ���
	                      //�ּҰ��� ������ Ȯ���ϴ� ���α׷�
	char*a, *b;
	a = "aaa";
	b = "aaa";

	printf("%u\n", a);
	printf("%u\n", b);

}				 */
			/*  
void main() {
	char a[20];	   //a[20],b[20];

	scanf("%s", a);
	printf("%s", a);  //printf("%s\n", a);

	
	gets_s(a);	  //scanf()�� ��������̴�	, gets_s(b)
	printf("%s", a); //	  printf("%s\n", b);
}				
*/


	 /*
void main() {
	char s[60];

	printf("�Է�");
	gets_s(s);
	printf("�Է��� ����%s", s);
}
	   */


/*
void get(char *p) {		//gets_s�� �۵� ���α׷�
	char c;
	while ((c = getchar()) != '\n') {
		*p = c;
		p++;
	}
	*p = 0;
}

void main() {
	char a[20];

	get(a);
	printf("%s\n", a);
}
*/
				/*
void main() {
	int a;
	char na[20];

	printf("�����Է�:"); scanf("%d", &a);
	getchar();	                              
	printf("�̸��Է�:"); gets_s(na);	    //�迭�̸��� �ְ� scanf�� �Է°��� �ݺ�
	printf("����: %d, �̸�: %s\n", a, na);

}
				  */


#include<string.h>

void main(void)
{
	char s1[80] = "strawberry";
	char s2[80] = "apple";
	char *pa1 = "banana";
	char *pa2 = s2;


	printf("���ʹ��ڿ�:%s\n", s1);	//strawberry
	strcpy(s1, s2);	 //s2���� s1�� ����
	printf("�ٲ� ���ڿ�:%s\n", s1);	 //apple

	strcpy(s1, pa1);  //pa1���� s1�� ����
	printf("�ٲ� ���ڿ�:%s\n", s1);	//banana


	int c = strlen(s1);		  //���ڱ��� ���, 11
	printf("�ٲ� ���ڿ�:%d\n", c);


	int d = strcmp(s1, s2);	  //s1�� s2�� �ƽ�Ű�ڵ�� ���ϴ� �Լ�
	if (d > 0) puts("s1�� ũ��");
	else if (d == 0) puts("s1�� s2�� ����");
	else puts("s2���ڰ� ��ũ��");
		
	strcat(s1, pa1);  //s1�� pa1�� ���ڿ� �ٿ��� ����ϴ� �Լ�
	printf("���̱�:%s \n", s1);	//banana



}
