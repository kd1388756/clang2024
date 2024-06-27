#include<stdio.h>
main()
{
	int ia;
	printf("８進数の数値？");
	scanf("%d", &ia);
	printf("10進数=%d", ia * 8 +ia );
}