#include<stdio.h>
int main(void)
{
	char a;
	printf("文字を入力してください：");
	scanf_s("%c", &a);
	if ((a >= 'A') && (a <= 'Z')) {
		printf("大文字は含まれています\n");
	}
	else {
		printf("大文字は含まれていません");
	}
	return 0;
}