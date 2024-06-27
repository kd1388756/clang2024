#include<stdio.h>
main()
{
	float box[3], sum=0;
	int i;
	for (i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	printf("‡Œv:%.2f\n •½‹Ï:%.2f\n", sum, sum / 3);
}