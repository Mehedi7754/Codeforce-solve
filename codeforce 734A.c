#include<stdio.h>
int main()
{
    char ch[1000000];
    int n,i,a=0,d=0;
    scanf("%d%s",&n,&ch);
    for(i=0;i<n;i++)
    {
       if(ch[i]=='A')
       {
           a++;
       }
       else if(ch[i]=='D')
       {
           d++;
       }
    }
    if(a>d)
    {
        printf("Anton\n");
    }
    else if(a<d)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship\n");
    }
    return 0;
}
