#include <stdio.h>

int main() {
    int a[20],n;
    scanf("%d",&n);
    int i=0,j;
    while(n>0){
        a[i]=n%2;
        n=n/2;
        i++;
    }
        for(j=i-1;j>=0;j--){
        printf("%d",a[j]); 
    }

    return 0;
}