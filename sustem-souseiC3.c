#include<stdio.h>
int main(void)
{
	int a, b, surplus, result;
	printf("Please Enter Number:");
	scanf_s("%d", &a);
	printf("Please Enter Other Number:");
	scanf_s("%d", &b);

	if (b != 0)
	{
		surplus = a % b;
		result = a / b;
		if (surplus == 0)
		{
			printf("%d/%d=%d\n", a, b, result);
		}
		else
		{
			printf("%d/%d=%d...%d\n", a, b, result, surplus);
		}
	}
	else
	{
		printf("Error:Division by zero\n");
	}
	return 0;
}
