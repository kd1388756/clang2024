#include<stdio.h>
main()
{
	char c;
	printf("文字を入力:");
	scanf("%c", &c);
	if (c >= 'a' && c <= 'z') {
		printf("変換すると%c\n", c - 32);
	}
	else {
		if (c >= 'A' && c <= 'Z') {
			printf("変換すると%c\n", c + 32);
		}
		else {
			printf("エラー");
		}
	}
}