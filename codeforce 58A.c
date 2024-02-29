#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    int count=0,i,j,d;
    scanf("%s",&ch);
    d=strlen(ch);
    for(i=0;i<d;i++)
    {
       if(ch[i]=='h'&&count==0)
       {
           count++;
       }
        else if(count==1&&ch[i]=='e')
       {
           count++;
       }
       else if(count==2&&ch[i]=='l')
       {
           count++;
       }
      else if(count==3&&ch[i]=='l')
       {
           count++;
       }
      else if(count==4&&ch[i]=='o')
       {
           count++;

       }
       if(count==5)break;

    }
    if(count==5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
