#include<stdio.h>
main()
{
	int sum, cnt, date;
	float ave;

	sum = 0;
	cnt = 0;	

	printf("”‚ÍH");
	scanf("%d", &date);

	for (;date!=-999;)
	{
		sum += date;
		cnt++;
		printf("”‚ÍH");
		scanf("%d", &date);
	}
	ave =(float)sum / cnt;
		printf("‡Œv=%d  •½‹Ï=%.2f", sum, ave);
}