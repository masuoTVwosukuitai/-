#include<stdio.h>
int main(void)
{
	int x;
	printf("あなたにクラスのマドンナが告白してきました。あなたはどうしますか\n1.告白を受け入れる\n2.断る\n3.「まずは友達からお願いしますという」");
	scanf_s("%d", &x);
	if (x == 1)
	{
		printf("これは罰ゲーム告白でした＾＾残念～\n");
	}
	else if (x == 2)
	{
		printf("私からの告白を断るとかお前人間じゃねえだろ！\n");
	}
	else if (x == 3)
	{
		printf("私誠実な人好きなの。付き合いましょう！\nHAPPY END!");
	}
	else
	{
		printf("お前を殺す殺す殺す殺す殺す殺すｋろすkroskoksjkjkhaihgjhsjhuioaehuiohuioahsubhdvufiaieghuisghuighduifwea");
	}
	return 0;
}