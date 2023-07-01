#include<stdio.h>
int main()
{
	int i,T,a,b;
	scanf("%d",&T);
	for(i=0;i<T;i++){
	    scanf("%d %d",&a,&b);
	    printf("\n%d",(a%b));
	}
return 0;
}
