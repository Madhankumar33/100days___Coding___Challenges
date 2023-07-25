#include <stdio.h>

int main() {
    int i, N=2;
    for(int i=1;i<=N+2;i++){
        if(i==1 || i==4){
      for(int i=1;i<=4;i++){
          printf("*");
      }
          
        }
      else if(i==2 || i==3)
      for(int j=i;j<=i+1;j++){
        printf("*");
        printf ("  ");
    }
        printf("\n");
    }
    return 0;
}