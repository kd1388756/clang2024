#include<stdio.h>
main()
{
	int i,su;
	printf("��������:");
	scanf("%d",&su);
	i = su;
	while (i > 0) {
		printf("*",su);
		i--;
	}
}