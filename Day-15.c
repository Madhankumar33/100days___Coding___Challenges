#include<stdio.h>

int main(){
int T,X;
scanf("%d",&T);
while(T) {
scanf("%d",&X);
if(X/4<1)
   printf("\n1");
else if(X%4==0)
   printf("\n%d",(X/4));
else
   printf("\n%d",((X/4)+1));
   T--;
}
return 0;
}