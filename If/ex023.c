#include<stdio.h>
main()
{
	int h,m,s;
	printf("秒間を入力:");
	scanf("%d", &s);
	if (s <= 5000) {
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf("%d時間%d分%d秒です\n", h, m, s);		
	}
	else {
		printf("エラー:5000以内にしてください\n");
	}
}