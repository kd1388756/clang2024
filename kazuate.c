#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int ans, num, cnt;
	srand(time(0));
	rand();
	ans = rand()%100+1;
	printf("数当てゲーム\n");
	printf("1〜100までの数を〜\n\n");
	cnt = 0;
	while (1) {
		printf("数(1〜100を入力:");
		scanf("%d", &num);
		cnt++;
		if (ans > num) {
			printf("%dより大きいです\n\n", num);
		}
		else if (ans < num) {
			printf("%dより小さいです\n\n", num);
		}
		else {
			printf("当たり!%d回で当てました\n", cnt);
			break;
		}
	}
}