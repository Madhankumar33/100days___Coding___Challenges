#include <stdio.h>

int main() {
    int i,j,n;
    printf("Enter Number of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=n;j>=i;j--){
            printf("*\t");
        }
        printf("\n");
    }

    return 0;
}