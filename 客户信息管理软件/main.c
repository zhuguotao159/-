#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int demo(void) {
	int i;
	printf("-----------------客户信息管理软件-----------------\n");
	printf("                1 添 加 客 户\n");
	printf("                2 修 改 客 户\n");
	printf("                3 删 除 客 户\n");
	printf("                4 客 户 列 表\n");
	printf("                5 退       出\n");
	printf("                请选择(1-5)：");
	//scanf("%c", &i);
	scanf("%d", &i);
	//getchar(i);
	printf("%d\n", i);
	if (i==1) {
		//printf("请输入需要添加的个数");
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
		printf("您的输入不在1-5范围内，即将退出\n");
		
	}
	return 0;
}





int main() {
	demo();
	return 0;




}