#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define EOF (-1)

struct kehu
{
	char name[31];
	char xingbie[10];
	char age[50];
	char id[100];
	char emcli[100];
};
int remov() {
	printf("需要删除的姓名");
	char* ps1 = (char*)malloc(sizeof(char) * 10);
	//char* ss[30];
	scanf("%s", ps1);
	int o=-1;
	int j = 0;
	FILE* p = fopen("ss.txt", "rb");
	if (!p) {
		printf("空");
	}
	struct kehu data[100];
	int i = 0;
	while (!feof(p)) {
		if (i != 0) {
			fseek(p, 1, 1);
		}
		fread(&data[i], sizeof(struct kehu), 1, p);
		j++;
		i++;
		for (int i = 0; i < j - 1; i++) {
			if (!strcmp(data[i].name, ps1)) {
				
				o = i;
			}
		}
	}
	printf("%d", o);
	if (o != -1) {
		printf("%d\n", j);
		FILE* p3 = fopen("ss.txt", "w+");
		fputs(" ", p3);
		for (int i = 0; i < j - o; i++) {
			strcpy(data[o].name, data[o + 1].name);
			strcpy(data[o].age, data[o + 1].age);
			strcpy(data[o].xingbie, data[o + 1].xingbie);
			strcpy(data[o].id, data[o + 1].id);
			strcpy(data[o].emcli, data[o + 1].emcli);
			printf("%d\n", j);
			o++;
		}
		FILE* p2 = fopen("ss.txt", "ab");
		for (int k = 0; k < j - 2; k++) {
			fwrite(&data[k], sizeof(struct kehu), 1, p2);
			fseek(p2, 2, 1);
			fputc('\n', p2);
		}
		free(ps1);
		fclose(p);
		fclose(p2);
	}
	demo();
	return 0;
}