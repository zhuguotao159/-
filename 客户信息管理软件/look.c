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
int look() {
	//struct kehu data[100];
	int j = 0;
	FILE* p = fopen("ss.txt", "rb");
	if (!p) {
		printf("空");
	}
	//fputc(p,data.name[0]);
	struct kehu* data = (struct kehu*)malloc(sizeof(struct kehu) * 100);
	int i=0;
	
	while (!feof(p)) {
		if (i != 0) {
			fseek(p, 1, 1);
		}
		fread(&data[i],sizeof(struct kehu),1,p);
			j++;
				i++;
		
	}
	for (int i = 0; i < j-1; i++) {
			printf("姓名：%s\n性别：%s\n年龄：%s\n电话：%s\n邮箱：%s\n", data[i].name, data[i].xingbie, data[i].age, data[i].id, data[i].emcli);
			printf("-------------------------------------------\n");
		}
			free(data);
			fclose(p);
			//printf("%d", j);
		
		
		
		
		
	
	
	demo();
	return 0;
}