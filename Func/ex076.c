#include<stdio.h>
void keisan(int n1, int n2, int* kei, float* hei);
main()
{
	int a, b, k;
	float h;
	printf("整数を2つ入力:");
	scanf("%d%d", &a, &b);
	keisan(a, b, &k, &h);
	printf("合計は%d、平均は%.2f", k, h);
}
void keisan(int n1, int n2, int* kei, float* hei)
{
	*kei = n1 + n2;
	*hei = (n1 + n2) / 2.0;
	return;
}