#include <stdio.h>
int main(void) {
	float f = 10.5;
	double d = 15.876; 
	double num1 = 0.5;
	double num2 = 0.255;
	//�Ǽ��� Ÿ��:float, double
	//float=4����Ʈ
	//double=8����Ʈ
	//1����Ʈ=8��Ʈ


	printf("%.2f\n", f);
	printf("%.3f\n",d);
	printf("%.1f+%.3f=%.3f", num1, num2, num1 + num2);

	return 0;
}