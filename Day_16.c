#include<stdio.h>

int main(){
int T,N,X;
scanf("%d",&T);
while(T) {
scanf("%d %d",&N,&X);
if(N<=X && X%N==0)
   printf("\nYES");
else
   printf("\nNO") ;
   T--;
}
return 0;
}