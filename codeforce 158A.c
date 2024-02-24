#include <stdio.h>

int main() {
    int n,k,num[100],count=0;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&num[i]);

            }
        for(int i=1;i<=n;i++){
            if(num[i]>=num[k]&&num[i]>0){
                count++;
        }
    }
    printf("%d\n",count);
    return 0;
}

