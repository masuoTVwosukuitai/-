#include<stdio.h>
int main(void)
{   
	char a;
	printf("��������͂��Ă��������F");
	scanf_s("%c", &a);
	if ((a >= 'A') && (a <= 'Z')) {
		printf("�啶���͊܂܂�Ă��܂�\n");
	}
	else {
		printf("�啶���͊܂܂�Ă��܂���\n");
	}
	return 0;
}