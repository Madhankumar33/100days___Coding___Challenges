#include<stdio.h>

int main(){
int T,X,Y;
scanf("%d",&T);
while(T) {
scanf("%d %d",&X,&Y);
int a=10*X,b=5*Y;
if(a==b)
   printf("\nANY");
else if(a>b)
   printf("\nFIRST");
else if(a<b)
   printf("\nSECOND");
   T--;
}
return 0;
}