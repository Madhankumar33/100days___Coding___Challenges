#include <stdio.h>
int main() {
	    int T;
	    scanf("%d",&T);
	    while(T){
	      int N,M,A;
	      scanf("%d %d",&N,&M);
	      A=N-M;
	    if(N<M)
	      printf ("\n%d",N);
	    else
	      printf("\n%d",A+N);
	    T--;
	    }
	return 0;
}