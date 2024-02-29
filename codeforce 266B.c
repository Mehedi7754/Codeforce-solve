#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],tem;
    int n,t,d,i;
    scanf("%d%d%s",&n,&t,&s);
    while(t--)
        {
        for(i=0;i<n;i++)
      {
        if(s[i]=='B'&&s[i+1]=='G')
        {
            s[i]='G';
            s[i+1]='B';
                i++;
        }
      }
        }

    printf("%s\n",s);
    return 0;

}
