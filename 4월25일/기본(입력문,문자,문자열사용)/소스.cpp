#include<stdio.h>

/*int main(void)
{
	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);

	printf("%d�� %d�� ���� %d�Դϴ�\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf =%.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	return 0;
} */

/*void main()
{
	int a;	     //int�� ��������
	int b, c;    //�ΰ��� int�� ������ ���ü���
	double da;	 //double�� ��������
	char ch;	 //char�� ��������

	a = 10;	   //int�� ���� a�� ����10�� ����
	b = 20;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	


	printf("���� a�� ��: %d\n", a);
	printf("���� b�� ��: %d\n", b);
	printf("���� c�� ��: %d\n", c);
	printf("���� da�� ��: %.1lf\n", da);
	printf("���� ch�� ��: %c\n", ch);

	return 0;
}*/

 //printf("a=%d\n", a)  = printf("���� a�� ��: %d\n", a)


/*void main()
{
	int a, b=0;

	a = 10;

	printf("%d\n", a);
	printf("%d\n", b);

	
}*/


/*void main() {
	char a = 'A';
	//�ƽ�Ű �ڵ尪 ���

	printf("%c�� %d\n", a, a);
	printf("%d����Ʈ\n", sizeof(int));



} */
#include<string.h>

/*void main() {
	char a[20] = "abcdefgh";
	strcpy(a, "bbbbb");
    printf("%s", a);
} */


/*void main()
{
	int a;
	double b;
	const double c = 0.1;

	a = 200;
	b = a*c;
	printf("����:%.1lf\n", b);

}*/

	
/*void main()
{
	// 60 = 300*0.2
	int a;
	const double b = 0.2;  //const doulbe���� �ٷ� �ʱ�ȭ ����
	double c;

	a = 300;
	c = a*b;

	printf("%lf\n", c);

} */

/*void main() {
	int a;
	double b;

	printf("���̿� Ű �Է�:");
	scanf("%d%lf", &a,&b);
	//printf("Ű �Է�: ");
	//scanf("%lf", &b);
	printf("����:%d, Ű:%.1lfcm\n", a, b);


} */


/*void main() {
	char a;
	char b[10];

	printf("�����Է�:");   scanf("%c", &a); //�����ۼ� ���� 
	printf("�̸��Է�:");   scanf("%s", b);
    printf("����:%c, �̸�:%s\n", a, b);

} */

/*void main() {
	int  a;
	char b[10];
	int c, d;
	int f;
	double g;


	printf("�й�:"); scanf("%d", &a);
	printf("�̸�:"); scanf("%s", b);
	printf("����:"); scanf("%d", &c);
	printf("����:"); scanf("%d", &d);
	//printf("����:"); scanf("%d", &f);
    //printf("���:"); scanf("%lf", &g);

	f = c + d;
	g = f / 2;

	printf("�й�:%d, �̸�:%s\n", a, b);
	printf("����:%d, ����:%d\n", c, d);
	printf("����:%d, ���:%.1lf\n", f, g);

}*/


/*void main() {
	char a;
	char b;

	scanf_s("%c ", &a);		 //�α��ڸ� ���� �پ��("%c " &a);
	scanf("%c", &b);
	printf("%c,%c\n", a, b);

} */


/*void main() {
	double a;
	int b, o;
	//int a=5, b=2;
	//double c;

	//1.c=(double)a/b;, 2.c= a/2.0; �Ǽ��������� ���
	//printf("%.1lf\n",c);

	a = 5.0 / 2.0; //�Ǽ� ��½� .0�� �ۼ��Ѵ�
	b = 5 / 2;
	o = 5 % 2;

	printf("a:%.1lf\n",a);
	printf("b:%d\n",b);
	printf("o:%d\n",o);
	
} */


