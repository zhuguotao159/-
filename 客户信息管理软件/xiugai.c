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
int xiugai() {
	printf("需要修改的姓名");
	char* ps1 = (char*)malloc(sizeof(char) * 10);
	scanf("%s", ps1);
	int ii = 0;
	int j = 0;
	FILE* p = fopen("ss.txt", "rb");
	if (!p) {
		printf("空");
	}
	struct kehu data[100];
	int w = 0;
	int s = 0;
	while (!feof(p)) {
		if (w != 0) {
			fseek(p, 1, 1);
		}
		fread(&data[w], sizeof(struct kehu), 1, p);
		j++;
		w++;
		s++;
	}
		//printf("%s",data[i].name);
		for (int i = 0; i < j - 1; i++) {
			//printf("%d", strcmp(data[i].name, ps1));
			if (!strcmp(data[i].name, ps1)) {
				printf("您需要修改那项内容：\n输入1修改名字\n输入2修改性别\n输入3修改年龄\n输入4修改电话\n输入5修改邮箱\n请输入：\n");
				int d;
				scanf("%d", &d);
				if (d == 1) {
					char c[31];
					printf("输入修改后的名字：");
					scanf("%s", c);
					strcpy(data[i].name, c);
				}
				else if (d==2)
				{
					char c[31];
					printf("输入修改后的性别：");
					scanf("%s", c);
					strcpy(data[i].xingbie, c);
				}
				else if (d == 3)
				{
					char c[31];
					printf("输入修改后的年龄：");
					scanf("%s", c);
					strcpy(data[i].age, c);
				}
				else if (d == 4)
				{
					char c[31];
					printf("输入修改后的电话：");
					scanf("%s", c);
					strcpy(data[i].id,c);
				}
				else if (d == 5)
				{
					char c[31];
					printf("输入修改后的邮箱：");
					scanf("%s", c);
					strcpy(data[i].emcli, c);
				}
				else
				{
					printf("输入错误，请重新输入");
				}
				ii = 1;
			}
		}
		if (s = j) {
				printf("查无此人");
		}
	if (ii) {
	FILE* p3 = fopen("ss.txt", "w+");
	fputs(" ", p3);
	FILE* p2 = fopen("ss.txt", "ab");
	for (int k = 0; k < j - 1; k++) {
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