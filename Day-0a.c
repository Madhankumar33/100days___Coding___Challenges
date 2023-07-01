#include<stdio.h>

void main(){
int a,b,c,sum1,sum2,sum3;
printf("Enter the three numbers");
scanf("%d%d%d",&a,&b,&c);
sum1=a+b;
sum2=b+c;
sum3=a+c;
printf("The Sum is:\n%d \n%d \n%d",sum1,sum2,sum3);
}
