#include<stdio.h>
main()
{
	int i,su;
	printf("数を入れて:");
	scanf("%d",&su);
	i = su;
	while (i > 0) {
		printf("*",su);
		i--;
	}
}