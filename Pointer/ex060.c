#include<stdio.h>
main()
{
	char data[] = "Language";
	char sch,*p_data;
	int cnt = 1;
	int flg = 0;
	printf("ŒŸõ•¶š‚ÍH");
	scanf("%c", &sch);
	p_data = data;
	while (*p_data!='\0')
	{
		if (sch==*p_data)
		{
			printf("%d ", cnt);
			flg = 1;
		}
		p_data++;
		cnt++;
	}
	if (flg == 0)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
}