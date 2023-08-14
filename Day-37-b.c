#include <stdio.h>

void recursive();
int main() {
    recursive();
    return 0;
}

void recursive(){
    int a=1,n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        a=a*i;}
        printf("%d",a);
}