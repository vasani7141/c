#include<stdio.h>

int main() {
  
   
   
   
    int n;
    printf("enter the number:- \n");
    scanf("%d",&n);
    int temp1=n;
  int  temp2=1;
    
  for(int i=1;i<=n;i++)
  {
       
      
      for(int j=temp1;j>1;j--)
        {
         printf(" ");
        }
        
        for(int k=1;k<=i*2-1;k++)
        {
            printf("*");
        }
        
        printf("\n");
      temp1--;
      
  }
   
     for(int i=n-1;i>=1;i--)
   {
       
      
       for(int j=1;j<=temp2;j++)
        {
         printf(" ");
        }
        
        for(int k=1;k<=i*2-1;k++)
        {
            printf("*");
        }
        
        printf("\n");
      temp2++;
      
   }
  
   
   
}