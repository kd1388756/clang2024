#include<stdio.h>
main()
{
	char c;
	printf("１文字入力？");
	scanf("%c", &c);
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z') {
		printf("アルファベットです\n");
	}
	else {
		printf("ERROR");
	}
}