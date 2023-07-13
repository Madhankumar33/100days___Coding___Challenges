#include <stdio.h>
int main() {
	    int T;
	    scanf("%d",&T);
	    while(T){
	      int S;
	      float GS;
	      scanf("%d",&S);
	    if(S<1500){
	      GS=S+(0.1*S)+(0.9*S);
	      printf ("\n%0.2f",GS);}
	    else{
	      GS=S+500+(0.98*S);
	 	  printf("\n%0.2f",GS);}
	      T--;
	    }
	return 0;
}