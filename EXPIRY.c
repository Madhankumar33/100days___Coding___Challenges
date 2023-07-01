#include<stdio.h>
int main()
{
	int i,T;
	float N,M,K;
	scanf("%d",&T);
	for(i=0;i<T;i++){
	    scanf("%f %f %f",&N,&M,&K);
	    if((N/K)<=M) 
	    printf("\nYes");
	    else
	    printf("\nNo");
	}
return 0;
}
