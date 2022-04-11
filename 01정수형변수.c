#include<stdio.h>
//stdio.h 라는 헤더파일을 불러옴

int main(void) {
	int age = 17;
	int a = 1;
	int b = 2;
	int c = 10 , d = 5;
	//int-integer 정수
	printf("제 이름은 방민서입니다.\n");
	printf("제 나이는 %d살 입니다.\n", age);
	printf("%d 더하기%d는 %d\n", a, b, a + b);
	printf("%d 나누기 %d는 %d", c, d, c/d);
	//나누기=> /
	//%d는 decimal(10진수)
	
	return 0;
 }