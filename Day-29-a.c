#include <stdio.h>
int main()
{
  int i= 0,j= 0;
  int Rows, N;
  printf("Enter the number of rows: ");
  scanf("%u",&Rows);
  N=9;
  for(i=1; i<=Rows;i++)
  {
      for(j=1;j<=i;j++){
          printf("%d",j);
      }
      for(j=i; j<N; j++)
    {
      printf(" ");
      
    }
    N--;
    for(j=i;j>=1;--j)
    {
      printf("%d",j);
    }
    printf("\n");
  }
  

    return 0;
}