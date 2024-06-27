#include<stdio.h>
main()
{
	char c;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &c);
	if (c >= 'a' && c <= 'z') {
		printf("•ÏŠ·‚·‚é‚Æ%c\n", c - 32);
	}
	else {
		if (c >= 'A' && c <= 'Z') {
			printf("•ÏŠ·‚·‚é‚Æ%c\n", c + 32);
		}
		else {
			printf("ƒGƒ‰[");
		}
	}
}