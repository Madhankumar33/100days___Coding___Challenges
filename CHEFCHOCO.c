#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T){
	    int c,x,y;
	    scanf("%d %d %d",&c,&x,&y);
	    printf("\n%d",(c-x)*y);
	    T--;
	}
	return 0;
}