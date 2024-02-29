#include<stdio.h>
int main()
{
    int n,i,a,b,c,d,m;
    scanf("%d",&n);
    while(1)
    {
        n++;

        a=n%10;
        b=(n/10)%10;
        c=((n/10)/10)%10;
        d=(((n/10)/10)/10)%10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        {
            break;
        }
    }
    printf("%d\n",n);
}
