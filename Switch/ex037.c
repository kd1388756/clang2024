#include<stdio.h>
main()
{
	char ope;
	printf("演算子を入れて:");
	scanf("%c", &ope);
	switch (ope) {
		case'+':printf("加算です\n");
			break;
		case'-':printf("減算です\n");
			break;
		case'*':printf("乗算です\n");
			break;
		case'/':printf("除算です\n");
			break;
		case'%':printf("余りです\n");
			break;
		default:printf("その他です\n");
			break;
	}
}