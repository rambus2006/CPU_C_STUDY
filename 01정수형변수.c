#include<stdio.h>
//stdio.h ��� ��������� �ҷ���

int main(void) {
	int age = 17;
	int a = 1;
	int b = 2;
	int c = 10 , d = 5;
	//int-integer ����
	printf("�� �̸��� ��μ��Դϴ�.\n");
	printf("�� ���̴� %d�� �Դϴ�.\n", age);
	printf("%d ���ϱ�%d�� %d\n", a, b, a + b);
	printf("%d ������ %d�� %d", c, d, c/d);
	//������=> /
	//%d�� decimal(10����)
	
	return 0;
 }