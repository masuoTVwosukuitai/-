#include <stdio.h>

int main(void)
{
    int x=10,a=0,b=0,c=0,d=0,e=0,f=0,g=0;
    char y;
    printf("文字を入力してください。文字は大文字で入力してください。\n");
    while(x!=0)
    {
        if((a&&b&&c&&d&&e&&f&&g)!=0)break;
        printf("文字を入力してください：");
        scanf(" %c",&y);
        switch(y)
        {
            case 'M':
            {
                printf("Mは一文字に含まれています\n");
                a++;
                break;
            }
            case 'A':
            {
                printf("Aは二文字に含まれています\n");
                b++;
                break;
            }
            case 'S':
            {
                printf("Sは三文字に含まれています\n");
                c++;
                break;
            }
            case 'U':
            {
                printf("Uは四文字に含まれています\n");
                d++;
                break;
            }
            case 'O':
            {
                printf("Oは五文字に含まれています\n");
                e++;
                break;
            }
            case 'T':
            {
                printf("Tは六文字に含まれています\n");
                f++;
                break;
            }
            case 'V':
            {
                printf("Vは一文字に含まれています\n");
                g++;
                break;
            }
            default:
            {
                printf("文字は該当しません\n");
                x--;
                printf("残り%d回です\n",x);
                break;
            }
        }
    }
    if (a >= 1 && b >= 1 && c >= 1 && d >= 1 && e >= 1 && f >= 1 && g >= 1)
    {
        printf("クリア！！\nお題は「MASUOTV」でした\n");
    }
    else
    {
        printf("死亡\n");
    }
}
