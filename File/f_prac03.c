#include<stdio.h>
typedef struct {
	char Wname[20];
	int bullet;
	float atk;
}Weapon;
typedef struct {
	char name[20];
	int hp;
	Weapon wpn;
}Soldier;
void SetInfo(Soldier* s, char* filename);
void Display(Soldier s);

main()
{
	Soldier sol;
	SetInfo(&sol, "file03.txt");
	Display(sol);
}
void Setinfo(Soldier* s, char* filename) {
	FILE* fp;
	if (fp = fopen(filename, "r")) {
		fscanf(fp, "%s%d%s%d%f", s->name, &s->hp, s->wpn.Wname, &s->wpn.bullet, &s->wpn.atk);
		fclose(fp);
	}
	else {
		printf("ファイルが読めません\n");
	}
}
void Display(Soldier s) {
	printf("名前:%s 体力:%d\n", s.name, s.hp);
	printf("武器:%s 残弾数:%d 攻撃力:%.2f\n", s.wpn.Wname, s.wpn.bullet, s.wpn.atk);
}