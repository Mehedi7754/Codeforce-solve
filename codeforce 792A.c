#include<stdio.h>
int main()
{
    int limak,bob,i,count=0;
    scanf("%d%d",&limak,&bob);
    while(bob>=limak)
    {
        limak=limak*3;
        bob=bob*2;
        count++;
    }
    printf("%d\n",count);
    return 0;
}
