#include<stdio.h>
main()
{
	int tosi;
	printf("西暦を入力:");
	scanf("%d", &tosi);
	if (tosi <= 1989) {
		printf("平成生まれです");
	}
	else {
		printf("昭和生まれです");
	}
}