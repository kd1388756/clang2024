#include<stdio.h>
main()
{
	char c;
	printf("�P�������́H");
	scanf("%c", &c);
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z') {
		printf("�A���t�@�x�b�g�ł�\n");
	}
	else {
		printf("ERROR");
	}
}