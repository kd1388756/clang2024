#include<stdio.h>
main()
{
	int sum, cnt, date;
	float ave;

	sum = 0;
	cnt = 0;	

	printf("���́H");
	scanf("%d", &date);

	for (;date!=-999;)
	{
		sum += date;
		cnt++;
		printf("���́H");
		scanf("%d", &date);
	}
	ave =(float)sum / cnt;
		printf("���v=%d  ����=%.2f", sum, ave);
}