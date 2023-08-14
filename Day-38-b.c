#include <stdio.h>

int main() {
    int a,n,d=0;
    scanf("%d",&n);
    int i=1;
    while(n){
        a=n%10;
        n=n/10;
        d=d+(a*i);
        i=i*2;
    }
     printf("%d",d);

    return 0;
}