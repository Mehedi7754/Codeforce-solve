#include<stdio.h>
int main()
{
    int n,i,count=0,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        if(b-a>=2)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
