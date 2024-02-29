#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000],s2[1000];
    int d;
    gets(s1);
    gets(s2);
    strrev(s1);
    d=strcmp(s1,s2);
    if(d==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
