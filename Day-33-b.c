#include <stdio.h>

int main() {
    int n,a,b,c,d;
    scanf("%d",&n);
    a=n%10;
    b=n/10;
    c=b%10;
    d=b/10;
    if(a==d && c==c && d==a)
    printf("Yes");
    else
    printf("No");

    return 0;
}