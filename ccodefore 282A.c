#include<stdio.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        char ch[4];
        scanf("%s",&ch);
        if(ch[0]=='+'&&ch[1]=='+'&&ch[2]=='X')
        {
           ++x;
        }
        else if(ch[0]=='X'&&ch[1]=='+'&&ch[2]=='+')
        {
            x++;
        }
        else if(ch[0]=='-'&&ch[1]=='-'&&ch[2]=='X')
        {
            --x;
        }
        else if(ch[0]=='X'&&ch[1]=='-'&&ch[2]=='-')
        {
            x--;
        }
    }
    printf("%d\n",x);
    return 0;
}
