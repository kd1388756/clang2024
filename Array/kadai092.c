#include<stdio.h>
main()
{
	int a[10], c[10], i;
	for (i = 0; i < 10; i++) {
		a[i] = (i + 1) * 10;
	}
	for (i = 0; i < 10; i++) {
		c[i] = a[i];
	}
	printf("�z��a����z��c�ɃR�s�[\n�z��a =");
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n�z��c=");
	for (i = 0; i < 10; i++) {
		printf("%d ", c[i]);
	}
}