#include<stdio.h>
int main()
{
    int n,coin[1000],i,j,count=0,sum=0,coinsum=0,tem;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&coin[i]);
        sum=sum+coin[i];

    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(coin[i]<coin[j])
            {
                tem=coin[i];
                coin[i]=coin[j];
                coin[j]=tem;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        coinsum+=coin[i];
        if(coinsum>sum/2)
        {
            count+=i+1;
            printf("%d",count);
            break;
        }
    }
    return 0;
}
