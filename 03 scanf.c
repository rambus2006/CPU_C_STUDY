#include<stdio.h>
int main(void) {
	char a;
	int b;
	float c;

	printf("좋아하는 알파벳 하나를 입력하세요 : ");
	scanf_s("%c",&a);
	printf("좋아하는 숫자 하나를 입력하세요 : ");
	scanf_s("%d", &b);
	printf("좋아하는 소수하나를 입력하세요 : ");
	scanf_s("%f", &c);

	printf("%c\n", a);
	printf("%d\n", b);
	printf("%.2f\n", c);

	/*
	char ch;
	printf("문자입력 : ");
	scanf_s("%c", &ch);
	printf("%c", ch);
	*/
	/*
	int a;
	int b;
	int c;

	printf("3개의 정수를 입력하세요\n");
	printf("첫번째 값 : ");
	scanf_s("%d", &a); 
	//int형 변수 a 에 입력받은 숫자 저장
	//&는 입력받을 때만
	//주소값을 불러오는 역할
	printf("%d\n", a);


	printf("두번째 값 : ");
	scanf_s("%d", &b);
	printf("%d\n", b);
	
	printf("세번째 값 : ");
	scanf_s("%d", &c);
	printf("%d\n", c);
	*/
	return 0;
}
