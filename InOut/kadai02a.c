#include<stdio.h>
main()
{
	double a,b;
	printf("�Q�̎����l�H");
	scanf("%lf %lf", &a, &b);
	printf("***%lf��%lf�̎l�����Z***", a, b);
	printf("�a=%lf", a + b);
	printf("��=%lf", a - b);
	printf("��=%lf", a * b);
	printf("��=%lf", a / b);
}