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
	printf("��Ҫ�޸ĵ�����");
	char* ps1 = (char*)malloc(sizeof(char) * 10);
	scanf("%s", ps1);
	int ii = 0;
	int j = 0;
	FILE* p = fopen("ss.txt", "rb");
	if (!p) {
		printf("��");
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
				printf("����Ҫ�޸��������ݣ�\n����1�޸�����\n����2�޸��Ա�\n����3�޸�����\n����4�޸ĵ绰\n����5�޸�����\n�����룺\n");
				int d;
				scanf("%d", &d);
				if (d == 1) {
					char c[31];
					printf("�����޸ĺ�����֣�");
					scanf("%s", c);
					strcpy(data[i].name, c);
				}
				else if (d==2)
				{
					char c[31];
					printf("�����޸ĺ���Ա�");
					scanf("%s", c);
					strcpy(data[i].xingbie, c);
				}
				else if (d == 3)
				{
					char c[31];
					printf("�����޸ĺ�����䣺");
					scanf("%s", c);
					strcpy(data[i].age, c);
				}
				else if (d == 4)
				{
					char c[31];
					printf("�����޸ĺ�ĵ绰��");
					scanf("%s", c);
					strcpy(data[i].id,c);
				}
				else if (d == 5)
				{
					char c[31];
					printf("�����޸ĺ�����䣺");
					scanf("%s", c);
					strcpy(data[i].emcli, c);
				}
				else
				{
					printf("�����������������");
				}
				ii = 1;
			}
		}
		if (s = j) {
				printf("���޴���");
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