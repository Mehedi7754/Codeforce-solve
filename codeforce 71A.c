#include<stdio.h>
#include<string.h>
int main()
{
    int n,d;
    char ch[1000];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(ch);
        d=strlen(ch);
        if(d>10)
        {
            printf("%c%d%c\n",ch[0],(d-2),ch[d-1]);

        }
        else
        {
           printf("%s\n",ch);
        }
    }
    return 0;
}
