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

int add() {
	struct kehu data;
	printf("������������");
	scanf("%s", data.name);
	printf("�������Ա�");
	scanf("%s", data.xingbie);
	printf("���������䣺");
	scanf("%s", data.age);
	printf("������绰��");
	scanf("%s", data.id);
	printf("���������䣺");
	scanf("%s", data.emcli);
	FILE* p1 = fopen("ss.txt", "ab");
	/*fputs(data.name, p1);
	fputs("\n", p1);
	fputs(data.xingbie, p1);
	fputs("\n", p1);
	fputs(data.age, p1);
	fputs("\n", p1);
	fputs(data.id, p1);
	fputs("\n", p1);
	fputs(data.emcli, p1);*/
	
	fwrite(&data, sizeof(struct kehu),1, p1);
	//printf("%ld", ftell(p1));
	fseek(p1, 2, 1);
	fputc('\n', p1);
	fclose(p1);

	
	demo();
	return 0;
}