#include<stdio.h>
#include<math.h>
int main(void)
{
	int a, b, c;
	double x1,x2, x3,d;
	printf("a���ɂイ��傭���Ă�������");
	scanf_s("%d", &a);
	while (a == 0)
	{
		printf("0�ȊO�̒l����͂��Ă�������");
		scanf_s("%d", &a);
	}
	printf("b����͂��Ă�������");
	scanf_s("%d", &b);
	printf("c����͂��Ă�������");
	scanf_s("%d", &c);
	d = b * b - 4 * a * c;
	x1=( - b + sqrt(d)) / (2 * a);
	x2=( - b - sqrt(d)) / (2 * a);
	x3 =( - b )/ (2 * a);
	if (d > 0)
	{
		printf("�������͂Q����A���ꂼ��%lf,%lf�ł���", x1, x2);
	}
	else if (d == 0)
	{
		printf("�������͂P����A%lf�ł���", x3);
	}
	else
	{
		printf("�������͂Ȃ��ł�");
	}
	return 0;
}