#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000],tem;
    int i,j,n;
    scanf("%s",&ch);
    n=strlen(ch);
    for(i=0;i<n-1;i+=2)
    {
        for(j=i+2;j<n;j+=2)
        {
            if(ch[i]>ch[j])
            {
                tem=ch[i];
                ch[i]=ch[j];
                ch[j]=tem;
            }
        }
    }
    printf("%s",ch);
    return 0;
}
