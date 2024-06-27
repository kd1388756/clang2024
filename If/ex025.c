#include<stdio.h>
main()
{
	int c;
	printf("文字を入力:");
	scanf("%c", &c);
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z') {
		printf("アルファベットです\n");
	}
	else {
		if (c >= '0' && c <= '9') {
			printf("数字です\n");
		}
		else {
			printf("その他の文字です\n");
		}
	}
}