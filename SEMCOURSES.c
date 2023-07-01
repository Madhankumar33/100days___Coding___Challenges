#include<stdio.h>

int main(void){
int i,T,X,Y,Z;
scanf("%d",&T);
for(i=0;i<T;i++){
scanf("%d %d %d",&X,&Y,&Z);
printf("\n%d",(X*Y*Z));
}
return 0;
}