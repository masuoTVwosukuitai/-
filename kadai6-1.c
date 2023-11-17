#include<stdio.h>
int main(void)
{   
	char a;
	printf("•¶Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf_s("%c", &a);
	if ((a >= 'A') && (a <= 'Z')) {
		printf("‘å•¶Žš‚ÍŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚·\n");
	}
	else {
		printf("‘å•¶Žš‚ÍŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚¹‚ñ\n");
	}
	return 0;
}