#include<stdio.h>
#include<string.h> //strcpy�� ����ϱ����ؼ� �ۼ�

#define KOREA "���ѹα�"

void main() {
	char* string1 = NULL;// ���ڿ������ͼ���, �ʱ�ȭ
	char string2[100];

	strcpy(string1, KOREA); //������string1�� KOREA(��ũ�� ���)���ڿ��� ����
							//strcpy= ���ڿ��� �����ϴ� �Լ�
	strcpy(string2, KOREA);//���ѹα�
	strcpy(string2, "��");// ��, string2�� ���ڿ�"��"�� ����, �����Ҽ��ִ�

}