#include<stdio.h>
#include<string.h>
int main()
{

    char str1[1000],str2[1000];
    int d;
    gets(str1);
    gets(str2);
    d=stricmp(str1,str2);
    printf("%d\n",d);
    return 0;
}
