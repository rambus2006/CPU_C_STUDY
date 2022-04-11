#include <stdio.h>
int main(void) {
	float f = 10.5;
	double d = 15.876; 
	double num1 = 0.5;
	double num2 = 0.255;
	//실수형 타입:float, double
	//float=4바이트
	//double=8바이트
	//1바이트=8비트


	printf("%.2f\n", f);
	printf("%.3f\n",d);
	printf("%.1f+%.3f=%.3f", num1, num2, num1 + num2);

	return 0;
}