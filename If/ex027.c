#include<stdio.h>
main()
{
	char c;
	printf("���������:");
	scanf("%c", &c);
	if (c >= 'a' && c <= 'z') {
		printf("�ϊ������%c\n", c - 32);
	}
	else {
		if (c >= 'A' && c <= 'Z') {
			printf("�ϊ������%c\n", c + 32);
		}
		else {
			printf("�G���[");
		}
	}
}