#include<stdio.h>
main()
{
	float box[3], sum=0;
	int i;
	for (i = 0; i < 3; i++) {
		printf("実数を入力:");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	printf("合計:%.2f\n 平均:%.2f\n", sum, sum / 3);
}