#include<stdio.h>
int main()
{
    int k,n,w,i,d,sum=0;
    scanf("%d%d%d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {

        sum=sum+(i*k);
    }
    if(sum<=n)
    {
        printf("0\n");
    }
    else
    {
        d=sum-n;
    printf("%d\n",d);
    }

    return 0;
}
