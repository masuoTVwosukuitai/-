#include<stdio.h>
int main(void)
{
	float a, b,kansuu;
	printf("数字を入力してください：");
	scanf_s("%f",&a);
	printf("数字を入力してください：");
	scanf_s("%f", &b);
	kansuu= a *b/2;
	printf("二つの数字を掛けてそれを２で割った数は%f", kansuu);
	return 0;
}