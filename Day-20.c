#include <stdio.h>
int main() {
	    int T;
	    scanf("%d",&T);
	    while(T){
	      int X,A,B,C;
	      scanf("%d",&X);
	    if(X%10==0)
	      printf ("\n%d",X/10);
	    else if(X%5==0){
	      A=X/10;
	      B=X%10;
	      C=B/5;
	      printf("\n%d",A+C);}
	    else
	      printf("\n-1");
	    T--;
	    }
	return 0;
}