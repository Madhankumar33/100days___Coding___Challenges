#include<stdio.h>  
int main()  
{  
    int n,m;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    m=n;  
   for(int i=n;i>=1;i--)  
   {  
       for(int j=n;j>=m-1;j--)  
       {  
           printf(" ");  
       }  
       for(int k=2*i-1;k>=1;k--)  
       {  
         printf("*");  
       }  
       m--;  
     
      printf("\n");  
    }  
    return 0;  
}  