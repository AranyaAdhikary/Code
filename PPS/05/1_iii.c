/* print the pattern upto n 
          *
        * *
      * * *
    * * * *   */
#include<stdio.h>

int main()
{
  int n;
  printf("Enter the number of rows : ");
  scanf("%d",&n);
  for(int i=n;i>=1;i--)
  {
    for(int j=1;j<=i-1;j++)
      printf("  ");
    for(int k=n;k>=i;k--)
      printf("* ");
    printf("\n");
  }
}