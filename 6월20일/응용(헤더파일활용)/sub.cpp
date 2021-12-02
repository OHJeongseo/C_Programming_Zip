#include<stdio.h>
#include "friend.h"


void input_data(Friend ff[BEST_CNT]) {
	FILE *in = fopen("a.txt", "r");
	for (int i = 0; i < BEST_CNT; i++) {
		fscanf(in, "%c%d%s%s ",
			&ff[i].a, &ff[i].b, ff[i].c, ff[i].d); //변환문자 사용시 확인 %c, %d = &
		printf("%c %d %s %s\n",
			ff[i].a, ff[i].b, ff[i].c, ff[i].d);   //출력시에는 &사용금지
	}
}


Friend get_oldest_friend(Friend ff[BEST_CNT]){
	Friend max= ff[0];
	for (int i = 0; i < BEST_CNT - 1; i++) {
		if (ff[i].b > max.b)
			max = ff[i];
	}
	return max;
}

void print_data(Friend f) {
	printf("나이가 가장많은 사람: ");
	printf("%c %d %s %s\n", f.a, f.b, f.c, f.d);
}




