#include<stdio.h>
int main()
{
    long long int n,d;
    int k,i;
    scanf("%lld %d",&n,&k);
    for(i=0;i<k;i++)
    {
        d=n%10;
        if(d!=0)
        {
            n=n-1;
        }
        else if(d==0)
        {
            n=n/10;
        }
    }
    printf("%d\n",n);
}
