#include <stdio.h>

int main() {
    int x,ans=0,a;
    scanf("%d",&x);
    
    while(x!=0){
        a=x%10;
        ans=((ans*10)+a);
        x=x/10;
    }
     printf("%d",ans);
    return 0;
}