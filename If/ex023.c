#include<stdio.h>
main()
{
	int h,m,s;
	printf("•bŠÔ‚ð“ü—Í:");
	scanf("%d", &s);
	if (s <= 5000) {
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf("%dŽžŠÔ%d•ª%d•b‚Å‚·\n", h, m, s);		
	}
	else {
		printf("ƒGƒ‰[:5000ˆÈ“à‚É‚µ‚Ä‚­‚¾‚³‚¢\n");
	}
}