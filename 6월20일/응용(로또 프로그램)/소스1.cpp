#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void rand_gen(int lotto[7], int n) {
	for (int i = 0; i < n; i++) {
		lotto[i] = (int)(rand() % 45) + 1;
		for (int j = 0; j < i; j++) {
			if (lotto[i] == lotto[j]) {
				i--;
				break;
			}
		}
	}
}
void lotto_sort(int lotto[7]) {
	//�����Լ�
	int temp;
	for (int i = 0; i < 6 - 1; i++) {
		for (int j = i + 1; j < 6; j++) {
			if (lotto[i] > lotto[j]) {
				temp = lotto[i];
				lotto[i] = lotto[j];
				lotto[j] = temp;
			}
		}
	}

}
void main() {
	int lotto[7],man[6];
	srand((unsigned int)time(NULL));
	rand_gen(lotto, 7);
	rand_gen(man, 6);

	lotto_sort(lotto);
	lotto_sort(man);

	
	printf("�ζǹ�ȣ:");
	for (int i = 0; i < 7; i++) {
		printf("%4d", lotto[i]);
	}

	printf("\n");


	printf("�ڵ���ȣ:");
	for (int i = 0; i < 6; i++) {
		printf("%4d", man[i]);
	}


	printf("\n");
	//��÷����
	int cnt = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (lotto[i] == man[j]) {
				cnt++;
				break;
			}
		}
	}
	if (cnt == 6)printf("1���÷!!!!!!\n");
	else if (cnt == 5) {
		for (int i = 0; i < 6; i++) {
			if (man[i] == lotto[6]){
				printf("2�� ��÷!!!!!+!\n");
			    break;
			}
		}
	 if (cnt == 6)printf("3�� ��÷!!!!!\n");
	}
    else if (cnt == 4)printf("4�� ��÷!!!!\n");
	else if (cnt == 3)printf("5�� ��÷!!!\n");
	else printf("����");

	printf("\n��÷��ȣ�� :%3d\n", cnt);

}
