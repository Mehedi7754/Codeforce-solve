#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    int d,bigcount=0,lowcount=0,i;
    gets(ch);
    d=strlen(ch);
    for(i=0;i<d;i++)
    {
        if(ch[i]>='A'&&ch[i]<='Z')
        {
            bigcount++;
        }
        if(ch[i]>='a'&&ch[i]<='z')
        {
            lowcount++;
        }
    }
    if(lowcount>=bigcount)
    {
        strlwr(ch);
        printf("%s",ch);
    }
    else if(bigcount>lowcount)
    {
        strupr(ch);
        printf("%s",ch);
    }
   return 0;
}
