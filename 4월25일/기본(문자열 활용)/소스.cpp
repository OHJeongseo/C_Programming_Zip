#include<stdio.h>
#include<string.h> //strcpy를 사용하기위해서 작성

#define KOREA "대한민국"

void main() {
	char* string1 = NULL;// 문자열포인터선언, 초기화
	char string2[100];

	strcpy(string1, KOREA); //포인터string1에 KOREA(메크로 상수)문자열의 복사
							//strcpy= 문자열을 복사하는 함수
	strcpy(string2, KOREA);//대한민국
	strcpy(string2, "봄");// 봄, string2에 문자열"봄"을 복사, 수정할수있다

}