#include<stdio.h>
main()
{
	int c;
	printf("���������:");
	scanf("%c", &c);
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z') {
		printf("�A���t�@�x�b�g�ł�\n");
	}
	else {
		if (c >= '0' && c <= '9') {
			printf("�����ł�\n");
		}
		else {
			printf("���̑��̕����ł�\n");
		}
	}
}