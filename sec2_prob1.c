#include <stdio.h>
int main() 
{
   int i, j,r,c;
   printf("enter no. of Rows: ");
   scanf("%d",&r);
   printf("enter no. of columns: ");
   scanf("%d",&c);
   int arr[r][c];
   for (i = 0; i < r; i++) 
   {
      for (j = 0; j < c; j++) 
	  { 
         printf("enter element: ");
         scanf("%d",&arr[i][j]);
      }
   }
   for (i = 0; i < c; i++) 
   {
      for (j = 0; j < r; j++) 
	  {
          printf("%d ",arr[j][i]);
      }
      printf("\n");
   }
   return 0;
}