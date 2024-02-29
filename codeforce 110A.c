#include<stdio.h>
int main()
{

    long long int n,count=0,d;
    scanf("%lld",&n);
    while(n!=0)
    {
       d=n%10;
       n=n/10;
       if(d==4||d==7)
       {
           count++;
       }
    }
    if(count==4||count==7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
