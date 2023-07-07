#include<stdio.h>

int main(){
int T,X,Y,Z;
scanf("%d",&T);
while(T) {
scanf("%d %d %d",&X,&Y,&Z);
int a=Y+(2*Z);
if(a>=X)
   printf("\nQualify");
else
   printf("\nNotQualify");
   T--;
}
return 0;
}