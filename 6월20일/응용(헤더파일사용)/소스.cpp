#include<stdio.h>


//��ó�� ������(#)
//���� ������
//
/1/
/*
#include "student.h"
#define N 3			//��ũ�� ���
#define SUM(x,y) x+y	//��ũ�� �Լ�
void main() {
	FILE *ope ,*put;
	ope = fopen("a.txt", "r");
	put = fopen("b.txt", "w");
	Stdent s[N];
	for (int i = 0; i < N; i++) {
		fscanf(ope, "%d", &s[i].num);
		fscanf(ope, "%s", &s[i].name);
		fscanf(ope, "%d", &s[i].kor);
		fscanf(ope, "%d", &s[i].eng);
		//s[i].tot =SUN(s[i].kor,s[i].eng);
		//s[i].avg =s[i].tot/2.;

	} 
	//for (int i = 0; i < N; i++) {
		//printf("%d %s %d %d\n", s[i].num, s[i].name, s[i].kor, s[i].eng);
	//} 


	for (int i = 0; i < N; i++) {
		fscanf(ope,"%d %s %d %d\n", s[i].num, s[i].name, s[i].kor, s[i].eng);
		//a.txt������ �Է¹޴´�	

		s[i].tot = s[i].kor + s[i].eng;	  //����
		s[i].avg = s[i].tot / 2.0;		  //���

		//b.txt���Ͽ� ����Ѵ�
		fprintf(put, "%d%4s%4d%4d%4d%6.1lf \n",
			s[i].num, s[i].name, s[i].kor, s[i].eng, s[i].tot, s[i].avg);

	}

} */