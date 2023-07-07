#include<stdio.h>

int main(){
int T,X;
scanf("%d",&T);
while(T) {
scanf("%d",&X);
if(X%4==0)
   printf("\nGOOD");
else
   printf("\nNOT GOOD");
   T--;
}
return 0;
}