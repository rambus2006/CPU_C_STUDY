#include<stdio.h>
int main(void) {
	char a;
	int b;
	float c;

	printf("�����ϴ� ���ĺ� �ϳ��� �Է��ϼ��� : ");
	scanf_s("%c",&a);
	printf("�����ϴ� ���� �ϳ��� �Է��ϼ��� : ");
	scanf_s("%d", &b);
	printf("�����ϴ� �Ҽ��ϳ��� �Է��ϼ��� : ");
	scanf_s("%f", &c);

	printf("%c\n", a);
	printf("%d\n", b);
	printf("%.2f\n", c);

	/*
	char ch;
	printf("�����Է� : ");
	scanf_s("%c", &ch);
	printf("%c", ch);
	*/
	/*
	int a;
	int b;
	int c;

	printf("3���� ������ �Է��ϼ���\n");
	printf("ù��° �� : ");
	scanf_s("%d", &a); 
	//int�� ���� a �� �Է¹��� ���� ����
	//&�� �Է¹��� ����
	//�ּҰ��� �ҷ����� ����
	printf("%d\n", a);


	printf("�ι�° �� : ");
	scanf_s("%d", &b);
	printf("%d\n", b);
	
	printf("����° �� : ");
	scanf_s("%d", &c);
	printf("%d\n", c);
	*/
	return 0;
}
