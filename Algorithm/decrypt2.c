#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[21];
	int k[20], i;

	printf("���������͂��Ă���������");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++){
		printf("s[%d]�̕������L�[>", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}
	printf("������������́A%s\n", &s[0]);
}