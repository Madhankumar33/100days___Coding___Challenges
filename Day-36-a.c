#include <stdio.h>

int main() {
    int a=1,n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        a=a*i;
    }
    printf("%d",a);
    return 0;
}