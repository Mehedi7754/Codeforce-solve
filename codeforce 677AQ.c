#include<stdio.h>
int main()
{
    int n,h,f,i,count=0;
    scanf("%d%d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&f);
        if(f>h)
        {
            count=count+2;
        }
        else
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
