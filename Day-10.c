#include<stdio.h>

int main(){
int T,X,Y;
scanf("%d",&T);
while(T) {
scanf("%d %d",&X,&Y);
printf("\n%d",(10*X+5*Y));
T--;
}
return 0;
}