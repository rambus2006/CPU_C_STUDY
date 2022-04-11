#include<stdio.h>

int main(void)
{
	int age;
	double weight;
	double height;

	printf("몇살이에요?");
	scanf_s("%d", &age);
	printf("몸무게가 몇킬로그램이에요?");
	scanf_s("%lf", &weight);
	printf("키가 몇 센치미터에요?");
	scanf_s("%lf", &height);

	printf("나이 : %d\n", age);
	printf("몸무게 : %lf\n", weight);
	printf("키 : %lf\n", height);

	
	return 0;
}