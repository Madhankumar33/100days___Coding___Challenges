#include<stdio.h>

int main() {
    
    int n,i,X, Y, Z;
    scanf("%d",&n);
    printf("Enter the No of Test Case:%d",n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&X,&Y,&Z);
        printf("\nTotal No. of Chapters is:%d",(X*Y*Z));
    }
    
}


