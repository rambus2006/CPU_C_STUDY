#include<stdio.h>

int main(void)
{
	int age;
	double weight;
	double height;

	printf("����̿���?");
	scanf_s("%d", &age);
	printf("�����԰� ��ų�α׷��̿���?");
	scanf_s("%lf", &weight);
	printf("Ű�� �� ��ġ���Ϳ���?");
	scanf_s("%lf", &height);

	printf("���� : %d\n", age);
	printf("������ : %lf\n", weight);
	printf("Ű : %lf\n", height);

	
	return 0;
}