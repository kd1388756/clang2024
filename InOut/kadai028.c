#include<stdio.h>
main()
{
	long int a;
	printf("整数？");
	scanf("%ld", &a);
	printf("２倍すると%ld\n", a * 2);
	printf("３倍すると%ld\n", a * 3);
	printf("４倍すると%ld", a * 4);
}