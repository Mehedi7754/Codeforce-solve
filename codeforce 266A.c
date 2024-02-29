#include<stdio.h>
int main()
{
    char ch[1000];
    int i,d,n,count=0;
    scanf("%d%s",&n,&ch);
    for(i=0;i<n;i++)
    {

        if(ch[i]==ch[i+1])
            count++;
    }
    printf("%d\n",count);
    return 0;
}
