#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int demo(void) {
	int i;
	printf("-----------------�ͻ���Ϣ�������-----------------\n");
	printf("                1 �� �� �� ��\n");
	printf("                2 �� �� �� ��\n");
	printf("                3 ɾ �� �� ��\n");
	printf("                4 �� �� �� ��\n");
	printf("                5 ��       ��\n");
	printf("                ��ѡ��(1-5)��");
	//scanf("%c", &i);
	scanf("%d", &i);
	//getchar(i);
	printf("%d\n", i);
	if (i==1) {
		//printf("��������Ҫ��ӵĸ���");
		//scanf("%d", &j);
		add();
	}
	else if (i==2)
	{
		xiugai();
	}
	else if (i==3)
	{
		remov();
	}
	else if (i==4)
	{
		look();
	}
	else if (i==5)
	{
	}
	else 
	{
		printf("�������벻��1-5��Χ�ڣ������˳�\n");
		
	}
	return 0;
}





int main() {
	demo();
	return 0;




}