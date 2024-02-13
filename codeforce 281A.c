#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch[1000];
    gets(ch);
    ch[0]=towupper(ch[0]);
    printf("%s\n",ch);
    return 0;
}
