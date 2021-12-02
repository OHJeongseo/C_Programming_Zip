//친구목록관리 프로그램
#include<stdio.h>
#include "friend.h"
#include "func.h" 




void main() {
	Friend ff[BEST_CNT];
	Friend f;
	



	input_data(ff);
	f = get_oldest_friend(ff);
	print_data(f);


}