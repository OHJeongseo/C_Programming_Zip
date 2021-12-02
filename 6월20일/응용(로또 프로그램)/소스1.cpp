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
	//정렬함수
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

	
	printf("로또번호:");
	for (int i = 0; i < 7; i++) {
		printf("%4d", lotto[i]);
	}

	printf("\n");


	printf("자동번호:");
	for (int i = 0; i < 6; i++) {
		printf("%4d", man[i]);
	}


	printf("\n");
	//당첨여부
	int cnt = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (lotto[i] == man[j]) {
				cnt++;
				break;
			}
		}
	}
	if (cnt == 6)printf("1등당첨!!!!!!\n");
	else if (cnt == 5) {
		for (int i = 0; i < 6; i++) {
			if (man[i] == lotto[6]){
				printf("2등 당첨!!!!!+!\n");
			    break;
			}
		}
	 if (cnt == 6)printf("3등 당첨!!!!!\n");
	}
    else if (cnt == 4)printf("4등 당첨!!!!\n");
	else if (cnt == 3)printf("5등 당첨!!!\n");
	else printf("없음");

	printf("\n당첨번호수 :%3d\n", cnt);

}
