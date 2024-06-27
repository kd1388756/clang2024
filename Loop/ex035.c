#include<stdio.h>
main()
{
	int num, sum;
	sum = 0;//合計は０を入れてクリアする
	while (1) {
		printf("数を入れて:");
		scanf("%d", &num);
		if (num==-999) {
			break;
		}
		sum += num;
	}
	printf("合計=%d\n", sum);
}