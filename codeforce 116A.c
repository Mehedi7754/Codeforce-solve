#include<stdio.h>
int main()
{
    int n,i,a,b,sum=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        sum=sum-a;
        sum=sum+b;
        if(sum>count)
        {
            count=sum;
        }
    }
    printf("%d\n",count);
    return 0;
}
