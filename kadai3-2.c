#include<stdio.h>
int main(void)
{
	int a;
	printf("数字を入力してください：");
	scanf_s("%d", &a);
	printf("あなたの入力した数字は");
	if (a % 2 == 0)
	{
		printf("偶数");
	}
	else
	{
		printf("奇数");
	}
	printf("です。");
	return 0;
	
}
